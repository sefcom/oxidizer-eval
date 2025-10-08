fn starship::modules::directory::module(a0: i64, a1: i64) -> void {
    let v0: u32;  // [bp-0x490]
    let v1: u32;  // [sp-0x48c]
    let v2: void*;  // [bp-0x488], Other Possible Types: struct24, struct66, u8
    let v3: u128;  // [bp-0x488]
    let v4: u128;  // [bp-0x488]
    let v5: Option<struct24>;  // [bp-0x488], Other Possible Types: struct24, u192
    let v6: u64;  // [bp-0x480]
    let v7: i64;  // [bp-0x478], Other Possible Types: struct_5 *, u128
    let v8: u64;  // [bp-0x470]
    let v9: void*;  // [bp-0x468], Other Possible Types: int
    let v10: iNone;  // [bp-0x468]
    let v11: iNone;  // [bp-0x468]
    let v12: iNone;  // [bp-0x458]
    let v13: iNone;  // [bp-0x458]
    let v14: u16;  // [bp-0x448]
    let v15: struct32;  // [bp-0x440], Other Possible Types: struct_6 *
    let v16: u128;  // [bp-0x438]
    let v17: void*;  // [bp-0x430]
    let v18: u64;  // [bp-0x428]
    let v19: struct92;  // [bp-0x420]
    let v20: core::str::pattern::CharSearcher;  // [bp-0x418], Other Possible Types: struct40, u128
    let v21: core::str::pattern::CharSearcher;  // [bp-0x418], Other Possible Types: u64
    let v22: struct24;  // [bp-0x418], Other Possible Types: u64
    let v23: void*;  // [bp-0x408]
    let v24: void*;  // [bp-0x408], Other Possible Types: struct24
    let v25: void*;  // [bp-0x408]
    let v26: struct24;  // [bp-0x3f8], Other Possible Types: u64
    let v27: u64;  // [bp-0x3f8]
    let v29: iNone;  // [bp-0x3e8]
    let v30: void*;  // [bp-0x3d8], Other Possible Types: u64
    let v31: struct40;  // [bp-0x3d0], Other Possible Types: struct_2 *, struct_3 *, struct_4 *, void*
    let v32: u64;  // [bp-0x3c8]
    let v33: void*;  // [bp-0x3c0]
    let v34: u128;  // [sp-0x3a8]
    let v35: u64;  // [bp-0x3a0]
    let v36: i64;  // [bp-0x398]
    let v38: void*;  // [bp-0x388], Other Possible Types: struct24, u128
    let v39: u64;  // [bp-0x380]
    let v40: i64;  // [bp-0x378]
    let v41: u8;  // [bp-0x368]
    let v42: u64;  // [bp-0x360]
    let v43: void*;  // [bp-0x358], Other Possible Types: u64
    let v44: i64;  // [bp-0x348]
    let v45: u128;  // [bp-0x338]
    let v46: u64;  // [bp-0x330]
    let v47: i64;  // [bp-0x328]
    let v48: u64;  // [bp-0x318]
    let v49: i64;  // [bp-0x310], Other Possible Types: u8
    let v50: void*;  // [bp-0x308], Other Possible Types: u64
    let v51: struct16;  // [bp-0x2f8]
    let v52: void*;  // [bp-0x2e8]
    let v53: u128;  // [bp-0x2e0]
    let v54: u64;  // [bp-0x2d8]
    let v55: i64;  // [bp-0x2d0], Other Possible Types: void*
    let v56: iNone;  // [bp-0x2c8]
    let v57: void*;  // [bp-0x2b8]
    let v58: struct24;  // [bp-0x2b0]
    let v59: u64;  // [bp-0x2a8]
    let v60: i64;  // [bp-0x2a0]
    let v61: u64;  // [bp-0x298]
    let v62: u128;  // [bp-0x290]
    let v63: u64;  // [bp-0x288]
    let v64: u64;  // [bp-0x280]
    let v65: struct56;  // [bp-0x278], Other Possible Types: u8
    let v68: struct56;  // [bp-0x260]
    let v70: struct32;  // [bp-0x248]
    let v71: struct92;  // [bp-0x228]
    let v72: struct24;  // [bp-0x228]
    let v73: u128;  // [bp-0x218]
    let v74: u128;  // [bp-0x208]
    let v75: u128;  // [bp-0x1f8]
    let v76: u128;  // [bp-0x1e8]
    let v77: u64;  // [bp-0x1d0]
    let v78: struct96;  // [bp-0x1c8]
    let v79: struct148;  // [bp-0x168]
    let v80: u64;  // [bp-0x160]
    let v81: u64;  // [bp-0x100]
    let v82: u64;  // [bp-0xf8]
    let v83: u128;  // [bp-0xf0]
    let v84: u128;  // [bp-0xe0]
    let v85: void*;  // [bp-0xd0]
    let v86: u32;  // [bp-0xc8]
    let v87: u64;  // [bp-0xc0]
    let v88: u32;  // [bp-0xb8]
    let v89: u64;  // [bp-0xb0]
    let v90: i64;  // [bp-0xa8]
    let v91: u64;  // [bp-0xa0]
    let v92: u64;  // [bp-0x90]
    let v93: u8;  // [bp-0x80]
    let v95: u8;  // [bp-0x7d]
    let v96: Result<struct72, struct24>;  // [bp-0x78]
    let v97: u128;  // [bp-0x70]
    let v99: i64;  // rcx
    let v100: struct92;  // rcx
    let v101: struct700;  // rdx
    let v103: struct700;  // rbx
    let v104: struct24;  // rdi
    let v105: Option<struct24>;  // rax
    let v106: struct56;  // r13
    let v107: Option<struct24>;  // r13
    let v108: u64;  // r13
    let v109: u64;  // r12
    let v110: void*;  // r14
    let v112: void*;  // r15
    let v113: u64;  // rbx
    let v114: u32;  // eax
    let v115: Option<struct48>;  // xmm0
    let v116: struct24;  // xmm1
    let v117: struct24;  // xmm2
    let v118: struct24;  // xmm3
    let v119: u64;  // rax
    let v120: Result<struct24, struct24>;  // rcx
    let v122: u64;  // r13
    let v123: u64;  // r12
    let v124: u64;  // r14
    let v125: u64;  // rbp
    let v127: u64;  // [bp-0x488]
    let v129: u64;  // [bp-0x418]
    let v130: u64;  // [bp-0x3f8]

    v71 = starship::context::Context::new_module(a1, "directory");
    v79 = starship::config::ModuleConfig::try_load(v77);
    starship::context::Context::get_home(&v2);
    if (((0 ^ v127) & (0 ^ -(v127))) >> 63) as char {
        core::option::expect_failed("Unable to determine HOME_DIR for user"); /* do not return */
    }
    v47 = v7;
    v45 = *(&v127 as &i128);
    v99 = a1;
    v48 = v99 + 176;
    v100 = v99 + 200;
    v19 = v48;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
        v15 = &v45;
        v31 = &v15;
        v32 = <&T as core::fmt::Debug>::fmt;
        v127 = "Home dir: ";
        v6 = 1;
        v9 = 0;
        v7 = &v31;
        v8 = 1;
        v20 = struct40 {
            field_0: "starship::modules::directory"
            field_16: "starship::modules::directory"
            field_32: log::__private_api::loc("src/modules/directory.rs")
        };
        log::__private_api::log(&v127, 4, &v20);
    }
    v9 = v11;
    v20 = v21;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
        v15 = &v48;
        v31 = &v15;
        v32 = <&T as core::fmt::Debug>::fmt;
        v127 = "Physical dir: ";
        v6 = 1;
        v9 = 0;
        v7 = &v31;
        v8 = 1;
        v20 = struct40 {
            field_0: "starship::modules::directory"
            field_16: "starship::modules::directory"
            field_32: log::__private_api::loc("src/modules/directory.rs")
        };
        log::__private_api::log(&v127, 4, &v20);
        v9 = v10;
        v20 = v22;
        v24 = v25;
        v26 = v27;
    }
    v129 = v20;
    v23 = v24;
    v130 = v26;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
        v15 = &v19;
        v31 = &v15;
        v32 = <&T as core::fmt::Debug>::fmt;
        v127 = "Display dir: ";
        v6 = 1;
        v9 = 0;
        v7 = &v31;
        v8 = 1;
        v20 = struct40 {
            field_0: "starship::modules::directory"
            field_16: "starship::modules::directory"
            field_32: log::__private_api::loc("src/modules/directory.rs")
        };
        log::__private_api::log(&v127, 4, &v20);
        v9 = v10;
        v129 = v22;
        v23 = v25;
        v130 = v27;
    }
    if v91 || v93 {
        v103 = (!(starship::context::Context::get_repo(a1) & 1) ? v101 : 0);
        if v93 {
            if v103 {
                v103 = v101;
            }
            v105 = core::option::Option<T>::filter(v104, v46, v47);
            if let None = v105 {
                starship::modules::directory::contract_repo_path(&v65, *((v19 + 8) as &i64), *((v19 + 16) as &i64), *((v105 + 8) as &i64), *((v105 + 16) as &i64));
                v106 = v65;
            }
        }
    }
    v70 = struct32 {
        field_0: v19
        field_8: &v45 as u8
        field_16: v87
        field_24: v88
    };
    if v106 == 0x8000000000000000 {
        v68 as u192 = starship::modules::directory::module::{{closure}}(&v70);
    }
    v58 = starship::modules::directory::substitute_path(&v68 as u192, v80, v79.field_88);
    v64 = v89;
    v5 = starship::modules::utils::directory::truncate(v59, v60, v89);
    match v5 {
        None => {
            v34 = v58.field_48;
            v36 = v60;
            if v106 == 0x8000000000000000 {
                v38 = 0;
                v39 = 1;
                v40 = 0;
                v1 = 0;
                if v103 {
                    goto LABEL_b8d63f;
                }
            } else {
                v1 = 0;
                v107 = v90;
                if v90 <= 0 || v79.field_120 {
                    goto LABEL_b8d606;
                }
                v2 as u192 = starship::modules::directory::contract_path(*((v19 + 8) as &i64), *((v19 + 16) as &i64), v46, v47, v87, v88);
                v38 = starship::modules::directory::to_fish_style(v107, v6, v7, v35, v36);
                if v103 {
LABEL_b8d63f:
                    if ((!v91) as u8 as u8 | (*((v103 + 832) as &i64) == 0x8000000000000000) as u8 as u8) != 1 {
                        starship::modules::directory::contract_repo_path(&v2 as u192, *((v19 + 8) as &i64), *((v19 + 16) as &i64), *((v103 + 840) as &i64), *((v103 + 848) as &i64));
                        if v5 as i64 == 0x8000000000000000 {
                            return struct8 {
                                field_0: 0x8000000000000000
                            };
                        }
                        v62 = *(&v6 as &i128) as u128;
                        v61 = v5 as i64;
                        v108 = v62 as i64;
                        v109 = v63;
                        v20 = <char as core::str::pattern::Pattern>::into_searcher(0x2f, v108, v109);
                        v12 = *(&v27 as &i128);
                        v9 = *(&v20.finger as &i128);
                        v7 = *(&v20.haystack.data_ptr as &i128) as u128;
                        v2 = 0;
                        v6 = v109;
                        v14 = 1;
                        core::iter::traits::iterator::Iterator::collect(&v49, &v2);
                        v110 = v50;
                        v0 = alloc::str::<impl str>::replacen(&v41, v108, v109, *(v110 as &i64), v110[8] as i64) as u32 & -0x100 | 1;
                        v21 = <char as core::str::pattern::Pattern>::into_searcher(0x2f, v42, v43);
                        v4 as u576 = struct66 {
                            field_0: 0
                            field_8: v43
                            field_16: *(&v21.haystack.data_ptr as &i128)
                            field_32: *(&v21.finger as &i128)
                            field_48: *(&v21.utf8_encoded as &i128)
                            field_64: 1
                        };
                        if v64 && core::iter::traits::iterator::Iterator::fold(&v4 as u576) - 1 >= v64 {
                            v15 = 0;
                            v16 = 1;
                            v17 = 0;
                            v31 = 0;
                            v32 = 1;
                            v33 = 0;
                            v7 = v40;
                            v3 = *(&v38 as &i128) as u128;
                            v22 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v4 as u576, v35 as u32);
                            v51 = *(&v15 as &i128);
                            v52 = 0;
                            v53 = *(&v31 as &i128) as u128;
                            v55 = 0;
                            v56 = v22.field_48;
                            v57 = v23;
                        } else {
                            v112 = *(v110 as &i64);
                            v113 = v110[8] as i64;
                            v114 = starship::modules::directory::before_root_dir(v35, v36, v108, v109) as u32;
                            v7 = v40;
                            v4 = *(&v38 as &i128) as u128;
                            v0 = 0;
                            v22 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v4 as u576, v114);
                            v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v112, v113);
                            v55 = v7;
                            v53 = v2.field_48;
                            v56 = *(&v41 as &i128);
                            v57 = v43;
                            v51 = v22.field_48;
                            v52 = v23;
                        }
                        v9 = v10;
                        if !v95 {
LABEL_b8db60:
                            v30 = v57;
                            v115 = v51;
                            v116 = *(&v52 as &i128);
                            v117 = *(&v54 as &i128);
                            v118 = v56;
LABEL_b8db90:
                            v29 = v118;
                            *(&v26.field_48 as void*) = v9;
                            v24 = v116;
                            *(&v20 as &Option<struct48>) = v115;
                            v122 = v81;
                            v123 = v82;
                            v96 = starship::formatter::string_formatter::StringFormatter::new(*((&v79 as &u8 + v120) as &i64), *((&v79 as &u8 + v119) as &i64));
                            if !v92 {
                                v124 = v123;
                            }
                            if !v92 {
                                v92 = v122;
                            }
                            if !v91 {
                                v125 = v122;
                                if !v91 {
                                    goto LABEL_b8dc41;
                                }
                            } else {
                                v125 = v91;
                                if !v91 {
LABEL_b8dc41:
                                }
                            }
                            v78 = struct96 {
                                field_0: &v81
                                field_8: v83
                                field_24: v84
                                field_40: v125
                                field_48: v123
                                field_56: v92
                                field_64: v124
                                field_72: &v129
                                field_80: v48
                                field_88: a1
                            };
                            match v96 {
                                Err(_) => {
                                    v18 = *((&v96 as &char + 24) as &i64);
                                    v16 = v97;
                                },
                                Ok(_) => {
                                    v15 = starship::modules::directory::module::{{closure}}(&v78, &v96);
                                    if !(v15.field_0 as i8 & 1) {
                                        v72 = starship::module::Module::set_segments(&v16);
                                        *((v44 + 80) as &i128) = *(&v71.field_80 as &i128);
                                        *((v44 + 64) as &u128) = v76;
                                        *((v44 + 48) as &u128) = v75;
                                        *((v44 + 32) as &u128) = v74;
                                        *((v44 + 16) as &u128) = v73;
                                        *(v44 as &u128) = v72.field_48;
                                        return;
                                    }
                                },
                            }
                            v43 = v18;
                            v41 = *(&v16 as &i128) as u128;
                            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                                return struct8 {
                                    field_0: 0x8000000000000000
                                };
                            }
                            v49 = &v41;
                            v50 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                            v2 = "Error in module `directory`:\n";
                            v6 = 1;
                            v9 = 0;
                            v7 = &v49;
                            v8 = 1;
                            v31 = struct40 {
                                field_0: "starship::modules::directory"
                                field_16: "starship::modules::directory"
                                field_32: log::__private_api::loc("src/modules/directory.rs")
                            };
                            log::__private_api::log(&v2, 2, &v31);
                            return struct8 {
                                field_0: 0x8000000000000000
                            };
                        }
LABEL_b8d747:
                        core::array::drain::drain_array_with(&v127, &v51);
                        v30 = *(&v2.field_64 as &i64);
                        v115 = v2.field_48;
                        v116 = v2.field_16;
                        v118 = v13;
                        goto LABEL_b8db90;
                    }
                }
            }
        },
        Some(_) => {
            v36 = v7;
            v34 = v5 as i128 as u128;
            v1 = v36 as u32 & -0x100 | 1;
            v107 = v90;
LABEL_b8d606:
            v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v85, v86);
            v40 = v7;
            v38 = v5.field_48;
            if v103 {
                goto LABEL_b8d63f;
            }
        },
    }
    v15 = 0;
    v16 = 1;
    v17 = 0;
    v31 = 0;
    v32 = 1;
    v33 = 0;
    v7 = v40;
    v2 = *(&v38 as &i128);
    v22 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v2, v35);
    v51 = *(&v15 as &i128);
    v52 = 0;
    v53 = *(&v31 as &i128);
    v55 = 0;
    v56 = v22.field_48;
    v57 = v23;
    if !v95 {
        goto LABEL_b8db60;
    }
    goto LABEL_b8d747;
}
