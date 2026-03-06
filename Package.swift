// swift-tools-version: 6.2
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
        // --- BEGIN BINARY TARGETS ---
        .binaryTarget(
            name: "libnav_mb",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185299.zip",
            checksum: "9bb0aaafd0c53f224cee3a2a3da5c131e1e186ac1f97c8719c7e6e6ecc49982c"
        ),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368184987.zip",
            checksum: "5e96b1c31c59ede0dff743c24c393a5765d84fdea51b5f8dae1d0d9363687768"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368184990.zip",
            checksum: "53f180843166f0be0aded204f6d6d5734cb4311edb271b66eaafba0a83787d06"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368184991.zip",
            checksum: "64784631c01a4c4c68bdd23388903f7fe7899b3cf0f8f2f9d4accccd95b5d492"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368184989.zip",
            checksum: "759819ff340b3ec6f0402680678e6d3ec68141f704c95c19e4eeaf756f57b106"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368184986.zip",
            checksum: "e928d1908a47732a99c892adc740a28ba8ebc90f82af30af90cf013f2e5e3f6f"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368184999.zip",
            checksum: "7e0c3b9004adc68eb9fd77448de555233171b9dd57403f10da3d4bc7f105d69f"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185020.zip",
            checksum: "515ab154724b1501639ce13132e93bafd84e2ea9f9c863ca461758316afaf943"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185081.zip",
            checksum: "6519781458dfa1fecbfd43e5ea1abf4a61481199a25c8f00f3b2fce2b011011a"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185134.zip",
            checksum: "026096e6aecbfafb021ff89814d0d06ac2ccc302cb553f563822b6fdffec8880"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185210.zip",
            checksum: "4cd6027f414b71cc6004b71bc9a49fcb78aeb16f9725d7e7fa73bf8bcc804e7a"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185231.zip",
            checksum: "610ccec5427e99c714eadd8e5367de2a592bb77dcd4a8e0fbfbc09987e756d30"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185149.zip",
            checksum: "bdd84f56ae28648a5fc243241a9e77aa7a182d28dc826cffcb63b7b63d1f50fe"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185304.zip",
            checksum: "66d62a2cc544c6103ee1a5a8c07c92af35277f51c61d43df1d8e8e5b8b859e67"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185266.zip",
            checksum: "6fc8110929164e22add0504fe0806435bddbf351ded185d44201bdfcf05c0429"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185272.zip",
            checksum: "1b6f9865540ff9e660ea3cfe240da8f10e35420041c96b727f37beea72fd70e1"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368185289.zip",
            checksum: "ec504fa0120221fb2a63fa05ec20db58e8f13456010e09836affe9228dfae13a"
        ),
        // --- END BINARY TARGETS ---
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
