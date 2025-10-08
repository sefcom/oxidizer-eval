fn starship::modules::nim::module(a0: i64, a1: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x220], Other Possible Types: struct40
    let v1: u64;  // [bp-0x220]
    let v2: struct72;  // [bp-0x220]
    let v3: struct8;  // [bp-0x218]
    let v4: i64;  // [bp-0x208]
    let v5: struct72;  // [bp-0x1f0]
    let v6: i64;  // [bp-0x1e0]
    let v7: struct32;  // [bp-0x1d8]
    let v8: Option<struct56>;  // [bp-0x1d0]
    let v9: struct32;  // [bp-0x1c0]
    let v10: Result<struct57, struct49>;  // [bp-0x1b8]
    let v11: Result<struct57, struct49>;  // [bp-0x1a8]
    let v12: Option<struct56>;  // [bp-0x198], Other Possible Types: struct72, struct92
    let v13: struct40;  // [bp-0x190]
    let v14: Result<struct68, struct55>;  // [bp-0x188]
    let v15: Result<struct72, struct24>;  // [bp-0x180]
    let v16: struct40;  // [bp-0x178]
    let v17: Result<struct72, struct24>;  // [bp-0x150]
    let v18: Option<struct24>;  // [bp-0x148]
    let v19: struct92;  // [bp-0x140]
    let v20: struct24;  // [bp-0x140]
    let v21: struct32;  // [bp-0x130]
    let v22: struct92;  // [bp-0x120]
    let v23: struct72;  // [bp-0x110]
    let v24: struct24;  // [bp-0x100]
    let v25: u64;  // [bp-0xe8]
    let v26: struct56;  // [bp-0xe0]
    let v27: Option<struct137>;  // [bp-0xa8]
    let v28: i64;  // [bp-0x88]
    let v29: u64;  // [bp-0x60]
    let v30: u64;  // [bp-0x58]
    let v31: struct72;  // [bp-0x50]
    let v32: struct40;  // [bp-0x40]
    let v34: struct72;  // xmm0

    v19 = starship::context::Context::new_module(a1, "nim");
    v27 = starship::config::ModuleConfig::try_load(v25);
    v12 = starship::context::Context::try_begin_scan(a1);
    if let None = v12 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v2 = struct72 {
        field_0: v12 as i64
        field_8: v28
        field_16: *((&v27 as &char + 40) as &i64)
        field_24: v3
        field_40: *((&v27 as &char + 8) as &i128)
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v2) {
        v0 = starship::formatter::string_formatter::StringFormatter::new(v29, v30);
        v26 = struct56 {
            field_0: v31
            field_16: v32
            field_32: &v27 as u8
            field_40: a1
            field_48: &v19
        };
        if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
            v9 = v4;
            v8 = *((&v0 as &char + 8) as &i128);
        } else {
            v34 = v0 as i128;
            v12 = struct72 {
                field_0: v34
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *((&v0 as &char + 32) as &i128)
                field_48: v5
                field_64: v6
            };
            v7 = starship::modules::nim::module::{{closure}}(&v26, &v12);
            if v7.field_0 as i32 != 1 {
                v20 = starship::module::Module::set_segments(&v7 as u8);
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
        v11 = v9;
        v10 = v8;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v17 = &v10;
        v18 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v12 = "Error in module `nim`:\n";
        v13 = 1;
        v16 = 0;
        v14 = &v17;
        v15 = 1;
        v0 = struct40 {
            field_0: "starship::modules::nim"
            field_16: "starship::modules::nim"
            field_32: log::__private_api::loc("src/modules/nim.rs")
        };
        log::__private_api::log(&v12, 2, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
