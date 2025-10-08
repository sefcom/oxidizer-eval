fn starship::modules::mojo::module(a0: i64, a1: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x230], Other Possible Types: struct40
    let v1: u64;  // [bp-0x230]
    let v2: struct72;  // [bp-0x230]
    let v3: i64;  // [bp-0x218]
    let v4: u128;  // [bp-0x200]
    let v5: u64;  // [bp-0x1f0]
    let v6: struct32;  // [bp-0x1e8]
    let v7: u128;  // [bp-0x1e0]
    let v8: i64;  // [bp-0x1d0]
    let v9: struct92;  // [bp-0x1c8]
    let v10: Option<struct56>;  // [bp-0x1b8]
    let v11: &str;  // [bp-0x1a8], Other Possible Types: Option<struct56>, struct72
    let v12: struct48;  // [bp-0x1a0]
    let v13: struct24;  // [bp-0x198]
    let v14: struct24;  // [bp-0x190]
    let v15: struct128;  // [bp-0x188]
    let v16: struct72;  // [bp-0x160]
    let v17: struct40;  // [bp-0x158]
    let v18: struct40;  // [bp-0x150]
    let v19: struct92;  // [bp-0x128]
    let v20: struct24;  // [bp-0x128]
    let v21: struct72;  // [bp-0x118]
    let v22: struct40;  // [bp-0x108]
    let v23: struct32;  // [bp-0xf8]
    let v24: struct72;  // [bp-0xe8]
    let v25: u64;  // [bp-0xd0]
    let v26: u64;  // [bp-0xc8]
    let v27: struct40;  // [bp-0x98]
    let v28: struct128;  // [bp-0x90]
    let v29: struct24;  // [bp-0x58]
    let v30: u64;  // [bp-0x48]
    let v31: u64;  // [bp-0x40]
    let v32: u128;  // [bp-0x38]
    let v34: struct24;  // xmm0
    let v35: struct32;  // xmm0

    v19 = starship::context::Context::new_module(a1, "mojo");
    v28 = starship::config::ModuleConfig::try_load(v25);
    v11 = starship::context::Context::try_begin_scan(a1);
    if let None = v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v34 = v28.field_8;
    v2 = struct72 {
        field_0: v11 as i64
        field_8: *((&v28.field_24 as &char + 8) as &i64)
        field_16: v28.field_40 as i64
        field_24: v29
        field_40: v34
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v2) {
        v27 = 0;
        v26 = a1;
        v0 = starship::formatter::string_formatter::StringFormatter::new(v30, v31);
        v18 = struct40 {
            field_0: v32
            field_16: &v28 as u8
            field_24: &v26
            field_32: a1
        };
        if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
            v8 = v3;
            v7 = *((&v0 as &char + 8) as &i128);
        } else {
            v35 = v0 as i128;
            v11 = struct72 {
                field_0: v35
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *((&v0 as &char + 32) as &i128)
                field_48: v4
                field_64: v5
            };
            v6 = starship::modules::mojo::module::{{closure}}(&v18, &v11);
            if v6.field_0 as i32 != 1 {
                v20 = starship::module::Module::set_segments(&v6 as u8);
                return struct96 {
                    field_0: v19.field_0
                    field_16: v21
                    field_32: v22
                    field_48: v23
                    field_64: v24
                    field_80: *(&v19.field_80 as &i128)
                };
            }
        }
        v10 = v8;
        v9 = v7;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v16 = &v9;
        v17 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v11 = "Error in module `mojo`:\n";
        v12 = 1;
        v15 = 0;
        v13 = &v16;
        v14 = 1;
        v0 = struct40 {
            field_0: "starship::modules::mojo"
            field_16: "starship::modules::mojo"
            field_32: log::__private_api::loc("src/modules/mojo.rs")
        };
        log::__private_api::log(&v11, 2, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
