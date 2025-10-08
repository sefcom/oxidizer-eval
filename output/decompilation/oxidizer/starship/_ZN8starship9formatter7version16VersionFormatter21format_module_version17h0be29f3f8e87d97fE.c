fn starship::formatter::version::VersionFormatter::format_module_version(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64, a6: u64) -> long long {
    let v0: u64;  // [bp-0x100]
    let v1: u64;  // [bp-0xf8]
    let v2: i64;  // [bp-0xf0], Other Possible Types: struct_3 *
    let v3: struct16;  // [bp-0xe8], Other Possible Types: u64
    let v4: void*;  // [bp-0xe0]
    let v5: struct40;  // [bp-0xd0], Other Possible Types: struct_2 *
    let v6: u64;  // [bp-0xc8]
    let v7: struct24;  // [bp-0xa8]
    let v8: u64;  // [bp-0x88]
    let v9: u64;  // [bp-0x80]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x70]
    let v12: Result<struct24, struct24>;  // [bp-0x68]
    let v13: struct24;  // [bp-0x60], Other Possible Types: u128
    let v14: struct24;  // [bp-0x50]
    let v15: i64;  // [bp-0x48]
    let v16: u64;  // [bp-0x40]
    let v17: &mut [u8];  // [bp-0x38]
    let v18: u64;  // [bp-0x30]
    let v19: struct24;  // [bp-0x28], Other Possible Types: u8
    let v20: i8;  // [bp-0x18]
    let v21: u64;  // rdx

    v8 = a1;
    v9 = a2;
    v10 = a3;
    v11 = a4;
    v12 = starship::formatter::version::VersionFormatter::format_version(a3, a4, a5, a6);
    match v12 {
        Ok(_) => {
            return struct24 {
                field_0: v13
                field_16: v14
            };
        },
        Err(v7) => {
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                v15 = &v8;
                v16 = <&T as core::fmt::Display>::fmt;
                v17 = &v7;
                v18 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v0 = "Error formatting `";
                v1 = 2;
                v4 = 0;
                v2 = &v15;
                v3 = 2;
                v5 = struct40 {
                    field_0: "starship::formatter::version"
                    field_16: "starship::formatter::version"
                    field_32: log::__private_api::loc("src/formatter/version.rs")
                };
                log::__private_api::log(&v0, 2, &v5);
            }
            v5 = &v10;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = "v";
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            core::option::Option<T>::map_or_else(&v19, 0, v21, &v0);
            return struct24 {
                field_0: v19
                field_16: *(&v20 as &i64)
            };
        },
    }
}
