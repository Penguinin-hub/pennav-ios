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
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxCommon.xcframework.zip",
            checksum: "ebdd4aad3b17324d72c8b08c7302b02a1ad70f2dd5ef07b535c9576e24a591d9"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxCommonWrapper.xcframework.zip",
            checksum: "40c6a72cd29f36c17c9acc09e4c62dfec50ef938b16fbbf21a27ea63bd4e2934"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxCoreMaps.xcframework.zip",
            checksum: "3124ece5bf94709c2aafc1e03e25f59ad6621bc723890cc1d3f7752d4e210f9d"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxCoreMapsWrapper.xcframework.zip",
            checksum: "bea9a3689e795600aacf9a698ee50bef2a930b219d770f5b6afaa7e9d26065be"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxDirections.xcframework.zip",
            checksum: "47026c9f038562bb2c8b4a83bdae1864a78f687d3ef61e2a19fbc902a8808f2a"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxMaps.xcframework.zip",
            checksum: "6e289758dd4bccf3f1f68959524b144536fbe4f34424e8482e5d089ce43fbbd4"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxNavigationCore.xcframework.zip",
            checksum: "cf6af824dc01ec69794f260fd6c3e943a11b6c5fea927bc6a0b61ba7481747aa"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxNavigationNative.xcframework.zip",
            checksum: "846eb8bb92e395df724f7dcc7e37feaf1afa65466a351eb3fe7bfa721fb669de"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/MapboxNavigationUIKit.xcframework.zip",
            checksum: "c2e1a6f0715ebc20246c23298fc6bd49eea5cc5a4fa2b8f8a7e06f56f606f6ca"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/PenNavUI.xcframework.zip",
            checksum: "a7a6c11146dc9eaf1298c2fd3986ef774e1b86c0847e70b77bc7a1e42f1fdee6"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/Penguin.xcframework.zip",
            checksum: "e13c1b4d403465116330df1c9977eb5f93d449e3d42997baffa4adfe9061ad77"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/PenguinINRenderer.xcframework.zip",
            checksum: "2445e13c091a75218a57b9b44acadd44c86316f8393e11d90b17ef345e979add"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/Turf.xcframework.zip",
            checksum: "809ff5ba011a4a230f4cf072e1d92f680f01a6f0b50f4089d70489fc7d01aea6"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/_MapboxNavigationHelpers.xcframework.zip",
            checksum: "ab6a268fc383b63aed5461234e089ebffab0333ebb09ac1f20d6928b2a24ddd6"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/_MapboxNavigationLocalization.xcframework.zip",
            checksum: "38e90fc86f2203facfdbecd1e5a5dd03376a6aaab1188416f12a1894cf3b584c"
        ),
        .binaryTarget(
            name: "libnav_mb",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/libnav_mb.xcframework.zip",
            checksum: "e680704051cbd6a84c989f884d6b7e6a2c306eb74dfa26486bfb4240ae51ed22"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://github.com/penguinin-hub/pennav-ios/releases/download/1.0.8/pe_logic.xcframework.zip",
            checksum: "2feadc3ccb2d6d6e28c1a7f6f5ab2fd5277f07a44f7b016bbb527fade6477e19"
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
