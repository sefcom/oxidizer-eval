fn uu_df::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x6e0], Other Possible Types: struct16
    let v1: i64;  // [sp-0x6d8]
    let v2: i64;  // [sp-0x6d0]
    let v3: i64;  // [sp-0x6c8]
    let v4: i64;  // [sp-0x6c0]
    let v5: i64;  // [sp-0x6b8], Other Possible Types: struct24
    let v6: i64;  // [sp-0x6b0]
    let v7: i64;  // [sp-0x6a8]
    let v8: i64;  // [sp-0x6a0]
    let v9: i192;  // [sp-0x698], Other Possible Types: struct32
    let v10: i64;  // [sp-0x690]
    let v11: i128;  // [sp-0x688]
    let v12: i64;  // [sp-0x678]
    let v13: i64;  // [sp-0x670]
    let v14: struct24;  // [sp-0x668], Other Possible Types: i192
    let v15: struct24;  // [sp-0x650], Other Possible Types: i192
    let v16: i64;  // [sp-0x638]
    let v17: i64;  // [sp-0x630]
    let v18: i64;  // [sp-0x628]
    let v19: i64;  // [sp-0x618]
    let v20: i64;  // [sp-0x610]
    let v21: i64;  // [sp-0x608]
    let v22: i64;  // [sp-0x600]
    let v23: i64;  // [bp-0x5f8], Other Possible Types: Arguments, Enum, String, Argument
    let v24: i64;  // [sp-0x5f0]
    let v25: i64;  // [bp-0x5e8]
    let v26: i32;  // [bp-0x5e0]
    let v27: i64;  // [bp-0x548]
    let v28: i64;  // [sp-0x540]
    let v29: i128;  // [sp-0x538]
    let v30: i128;  // [sp-0x528]
    let v31: i128;  // [sp-0x518]
    let v32: i64;  // [sp-0x500], Other Possible Types: String
    let v33: i64;  // [sp-0x4f8]
    let v34: i64;  // [sp-0x4e8], Other Possible Types: struct24, Arguments, Enum, struct16
    let v35: i64;  // [sp-0x4e0]
    let v36: i64;  // [bp-0x4d8]
    let v37: i64;  // [sp-0x4d0]
    let v38: i8;  // [bp-0x4c8]
    let v40: i64;  // [sp-0x400]
    let v41: i64;  // [bp-0x3f8]
    let v42: i128;  // [sp-0x3e8]
    let v43: i128;  // [sp-0x3d8]
    let v44: i128;  // [sp-0x3c8]
    let v45: i128;  // [sp-0x3b8]
    let v46: i64;  // [sp-0x3a8], Other Possible Types: struct56
    let v47: i64;  // [sp-0x3a0]
    let v48: i192;  // [sp-0x370]
    let v49: i64;  // [sp-0x358], Other Possible Types: Arguments, Enum, struct24, struct712
    let v50: i64;  // [sp-0x350]
    let v51: i64;  // [bp-0x348]
    let v52: i64;  // [bp-0x340]
    let v53: String;  // [sp-0x88], Other Possible Types: i192
    let v54: i512;  // [sp-0x70], Other Possible Types: struct64
    let v56: i64;  // rbx
    let v57: i128;  // xmm0
    let v58: i128;  // xmm1
    let v59: i64;  // r14
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm1
    let v64: i128;  // xmm0
    let v65: i128;  // xmm1
    let v66: i128;  // xmm0
    let v67: i128;  // xmm1
    let v68: i64;  // r14
    let v69: i64;  // r15
    let v70: i128;  // xmm0
    let v71: i64;  // r15
    let v72: i128;  // xmm0
    let v73: i256;  // ymm0
    let v74: i256;  // ymm0
    let v75: i128;  // xmm1
    let v76: i256;  // ymm1
    let v77: i256;  // ymm1
    let v78: i64;  // rdx
    let v79: i64;  // rcx
    let v80: i64;  // r8
    let v81: i64;  // r9
    let v82: i64;  // r14
    let v83: i64;  // rbp
    let v84: i64;  // rsi
    let v85: i64;  // rcx
    let v86: i64;  // r8
    let v87: i64;  // r9
    let v88: i64;  // rcx
    let v89: i128;  // xmm0
    let v90: i128;  // xmm0
    let v92: i64;  // rax
    let v94: i64;  // rbp
    let v95: i64;  // r13
    let v96: i64;  // rsi
    let v97: i64;  // r15
    let v98: i128;  // xmm0
    let v99: i128;  // xmm0
    let v100: i64;  // rax
    let v101: i64;  // rax
    let v102: i64;  // rax
    let v103: i128;  // xmm0
    let v104: i128;  // xmm1
    let v105: i128;  // xmm0
    let v106: i128;  // xmm1
    let v107: i64;  // r15
    let v108: i64;  // rax
    let v109: i64;  // rax
    let v110: i64;  // rbp
    let v111: i64;  // rax
    let v112: i64;  // rax
    let v113: i128;  // xmm0
    let v114: i64;  // rax
    let v115: i128;  // xmm0
    let v116: i64;  // rax
    let v117: i32;  // eax
    let v118: i64;  // rsi
    let v119: i64;  // rdi
    let v120: i64;  // r15
    let v121: i64;  // rax

    v49 = uu_df::uu_app();
    v34 = clap_builder::builder::command::Command::try_get_matches_from(&v49, a0, a1);
    v56 = 0x8000000000000000;
    if v46 == 0x8000000000000000 {
        v59 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v47);
        if !(v59 == &g_0) {
            goto LABEL_43ec3b;
        }
    } else {
        v57 = v36;
        v58 = v38;
        v46 = struct56 {
            field_0: v34
            field_8: v35
            field_16: v57
            field_32: v58
            field_48: v39
        };
        uu_df::Options::from(&v49, &v46);
        v60 = *((&v49 as &char + 8) as &i128);
        v34 = v60;
        v61 = *((&v49 as &char + 24) as &i128);
        v36 = v61;
        if v40 == 0x8000000000000000 {
            v62 = v34;
            v63 = v36;
            v23 = v62;
            v25 = v63;
            v51 = v63;
            v49 = v62;
            v59 = __rust_alloc(32, &g_0);
            v70 = v49;
            *((v59 + &g_10 as &u8) as &i128) = v51;
            *(v59 as &i128) = v70;
            v71 = &g_4fd1a8;
            goto LABEL_43ec25;
        } else {
            v64 = *((&v49 as &char + 40) as &i128);
            v65 = *((&v49 as &char + 56) as &i128);
            v45 = *((&v49 as &char + 72) as &i128);
            v44 = v65;
            v43 = v64;
            v66 = v34;
            v67 = v36;
            v41 = v66;
            v42 = v67;
            v40 = v49;
            v68 = _ZN5uu_df9OPT_PATHS17h09779e8cbded51e4E;
            v69 = g_4fff20;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v49, &v46, v68, v69);
            v54 = clap_builder::parser::error::MatchesError::unwrap(v68, v69, &v49);
            if v54 {
                v72 = v54;
                vvar_165{reg 224} = ((((((((((((vvar_327{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_326{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_343{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_345{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_360{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_367{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_402{reg 224}))
                v75 = *((&v54 as &char + 16) as &i128);
                vvar_166{reg 256} = ((((((((vvar_330{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_329{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_362{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_369{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_404{reg 256}))
                v31 = *((&v54 as &char + 48) as &i128);
                v30 = *((&v54 as &char + 32) as &i128);
                v29 = v75;
                v27 = v72;
                v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27);
                v82 = *((&v15 as &char + 8) as &i64);
                v83 = *((&v15 as &char + 16) as &i64);
                v49 = uucore::features::fsext::read_fs_list(v84, v78, v85, v86, v87);
                if v48 != 0x8000000000000000 {
                    v48 = v49;
                    uu_df::filter_mount_list(&v34, &v48, &v40);
                    v88 = v35;
                    v9 = struct32 {
                        field_0: v88
                        field_8: v88
                        field_16: <UNKNOWN>
                        field_24: <UNKNOWN>
                    };
                    v11 = v34;
                    v14 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v9);
                    v56 = &g_0;
                    v1 = &g_0;
                    v2 = &g_0;
                    if *((&v14 as &char + 16) as &i64) {
                        if !v83 {
                            v56 = &g_0;
                        } else {
                            v19 = &v25;
                            do {
                                v94 = v83 * &g_0;
                                v34 = uu_df::filesystem::Filesystem::from_path(*((&v14 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64), v82, v86, v87);
                                if v34 == 0x8000000000000000 {
                                    v95 = *(v82 as &i64);
                                    v23 = std::fs::metadata(*((v95 + &g_0 as &u8) as &i64), *((v95 + &g_10 as &u8) as &i64));
                                    v96 = v24;
                                    if v23 == 2 {
                                        v98 = *((v95 + &g_0 as &u8) as &i128);
                                        v5 = v98;
                                        v12 = &v5;
                                        v13 = <std::path::Display as core::fmt::Display>::fmt;
                                        v23 = Arguments {
                                            pieces: [&g_4fd0f0, ": No such file or directory"]
                                            args: &[&Argument] {
                                                ptr: &v12
                                                len: <UNKNOWN>
                                            }
                                            fmt: None
                                        };
                                        v26 = &g_0;
                                        v32 = alloc::fmt::format::format_inner(&v23);
                                        *(&v26 as &&i64) = &g_0;
                                        v99 = v32;
                                        v23 = v99;
                                        v25 = *((&v32 as &char + 16) as &i64);
                                        v100 = __rust_alloc(32, &g_0);
                                        v103 = v23;
                                        vvar_258{reg 224} = ((((((vvar_165{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_591{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_609{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_650{reg 224}))
                                        v104 = v25;
                                        vvar_259{reg 256} = ((vvar_166{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_652{reg 256}))
                                        *((v100 + &g_10 as &u8) as &i128) = v104;
                                        *(v100 as &i128) = v103;
                                        v3 = v100;
                                        v4 = &g_4fd050;
                                        uucore::mods::error::set_exit_code();
                                        v12 = uucore::util_name();
                                        v13 = v78;
                                        v5 = &v12;
                                        v6 = <&T as core::fmt::Display>::fmt;
                                        v7 = &v3;
                                        v8 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                                        v23 = Arguments {
                                            pieces: [&g_4fd0c0, ": ", "\n"]
                                            args: &[&Argument] {
                                                ptr: &v5
                                                len: <UNKNOWN>
                                            }
                                            fmt: None
                                        };
                                        v26 = &g_0;
                                        std::io::stdio::_eprint(&v23);
                                        v107 = v4;
                                        v108 = *(v107 as &i64);
                                        v23 = v23;
                                        v24 = v24;
                                        v25 = v25;
                                        if v108 {
                                            v108();
                                            v23 = v23;
                                            v24 = v24;
                                            v25 = v25;
                                        }
                                    } else {
                                        v23 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(&g_10, &g_0);
                                        v101 = v25;
                                        *((v101 + &g_0 as &u8) as &i128) = 133449563180924909905145571156937700217;
                                        *(v101 as &i128) = 43134628824579886221563237417797840750;
                                        *(&v26 as &&i64) = &g_0;
                                        v23 = v24;
                                        v24 = v101;
                                        v25 = &g_10;
                                        v102 = __rust_alloc(32, &g_0);
                                        v105 = v23;
                                        vvar_258{reg 224} = ((((((vvar_165{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x6465737365636f727020736d65747379<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x20736d657473797320656c6966206f6e<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_663{reg 224}))
                                        v106 = *((&v23 as &char + 16) as &i128);
                                        vvar_259{reg 256} = ((vvar_166{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_665{reg 256}))
                                        *((v102 + &g_10 as &u8) as &i128) = v106;
                                        *(v102 as &i128) = v105;
                                        v3 = v102;
                                        v4 = &g_4fd050;
                                        uucore::mods::error::set_exit_code();
                                        v12 = uucore::util_name();
                                        v13 = v78;
                                        v5 = &v12;
                                        v6 = <&T as core::fmt::Display>::fmt;
                                        v7 = &v3;
                                        v8 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                                        v23 = Arguments {
                                            pieces: [&g_4fd0c0, ": ", "\n"]
                                            args: &[&Argument] {
                                                ptr: &v5
                                                len: <UNKNOWN>
                                            }
                                            fmt: None
                                        };
                                        v25 = &v5;
                                        v26 = &g_0;
                                        std::io::stdio::_eprint(&v23);
                                        v107 = v4;
                                        v109 = *(v107 as &i64);
                                        v23 = v23;
                                        v24 = v24;
                                        v25 = v25;
                                        if v109 {
                                            v109();
                                            v23 = v23;
                                            v24 = v24;
                                            v25 = v25;
                                        }
                                    }
                                    v25 = v25;
                                    v24 = v24;
                                    v23 = v23;
                                } else {
                                    memcpy(&v49, &v34, 232);
                                    v97 = v2;
                                    if v97 == v56 {
                                        v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                    }
                                    memmove(v97 * 232 + v1, &v49, 232);
                                    v2 = v97 + &g_0 as &u8;
                                }
                            } while ((v82 += &g_0, v110 = v94 - &g_0, v94 != 8));
                        }
                    } else {
                        v49 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(&g_10, &g_0);
                        if v49 {
                            v19 = &v49;
                        }
                        v111 = v51;
                        *((v111 + &g_0 as &u8) as &i128) = 133449563180924909905145571156937700217;
                        *(v111 as &i128) = 43134628824579886221563237417797840750;
                        *(&v52 as &&i64) = &g_0;
                        v49 = v50;
                        v50 = v111;
                        v51 = &g_10;
                        v112 = __rust_alloc(32, &g_0);
                        v113 = v49;
                        *((v112 + &g_10 as &u8) as &i128) = *((&v49 as &char + 16) as &i128);
                        *(v112 as &i128) = v113;
                        v5 = v112;
                        v6 = &g_4fd050;
                        uucore::mods::error::set_exit_code();
                        v23 = uucore::util_name();
                        v24 = v78;
                        v34 = &v23;
                        v35 = <&T as core::fmt::Display>::fmt;
                        v36 = &v5;
                        v37 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v49 = Arguments {
                            pieces: [&g_4fd0c0, ": ", "\n"]
                            args: &[&Argument] {
                                ptr: &v34
                                len: <UNKNOWN>
                            }
                            fmt: None
                        };
                        v52 = &g_0;
                        std::io::stdio::_eprint(&v49);
                        if *(v6 as &i64) {
                            v114();
                        }
                    }
                }
                if v20 == 0x8000000000000000 {
                    v9 = v21;
                    v10 = v22;
                    v5 = &g_40ad88;
                    v6 = 41;
                    v34 = &v5;
                    v35 = <&T as core::fmt::Display>::fmt;
                    v36 = &v9;
                    v37 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v49 = Arguments {
                        pieces: [&g_4fd110, ": "]
                        args: &[&Argument] {
                            ptr: &v34
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v52 = &g_0;
                    v23 = alloc::fmt::format::format_inner(&v49);
                    v52 = *((v10 + 96) as &i64)();
                    v49 = v23;
                    v51 = v25;
                    v59 = __rust_alloc(32, &g_0);
                    v115 = v49;
                    *((v59 + &g_10 as &u8) as &i64) = v51;
                    *(v59 as &i128) = v115;
                    if *(v10 as &i64) {
                        v116();
                    }
                    v71 = &g_4fd050;
                } else {
                    v20 = v56;
                    v21 = v9;
                    v22 = v10;
                    if !v10 {
                        v71 = &g_0;
                        v59 = &g_0;
                    } else {
                        v18 = v22;
                        v16 = v20;
                        v17 = v21;
                        goto LABEL_43ea87;
                    }
                }
                goto LABEL_43ec18;
            }
            v5 = uu_df::get_all_filesystems(&v40, v78, v79, v80, v81);
            if v9 != 0x8000000000000000 {
                v9 = v5;
                if v1 {
                    v18 = v11;
                    v16 = v9;
                    v17 = v10;
LABEL_43ea87:
                    v36 = v18;
                    v34 = v16;
                    v35 = v17;
                    uu_df::table::Table::new();
                    v23 = Argument {
                        value: &v49
                        formatter: <uu_df::table::Table as core::fmt::Display>::fmt
                    };
                    v34 = Arguments {
                        pieces: [&g_4fd130, "\n"]
                        args: [&v23]
                        fmt: None
                    };
                    std::io::stdio::_print(&v34);
                } else {
                    v34 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v51 = v36;
                    v49 = v34;
                    *(&v52 as &&i64) = &g_0;
                    v59 = alloc::alloc::exchange_malloc();
                    v89 = v49;
                    *((v59 + &g_10 as &u8) as &i128) = *((&v49 as &char + 16) as &i128);
                    *(v59 as &i128) = v89;
                    goto LABEL_43ec11;
                }
            } else {
                v0 = v10;
                v1 = v7;
                v32 = &g_40ad88;
                v33 = 41;
                v34 = &v32;
                v35 = <&T as core::fmt::Display>::fmt;
                v36 = &v0;
                v37 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v49 = Arguments {
                    pieces: [&g_4fd110, ": "]
                    args: &[&Argument] {
                        ptr: &v34
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v52 = &g_0;
                v23 = alloc::fmt::format::format_inner(&v49);
                v52 = *((v1 + 96) as &i64)();
                v49 = v23;
                v51 = v25;
                v59 = __rust_alloc(32, &g_0);
                v90 = v49;
                *((v59 + &g_10 as &u8) as &i64) = v51;
                *(v59 as &i128) = v90;
                v92 = *(v1 as &i64);
                if v92 {
                    v92();
                }
LABEL_43ec11:
                v71 = &g_4fd050;
LABEL_43ec18:
LABEL_43ec25:
                if v59 {
LABEL_43ec3b:
                    v27 = v59;
                    v28 = v71;
                    v34 = &v27;
                    v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v49 = Arguments {
                        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                        args: &[&Argument] {
                            ptr: vvar_11{reg 56}
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v52 = &g_0;
                    v53 = alloc::fmt::format::format_inner(&v49);
                    v34 = v53;
                    v118 = *((&v53 as &char + 16) as &i64);
                    v36 = *((&v53 as &char + 16) as &i64);
                    v119 = v35;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, *((&v53 as &char + 16) as &i64), &g_0, &g_0) as i8 {
                        v23 = uucore::util_name();
                        v24 = v78;
                        v40 = &v23;
                        v41 = <&T as core::fmt::Display>::fmt;
                        v49 = Arguments {
                            pieces: [&g_4fd110, ": "]
                            args: &[&Argument] {
                                ptr: &v40
                                len: <UNKNOWN>
                            }
                            fmt: None
                        };
                        v52 = &g_0;
                        std::io::stdio::_eprint(&v49);
                        v23 = v51;
                        v24 = <alloc::string::String as core::fmt::Display>::fmt;
                        v49 = Arguments {
                            pieces: [&g_4fd130, "\n"]
                            args: &[&Argument] {
                                ptr: &v23
                                len: <UNKNOWN>
                            }
                            fmt: None
                        };
                        v52 = &g_0;
                        std::io::stdio::_eprint(&v49);
                    }
                    if *((v28 + 104) as &i64)() {
                        v23 = uucore::execution_phrase();
                        v24 = v78;
                        v40 = &v23;
                        v41 = <&T as core::fmt::Display>::fmt;
                        v49 = Arguments {
                            pieces: ["Try '", " --help' for more information.\n"]
                            args: &[&Argument] {
                                ptr: &v40
                                len: <UNKNOWN>
                            }
                            fmt: None
                        };
                        v51 = &v40;
                        v52 = &g_0;
                        std::io::stdio::_eprint(&v49);
                    }
                    v117 = *((v28 + 96) as &i64)();
                    v120 = v28;
                    if *(v120 as &i64) {
                        v121();
                    }
                    if *((v120 + &g_0 as &u8) as &i64) {
                        return v117;
                    }
                    return v117;
                }
            }
        }
    }
    v117 = uucore::mods::error::get_exit_code() as i32;
    return v117;
}
