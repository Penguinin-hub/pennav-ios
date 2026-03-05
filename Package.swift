// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "PenNav",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "PenNav",
            targets: ["PenNav"]
        ),
        .library(
            name: "PenNavRoaming",
            targets: ["PenNavRoaming"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxCommon.xcframework.zip",
            checksum: "a999c74b6bd132d733eda540b1bf2d9b7871d58162f650198e6fbc8ccbb29609"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxCommonWrapper.xcframework.zip",
            checksum: "3ca7f7de8223934dc5fe6b3f4b9b4befa30552eaf4031fb42a8bd9af24099e0a"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxCoreMaps.xcframework.zip",
            checksum: "c3f07892e1b3ce35f2b81cc164d30d14269cdc8b17f3e5217d9ff47b604c327b"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxCoreMapsWrapper.xcframework.zip",
            checksum: "009138544d4d4bd73a8443022571452abf6ff552053e7e14fdd90fe5c9357062"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxDirections.xcframework.zip",
            checksum: "9c9777523e0a0e4a701831aa2bfd86fd587c1bf6793be327b18f3f5976171f1b"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxMaps.xcframework.zip",
            checksum: "7a69db67503102a764ec6f500f8839d68a4f46aae7e19c37a1088eed0a5c4adf"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxNavigationCore.xcframework.zip",
            checksum: "f06b79af92d298e7c09ef5126d001421453025c52abef7cbb7e26a0f80677c30"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxNavigationNative.xcframework.zip",
            checksum: "72f9d33a8440476270e29e59a955e43614cc5035898f582cc86a13b2f25390ef"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxNavigationUIKit.xcframework.zip",
            checksum: "0a646514816f8145751eb841042b87522216496e7c188daaf0a3744ca57928aa"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/PenNavUI.xcframework.zip",
            checksum: "9dbe0842c11b651757ab9461ee7e7611793474e3c8f655393372b493d3dd6979"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/Penguin.xcframework.zip",
            checksum: "b174dbfbe5447c2fb735a9f70cf03d075e8d9f7911ec5db433da3b4e6044023b"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/PenguinINRenderer.xcframework.zip",
            checksum: "955d0651a13bcd85c2de00ecaa7829310daded1e2d5d6a7761fb0ea307b4d7a2"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/Turf.xcframework.zip",
            checksum: "1cea999ded3fc0890c2fbf38fca4e632d1af9fff987821a8b5b81a26f2153f8e"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/_MapboxNavigationHelpers.xcframework.zip",
            checksum: "40a57dcfe2d487cda87182815fefd8698f6dec18c5a61599e6396f01f14da3a1"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/_MapboxNavigationLocalization.xcframework.zip",
            checksum: "c6fa585be1f54173cdc97db371cfeb13002d44892a90c0959149d4ba42197f49"
        ),
        .binaryTarget(
            name: "libnav_mb",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/libnav_mb.xcframework.zip",
            checksum: "01acb19838ea1e3eeda600d0f5599a57c7285210acbce5e209e204d4673635fb"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/pe_logic.xcframework.zip",
            checksum: "3a34337b0c74e8e91d526fe97ab680409c36d9de56d3c56ef29159ace6167f65"
        ),
        .target(
            name: "PenNav",
            dependencies: [
                "MapboxCommon",
                "MapboxCommonWrapper",
                "MapboxCoreMaps",
                "MapboxCoreMapsWrapper",
                "MapboxMaps",
                "pe_logic",
                "Penguin",
                "PenguinINRenderer",
                "PenNavUI",
                "Turf"
            ]
        ),
        .target(
            name: "PenNavRoaming",
            dependencies: [
                "_MapboxNavigationHelpers",
                "_MapboxNavigationLocalization",
                "libnav_mb",
                "MapboxDirections",
                "MapboxNavigationCore",
                "MapboxNavigationNative",
                "MapboxNavigationUIKit"
            ]
        )
    ]
)
