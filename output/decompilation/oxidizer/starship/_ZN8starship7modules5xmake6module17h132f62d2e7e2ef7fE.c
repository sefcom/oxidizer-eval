fn starship::modules::xmake::module(a0: i64, a1: u64) -> void {
    let v0: struct40;  // [bp-0x220], Other Possible Types: u64
    let v1: struct72;  // [bp-0x220]
    let v2: Result<struct72, struct24>;  // [bp-0x220]
    let v3: u64;  // [bp-0x208]
    let v4: iNone;  // [bp-0x1f0]
    let v5: u64;  // [bp-0x1e0]
    let v6: Option<struct24>;  // [bp-0x1d0]
    let v7: struct92;  // [bp-0x1c0]
    let v8: struct40;  // [bp-0x1b8]
    let v9: struct72;  // [bp-0x1a8]
    let v10: struct24;  // [bp-0x198], Other Possible Types: struct92
    let v11: Option<struct56>;  // [bp-0x198]
    let v12: struct72;  // [bp-0x190]
    let v13: struct92;  // [bp-0x188], Other Possible Types: u128
    let v14: struct32;  // [bp-0x180]
    let v15: struct200;  // [bp-0x178], Other Possible Types: struct24
    let v16: Result<struct72, struct24>;  // [bp-0x168]
    let v17: struct40;  // [bp-0x158]
    let v18: struct24;  // [bp-0x150]
    let v19: Result<struct72, struct24>;  // [bp-0x148]
    let v20: struct92;  // [bp-0x140]
    let v21: struct24;  // [bp-0x140]
    let v22: iNone;  // [bp-0x130]
    let v23: iNone;  // [bp-0x120]
    let v24: struct32;  // [bp-0x110]
    let v25: struct92;  // [bp-0x100]
    let v26: u64;  // [bp-0xe8]
    let v27: struct56;  // [bp-0xe0]
    let v28: Option<struct137>;  // [bp-0xa8]
    let v29: iNone;  // [bp-0x70]
    let v30: u64;  // [bp-0x60]
    let v31: u64;  // [bp-0x58]
    let v32: struct92;  // [bp-0x50]
    let v33: struct72;  // [bp-0x40]
    let v35: struct4;  // xmm0
    let v36: struct24;  // xmm0

    v20 = starship::context::Context::new_module(a1, "xmake");
    v28 = starship::config::ModuleConfig::try_load(v26);
    v11 = starship::context::Context::try_begin_scan(a1);
    if let None = v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v35 = *((&v28 as &char + 8) as &i128);
    v1 = struct72 {
        field_0: v11 as i64
        field_8: *((&v28 as &char + 32) as &i64)
        field_16: *((&v28 as &char + 40) as &i64)
        field_24: v29
        field_40: v35
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v1) {
        v2 = starship::formatter::string_formatter::StringFormatter::new(v30, v31);
        v27 = struct56 {
            field_0: v32
            field_16: v33
            field_32: &v28 as u8
            field_40: a1
            field_48: &v20
        };
        if (((0 ^ v2 as i64) & (0 ^ -(v0))) >> 63) as char {
            v7 = v3;
            v6 = *((&v2 as &char + 8) as &i128);
        } else {
            v17 = v5;
            v36 = v2 as i128;
            v16 = v4;
            v15 = *((&v2 as &char + 32) as &i128);
            v13 = *((&v2 as &char + 16) as &i128);
            v10 = v36;
            starship::modules::xmake::module::{{closure}}(&v2 as u8, &v27, &v11);
            if let Ok(_) = v2 as u8 {
                v21 = starship::module::Module::set_segments(&v2 as u8);
                return struct96 {
                    field_0: v20.field_0
                    field_16: v22
                    field_32: v23
                    field_48: v24
                    field_64: v25
                    field_80: *(&v20.field_80 as &i128)
                };
            }
        }
        v9 = v7;
        v8 = v6;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v18 = &v8;
        v19 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v10 = "Error in module `xmake`: \n";
        v12 = 1;
        v15 = 0;
        v13 = &v18;
        v14 = 1;
        v0 = struct40 {
            field_0: "starship::modules::xmake"
            field_16: "starship::modules::xmake"
            field_32: log::__private_api::loc("src/modules/xmake.rs")
        };
        log::__private_api::log(&v10, 2, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
