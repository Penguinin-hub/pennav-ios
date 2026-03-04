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
        .binaryTarget(name: "_MapboxNavigationHelpers", path: "Frameworks/_MapboxNavigationHelpers.xcframework"),
        .binaryTarget(name: "_MapboxNavigationLocalization", path: "Frameworks/_MapboxNavigationLocalization.xcframework"),
        .binaryTarget(name: "libnav_mb", path: "Frameworks/libnav_mb.xcframework"),
        .binaryTarget(name: "MapboxCommon", path: "Frameworks/MapboxCommon.xcframework"),
        .binaryTarget(name: "MapboxCommonWrapper", path: "Frameworks/MapboxCommonWrapper.xcframework"),
        .binaryTarget(name: "MapboxCoreMaps", path: "Frameworks/MapboxCoreMaps.xcframework"),
        .binaryTarget(name: "MapboxCoreMapsWrapper", path: "Frameworks/MapboxCoreMapsWrapper.xcframework"),
        .binaryTarget(name: "MapboxDirections", path: "Frameworks/MapboxDirections.xcframework"),
        .binaryTarget(name: "MapboxMaps", path: "Frameworks/MapboxMaps.xcframework"),
        .binaryTarget(name: "MapboxNavigationCore", path: "Frameworks/MapboxNavigationCore.xcframework"),
        .binaryTarget(name: "MapboxNavigationNative", path: "Frameworks/MapboxNavigationNative.xcframework"),
        .binaryTarget(name: "MapboxNavigationUIKit", path: "Frameworks/MapboxNavigationUIKit.xcframework"),
        .binaryTarget(name: "pe_logic", path: "Frameworks/pe_logic.xcframework"),
        .binaryTarget(name: "Penguin", path: "Frameworks/Penguin.xcframework"),
        .binaryTarget(name: "PenguinINRenderer", path: "Frameworks/PenguinINRenderer.xcframework"),
        .binaryTarget(name: "PenNavUI", path: "Frameworks/PenNavUI.xcframework"),
        .binaryTarget(name: "Turf", path: "Frameworks/Turf.xcframework"),
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
