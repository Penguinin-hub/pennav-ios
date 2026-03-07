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
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895161.zip",
            checksum: "f5c16d1bd0101610ae657e9c17b4eb582ebd74b308aa2e40340dbcce6eeab3ca"
        ),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895022.zip",
            checksum: "5e96b1c31c59ede0dff743c24c393a5765d84fdea51b5f8dae1d0d9363687768"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895021.zip",
            checksum: "53f180843166f0be0aded204f6d6d5734cb4311edb271b66eaafba0a83787d06"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895019.zip",
            checksum: "64784631c01a4c4c68bdd23388903f7fe7899b3cf0f8f2f9d4accccd95b5d492"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895024.zip",
            checksum: "3938c74f407452e46d8a42f47fa5936b7ee87206d06a186345aff1b65bb11614"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895020.zip",
            checksum: "e928d1908a47732a99c892adc740a28ba8ebc90f82af30af90cf013f2e5e3f6f"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895033.zip",
            checksum: "43a55efb577b86e707ad936c7db18c3f71449f2c4fb53e2ba7f8b290a27ee887"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895034.zip",
            checksum: "e3946bc85883c761625783d2199e662c7f57814c34f2feb10936da86e50a5794"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895078.zip",
            checksum: "6519781458dfa1fecbfd43e5ea1abf4a61481199a25c8f00f3b2fce2b011011a"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895097.zip",
            checksum: "40e85de4c4cd82051d35597af361fad729ed0f68a672b3306f152b167234a3c5"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895139.zip",
            checksum: "43e8486eed61dcea3eabffee578d09be55d60225efcd573d9443df0776682aeb"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895140.zip",
            checksum: "af0d5b6c5d851623e7985f5ac09eea4e6ad4023b205600cd291345219a31aeb1"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895105.zip",
            checksum: "3bba8a4d64cdc92ccaaccb36ed735cfa8cf9b697516e54b72312d07975b695c5"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895166.zip",
            checksum: "ff53340dd3d932229b0ac942b85b12fc44e476e32544c39f828d4677407fd68e"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895144.zip",
            checksum: "6fc8110929164e22add0504fe0806435bddbf351ded185d44201bdfcf05c0429"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895152.zip",
            checksum: "1b6f9865540ff9e660ea3cfe240da8f10e35420041c96b727f37beea72fd70e1"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/368895154.zip",
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
