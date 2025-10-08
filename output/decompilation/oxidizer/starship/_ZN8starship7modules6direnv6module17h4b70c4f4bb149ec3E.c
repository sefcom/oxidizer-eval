fn starship::modules::direnv::module(a0: u32, a1: u64) -> void {
    let v2: Result<struct26, struct32>;  // [bp-0x2f8]
    let v3: struct32;  // [bp-0x2f8]
    let v4: u128;  // [bp-0x2f0]
    let v5: u64;  // [bp-0x2e0]
    let v8: Option<struct48>;  // [bp-0x2c8]
    let v9: &str;  // [bp-0x2c8]
    let v10: Option<struct56>;  // [bp-0x2c8]
    let v11: Result<struct4, struct8>;  // [bp-0x2c8]
    let v15: struct40;  // [bp-0x290]
    let v16: iNone;  // [bp-0x268]
    let v17: u128;  // [bp-0x258]
    let v18: u64;  // [bp-0x240]
    let v19: struct72;  // [bp-0x240]
    let v20: u128;  // [bp-0x238]
    let v21: struct24;  // [bp-0x230]
    let v22: iNone;  // [bp-0x228]
    let v23: &str;  // [bp-0x218]
    let v24: struct96;  // [bp-0x208]
    let v25: struct92;  // [bp-0x1a8]
    let v26: struct24;  // [bp-0x1a8]
    let v27: u128;  // [bp-0x198]
    let v28: u128;  // [bp-0x188]
    let v29: struct92;  // [bp-0x178]
    let v30: u128;  // [bp-0x168]
    let v31: u64;  // [bp-0x150]
    let v32: Option<struct225>;  // [bp-0x148]
    let v33: u64;  // [bp-0x128]
    let v34: struct24;  // [bp-0xf8]
    let v35: u64;  // [bp-0xe8]
    let v36: u64;  // [bp-0xe0]
    let v37: u128;  // [bp-0x78]
    let v38: Result<struct72, struct24>;  // [bp-0x60]
    let v39: u128;  // [bp-0x58]
    let v41: struct24;  // al
    let v42: struct40;  // xmm0
    let v43: struct16;  // xmm0

    v25 = starship::context::Context::new_module(a1, "direnv");
    v32 = starship::config::ModuleConfig::try_load(v31);
    v41 = starship::context::Context::detect_env_vars(a0, v33, *((&v32 as &char + 40) as &i64));
    if *((&v32 as &char + 224) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if !v41 {
        v10 = starship::context::Context::try_begin_scan(a1);
        if let Some(_) = v10 {
            v42 = *((&v32 as &char + 8) as &i128);
            v19 = struct72 {
                field_0: v10 as i64
                field_8: *((&v32 as &char + 56) as &i64)
                field_16: *((&v32 as &char + 64) as &i64)
                field_24: v34
                field_40: v42
                field_56: <UNKNOWN>
                field_64: <UNKNOWN>
            };
            if starship::context::ScanDir::is_match(&v19) as u8 {
                goto LABEL_b8f30f;
            }
        }
    } else {
LABEL_b8f30f:
        v8 = starship::context::Context::exec_cmd(a1, "direnv", "status", 2);
        if (((0 ^ v8 as i64) & (0 ^ -(v11))) >> 63) as char {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v23 = *((&v8 as &char + 40) as &i64);
        v22 = *((&v8 as &char + 24) as &i128);
        v20 = *((&v8 as &char + 8) as &i128);
        v18 = v8 as i64;
        v2 = <starship::modules::direnv::DirenvState as core::str::traits::FromStr>::from_str(v20 as i64, v21);
        match v2 {
            Err(_) => {
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                v15 = struct40 {
                    field_0: "starship::modules::direnv"
                    field_16: "starship::modules::direnv"
                    field_32: log::__private_api::loc("src/modules/direnv.rs")
                };
                log::__private_api::log(&v9 as u64, 2, &v15);
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
            Ok(_) => {
                v43 = v2 as i128;
                v17 = *((&v2 as &char + 16) as &i128) as u128;
                v16 = v43;
                v38 = starship::formatter::string_formatter::StringFormatter::new(v35, v36);
                v24 = struct96 {
                    field_0: &v32 as u8
                    field_8: &v34 as u8
                    field_16: &v34 as u8
                    field_24: &v34 as u8
                    field_32: &v34 as u8
                    field_40: &v34 as u8
                    field_48: v37
                    field_64: &v16
                    field_72: &v17 as u8
                    field_80: &v17 as u8
                    field_88: a1
                };
                match v38 {
                    Err(_) => {
                        v5 = *((&v38 as &char + 24) as &i64);
                        v4 = v39;
                    },
                    Ok(_) => {
                        v3 = starship::modules::direnv::module::{{closure}}(&v24, &v38);
                        if !(v3.field_0 as i8 & 1) {
                            v26 = starship::module::Module::set_segments(&v3 as u8);
                            return struct96 {
                                field_0: v25.field_0
                                field_16: v27
                                field_32: v28
                                field_48: v29
                                field_64: v30
                                field_80: *(&v25.field_80 as &i128)
                            };
                        }
                    },
                }
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                v15 = struct40 {
                    field_0: "starship::modules::direnv"
                    field_16: "starship::modules::direnv"
                    field_32: log::__private_api::loc("src/modules/direnv.rs")
                };
                log::__private_api::log(&v9 as u64, 2, &v15);
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
