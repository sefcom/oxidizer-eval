fn starship::modules::package::module(a0: i64, a1: u64) -> void {
    let v0: u128;  // [bp-0x1e8]
    let v1: u64;  // [bp-0x1d8]
    let v2: Option<struct24>;  // [bp-0x1c8], Other Possible Types: struct24, struct72
    let v3: u64;  // [bp-0x1c8]
    let v4: struct24;  // [bp-0x1c0]
    let v5: struct8;  // [bp-0x1b8], Other Possible Types: u64
    let v6: struct8;  // [bp-0x1b0]
    let v7: struct16;  // [bp-0x1a8]
    let v8: struct32;  // [bp-0x178]
    let v9: Result<struct16, struct1>;  // [bp-0x170]
    let v10: struct16;  // [bp-0x160]
    let v11: struct48;  // [bp-0x158]
    let v12: &str;  // [bp-0x148]
    let v13: Result<struct72, struct24>;  // [bp-0x140], Other Possible Types: struct40
    let v14: struct16;  // [bp-0x128]
    let v15: iNone;  // [bp-0x110]
    let v16: i64;  // [bp-0x100]
    let v17: struct328;  // [bp-0xf8]
    let v18: struct24;  // [bp-0xf0]
    let v19: struct40;  // [bp-0xe8]
    let v20: struct92;  // [bp-0xc0]
    let v21: struct24;  // [bp-0xc0]
    let v22: struct40;  // [bp-0xb0]
    let v23: struct128;  // [bp-0xa0]
    let v24: struct24;  // [bp-0x90]
    let v25: struct40;  // [bp-0x80]
    let v26: u64;  // [bp-0x68]
    let v27: struct72;  // [bp-0x60]
    let v28: u64;  // [bp-0x58]
    let v29: u128;  // [bp-0x50]
    let v31: Result<struct4, struct8>;  // xmm0

    v20 = starship::context::Context::new_module(a1, "package");
    v27 = starship::config::ModuleConfig::try_load(v26);
    v2 = starship::modules::package::get_version(a1, &v27);
    if (((0 ^ v2 as i64) & (0 ^ -(v3))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = v5;
    v0 = v2 as i128;
    v13 = starship::formatter::string_formatter::StringFormatter::new(v27.field_0, v28);
    v19 = struct40 {
        field_0: v29
        field_16: &v27 as u8
        field_24: &v0
        field_32: a1
    };
    match v13 {
        Err(_) => {
            v10 = v14;
            v9 = *((&v13 as &char + 8) as &i128);
        },
        Ok(_) => {
            v31 = v13 as i128;
            v2 = struct72 {
                field_0: v31
                field_16: *((&v13 as &char + 16) as &i128)
                field_32: *((&v13 as &char + 32) as &i128)
                field_48: v15
                field_64: v16
            };
            v8 = starship::modules::package::module::{{closure}}(&v19, &v2);
            if v8.field_0 as i32 != 1 {
                v21 = starship::module::Module::set_segments(&v8 as u8);
                return struct96 {
                    field_0: v20.field_0
                    field_16: v22
                    field_32: v23
                    field_48: v24
                    field_64: v25
                    field_80: *(&v20.field_80 as &i128)
                };
            }
        },
    }
    v12 = v10;
    v11 = v9;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v17 = &v11;
    v18 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v2 = "Error in module `package`:\n";
    v4 = 1;
    v7 = 0;
    v5 = &v17;
    v6 = 1;
    v13 = struct40 {
        field_0: "starship::modules::package"
        field_16: "starship::modules::package"
        field_32: log::__private_api::loc("src/modules/package.rs")
    };
    log::__private_api::log(&v2, 2, &v13);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
