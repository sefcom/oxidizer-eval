fn starship::config::StarshipConfig::get_module_config(a0: &u64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0xa8]
    let v1: struct24;  // [bp-0xa0]
    let v2: i64;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: struct16;  // [bp-0x80], Other Possible Types: u64
    let v6: u64;  // [bp-0x78]
    let v7: i64;  // [bp-0x70]
    let v8: Result<struct24, struct16>;  // [bp-0x68]
    let v9: void*;  // [bp-0x60]
    let v10: i64;  // [bp-0x50]
    let v11: u64;  // [bp-0x48]
    let v12: i64;  // [bp-0x40]
    let v13: u64;  // [bp-0x38]
    let v14: struct40;  // [bp-0x30]

    v3 = a1;
    v4 = a2;
    v5 = struct16 {
        field_0: a1
        field_8: a2
    };
    v0 = starship::config::StarshipConfig::get_config(a0, &v5, 1);
    if !v0 {
        return 0;
    } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
        v1 = &v3;
        v2 = &v0;
        v10 = &v1;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v2;
        v13 = <&T as core::fmt::Debug>::fmt;
        v5 = "Config found for \"";
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 2;
        v14 = struct40 {
            field_0: "starship::config"
            field_16: "starship::config"
            field_32: log::__private_api::loc("src/config.rs")
        };
        log::__private_api::log(&v5, 4, &v14);
        return v0;
    } else {
        return v0;
    }
}
