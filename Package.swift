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
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400724163.zip",
            checksum: "83c4bce906daf95665106719527c8cf42db0771021388c8cebf992f1ebfdb836"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400724161.zip",
            checksum: "1c512d46abea2e28ceff7d87796bee15fd332e7d24ab300982a42fc67bde7745"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400724165.zip",
            checksum: "a47575cc5ce435ed0d8111605cf56b2eab09074898cf3f11dffc12c3d0b178e8"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400724164.zip",
            checksum: "f749481a9789cf7b6319234746f4f09b2bc7f55c9208aa8df525b0d70ad2eece"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/400724166.zip",
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
