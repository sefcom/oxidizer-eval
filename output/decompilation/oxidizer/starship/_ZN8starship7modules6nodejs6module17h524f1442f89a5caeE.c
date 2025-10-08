fn starship::modules::nodejs::module(a0: i64, a1: i320) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x2a8], Other Possible Types: struct40
    let v1: u64;  // [bp-0x2a8]
    let v2: struct72;  // [bp-0x2a8]
    let v3: struct24;  // [bp-0x278]
    let v4: Option<struct56>;  // [bp-0x258], Other Possible Types: struct24, struct72
    let v5: Option<struct56>;  // [bp-0x258]
    let v6: struct32;  // [bp-0x250]
    let v7: <anon>;  // [bp-0x248], Other Possible Types: Result<struct72, struct24>
    let v8: struct92;  // [bp-0x240]
    let v9: Option<struct56>;  // [bp-0x238]
    let v10: struct32;  // [bp-0x208]
    let v11: Result<struct72, struct24>;  // [bp-0x200]
    let v12: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1f0]
    let v13: struct24;  // [bp-0x1e8]
    let v14: struct24;  // [bp-0x1d8]
    let v15: struct72;  // [bp-0x1c8]
    let v16: struct32;  // [bp-0x1b0]
    let v17: struct40;  // [bp-0x1a8]
    let v18: struct16;  // [bp-0x190]
    let v19: struct72;  // [bp-0x188]
    let v20: Option<struct153>;  // [bp-0x180]
    let v21: struct92;  // [bp-0x178]
    let v22: struct24;  // [bp-0x178]
    let v23: u128;  // [bp-0x168]
    let v24: u128;  // [bp-0x158]
    let v25: u128;  // [bp-0x148]
    let v26: u128;  // [bp-0x138]
    let v27: u64;  // [bp-0x120]
    let v28: struct88;  // [bp-0x118]
    let v29: Option<struct153>;  // [bp-0xc0]
    let v30: struct92;  // [bp-0x88]
    let v31: u64;  // [bp-0x78]
    let v32: u64;  // [bp-0x70]
    let v33: iNone;  // [bp-0x68]
    let v34: struct32;  // [bp-0x58]
    let v36: struct32;  // xmm0
    let v37: u8;  // al
    let v38: Option<struct48>;  // xmm0
    let v39: &str;  // xmm1

    v21 = starship::context::Context::new_module(a1, "nodejs");
    v29 = starship::config::ModuleConfig::try_load(v27);
    v4 = starship::context::Context::try_begin_scan(a1);
    if let None = v4 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v36 = *((&v29 as &char + 8) as &i128);
    v2 = struct72 {
        field_0: v4 as i64
        field_8: *((&v29 as &char + 32) as &i64)
        field_16: *((&v29 as &char + 40) as &i64)
        field_24: v30
        field_40: v36
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    v37 = starship::context::ScanDir::is_match(&v2);
    v5 = starship::context::Context::try_begin_scan(a1);
    if let Some(_) = v5 {
        v2 = struct72 {
            field_0: v5 as i64
            field_8: *((&v5 as &char + 8) as &i64)
            field_16: v7
            field_24: "esy.lock"
            field_40: *((&v5 as &char + 40) as &i128)
            field_56: <UNKNOWN>
            field_64: <UNKNOWN>
        };
        if (starship::context::ScanDir::is_match(&v2) as u8 | v37 ^ 1) != 1 {
            v16 = 0;
            v15 = a1;
            v18 = 0;
            v17 = a1;
            v0 = starship::formatter::string_formatter::StringFormatter::new(v31, v32);
            v28 = struct88 {
                field_0: v33
                field_16: v34
                field_32: &v29 as u8
                field_40: v34.field_0
                field_56: &v15
                field_64: &v17
                field_72: &v21
                field_80: a1
            };
            if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
                v38 = v0 as i128;
                v39 = *((&v0 as &char + 16) as &i128);
                v4 = struct72 {
                    field_0: v38
                    field_16: v39
                    field_32: *((&v0 as &char + 32) as &i128)
                    field_48: v3
                    field_64: *((&v0 as &char + 64) as &i64)
                };
                v10 = starship::modules::nodejs::module::{{closure}}(&v28, &v4);
                if v10.field_0 as i32 != 1 {
                    v22 = starship::module::Module::set_segments(&v10 as u8);
                    return struct96 {
                        field_0: v21.field_0
                        field_16: v23
                        field_32: v24
                        field_48: v25
                        field_64: v26
                        field_80: *(&v21.field_80 as &i128)
                    };
                }
            }
            v14 = v12;
            v13 = v11;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v19 = &v13;
            v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v4 = "Error in module `nodejs`:\n";
            v6 = 1;
            v9 = 0;
            v7 = &v19;
            v8 = 1;
            v0 = struct40 {
                field_0: "starship::modules::nodejs"
                field_16: "starship::modules::nodejs"
                field_32: log::__private_api::loc("src/modules/nodejs.rs")
            };
            log::__private_api::log(&v4, 2, &v0);
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
