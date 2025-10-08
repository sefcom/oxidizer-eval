fn starship::modules::golang::module(a0: i64, a1: u64) -> void {
    let v0: Result<struct72, struct24>;  // [bp-0x2a0], Other Possible Types: struct40
    let v1: u64;  // [bp-0x2a0]
    let v2: struct72;  // [bp-0x2a0]
    let v3: u64;  // [bp-0x288]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x270]
    let v5: struct32;  // [bp-0x260]
    let v6: struct32;  // [bp-0x258]
    let v7: Option<struct138>;  // [bp-0x250]
    let v8: struct40;  // [bp-0x240]
    let v9: struct56;  // [bp-0x238]
    let v10: struct92;  // [bp-0x228]
    let v11: Option<struct56>;  // [bp-0x218], Other Possible Types: struct72
    let v12: struct40;  // [bp-0x210]
    let v13: Result<struct24, struct24>;  // [bp-0x208]
    let v14: Result<struct24, struct24>;  // [bp-0x200]
    let v15: struct24;  // [bp-0x1f8]
    let v16: struct72;  // [bp-0x1c8]
    let v17: struct92;  // [bp-0x1b0]
    let v18: struct40;  // [bp-0x1a8]
    let v19: struct48;  // [bp-0x190]
    let v20: struct40;  // [bp-0x188]
    let v21: &str;  // [bp-0x180]
    let v22: struct92;  // [bp-0x178]
    let v23: struct24;  // [bp-0x178]
    let v24: iNone;  // [bp-0x168]
    let v25: struct24;  // [bp-0x158]
    let v26: struct24;  // [bp-0x148]
    let v27: struct8;  // [bp-0x138]
    let v28: u64;  // [bp-0x120]
    let v29: struct88;  // [bp-0x118]
    let v30: Option<struct153>;  // [bp-0xc0]
    let v31: u128;  // [bp-0x88]
    let v32: u64;  // [bp-0x78]
    let v33: u64;  // [bp-0x70]
    let v34: u128;  // [bp-0x68]
    let v35: u128;  // [bp-0x58]
    let v37: iNone;  // xmm0
    let v38: iNone;  // xmm0

    v22 = starship::context::Context::new_module(a1, "golang");
    v30 = starship::config::ModuleConfig::try_load(v28);
    v11 = starship::context::Context::try_begin_scan(a1);
    if let None = v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v37 = *((&v30 as &char + 8) as &i128);
    v2 = struct72 {
        field_0: v11 as i64
        field_8: *((&v30 as &char + 32) as &i64)
        field_16: *((&v30 as &char + 40) as &i64)
        field_24: v31
        field_40: v37
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v2) {
        v17 = 0;
        v16 = a1;
        v19 = 0;
        v18 = a1;
        v0 = starship::formatter::string_formatter::StringFormatter::new(v32, v33);
        v29 = struct88 {
            field_0: v34
            field_16: v35
            field_32: &v30 as u8
            field_40: v35
            field_56: &v16
            field_64: &v18
            field_72: &v22
            field_80: a1
        };
        if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
            v8 = v3;
            v7 = *((&v0 as &char + 8) as &i128);
        } else {
            v38 = v0 as i128;
            v11 = struct72 {
                field_0: v38
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *((&v0 as &char + 32) as &i128)
                field_48: v4
                field_64: v5
            };
            v6 = starship::modules::golang::module::{{closure}}(&v29, &v11);
            if v6.field_0 as i32 != 1 {
                v23 = starship::module::Module::set_segments(&v6 as u8);
                return struct96 {
                    field_0: v22.field_0
                    field_16: v24
                    field_32: v25
                    field_48: v26
                    field_64: v27
                    field_80: *(&v22.field_80 as &i128)
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
        v20 = &v9;
        v21 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v11 = "Error in module `golang`:\n";
        v12 = 1;
        v15 = 0;
        v13 = &v20;
        v14 = 1;
        v0 = struct40 {
            field_0: "starship::modules::golang"
            field_16: "starship::modules::golang"
            field_32: log::__private_api::loc("src/modules/golang.rs")
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
