fn starship::modules::dotnet::check_directory_for_global_json(a0: u64, a1: void*, a2: &u8) -> void {
    let v0: u8;  // [bp-0x138]
    let v1: u64;  // [bp-0x130]
    let v2: u64;  // [bp-0x128]
    let v3: i64;  // [bp-0x120]
    let v4: &str;  // [bp-0x118]
    let v5: u64;  // [bp-0x110]
    let v6: core::str::pattern::CharSearcher;  // [bp-0x108]
    let v7: struct16;  // [bp-0x100]
    let v8: struct40;  // [bp-0xf8]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v10: struct72;  // [bp-0xc8]
    let v11: struct24;  // [bp-0xc0]
    let v12: struct24;  // [bp-0xb8]
    let v13: struct72;  // [bp-0xb0]

    std::path::Path::join(&v0, a1, a2, "global.json");
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 3 {
        v6 = v1;
        v7 = v2;
        v3 = &v6;
        v4 = &v3;
        v5 = <&T as core::fmt::Display>::fmt;
        v9 = "Checking if global.json exists at: ";
        v10 = 1;
        v13 = 0;
        v11 = &v4;
        v12 = 1;
        v8 = struct40 {
            field_0: "starship::modules::dotnet"
            field_16: "starship::modules::dotnet"
            field_32: log::__private_api::loc("src/modules/dotnet.rs")
        };
        log::__private_api::log(&v9, 4, &v8);
    }
    v9 = std::fs::metadata(v6, v7);
    if v9 as i64 != 2 {
        starship::modules::dotnet::get_pinned_sdk_version_from_file(a0, v6, v7);
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
