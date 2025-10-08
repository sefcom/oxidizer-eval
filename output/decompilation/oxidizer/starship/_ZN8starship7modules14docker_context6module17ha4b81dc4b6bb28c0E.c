fn starship::modules::docker_context::module(a0: i64, a1: u64) -> void {
    let v0: u128;  // [bp-0x2e8]
    let v1: u128;  // [bp-0x2e8]
    let v2: u64;  // [bp-0x2e8]
    let v3: u128;  // [bp-0x2e0]
    let v4: u64;  // [bp-0x2d8]
    let v5: struct40;  // [bp-0x2d0], Other Possible Types: struct72, u64
    let v6: struct24;  // [bp-0x2d0]
    let v7: Result<struct72, struct24>;  // [bp-0x2d0]
    let v8: struct8;  // [bp-0x2d0]
    let v9: u128;  // [bp-0x2cf]
    let v10: u128;  // [bp-0x2c8]
    let v11: void*;  // [bp-0x2c8]
    let v12: &u8;  // [bp-0x2c0], Other Possible Types: u128
    let v13: u64;  // [bp-0x2b8]
    let v14: iNone;  // [bp-0x2a0]
    let v15: u64;  // [bp-0x290]
    let v16: struct32;  // [bp-0x288], Other Possible Types: u128
    let v17: u64;  // [bp-0x288]
    let v18: u128;  // [bp-0x280]
    let v19: u64;  // [bp-0x278]
    let v20: iNone;  // [bp-0x268], Other Possible Types: struct24
    let v21: u64;  // [bp-0x258]
    let v22: u8;  // [bp-0x248]
    let v23: struct24;  // [bp-0x248]
    let v24: struct32;  // [bp-0x248]
    let v25: u128;  // [bp-0x240]
    let v26: u64;  // [bp-0x238]
    let v27: u64;  // [bp-0x230]
    let v28: i64;  // [bp-0x228], Other Possible Types: u128
    let v29: void*;  // [bp-0x220], Other Possible Types: u64
    let v30: &u8;  // [bp-0x218]
    let v31: u8;  // [bp-0x210]
    let v32: u64;  // [bp-0x208]
    let v33: u64;  // [bp-0x200]
    let v34: Option<struct56>;  // [bp-0x1f8], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, struct24
    let v35: void*;  // [bp-0x1f8], Other Possible Types: struct72, u128
    let v36: Result<struct32, struct9>;  // [bp-0x1f8], Other Possible Types: u64
    let v37: u64;  // [bp-0x1f0]
    let v38: u64;  // [bp-0x1f0]
    let v39: &str;  // [bp-0x1e8], Other Possible Types: &u8, struct_1 *
    let v40: u64;  // [bp-0x1e8]
    let v42: u64;  // [bp-0x1e0]
    let v43: void*;  // [bp-0x1d8], Other Possible Types: &str
    let v44: &str;  // [bp-0x1c8]
    let v45: u128;  // [bp-0x148]
    let v46: struct40;  // [bp-0x138]
    let v47: struct92;  // [bp-0x110]
    let v48: struct24;  // [bp-0x110]
    let v49: u128;  // [bp-0x100]
    let v50: u128;  // [bp-0xf0]
    let v51: u128;  // [bp-0xe0]
    let v52: u128;  // [bp-0xd0]
    let v53: u64;  // [bp-0xb8]
    let v54: Result<struct128, struct122>;  // [bp-0xb0]
    let v55: struct40;  // [bp-0x78]
    let v56: u128;  // [bp-0x68]
    let v57: u64;  // [bp-0x48]
    let v58: u64;  // [bp-0x40]
    let v60: struct20;  // xmm0
    let v61: alloc::string::String;  // xmm1
    let v62: u64;  // rax
    let v63: Option<struct24>;  // rax
    let v64: u8;  // dl
    let v65: core::fmt::rt::Argument;  // al
    let v66: u128;  // xmm0
    let v67: i64;  // rax
    let v68: u64;  // rbp
    let v69: Result<struct24, struct24>;  // xmm0
    let v70: struct32;  // xmm1
    let v71: struct40;  // xmm2

    v47 = starship::context::Context::new_module(a1, "docker_context");
    v54 = starship::config::ModuleConfig::try_load(v53);
    if *((&v54 as &char + 120) as &i8) {
        v34 = starship::context::Context::try_begin_scan(a1);
        if let None = v34 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v60 = *((&v54 as &char + 8) as &i128);
        v61 = *((&v54 as &char + 32) as &i128);
        v5 = struct72 {
            field_0: v34 as i64
            field_8: v61
            field_16: <UNKNOWN>
            field_24: v55
            field_40: v60
            field_56: <UNKNOWN>
            field_64: <UNKNOWN>
        };
        if starship::context::ScanDir::is_match(&v5) {
            goto LABEL_b8ff0d;
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
LABEL_b8ff0d:
        v20 = starship::context_env::Env::get_env_os("DOCKER_CONFIG");
        starship::context::Context::get_home(&v34);
        v62 = v34 as i64;
        if (((0 ^ v62) & (0 ^ -(v62))) >> 63) as char {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v10 = *((&v34 as &char + 8) as &i128);
        v5 = v62;
        std::path::Path::join(&v22, v11, v12, ".docker");
        v19 = v26;
        v16 = *(&v22 as &i128);
        if v20.field_0 == 0x8000000000000000 {
            v4 = v19;
            v0 = v16;
        } else {
            v4 = v21;
            v0 = *(&v20.field_0 as &i128);
        }
        v35 as u192 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((&v0 as &char + 8) as &i64), v4);
        v30 = v39;
        v28 = *(&v34.field_0 as &i128);
        std::path::Path::join(&v31, v29, v39, "config.json");
        v35 = 0;
        v37 = 3;
        v39 = "DOCKER_MACHINE_NAME";
        v43 = "DOCKER_HOST";
        v44 = "DOCKER_CONTEXT";
        <core::ops::index_range::IndexRange as core::iter::traits::iterator::Iterator>::try_fold(&v5, &v35 as u192);
        if *(&v5 as &i64) != 0x8000000000000000 {
            v45 = v10;
            if *(&v5 as &i64) == 0x8000000000000000 {
                goto LABEL_b90135;
            }
            v2 = v5;
            v3 = v45;
        } else {
LABEL_b90135:
            v35 = std::fs::metadata(v32, v33);
            if v34 as i64 == 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v40 = v33;
            v35 = *(&v31 as &i128);
            v6 = starship::utils::read_file(&v35);
            v63 = v6.field_0;
            match v63 {
                None => {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                },
                Some(_) => {
                    v18 = *(&v11 as &i128) as u128;
                    v17 = v63;
                    v23 = struct24 {
                        field_0: v18
                        field_16: 0
                    };
                    v36 = serde_json::de::from_trait(&v23, v64);
                    v65 = v36 as i8;
                    if v65 == 6 {
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                    v66 = *((&v36 as &char + 1) as &i128);
                    v12 = *((&v36 as &char + 16) as &i128) as u128;
                    v9 = v66;
                    v8 = v65;
                    v67 = serde_json::value::Value::get(&v8, "currentContext");
                    if !v67 || *(v67 as &i8) != 3 {
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                    v34 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v67 + 16) as &i64), *((v67 + 24) as &i64));
                    v4 = v40;
                    v1 = *(&v34.field_0 as &i128) as u128;
                },
            }
        }
        v16 = struct32 {
            field_0: "default"
            field_16: "desktop-linux"
        };
        v68 = *((&v1 as &char + 8) as &i64);
        vvar_934{stack -504} = struct24 OrderedDict([(0, vvar_410{reg 56}), (8, vvar_760{stack -728}), (16, 𝜙@64b [((12125038, None), vvar_844{stack -488}), ((12124624, None), vvar_831{stack -488})])])
        if <T as core::slice::cmp::SliceContains>::slice_contains(&v34, &v16, 2) || core::slice::<impl [T]>::starts_with(v68, v38, "unix://") {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v7 = starship::formatter::string_formatter::StringFormatter::new(v57, v58);
        v46 = struct40 {
            field_0: v56
            field_16: &v54 as u8
            field_24: &v2 as u8
            field_32: a1
        };
        match v7 {
            Err(_) => {
                v27 = v13;
                v25 = *((&v7 as &char + 8) as &i128) as u128;
            },
            Ok(_) => {
                v69 = v7 as i128;
                v70 = *((&v7 as &char + 16) as &i128);
                v71 = *((&v7 as &char + 32) as &i128);
                v35 = struct72 {
                    field_0: v69
                    field_16: v70
                    field_32: v71
                    field_48: v14
                    field_64: v15
                };
                v24 = starship::modules::docker_context::module::{{closure}}(&v46, &v35);
                if !(v24.field_0 as i8 & 1) {
                    v48 = starship::module::Module::set_segments(&v24 as u8);
                    return struct96 {
                        field_0: v47.field_0
                        field_16: v49
                        field_32: v50
                        field_48: v51
                        field_64: v52
                        field_80: *(&v47.field_80 as &i128)
                    };
                }
            },
        }
        v21 = v27;
        v20 = *(&v24.field_8 as &i128);
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v28 = &v20;
        v29 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        *(&v36 as &&str) = "Error in module `docker_context`:\n";
        v37 = 1;
        v43 = 0;
        v39 = &v28;
        v42 = 1;
        v5 = struct40 {
            field_0: "starship::modules::docker_context"
            field_16: "starship::modules::docker_context"
            field_32: log::__private_api::loc("src/modules/docker_context.rs")
        };
        log::__private_api::log(&v34, 2, &v5);
        return struct8 {
            field_0: 0x8000000000000000
        };
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
