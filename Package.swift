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
            targets: [
                "PenNav",
                "MapboxCommon",
                "MapboxCoreMaps",
                "MapboxCoreMapsWrapper",
                "MapboxMaps",
                "Penguin",
                "PenguinINRenderer",
                "PenNavAR",
                "PenNavUI",
                "Turf"
            ]
        )
    ],
    targets: [
        .target(
            name: "PenNav"
        ),
        .binaryTarget(name: "MapboxCommon", path: "Frameworks/MapboxCommon.xcframework"),
        .binaryTarget(name: "MapboxCoreMaps", path: "Frameworks/MapboxCoreMaps.xcframework"),
        .binaryTarget(name: "MapboxCoreMapsWrapper", path: "Frameworks/MapboxCoreMapsWrapper.xcframework"),
        .binaryTarget(name: "MapboxMaps", path: "Frameworks/MapboxMaps.xcframework"),
        .binaryTarget(name: "Penguin", path: "Frameworks/Penguin.xcframework"),
        .binaryTarget(name: "PenguinINRenderer", path: "Frameworks/PenguinINRenderer.xcframework"),
        .binaryTarget(name: "PenNavAR", path: "Frameworks/PenNavAR.xcframework"),
        .binaryTarget(name: "PenNavUI", path: "Frameworks/PenNavUI.xcframework"),
        .binaryTarget(name: "Turf", path: "Frameworks/Turf.xcframework"),
    ]
)
