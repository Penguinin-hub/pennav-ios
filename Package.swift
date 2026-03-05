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
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/libnav_mb.xcframework.zip",
            checksum: "4449334f1971eb716a5ffdbfc75b4a4b5ed5fcc3f76a0752200d8999dce28109"
        ),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxCommon.xcframework.zip",
            checksum: "17f55c4e63f2dec3a5e96d9217f9e65b86d5464661892511851e4089dd1427db"
        ),
        .binaryTarget(
            name: "MapboxCommonWrapper",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxCommonWrapper.xcframework.zip",
            checksum: "76175cdce53e3249ad92016ad284dc2cd60caf74fe2f10b5c223be0164fee074"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxCoreMaps.xcframework.zip",
            checksum: "d85725ca21acfb2c7177705893d81112abd13f26ac5a32b7f431a6239b4f3458"
        ),
        .binaryTarget(
            name: "MapboxCoreMapsWrapper",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxCoreMapsWrapper.xcframework.zip",
            checksum: "6ee87899b58a9f407a589ae3433e922b32b5ea7a4f574d39dde4bb04d99efa43"
        ),
        .binaryTarget(
            name: "MapboxDirections",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxDirections.xcframework.zip",
            checksum: "87091ffcb027db5e1a64f94a247093a0eeb3ffb60dcf973dc3e26dcae84926fe"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxMaps.xcframework.zip",
            checksum: "ecfe4309a0744b41ee85fe6b5bbd5a19a5f4fb91cc40eec336dbe0ce0b78d1c9"
        ),
        .binaryTarget(
            name: "MapboxNavigationCore",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxNavigationCore.xcframework.zip",
            checksum: "25c4d3c27e1d752178439fb938aedccb53344ca29cf1d8f77cdbe7f0aec6d69d"
        ),
        .binaryTarget(
            name: "MapboxNavigationNative",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxNavigationNative.xcframework.zip",
            checksum: "7cc833d1b8814a1d0cfba20d8f6caca68bd72eed28e52c9d87d4762896abc690"
        ),
        .binaryTarget(
            name: "MapboxNavigationUIKit",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/MapboxNavigationUIKit.xcframework.zip",
            checksum: "5fcd30015747cc84d88583fb903384d71999b108a1b0256abf5c59ea4a069bb7"
        ),
        .binaryTarget(
            name: "Penguin",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/Penguin.xcframework.zip",
            checksum: "bccc889f45aef8dffb70ebb7fd35ad2348bb963add8e9bbb618339cd8bade523"
        ),
        .binaryTarget(
            name: "PenguinINRenderer",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/PenguinINRenderer.xcframework.zip",
            checksum: "5769d056bbb2261eeeb2aecf0b275153a99ea2b99e2ec50864a42f7cd5e7c533"
        ),
        .binaryTarget(
            name: "PenNavUI",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/PenNavUI.xcframework.zip",
            checksum: "0086a9a4e00b788f4dfdc6ad90e80cc7755fc25dbaa7a303811282eee809b7f8"
        ),
        .binaryTarget(
            name: "pe_logic",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/pe_logic.xcframework.zip",
            checksum: "d38578620092d7a1584704b4b574d68a42fac5aa114cf5755fc0c9b28407cc28"
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/Turf.xcframework.zip",
            checksum: "87839ba40494549382cff8f13bb5120ba928a6bcc80567c3310b601f42986f93"
        ),
        .binaryTarget(
            name: "_MapboxNavigationHelpers",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/_MapboxNavigationHelpers.xcframework.zip",
            checksum: "a9a0764431458aa220bdaa3cae4d4b5d80c3e2773b9b226ccee45cbb834212b1"
        ),
        .binaryTarget(
            name: "_MapboxNavigationLocalization",
            url: "https://github.com/Penguinin-hub/pennav-ios/releases/download/1.0.27/_MapboxNavigationLocalization.xcframework.zip",
            checksum: "e00d53d83f94d6c5fad74b4b2807a716745ba0b16b38bfe09e4ac084d21e53ec"
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
