fn starship::modules::python::module(a0: u32, a1: u64) -> void {
    let v0: struct40;  // [bp-0x270], Other Possible Types: u64
    let v1: struct72;  // [bp-0x270]
    let v2: Result<struct72, struct24>;  // [bp-0x270]
    let v3: i64;  // [bp-0x258]
    let v4: struct40;  // [bp-0x240]
    let v5: struct92;  // [bp-0x230]
    let v6: struct32;  // [bp-0x228]
    let v7: Result<struct72, struct24>;  // [bp-0x220]
    let v8: Option<struct137>;  // [bp-0x210]
    let v9: Option<struct24>;  // [bp-0x208]
    let v10: struct32;  // [bp-0x1f8]
    let v11: Option<struct56>;  // [bp-0x1e8], Other Possible Types: struct72
    let v12: struct40;  // [bp-0x1e0]
    let v13: struct24;  // [bp-0x1d8]
    let v14: struct32;  // [bp-0x1d0]
    let v15: struct72;  // [bp-0x1c8]
    let v16: Option<struct56>;  // [bp-0x198]
    let v17: Result<struct72, struct24>;  // [bp-0x190]
    let v18: struct40;  // [bp-0x188]
    let v19: struct92;  // [bp-0x160]
    let v20: struct24;  // [bp-0x160]
    let v21: u128;  // [bp-0x150]
    let v22: u128;  // [bp-0x140]
    let v23: u128;  // [bp-0x130]
    let v24: u128;  // [bp-0x120]
    let v25: u64;  // [bp-0x108]
    let v26: struct202;  // [bp-0x100]
    let v27: u64;  // [bp-0x98]
    let v28: u64;  // [bp-0x90]
    let v29: struct32;  // [bp-0x88]
    let v30: u64;  // [bp-0x78]
    let v32: Option<struct24>;  // xmm0
    let v33: struct16;  // xmm2
    let v34: struct40;  // bpl
    let v35: struct24;  // r13
    let v36: struct20;  // xmm0

    v19 = starship::context::Context::new_module(a1, "python");
    v26 = starship::config::ModuleConfig::try_load(v25);
    v11 = starship::context::Context::try_begin_scan(a1);
    if let None = v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v32 = *(&v26.field_32 as &i128);
    v33 = *(&v26.field_80 as &i128);
    v1 = struct72 {
        field_0: v11 as i64
        field_8: v26.field_56
        field_16: v26.field_64
        field_24: v33
        field_40: v32
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    v34 = starship::context::ScanDir::is_match(&v1);
    if v28 {
        if v34 || starship::context::Context::detect_env_vars(a0, v27, v28) {
            goto LABEL_bb549c;
        }
    } else {
        if v34 {
LABEL_bb549c:
            v2 = starship::formatter::string_formatter::StringFormatter::new(v30, v30);
            v18 = struct40 {
                field_0: &v26
                field_8: a1
                field_16: &v19
                field_24: ((&v30)[8] as i8 ? v29 : 1)
                field_32: v35
            };
            if (((0 ^ v2 as i64) & (0 ^ -(v0))) >> 63) as char {
                v8 = v3;
                v7 = *((&v2 as &char + 8) as &i128);
            } else {
                v36 = v2 as i128;
                v11 = struct72 {
                    field_0: v36
                    field_16: *((&v2 as &char + 16) as &i128)
                    field_32: *((&v2 as &char + 32) as &i128)
                    field_48: v4
                    field_64: v5
                };
                v6 = starship::modules::python::module::{{closure}}(&v18, &v11);
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
            v11 = "Error in module `python`:\n";
            v12 = 1;
            v15 = 0;
            v13 = &v16;
            v14 = 1;
            v0 = struct40 {
                field_0: "starship::modules::python"
                field_16: "starship::modules::python"
                field_32: log::__private_api::loc("src/modules/python.rs")
            };
            log::__private_api::log(&v11, 2, &v0);
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
