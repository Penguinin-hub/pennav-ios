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
        // --- BEGIN BINARY TARGETS ---
        .binaryTarget(
            name: "libnav_mb",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367760172.zip",
            checksum: "9bb0aaafd0c53f224cee3a2a3da5c131e1e186ac1f97c8719c7e6e6ecc49982c"
        ),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758364.zip",
            checksum: "5e96b1c31c59ede0dff743c24c393a5765d84fdea51b5f8dae1d0d9363687768"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758366.zip",
            checksum: "53f180843166f0be0aded204f6d6d5734cb4311edb271b66eaafba0a83787d06"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758368.zip",
            checksum: "64784631c01a4c4c68bdd23388903f7fe7899b3cf0f8f2f9d4accccd95b5d492"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758365.zip",
            checksum: "1f54570bccb533f23e109d21d9e3a1950f337170bf6c583402304a73964bac46"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758367.zip",
            checksum: "e928d1908a47732a99c892adc740a28ba8ebc90f82af30af90cf013f2e5e3f6f"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758379.zip",
            checksum: "3b7d8e71d09fddc5fd37f74f0dae340214ad1845d46048973956d00e77d1bd7b"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758381.zip",
            checksum: "7dc4ca303eb6a4b66ae58341af38e47af9da7e0329b3f659c52b90b27ba82f8e"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758482.zip",
            checksum: "6519781458dfa1fecbfd43e5ea1abf4a61481199a25c8f00f3b2fce2b011011a"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758624.zip",
            checksum: "08f00846fb46c38b7319ec5585eea69c2e9a28154d68e9ca2228a4096a51978f"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367759501.zip",
            checksum: "4cd6027f414b71cc6004b71bc9a49fcb78aeb16f9725d7e7fa73bf8bcc804e7a"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367760012.zip",
            checksum: "610ccec5427e99c714eadd8e5367de2a592bb77dcd4a8e0fbfbc09987e756d30"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367758700.zip",
            checksum: "2669d36df3c46ecd7e7b344393fdc8eafb1ea970c39b71a6bb0e552de140e01f"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367760186.zip",
            checksum: "66d62a2cc544c6103ee1a5a8c07c92af35277f51c61d43df1d8e8e5b8b859e67"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367760087.zip",
            checksum: "6fc8110929164e22add0504fe0806435bddbf351ded185d44201bdfcf05c0429"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367760132.zip",
            checksum: "1b6f9865540ff9e660ea3cfe240da8f10e35420041c96b727f37beea72fd70e1"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367760159.zip",
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
