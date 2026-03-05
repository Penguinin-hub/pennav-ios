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
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxCommon.xcframework.zip",
            checksum: "5e96b1c31c59ede0dff743c24c393a5765d84fdea51b5f8dae1d0d9363687768"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxCommonWrapper.xcframework.zip",
            checksum: "53f180843166f0be0aded204f6d6d5734cb4311edb271b66eaafba0a83787d06"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxCoreMaps.xcframework.zip",
            checksum: "64784631c01a4c4c68bdd23388903f7fe7899b3cf0f8f2f9d4accccd95b5d492"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxCoreMapsWrapper.xcframework.zip",
            checksum: "007b11edc9d767fd171d48a1e448748962464c1d93b6e5190b6d6626cc4689a6"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxDirections.xcframework.zip",
            checksum: "e928d1908a47732a99c892adc740a28ba8ebc90f82af30af90cf013f2e5e3f6f"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxMaps.xcframework.zip",
            checksum: "4cd2d77c965cabe8325d8016f6f7ed9c6f316c9d1dfffc1790140db3f1f20ffa"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxNavigationCore.xcframework.zip",
            checksum: "c2eee476d66bee373c085729f50ac26be598c016dbf708893b2aa121d2c7be28"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxNavigationNative.xcframework.zip",
            checksum: "6519781458dfa1fecbfd43e5ea1abf4a61481199a25c8f00f3b2fce2b011011a"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/MapboxNavigationUIKit.xcframework.zip",
            checksum: "cd5847a72328980f4d51898ce4e2ab34a23f63a101080fe75a79b80eec0f224c"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/PenNavUI.xcframework.zip",
            checksum: "abc30be4519705db2ee165ce37fe786cf5853fdfa81bd8a6f2cdcb8c5b699171"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/Penguin.xcframework.zip",
            checksum: "ac6dd74e01b3acbce7efdf6932d3224d1472401c688c741bbd96d804e8f4ba45"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/PenguinINRenderer.xcframework.zip",
            checksum: "ad51851091c869566ecb727b29c63a99b20e7dbe8ceae7387ff0d8fc0f5ecc15"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/Turf.xcframework.zip",
            checksum: "6fc8110929164e22add0504fe0806435bddbf351ded185d44201bdfcf05c0429"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/_MapboxNavigationHelpers.xcframework.zip",
            checksum: "3704d7866e128fb63cf337f70c3e8789b85b3f2833ce128b58729c224d071e37"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/_MapboxNavigationLocalization.xcframework.zip",
            checksum: "ec504fa0120221fb2a63fa05ec20db58e8f13456010e09836affe9228dfae13a"
        ),
        .binaryTarget(
            name: "libnav_mb",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/libnav_mb.xcframework.zip",
            checksum: "7f5cb2665f3a7b4b8d1853d4c6c711420d8240f166ca71f63792a82459d912fd"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.11/pe_logic.xcframework.zip",
            checksum: "fd5d124410cf4e463119e85fb161535fef226abe5260a5c36a13518973b20a3a"
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
