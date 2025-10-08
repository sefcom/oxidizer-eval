fn starship::modules::fossil_metrics::module(a0: i64, a1: i64) -> void {
    let v0: Option<struct48>;  // [bp-0x228], Other Possible Types: u64
    let v1: struct48;  // [bp-0x228]
    let v2: u64;  // [bp-0x220]
    let v3: i64;  // [bp-0x218]
    let v4: u64;  // [bp-0x210]
    let v5: void*;  // [bp-0x208]
    let v6: struct24;  // [bp-0x1f8], Other Possible Types: struct40, u64
    let v7: u128;  // [bp-0x1e8]
    let v8: iNone;  // [bp-0x1d8]
    let v9: u128;  // [bp-0x1c8]
    let v10: struct32;  // [bp-0x1c8]
    let v11: struct40;  // [bp-0x1c0]
    let v12: u64;  // [bp-0x1b8]
    let v13: struct32;  // [bp-0x1b0]
    let v14: struct24;  // [bp-0x1a8]
    let v15: u64;  // [bp-0x1a0]
    let v16: u64;  // [bp-0x198]
    let v17: iNone;  // [bp-0x188]
    let v18: struct32;  // [bp-0x178]
    let v19: i64;  // [bp-0x168]
    let v20: u64;  // [bp-0x160]
    let v21: &str;  // [bp-0x158], Other Possible Types: struct32
    let v22: struct72;  // [bp-0x148]
    let v23: struct56;  // [bp-0x138]
    let v24: i64;  // [bp-0x130]
    let v25: struct40;  // [bp-0x118]
    let v26: i8;  // [bp-0x108]
    let v27: struct92;  // [bp-0x100]
    let v28: struct24;  // [bp-0x100]
    let v29: struct72;  // [bp-0xf0]
    let v30: struct40;  // [bp-0xe0]
    let v31: iNone;  // [bp-0xd0]
    let v32: struct72;  // [bp-0xc0]
    let v33: u64;  // [bp-0xa8]
    let v34: struct56;  // [bp-0xa0]
    let v35: Result<struct72, struct24>;  // [bp-0x68]
    let v36: struct40;  // [bp-0x60]
    let v38: struct24;  // xmm0

    v27 = starship::context::Context::new_module(a1, "fossil_metrics");
    v23 = starship::config::ModuleConfig::try_load(v33);
    if v23.field_49 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v21 = ".fslckout";
    v1 = struct48 {
        field_0: *((a1 + 184) as &i128)
        field_16: &v21 as u64
        field_24: 1
        field_32: ""
    };
    starship::context::ScanAncestors::scan(&v6, &v1);
    if (((0 ^ v6) & (0 ^ -(v6))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v12 = v7;
    v9 = *(&v6 as &i128);
    v0 = starship::context::Context::exec_cmd(a1, "fossil", "diff", 3);
    if let Some(_) = v0 {
        v38 = v0 as i128;
        v8 = *((&v0 as &char + 32) as &i128);
        v7 = *((&v0 as &char + 16) as &i128) as u128;
        v6 = v38;
        v14 = v38;
        v16 = v7;
        v21 = starship::modules::fossil_metrics::FossilDiff::parse(v15, v16, v26 as u64);
        v35 = starship::formatter::string_formatter::StringFormatter::new(v23.field_0 as i64, v24);
        v34 = struct56 {
            field_0: &v23 as u8
            field_8: v25
            field_24: &v21
            field_32: v22
            field_48: a1
        };
        match v35 {
            Err(_) => {
                v13 = *((&v35 as &char + 24) as &i64);
                v11 = v36;
            },
            Ok(_) => {
                v10 = starship::modules::fossil_metrics::module::{{closure}}(&v34, &v35);
                if v10.field_0 as i32 != 1 {
                    v28 = starship::module::Module::set_segments(&v10 as u8);
                    return struct96 {
                        field_0: v27.field_0
                        field_16: v29
                        field_32: v30
                        field_48: v31
                        field_64: v32
                        field_80: *(&v27.field_80 as &i128)
                    };
                }
            },
        }
        v18 = v13;
        v17 = *((&v10.field_0 as &char + 8) as &i128);
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v19 = &v17;
        v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v0 = "Error in module `fossil_metrics`:\n";
        v2 = 1;
        v5 = 0;
        v3 = &v19;
        v4 = 1;
        v6 = struct40 {
            field_0: "starship::modules::fossil_metrics"
            field_16: "starship::modules::fossil_metrics"
            field_32: log::__private_api::loc("src/modules/fossil_metrics.rs")
        };
        log::__private_api::log(&v0, 2, &v6);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
