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
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxCommon.xcframework.zip",
            checksum: "a999c74b6bd132d733eda540b1bf2d9b7871d58162f650198e6fbc8ccbb29609"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxCommonWrapper.xcframework.zip",
            checksum: "0165db886c4b764895e8567d582bbeabab8d33b1c4f03522c01f5d327efc3365"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxCoreMaps.xcframework.zip",
            checksum: "c3f07892e1b3ce35f2b81cc164d30d14269cdc8b17f3e5217d9ff47b604c327b"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxCoreMapsWrapper.xcframework.zip",
            checksum: "f95110c7c911877291976565def9f84dc3a2333f8cbefef7f3bd59a749186bb7"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxDirections.xcframework.zip",
            checksum: "0c4826e6e43838050b284f40a80a8c2948ec76cbaa66fa62da79b13c7dd5e6e7"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxMaps.xcframework.zip",
            checksum: "42b1ffdff240bb55a45d3f46c8e46d4754d517de47d7724825d153690152b7b2"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxNavigationCore.xcframework.zip",
            checksum: "9d51146e99b67e292120f124ab1b8ecbeb185476cde443ffae17233c321ce52f"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxNavigationNative.xcframework.zip",
            checksum: "b437c69d2ebca0816f286a14b89dab58129712705309f70dc65afdab1636ced8"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/MapboxNavigationUIKit.xcframework.zip",
            checksum: "ce6e34a19aa05f5083ed3fff1c553607dded90a1c41fbbd2a074feb5ecd5386c"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/PenNavUI.xcframework.zip",
            checksum: "7f15391cf58244e57365abe816e46fd71110eae6f288cff9a64c14caf0ea7ef1"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/Penguin.xcframework.zip",
            checksum: "758bed512599b68c2bce30a1931485002c8e1814edd3f928a9afcbf1e962f5ed"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/PenguinINRenderer.xcframework.zip",
            checksum: "0a326620bdc6825213c476e75445dc7df12fa89b48572c33e27c0c299ec15268"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/Turf.xcframework.zip",
            checksum: "1cea999ded3fc0890c2fbf38fca4e632d1af9fff987821a8b5b81a26f2153f8e"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/_MapboxNavigationHelpers.xcframework.zip",
            checksum: "40a57dcfe2d487cda87182815fefd8698f6dec18c5a61599e6396f01f14da3a1"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/_MapboxNavigationLocalization.xcframework.zip",
            checksum: "c6fa585be1f54173cdc97db371cfeb13002d44892a90c0959149d4ba42197f49"
        ),
        .binaryTarget(
            name: "libnav_mb",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/libnav_mb.xcframework.zip",
            checksum: "17c99c47741faa06c4d7f621f64c6364df4ce5007ae2f0a737f56a6af6fc21de"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.10/pe_logic.xcframework.zip",
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
