// swift-tools-version:5.0
import PackageDescription

var cSettings: [CSetting] = [
    .headerSearchPath("./include/lv_themes"),
    .headerSearchPath("./include/lv_core"),
    .headerSearchPath("./include/lv_font"),
    .headerSearchPath("./include/lv_hal"),
    .headerSearchPath("./include/lv_draw"),
    .headerSearchPath("./include/lv_objx"),
    .headerSearchPath("./include/lv_misc"),
    .headerSearchPath("../../lvgl/src/lv_font"),
    .define("LV_CONF_INCLUDE_SIMPLE"),
]

let package = Package(
    name: "LittlevGL",
    products: [
        .library(
            name: "CLittlevGL",
            targets: ["CLittlevGL"]
        ),
    ],
    targets: [
        .target(
            name: "CLittlevGL",
            cSettings: cSettings
        ),
    ]
)
