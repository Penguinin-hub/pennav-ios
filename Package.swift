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
    dependencies: [
        .package(
            url: "https://github.com/mapbox/mapbox-maps-ios.git",
            exact: "11.18.0"
        ),
        .package(
            url: "https://github.com/mapbox/mapbox-navigation-ios.git",
            exact: "3.18.0"
        )
    ],
    targets: [
        // --- BEGIN BINARY TARGETS ---
        .binaryTarget(
            name: "libnav_mb",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400737048.zip",
            checksum: "a77bda75dc082e07ac4ff7347e8d599d213a39ca5e19301e9a345b0da0111bb3"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400737054.zip",
            checksum: "2a70d631854851573efcfe95047ac98ce20fbef37ba3c94d0dfc68c06b594389"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400737050.zip",
            checksum: "73b8f7d2531184860f95c75915352a81fdc2e4fb7450e201eecf2fd265c76362"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400737049.zip",
            checksum: "f260b47b17348d1ffecadf34503eaab9089927a19c9479274bb57f1f5c0e6c79"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400737055.zip",
            checksum: "561cd4a7ae1f2d690853a585911ed9fe65e8cb1bc7a9c5db204c5123b5958577"
        ),
        // --- END BINARY TARGETS ---
        .target(
            name: "PenNav",
            dependencies: [
                .product(name: "MapboxMaps", package: "mapbox-maps-ios"),
                "pe_logic",
                "Penguin",
                "PenguinINRenderer",
                "PenNavUI"
            ]
        ),
        .target(
            name: "PenNavRoaming",
            dependencies: [
                .product(name: "MapboxNavigationCore", package: "mapbox-navigation-ios"),
                .product(name: "MapboxNavigationUIKit", package: "mapbox-navigation-ios"),
                "libnav_mb"
            ]
        )
    ]
)
