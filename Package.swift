// swift-tools-version: 6.1
// github-repository: https://github.com/Penguinin-hub/pennav-ios

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
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727914.zip",
            checksum: "1e08f5c8c51948b78c9f06104e8978738c1183fc902519fb925cbbe164891dff"
        ),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727518.zip",
            checksum: "e0ad727c4a130c486a976ea9dbe9bcac43c2ed273df36217dfb799bd93f31be1"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727517.zip",
            checksum: "42722c1a00e86db8ffa6c1e8200832d89f875bbe1b1e94164d3126b1028ae684"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727516.zip",
            checksum: "694cd08ae2842f897afe0d611c6ed612451861a32fa3c920dd36e713692d73e9"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727519.zip",
            checksum: "4e96893130051ab8da2d91f518dcf37141f85c16b43f9800b3f1bceb4521f6e5"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727520.zip",
            checksum: "eca62b9d26398c98791a97802b1f7d6d176af9389a107593efa44e76a109f307"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727534.zip",
            checksum: "ccd778426e70239b1e312eaf4ea4889893123417ab05118ca33dd6379dc0afaa"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727535.zip",
            checksum: "19314da7b7e9f857f5d9d4661d0c51bfe86e8b55e26d2f68e746d7c66fceba0f"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727699.zip",
            checksum: "2858d69f017f21370db82f1d4bf374588aef664bf25e587f00ae4a6a79fdffae"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727731.zip",
            checksum: "785473b88a6968b854b01f380653435cf08afcd1e37f9385e848b2ac3aab1f5c"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727806.zip",
            checksum: "0cedc5e73dc422ddb5c4f4b20fc27b0791e165d98e90d6b8db19ebe6dcf18594"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727811.zip",
            checksum: "b9d54c205cae5a5e98d6989a3d4bb69f641f287785fc4b4092b9f6c5eafaa04d"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727737.zip",
            checksum: "904460e16f7dd7cb647072ba2ebaa6005cedd8e2d18f1799a788d24e14abdfaf"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727919.zip",
            checksum: "ea185625326f3abba4f88f60be81cbe0674185bba9e6109ba9895b1adbf60650"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727832.zip",
            checksum: "03cd0332baf2925b6993a4f5832a61b35cd534411c4f4f560ff5093bc52b028b"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727865.zip",
            checksum: "6bd26500ecec1eefd5496cde92be79b6719cdb803f662506828f907187e05856"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://api.github.com/repos/Penguinin-hub/pennav-ios/releases/assets/367727900.zip",
            checksum: "4587801d6d23430770e0212459b87633d97d52683eddafd7f00374b0028df720"
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
