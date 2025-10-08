fn starship::modules::kubernetes::module(a0: u32, a1: u64) -> void {
    let v0: u32;  // [bp-0x44c]
    let v1: struct16;  // [bp-0x448], Other Possible Types: struct33, struct72, Option<struct56>, struct24, u64
    let v2: void*;  // [bp-0x448], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v3: Option<struct72>;  // [bp-0x448]
    let v4: iNone;  // [bp-0x448]
    let v5: u64;  // [bp-0x440]
    let v6: u64;  // [bp-0x440]
    let v7: struct48;  // [bp-0x438]
    let v8: i64;  // [bp-0x438]
    let v9: Result<struct29, struct24>;  // [bp-0x430], Other Possible Types: struct_0 *
    let v10: void*;  // [bp-0x428], Other Possible Types: int
    let v11: i64;  // [bp-0x428]
    let v12: iNone;  // [bp-0x418]
    let v13: u64;  // [bp-0x408]
    let v14: void*;  // [bp-0x3f8], Other Possible Types: struct16, struct40, struct56, struct72, struct_2 *
    let v15: u128;  // [bp-0x3f8]
    let v16: struct24;  // [bp-0x3f8]
    let v17: u64;  // [bp-0x3f8]
    let v18: Result<struct72, struct24>;  // [bp-0x3f8]
    let v19: struct17;  // [bp-0x3f0], Other Possible Types: u128
    let v20: struct40;  // [bp-0x3e8], Other Possible Types: struct_3 *, u128
    let v21: u64;  // [bp-0x3e8]
    let v22: u64;  // [bp-0x3e0]
    let v23: iNone;  // [bp-0x3d8]
    let v24: u64;  // [bp-0x3c8]
    let v25: u128;  // [bp-0x3a8]
    let v26: u64;  // [bp-0x3a0]
    let v27: i64;  // [bp-0x398]
    let v28: Option<struct24>;  // [bp-0x388], Other Possible Types: u8
    let v29: struct24;  // [bp-0x388]
    let v30: struct72;  // [bp-0x388]
    let v31: void*;  // [bp-0x380]
    let v32: u128;  // [bp-0x378]
    let v33: iNone;  // [bp-0x368]
    let v34: iNone;  // [bp-0x358]
    let v35: u64;  // [bp-0x348]
    let v36: struct16;  // [bp-0x338]
    let v37: struct32;  // [bp-0x338]
    let v38: iNone;  // [bp-0x330]
    let v39: u64;  // [bp-0x320]
    let v40: struct24;  // [bp-0x318]
    let v41: u8;  // [bp-0x300]
    let v42: u64;  // [bp-0x2f8]
    let v43: u64;  // [bp-0x2f0]
    let v44: u8;  // [bp-0x2e8]
    let v45: i64;  // [bp-0x2e0]
    let v46: u64;  // [bp-0x2d8]
    let v47: struct24;  // [bp-0x2d0], Other Possible Types: u64
    let v48: u128;  // [bp-0x2b8]
    let v49: iNone;  // [bp-0x2a8]
    let v50: u64;  // [bp-0x298]
    let v51: iNone;  // [bp-0x288]
    let v52: u64;  // [bp-0x278]
    let v53: struct24;  // [bp-0x268]
    let v54: u64;  // [bp-0x260]
    let v55: i64;  // [bp-0x258]
    let v56: u64;  // [bp-0x250]
    let v57: struct40;  // [bp-0x248]
    let v58: struct64;  // [bp-0x218]
    let v59: iNone;  // [bp-0x1d8]
    let v60: u64;  // [bp-0x1c8]
    let v61: u64;  // [bp-0x1b8]
    let v62: iNone;  // [bp-0x1b0]
    let v63: struct92;  // [bp-0x1a0]
    let v64: struct24;  // [bp-0x1a0]
    let v65: struct56;  // [bp-0x190]
    let v66: struct40;  // [bp-0x180]
    let v67: struct48;  // [bp-0x170]
    let v68: struct16;  // [bp-0x160]
    let v69: u64;  // [bp-0x148]
    let v70: Option<struct265>;  // [bp-0x140]
    let v71: u64;  // [bp-0xf0]
    let v72: u64;  // [bp-0xd8]
    let v73: u64;  // [bp-0xd0]
    let v74: struct72;  // [bp-0xc8]
    let v76: u64;  // [bp-0xb8]
    let v77: u64;  // [bp-0xb0]
    let v78: struct72;  // [bp-0xa8]
    let v81: &str;  // bpl
    let v82: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rbp
    let v83: struct24;  // r12
    let v84: u64;  // rdx
    let v85: struct40;  // r13
    let v86: struct72;  // xmm0
    let v87: struct72;  // xmm0
    let v88: struct72;  // r15
    let v91: struct72;  // r12
    let v92: struct24;  // rbp, Other Possible Types: struct72
    let v93: iNone;  // xmm0
    let v95: u64;  // [bp-0x370]
    let v96: struct92;  // [bp-0x2b8]

    v63 = starship::context::Context::new_module(a1, "kubernetes");
    v70 = starship::config::ModuleConfig::try_load(v69);
    if *((&v70 as &char + 264) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if *((&v70 as &char + 88) as &i64) {
        starship::context::Context::detect_env_vars(a0, v71, *((&v70 as &char + 88) as &i64));
    }
    v2 = 0;
    v6 = 3;
    v8 = &v70 as u8;
    v9 = &v70 as u8;
    v11 = &v70;
    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::ops::index_range::IndexRange as core::iter::traits::iterator::Iterator>::try_fold(&v2, &v8 as u8), 0x1) {
        v1 = starship::context::Context::try_begin_scan(a1);
        v14 = &v70;
        v19 = &v70 as u8;
        v20 = &v70 as u8;
        match v1 {
            Some(_) => {
                if (starship::modules::kubernetes::module::{{closure}}::{{closure}}(&v14, v1 as i64) as u32 as u8 & 1) {
                    goto LABEL_ba5eac;
                }
            },
            None => {
                if !(1) {
                    goto LABEL_ba5eac;
                }
            },
        }
    } else if v81 == 2 || (v81 & 1) {
LABEL_ba5eac:
        starship::context::Context::get_home(&v2);
        if (((0 ^ v2) & (0 ^ -(v2))) >> 63) as char {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v19 = *((&v1 as &char + 8) as &i128);
        v14 = v2;
        std::path::Path::join(&v28, v19, v20, ".kube");
        std::path::Path::join(&v41, v31, *(&v32 as &i64), "config");
        v28 = starship::context_env::Env::get_env("KUBECONFIG");
        v2 = core::str::converts::from_utf8(v42, v43);
        match v2 {
            Err(_) => {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
            Ok(_) => {
                v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6, v8);
                v20 = v8;
                v15 = *(&v1.field_0 as &i128) as u128;
                match v28 {
                    None => {
                        v27 = v20;
                        v25 = v15;
                    },
                    Some(_) => {
                        v27 = *((&v28 as &char + 16) as &i64);
                        v25 = v28 as i128 as u128;
                    },
                }
                v1 = struct33 {
                    field_0: std::path::Path::to_path_buf
                    field_8: v26
                    field_16: v27
                    field_24: std::sys::pal::unix::os::split_paths::is_separator
                    field_32: 0
                };
                v0 = &g_a50601;
                core::iter::traits::iterator::Iterator::collect(&v44, &v1);
                v82 = v45;
                v1 = struct16 {
                    field_0: v82
                    field_8: v46 * 64 + v82
                };
                v83 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v1);
                if !v83 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                v85 = v84;
                v53 = v83;
                v54 = v84;
                v14 = struct16 {
                    field_0: v82
                    field_8: v5
                };
                v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v14, v83, v84);
                match v3 {
                    None => {
                        v29 = starship::modules::kubernetes::module::{{closure}}(&v53, &v25 as u8);
                    },
                    Some(_) => {
                        v35 = v13;
                        v86 = v3 as i128;
                        v34 = v12;
                        v33 = v10;
                        *(&v32 as &i32) = vvar_1054{stack -1080};
                        v30 = v86;
                    },
                }
                v36 = struct16 {
                    field_0: v72
                    field_8: v73 * 96 + v72
                };
                v16 = struct24 {
                    field_0: v83
                    field_8: v84
                    field_16: &v29
                };
                v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v36, &v16);
                v57 = struct40 {
                    field_0: *(&v29.field_0 as &i128)
                    field_16: v29.field_16
                    field_24: v83
                    field_32: v84
                };
                match v1 {
                    None => {
                        v14 = starship::modules::kubernetes::module::{{closure}}(&v57);
                    },
                    Some(_) => {
                        v24 = *((&v1 as &char + 48) as &i64);
                        v87 = v1 as i128;
                        v23 = v10;
                        v20 = *((&v1 as &char + 16) as &i128) as u128;
                        v14 = v87;
                    },
                }
                v88 = v22;
                v59 = *(&v17 as &i128);
                v60 = v21;
                v50 = v24;
                v49 = v23;
                v1 = starship::modules::kubernetes::deprecated::get_alias(&v59, &v70 as u8, "context");
                core::option::unwrap(v1);
                v40 = v4;
                if v49 as i64 != 0x8000000000000000 {
                    v61 = v49 as i64;
                    v62 = (&v49)[8] as i128;
                    v47 = starship::modules::kubernetes::deprecated::get_alias(&v61, &v70 as u8, "user");
                }
                if !v88 {
                    v48 = v78.field_0;
                    v91 = 0;
                }
                v18 = starship::formatter::string_formatter::StringFormatter::new(v76, v77);
                if v91 {
                    v92 = v91;
                } else {
                    v92 = v74;
                }
                v58 = struct64 {
                    field_0: v92
                    field_8: v85
                    field_16: &v96
                    field_24: &v40
                    field_32: &v95
                    field_40: &v34
                    field_48: &v47
                    field_56: a1
                };
                match v18 {
                    Err(_) => {
                        v39 = v22;
                        v38 = *((&v18 as &char + 8) as &i128);
                    },
                    Ok(_) => {
                        v93 = v18 as i128;
                        v1 = struct72 {
                            field_0: v93
                            field_16: *((&v18 as &char + 16) as &i128)
                            field_32: v23
                            field_48: *((&v18 as &char + 48) as &i128)
                            field_64: *((&v18 as &char + 64) as &i64)
                        };
                        v37 = starship::modules::kubernetes::module::{{closure}}(&v58, &v1);
                        if !(v37.field_0 as i8 & 1) {
                            v64 = starship::module::Module::set_segments(&v37 as u128);
                            return struct96 {
                                field_0: v63.field_0
                                field_16: v65
                                field_32: v66
                                field_48: v67
                                field_64: v68
                                field_80: *(&v63.field_80 as &i128)
                            };
                        }
                    },
                }
                v52 = v39;
                v51 = v38;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                v55 = &v51;
                v56 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v1 = "Error in module `kubernetes`: \n";
                v5 = 1;
                v10 = 0;
                v7 = &v55;
                v9 = 1;
                v14 = struct40 {
                    field_0: "starship::modules::kubernetes"
                    field_16: "starship::modules::kubernetes"
                    field_32: log::__private_api::loc("src/modules/kubernetes.rs")
                };
                log::__private_api::log(&v1, 2, &v14);
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
