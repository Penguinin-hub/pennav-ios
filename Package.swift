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
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769304.zip",
            checksum: "b1aa58461c511992b41f40a0fe10f70216df09c07f17c22fbd3c39d442d0feb3"
        ),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769213.zip",
            checksum: "9880a4c16e75b05b8332d5aee339610138d0d6edae5fcc761a0255e0c318d0e4"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769212.zip",
            checksum: "0caf17d547a5d1bbd0aab06149110366abd740fdc24e15047cdbf12f087b2f32"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769211.zip",
            checksum: "c50c1a3eb6d14a5901c9f21560d68ea70969f80911758e349935813f6fb4b3da"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769214.zip",
            checksum: "d6f0579c0a56661f8a1855f828b3b1118ed5560ef9c943b74a7ef613a45ea5a6"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769215.zip",
            checksum: "aea93a403cfcb3f1a37c2e6eafaa3c87543ecd8091dae9d4d880020f91d82d89"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769233.zip",
            checksum: "cfd6332d844d2bb454c8c7ab71626562012e4cc76637b45e8a6d9968ec517171"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769262.zip",
            checksum: "3f168753c0557e9613e57fdd45fd51ea522834a30c48f4cf613a37b240c4a3d3"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769271.zip",
            checksum: "b542650f11715c02e0072fc8578af0b3ffa981793b1f66632141bf0e33c8c73b"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769275.zip",
            checksum: "fd390eddd5b7b50b4eebd024971e11b4390be5313d376e2307a82a86c0c219b1"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769264.zip",
            checksum: "4ae0326c88e939a1cd9ccf24dab56b371597d476aca5cf61f3dedf5d0d2c5c8d"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769314.zip",
            checksum: "561cd4a7ae1f2d690853a585911ed9fe65e8cb1bc7a9c5db204c5123b5958577"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769298.zip",
            checksum: "c6e65ea4a6b588dbcb176fa16e5cd8f095d4cc24282cb16920ee0785248ea52f"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769300.zip",
            checksum: "5aa583f5beab03cea700d839b026157d5d106f9fecb1a1ffddeb9955cf82bf97"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400769301.zip",
            checksum: "46abb1d84593d1c652630724f91f958b229d736508deb3ab2678601539e65d2e"
        ),
        // --- END BINARY TARGETS ---
        .target(
            name: "PenNav",
            dependencies: [
                "MapboxCommon",
                "MapboxCoreMaps",
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
