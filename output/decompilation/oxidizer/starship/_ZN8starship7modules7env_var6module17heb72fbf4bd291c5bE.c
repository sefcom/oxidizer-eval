fn starship::modules::env_var::module(a0: i64, a1: i128, a2: u64) -> int {
    let v0: struct72;  // [bp-0x288], Other Possible Types: u64
    let v1: u64;  // [bp-0x280]
    let v2: i64;  // [bp-0x278], Other Possible Types: u128
    let v3: u64;  // [bp-0x270]
    let v4: void*;  // [bp-0x268], Other Possible Types: int
    let v5: iNone;  // [bp-0x258]
    let v6: u64;  // [bp-0x248]
    let v7: struct16;  // [bp-0x238], Other Possible Types: struct20, struct24
    let v8: struct24;  // [bp-0x238], Other Possible Types: struct80
    let v9: struct105;  // [bp-0x238]
    let v10: u64;  // [bp-0x230]
    let v11: struct16;  // [bp-0x228]
    let v12: u64;  // [bp-0x220]
    let v13: void*;  // [bp-0x218]
    let v14: u64;  // [bp-0x218]
    let v15: u64;  // [bp-0x210]
    let v17: u64;  // [bp-0x208]
    let v18: u64;  // [bp-0x200]
    let v20: struct16;  // [bp-0x1f8]
    let v21: struct40;  // [bp-0x1f0]
    let v22: struct8;  // [bp-0x1f0]
    let v23: Option<struct24>;  // [bp-0x1d0]
    let v24: struct24;  // [bp-0x1b8]
    let v25: Result<struct72, struct24>;  // [bp-0x1a0], Other Possible Types: struct40
    let v26: u64;  // [bp-0x188]
    let v27: u128;  // [bp-0x170]
    let v28: u64;  // [bp-0x160]
    let v29: struct92;  // [bp-0x158], Other Possible Types: u8
    let v30: iNone;  // [bp-0x158]
    let v31: struct24;  // [bp-0x158]
    let v32: iNone;  // [bp-0x148], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v33: iNone;  // [bp-0x138]
    let v34: iNone;  // [bp-0x128]
    let v35: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x118]
    let v36: struct32;  // [bp-0x108]
    let v37: struct32;  // [bp-0xf8]
    let v38: iNone;  // [bp-0xf0]
    let v39: u64;  // [bp-0xe0]
    let v40: iNone;  // [bp-0xd8]
    let v41: u64;  // [bp-0xc8]
    let v42: u64;  // [bp-0xc0]
    let v43: u64;  // [bp-0xb8]
    let v44: i64;  // [bp-0xb0]
    let v45: u64;  // [bp-0xa8]
    let v46: struct40;  // [bp-0xa0]
    let v47: std::io::error::Error;  // [bp-0xa0]
    let v48: &str;  // [bp-0x98], Other Possible Types: int
    let v49: iNone;  // [bp-0x88]
    let v50: iNone;  // [bp-0x78]
    let v51: iNone;  // [bp-0x68]
    let v52: u64;  // [bp-0x58]
    let v53: struct40;  // [bp-0x50]
    let v55: struct8;  // r15
    let v56: struct16;  // r12
    let v57: u64;  // rcx
    let v58: Option<struct56>;  // rdi
    let v59: struct96;  // rax
    let v60: struct16;  // rax
    let v61: core::option::Option<&str>;  // rax
    let v62: u64;  // rax
    let v64: struct16;  // rdx
    let v65: struct32;  // rdx
    let v66: iNone;  // xmm0
    let v67: i64;  // [bp-0x288]
    let v70: iNone;  // [bp-0x1b8]
    let v71: &str;  // [bp-0x1a0]
    let v72: u64;  // [bp-0x198]

    v55 = a2;
    v56 = a1;
    v58 = v57 + 488;
    if a1 {
        v7 = struct16 {
            field_0: "env_var"
        };
        v11 = a1;
        v12 = a2;
        v59 = starship::config::StarshipConfig::get_config(v58, &v7, 2);
        v47 = v60;
        v71 = a1;
        v72 = a2;
        v67 = &v71;
        v1 = <&T as core::fmt::Display>::fmt;
        v7 = "env_var.";
        v10 = 1;
        v13 = 0;
        v11 = &v67;
        v12 = 1;
        core::option::Option<T>::map_or_else(&v29, 0, a2, &v7);
        v24 = v29;
        v46 = v47;
        if v46 == 9223372036854775814 {
            goto LABEL_b934c2;
        }
        goto LABEL_b934ca;
    } else {
        v61 = starship::config::StarshipConfig::get_module_config(v58, "env_var");
        if let None = v61 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v8 = starship::modules::env_var::filter_config(v61);
        v62 = v8.field_0;
        if v62 != 9223372036854775814 {
            v35 = v21;
            v34 = *((&v8.field_48 as &char + 8) as &i128);
            v33 = *((&v8.field_32 as &char + 8) as &i128);
            v32 = *((&v8.field_16 as &char + 8) as &i128);
            v30 = *((&v8.field_0 as &char + 8) as &i128);
            if v62 != 9223372036854775815 {
                v6 = v35;
                v5 = v34;
                v4 = v33;
                *(&v2 as &core::result::Result<&str, core::str::error::Utf8Error>) = v32;
                *(&v0 as void*) = v30;
                if v62 != 9223372036854775816 {
                    v52 = v6;
                    v51 = v5;
                    v50 = v4;
                    v49 = v2;
                    v48 = v0;
                    v47 = v62;
                    v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("env_var");
                    v24 = v7;
                    v46 = v47;
                    if v46 == 9223372036854775814 {
LABEL_b934c2:
                    }
LABEL_b934ca:
                    vvar_951{stack -568} = struct105 OrderedDict([(0, 𝜙@64b [((12137666, None), vvar_553{stack -568}), ((12137484, None), vvar_519{stack -568})]), (16, 𝜙@64b [((12137666, None), vvar_555{stack -552}), ((12137484, None), vvar_521{stack -552})]), (32, 𝜙@64b [((12137666, None), vvar_565{stack -536}), ((12137484, None), vvar_531{stack -536})]), (48, 𝜙@64b [((12137666, None), vvar_573{stack -520}), ((12137484, None), vvar_539{stack -520})]), (64, 𝜙@64b [((12137666, None), vvar_575{stack -504}), ((12137484, None), vvar_541{stack -504})])])
                    starship::config::ModuleConfig::try_load(&v9, v48);
                    v29 = starship::module::Module::new(&v70, v17, v18);
                    if v9.field_96 {
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                    if v20 {
                        v56 = v20;
                    }
                    if v56 {
                        if v20 {
                            v55 = v22;
                        }
                        v23 = starship::context_env::Env::get_env(v56, v55);
                        if !*(v64 as &i64) {
                            return struct8 {
                                field_0: 0x8000000000000000
                            };
                        }
                        v42 = *(v64 as &i64);
                        v43 = *(v65 as &i64);
                        v25 = starship::formatter::string_formatter::StringFormatter::new(v14, v15);
                        v53 = struct40 {
                            field_0: v9.field_0
                            field_16: &v9 as u64
                            field_24: &v42
                            field_32: v57
                        };
                        match v25 {
                            Err(_) => {
                                v39 = v26;
                                v38 = *((&v25 as &char + 8) as &i128);
                            },
                            Ok(_) => {
                                v66 = v25 as i128;
                                v0 = struct72 {
                                    field_0: v66
                                    field_16: *((&v25 as &char + 16) as &i128)
                                    field_32: *((&v25 as &char + 32) as &i128)
                                    field_48: v27
                                    field_64: v28
                                };
                                v37 = starship::modules::env_var::module::{{closure}}(&v53, &v0);
                                if !(v37.field_0 as i8 & 1) {
                                    v31 = starship::module::Module::set_segments(&v37 as u8);
                                    return struct96 {
                                        field_0: v29.field_0
                                        field_16: v32
                                        field_32: v33
                                        field_48: v34
                                        field_64: v29.field_64
                                        field_80: v36
                                    };
                                }
                            },
                        }
                        v41 = v39;
                        v40 = v38;
                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                            return struct8 {
                                field_0: 0x8000000000000000
                            };
                        }
                        v44 = &v40;
                        v45 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                        v0 = "Error in module `env_var`:\n";
                        v1 = 1;
                        v4 = 0;
                        v2 = &v44;
                        v3 = 1;
                        v25 = struct40 {
                            field_0: "starship::modules::env_var"
                            field_16: "starship::modules::env_var"
                            field_32: log::__private_api::loc("src/modules/env_var.rs")
                        };
                        log::__private_api::log(&v0, 2, &v25);
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
            }
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
