#!/bin/bash
set -e

cd "$(dirname "$0")"

if [ -z "$1" ]; then
    echo "Usage: ./release.sh <version-tag>"
    exit 1
fi

VERSION="$1"
REPO="Penguinin-hub/pennav-ios"
FRAMEWORKS_DIR="Frameworks"
PACKAGE_FILE="Package.swift"

# --- STEP 0: Clean Local Environment ---
echo "Step 0: Cleaning local tags..."
git tag -d "$VERSION" 2>/dev/null || true

# --- STEP 1: Prep Assets ---
echo "Step 1: Zipping frameworks..."
cd "$FRAMEWORKS_DIR"
for framework in *.xcframework; do
    if [ -d "$framework" ]; then
        ZIP_NAME="${framework}.zip"
        xattr -rc "$framework"
        ditto -c -k --sequesterRsrc --keepParent "$framework" "../$FRAMEWORKS_DIR/$ZIP_NAME"
    fi
done
cd ..

# --- STEP 2: Initial Upload ---
# We create a draft or a temporary release to get URLs without "finishing" the tag yet
echo "Step 2: Preparing release..."
gh release create "$VERSION" --repo "$REPO" --title "Release $VERSION" --notes "Uploading assets..." || echo "Release exists, continuing..."

echo "Step 3: Uploading frameworks..."
gh release upload "$VERSION" "$FRAMEWORKS_DIR"/*.xcframework.zip --repo "$REPO" --clobber

echo "Step 4: Cleaning up local zip files..."
rm "$FRAMEWORKS_DIR"/*.xcframework.zip

# --- STEP 5: Data Collection ---
echo "Step 5: Fetching release assets..."
# We fetch the assets and parse the apiUrl directly
RELEASE_JSON=$(gh release view "$VERSION" --repo "$REPO" --json assets)
TEMP_TARGETS=$(mktemp)

echo "$RELEASE_JSON" | jq -c '.assets[]' | while read -r asset; do
    ASSET_NAME=$(echo "$asset" | jq -r '.name')
    
    # Use the apiUrl directly provided by the GitHub CLI
    # We append .zip to satisfy Xcode's extension validation
    API_URL=$(echo "$asset" | jq -r '.apiUrl')
    FINAL_URL="${API_URL}.zip"
    
    CHECKSUM=$(echo "$asset" | jq -r '.digest' | sed 's/sha256://')

    if [[ "$ASSET_NAME" == *.xcframework.zip ]]; then
        NAME="${ASSET_NAME%.xcframework.zip}"
        cat >> "$TEMP_TARGETS" <<EOF
        .binaryTarget(
            name: "$NAME",
            url: "$FINAL_URL",
            checksum: "$CHECKSUM"
        ),
EOF
    fi
done

# --- STEP 6: File Update (The Nuke & Rebuild Method) ---
echo "Step 6: Updating $PACKAGE_FILE..."
perl -i -pe 's/\xc2\xa0/ /g' "$PACKAGE_FILE"

START_LINE=$(grep -n "BEGIN BINARY TARGETS" "$PACKAGE_FILE" | cut -d: -f1 || true)
END_LINE=$(grep -n "END BINARY TARGETS" "$PACKAGE_FILE" | cut -d: -f1 || true)

if [ -z "$START_LINE" ] || [ -z "$END_LINE" ]; then
    echo "Error: Markers not found."
    exit 1
fi

head -n "$START_LINE" "$PACKAGE_FILE" > "${PACKAGE_FILE}.new"
cat "$TEMP_TARGETS" >> "${PACKAGE_FILE}.new"
tail -n +"$END_LINE" "$PACKAGE_FILE" >> "${PACKAGE_FILE}.new"
mv "${PACKAGE_FILE}.new" "$PACKAGE_FILE"
rm "$TEMP_TARGETS"

# --- STEP 7: Atomic Tagging (The Critical Fix) ---
echo "Step 7: Finalizing release..."
git add "$PACKAGE_FILE"

# 1. Commit and push the code first
if ! git diff --cached --quiet; then
    git commit -m "chore: update binary targets for $VERSION"
    git push origin main
else
    echo "No changes to commit."
fi

# 2. Force update the tag locally and on remote
git tag -fa "$VERSION" -m "Finalized Release $VERSION"
git push origin "$VERSION" --force

# 3. Tell GitHub Release to point to this exact new commit
gh release edit "$VERSION" --tag "$VERSION" --notes "Release finalized with correct Package.swift"

echo "Success! Version $VERSION is now stable."
osascript -e "display notification \"Release $VERSION is stable!\" with title \"Script Editor\""
