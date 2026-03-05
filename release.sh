#!/bin/bash
set -e

cd "$(dirname "$0")"

if [ -z "$1" ]; then
    echo "⚠️  Usage: ./release.sh <version-tag> (e.g., 1.0.12)"
    exit 1
fi

VERSION="$1"
REPO="Penguinin-hub/pennav-ios"
FRAMEWORKS_DIR="Frameworks"
PACKAGE_FILE="Package.swift"

echo "🗜️  Step 1: Zipping frameworks..."
cd "$FRAMEWORKS_DIR"
for fw in *.xcframework; do
    if [ -d "$fw" ]; then
        echo "   Zipping $fw..."
        zip -Xqr "${fw}.zip" "$fw"
    fi
done
cd ..

echo "🚀 Step 2: Creating/Updating GitHub Release $VERSION..."
gh release create "$VERSION" --repo "$REPO" --title "Release $VERSION" --notes "Automated release" || echo "Release exists, continuing..."

echo "📦 Step 3: Uploading zipped frameworks..."
gh release upload "$VERSION" "$FRAMEWORKS_DIR"/*.xcframework.zip --repo "$REPO" --clobber

echo "🧹 Step 4: Cleaning up local zip files..."
rm "$FRAMEWORKS_DIR"/*.xcframework.zip

echo "⏳ Step 5: Waiting for GitHub to process assets..."
sleep 3 # Brief pause to ensure GitHub API reflects the new uploads

echo "🔍 Step 6: Fetching API URLs and Checksums..."
RELEASE_JSON=$(gh release view "$VERSION" --repo "$REPO" --json assets)

# Verify we actually got assets back
ASSET_COUNT=$(echo "$RELEASE_JSON" | jq '.assets | length')
if [ "$ASSET_COUNT" -eq 0 ]; then
    echo "❌ Error: No assets found in the release. Check your network or GitHub repo."
    exit 1
fi

TEMP_TARGETS=$(mktemp)

# Build the Swift blocks
echo "$RELEASE_JSON" | jq -c '.assets[]' | while read -r asset; do
    ASSET_NAME=$(echo "$asset" | jq -r '.name')
    API_URL=$(echo "$asset" | jq -r '.apiUrl')
    CHECKSUM=$(echo "$asset" | jq -r '.digest' | sed 's/sha256://')

    if [[ "$ASSET_NAME" == *.xcframework.zip ]]; then
        NAME="${ASSET_NAME%.xcframework.zip}"
        cat >> "$TEMP_TARGETS" <<EOF
        .binaryTarget(
            name: "$NAME",
            url: "$API_URL",
            checksum: "$CHECKSUM"
        ),
EOF
    fi
done

echo "✍️  Step 7: Updating $PACKAGE_FILE..."

# This version uses a Regex match (//) to find the markers
# It looks for "BEGIN BINARY TARGETS" and "END BINARY TARGETS"
# regardless of how many slashes or dashes are used.
awk '
/BEGIN BINARY TARGETS/ {
    print $0
    while ((getline < "TEMP_TARGETS_FILE") > 0) {
        print $0
    }
    close("TEMP_TARGETS_FILE")
    skip=1
    next
}
/END BINARY TARGETS/ {
    skip=0
}
!skip { print $0 }
' TEMP_TARGETS_FILE="$TEMP_TARGETS" "$PACKAGE_FILE" > "${PACKAGE_FILE}.tmp" && mv "${PACKAGE_FILE}.tmp" "$PACKAGE_FILE"

rm "$TEMP_TARGETS"

echo "🐙 Step 8: Committing and updating the release tag..."
git add "$PACKAGE_FILE"
git commit -m "Update binary targets for version $VERSION" || echo "No changes to Package.swift"
git tag -fa "$VERSION" -m "Finalized Package.swift for $VERSION"
git push origin "$VERSION" --force

echo "✅ All done! Version $VERSION updated."
