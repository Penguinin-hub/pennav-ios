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
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798205.zip",
            checksum: "652695d14df875dbfa91f5678d21f7a3a9b4fd4aa7421d77cf0853f8beb6d127"
        ),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798151.zip",
            checksum: "9880a4c16e75b05b8332d5aee339610138d0d6edae5fcc761a0255e0c318d0e4"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798149.zip",
            checksum: "0caf17d547a5d1bbd0aab06149110366abd740fdc24e15047cdbf12f087b2f32"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798150.zip",
            checksum: "c50c1a3eb6d14a5901c9f21560d68ea70969f80911758e349935813f6fb4b3da"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798148.zip",
            checksum: "d6f0579c0a56661f8a1855f828b3b1118ed5560ef9c943b74a7ef613a45ea5a6"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798153.zip",
            checksum: "aea93a403cfcb3f1a37c2e6eafaa3c87543ecd8091dae9d4d880020f91d82d89"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798161.zip",
            checksum: "cfd6332d844d2bb454c8c7ab71626562012e4cc76637b45e8a6d9968ec517171"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798185.zip",
            checksum: "3f168753c0557e9613e57fdd45fd51ea522834a30c48f4cf613a37b240c4a3d3"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798190.zip",
            checksum: "e483a94996296c4690e571f3c37769ccc7b07a31cd70ffafef12762de2051b95"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798191.zip",
            checksum: "237c41f312763a8d797013d9edd4ed84149ca2efff9aa262218035567836ecdd"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798186.zip",
            checksum: "ec2a0644b562a7a9312f80180e74a752336b8575495b00b2ed65f511632e443f"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798215.zip",
            checksum: "561cd4a7ae1f2d690853a585911ed9fe65e8cb1bc7a9c5db204c5123b5958577"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798201.zip",
            checksum: "c6e65ea4a6b588dbcb176fa16e5cd8f095d4cc24282cb16920ee0785248ea52f"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798202.zip",
            checksum: "5aa583f5beab03cea700d839b026157d5d106f9fecb1a1ffddeb9955cf82bf97"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400798203.zip",
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
