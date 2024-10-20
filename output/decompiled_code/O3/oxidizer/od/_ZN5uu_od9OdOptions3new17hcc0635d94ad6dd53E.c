fn uu_od::OdOptions::new(a0: void*, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x1a9]
    let v1: i64;  // [bp-0x1a8], Other Possible Types: Arguments, Enum, struct24, struct40
    let v2: i64;  // [sp-0x1a0]
    let v3: i64;  // [sp-0x198]
    let v4: i64;  // [sp-0x190]
    let v5: i64;  // [sp-0x188]
    let v6: i64;  // [sp-0x170]
    let v7: i64;  // [sp-0x168]
    let v8: i64;  // [sp-0x160]
    let v9: i64;  // [sp-0x158]
    let v10: i64;  // [sp-0x150]
    let v11: i32;  // [sp-0x144]
    let v12: i128;  // [bp-0x140], Other Possible Types: Argument, String
    let v13: i64;  // [sp-0x138]
    let v14: i8;  // [bp-0x130]
    let v15: i8;  // [bp-0x120]
    let v16: i128;  // [sp-0x118], Other Possible Types: String, Argument, Enum
    let v17: Argument;  // [sp-0x110], Other Possible Types: i64
    let v18: i128;  // [bp-0x108]
    let v19: i32;  // [bp-0x100]
    let v20: i64;  // [sp-0xf8]
    let v21: i64;  // [sp-0xe0], Other Possible Types: Argument
    let v22: i64;  // [sp-0xd8]
    let v23: i64;  // [sp-0xd0]
    let v24: i64;  // [sp-0xc8]
    let v25: i64;  // [sp-0xc0]
    let v26: i64;  // [sp-0xb8]
    let v27: i64;  // [sp-0xb0]
    let v28: i64;  // [sp-0xa8]
    let v29: i64;  // [sp-0xa0]
    let v30: i64;  // [sp-0x98]
    let v31: i64;  // [sp-0x90]
    let v32: i64;  // [sp-0x88]
    let v33: i64;  // [sp-0x80]
    let v34: struct24;  // [sp-0x78], Other Possible Types: i192
    let v35: struct24;  // [sp-0x60], Other Possible Types: i192
    let v36: struct24;  // [sp-0x48], Other Possible Types: i192
    let v39: i64;  // rcx
    let v40: i64;  // rax
    let v41: i64;  // rcx
    let v42: i32;  // eax
    let v43: i16;  // cx
    let v44: i64;  // rax
    let v45: i64;  // rax
    let v46: i128;  // xmm0
    let v47: i64;  // rax
    let v48: i128;  // xmm0
    let v49: i64;  // r12
    let v50: i64;  // rbp
    let v51: i64;  // rax
    let v53: i64;  // r12
    let v54: i64;  // rbx
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // rbp
    let v58: i64;  // r12
    let v59: i64;  // rbx
    let v60: i64;  // rbx
    let v61: i64;  // rax
    let v62: i64;  // r12
    let v63: i64;  // rax
    let v64: i64;  // rax
    let v65: i64;  // r14
    let v66: i64;  // 4096
    let v67: i64;  // r15
    let v69: i64;  // rbx
    let v70: i64;  // rax
    let v71: i64;  // rcx
    let v72: i64;  // rsi
    let v73: i64;  // rdx
    let v74: i64;  // r8
    let v75: i64;  // rdi
    let v76: i64;  // r10
    let v77: i64;  // r12
    let v78: i64;  // rbp
    let v79: i64;  // rax
    let v80: i64;  // rsi
    let v82: i64;  // r13
    let v83: i64;  // rbx
    let v84: i64;  // rax
    let v85: i64;  // r9
    let v86: i64;  // rcx
    let v87: i64;  // rdx
    let v88: i64;  // rdi
    let v89: i64;  // rcx
    let v90: i64;  // r8
    let v92: i64;  // r8
    let v94: i64;  // r8
    let v96: i64;  // r8
    let v97: i64;  // rsi
    let v98: i64;  // rdi
    let v99: i64;  // rdx
    let v100: i64;  // rax
    let v101: i64;  // r12
    let v102: i64;  // rbp
    let v103: i64;  // rbp
    let v105: i64;  // r13
    let v106: i64;  // rbx
    let v107: i64;  // rax
    let v108: i64;  // rcx
    let v109: i128;  // xmm0
    let v110: i64;  // rdi
    let v111: i64;  // rcx
    let v112: i64;  // rcx
    let v113: i64;  // rax
    let v114: i64;  // r15
    let v115: i64;  // r12
    let v116: i64;  // rbx
    let v117: i64;  // rcx

    v21 = &g_41cd9b;
    v22 = 6;
    if v12 != 2 {
        v20 = v15;
        v48 = *(&v12.value as &i128);
        v18 = v14;
        v16 = v48;
        v7 = &v21;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &v16;
        v10 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v1 = "Mismatch between definition and access of `";
        v2 = 2;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        v1 = core::panicking::panic_fmt();
    }
    v39 = v13;
    if !v39 {
        v42 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, &g_41cd9b, 6) | -0x100 | 2;
        goto LABEL_49045d;
    } else {
        v33 = v39;
        v40 = *((v39 + 8) as &i64);
        switch (v41) {
        case 3:
            v43 = *(v40 as &i16) ^ 26978;
            v44 = *((v40 + 2) as &i8) ^ 103;
            if !(!v44 && !v43) {
                v12 = Argument {
                    value: &v33
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v1 = Arguments {
                    pieces: ["Invalid argument --endian="]
                    args: [&v12]
                    fmt: None
                };
                vvar_1477{stack -280} = alloc::fmt::format::format_inner(&v1);
                v19 = 1;
                vvar_1479{reg 16} = __rust_alloc(32, 8);
                vvar_1482{reg 224} = v16;
                *((v45 + 16) as &i192) = v16;
                *(v45 as &i128) = v46;
                *((a0 + 8) as &i64) = v45;
                *((a0 + 16) as &&i64) = &g_503150;
                *(a0 as &i64) = 2;
                return a0;
            }
            v42 = v44 | -0x10000 | v44 | v43 | -0x100 | 1;
LABEL_49045d:
            v11 = v42;
            break;
        case 6:
            if !(*((v40 + 4) as &i16) ^ 25964) && !(1953786220 ^ *(v40 as &i32)) {
                v11 = 0;
                break;
            } else {
                v12 = Argument {
                    value: &v33
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v1 = Arguments {
                    pieces: ["Invalid argument --endian="]
                    args: [&v12]
                    fmt: None
                };
                vvar_1488{stack -280} = alloc::fmt::format::format_inner(&v1);
                v19 = 1;
                vvar_1490{reg 16} = __rust_alloc(32, 8);
                vvar_1493{reg 224} = v16;
                *((v45 + 16) as &i192) = v16;
                *(v45 as &i128) = v46;
                *((a0 + 8) as &i64) = v45;
                *((a0 + 16) as &&i64) = &g_503150;
                *(a0 as &i64) = 2;
                return a0;
            }
        default:
            v12 = Argument {
                value: &v33
                formatter: <&T as core::fmt::Display>::fmt
            };
            v1 = Arguments {
                pieces: ["Invalid argument --endian="]
                args: [&v12]
                fmt: None
            };
            v16 = alloc::fmt::format::format_inner(&v1);
            v19 = 1;
            v45 = __rust_alloc(32, 8);
            v46 = v16;
            *((v45 + 16) as &i192) = v16;
            *(v45 as &i128) = v46;
            *((a0 + 8) as &i64) = v45;
            *((a0 + 16) as &&i64) = &g_503150;
            *(a0 as &i64) = 2;
            return a0;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, &g_41cdc4, 10);
        v21 = &g_41cdc4;
        v22 = 10;
        if v12 != 2 {
            vvar_1451{stack -248} = v15;
            vvar_1452{reg 224} = *(&v12.value as &i128);
            v18 = v14;
            v16 = v48;
            vvar_1453{stack -360} = &v21;
            vvar_1454{stack -352} = <&T as core::fmt::Display>::fmt;
            vvar_1455{stack -344} = &v16;
            vvar_1456{stack -336} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            vvar_1457{stack -424} = "Mismatch between definition and access of `";
            vvar_1458{stack -416} = 2;
            vvar_1459{stack -392} = 0;
            vvar_1460{stack -408} = &v7;
            vvar_1461{stack -400} = 2;
            vvar_1462{stack -424} = core::panicking::panic_fmt();
        }
        v47 = v13;
        if !v47 {
            v51 = 0;
        } else {
            v49 = *((v47 + 8) as &i64);
            v50 = *((v47 + 16) as &i64);
            v1 = uu_od::parse_nrofbytes::parse_number_of_bytes(v49, v50);
            v51 = v2;
            if v1 != 3 {
                v34 = uu_od::format_error_message(v1, v49, v50, &g_41cdc4, 10);
                v53 = *((&v34 as &char + 8) as &i64);
                v54 = *((&v34 as &char + 16) as &i64);
                v55 = __rust_alloc(32, 8);
                *(v55 as &i192) = v34;
                *((v55 + 8) as &i64) = v53;
                *((v55 + 16) as &i64) = v54;
                *((v55 + 24) as &i32) = 1;
                a0 = a0;
                *((a0 + 8) as &i64) = v55;
                *((a0 + 16) as &&i64) = &g_503150;
                *(a0 as &i64) = 2;
                if v51 {
                    return a0;
                }
                return a0;
            }
        }
        v28 = v51;
        v16 = uu_od::parse_inputs::parse_inputs(a1, &g_5031c0);
        v56 = v20;
        if v56 == 3 {
            v9 = v18;
            v7 = v16;
            v21 = Argument {
                value: &v7
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v1 = Arguments {
                pieces: ["Invalid inputs: "]
                args: [&v21]
                fmt: None
            };
            v12 = alloc::fmt::format::format_inner(&v1);
            v60 = *((&v12 as &char + 16) as &i64);
            v61 = __rust_alloc(32, 8);
            *(v61 as &i64) = v12;
            *((v61 + 8) as &i64) = v13;
            *((v61 + 16) as &i64) = v60;
            *((v61 + 24) as &i32) = 1;
            a0 = a0;
            *((a0 + 8) as &i64) = v61;
            *((a0 + 16) as &&i64) = &g_503150;
            *(a0 as &i64) = 2;
            return a0;
        }
        v57 = v16;
        v58 = v17;
        v59 = v18;
        v32 = *((&v16 as &char + 40) as &i64);
        if v56 == 2 {
            v30 = 0;
        } else {
            v30 = v56;
            v28 = *((&v16 as &char + 24) as &i64);
            v63 = __rust_alloc(24, 8);
            *(v63 as &i64) = v57;
            *((v63 + 8) as &i64) = v58;
            *((v63 + 16) as &i64) = v59;
            v57 = 1;
            v59 = 1;
        }
        v21 = v57;
        v22 = v62;
        v23 = v59;
        v31 = &v1;
        uu_od::parse_formats::parse_format_flags(&v1, a2, a3);
        v6 = v3;
        if vvar_1339 {
            v64 = __rust_alloc(32, 8);
            *(v64 as &i64) = v25;
            *((v64 + 8) as &i64) = v6;
            *((v64 + 16) as &i64) = v4;
            *((v64 + 24) as &i32) = 1;
            v65 = &g_503150;
LABEL_4908da:
            *((v66 + 8) as &i64) = v6;
            *((v66 + 16) as &i64) = v65;
            *(v66 as &i64) = 2;
            goto LABEL_490f5b;
        }
        v65 = v4;
        v25 = v2;
        if v25 == 0x8000000000000000 {
            v6 = v6;
            goto LABEL_4908da;
        }
        v67 = &g_41cdce;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, &g_41cdce, 5);
        v69 = a0;
        v26 = &g_41cdce;
        v27 = 5;
        if v12 != 2 {
            v20 = v15;
            v109 = v12;
            v18 = v14;
            v16 = v109;
            v7 = &v26;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v16;
            v10 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v1 = "Mismatch between definition and access of `";
            v110 = v31;
            v2 = 2;
            v5 = 0;
            v3 = &v7;
            v4 = 2;
            core::panicking::panic_fmt(v110); /* do not return */
        }
        v70 = v13;
        if !(v70) || !((v71 = *((a1 + 16) as &i64), v71)) {
LABEL_490a6d:
            v24 = 16;
            v79 = 16;
LABEL_490a7e:
            if !v65 {
                v29 = 1;
                v86 = 1;
            } else {
                v85 = v65 & 3;
                if v65 < 4 {
                    v86 = 1;
                    v87 = 0;
                } else {
                    v88 = v6 + 136;
                    v86 = 1;
                    v87 = 0;
                    do {
                        v90 = *((v88 - 120) as &i64);
                        v92 = *((v88 - 80) as &i64);
                        v94 = *((v88 - 40) as &i64);
                        v96 = *(v88 as &i64);
                        v87 += 4;
                        v88 += 160;
                    } while ((v65 & -4) != v87);
                }
                if v85 {
                    v97 = 0;
                    do {
                        v98 = *((v6 + v87 * 40 + 16 + v97) as &i64);
                    } while ((v97 += 40, ((v85 & 4294967295) << 3 & 4294967295) + (((v85 & 4294967295) << 3 & 4294967295) << 2) != v97));
                }
                v29 = v86;
            }
            if !v79 || (v99 = (!(v79 | v86) >> 32 ? (0 CONCAT v79 as i32) /m v86 as i32 >> 32 & 4294967295 : ((0 CONCAT v79) /m v86 >> 64) as i64), v99) {
                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                }
                v16 = g_509808;
                v12 = Argument {
                    value: &v16
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v1 = Arguments {
                    pieces: [&g_5031e8, ": warning: "]
                    args: [&v12]
                    fmt: None
                };
                std::io::stdio::_eprint(&v1);
                v16 = Argument {
                    value: &v24
                    formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                };
                v17 = Argument {
                    value: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                    formatter: &v29
                };
                v19 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v1 = Arguments {
                    pieces: ["invalid width ", "; using ", " instead\n"]
                    args: [&v16, &v17]
                    fmt: None
                };
                std::io::stdio::_eprint(&v1);
                v24 = v29;
            }
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41ce08, 17) as i8;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, &g_41ce19, 10);
            v26 = &g_41ce19;
            v27 = 10;
            if v12 != 2 {
                vvar_1464{stack -248} = v15;
                vvar_1465{reg 224} = v12;
                v18 = v14;
                v16 = v109;
                vvar_1466{stack -360} = &v26;
                vvar_1467{stack -352} = <&T as core::fmt::Display>::fmt;
                vvar_1468{stack -344} = &v16;
                vvar_1469{stack -336} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                vvar_1470{stack -424} = "Mismatch between definition and access of `";
                vvar_1471{reg 72} = v31;
                v2 = 2;
                v5 = 0;
                v3 = &v7;
                v4 = 2;
                core::panicking::panic_fmt(v110); /* do not return */
            }
            v100 = v13;
            if !v100 {
                v103 = 0;
                goto LABEL_490d21;
            }
            v101 = *((v100 + 8) as &i64);
            v102 = *((v100 + 16) as &i64);
            v1 = uu_od::parse_nrofbytes::parse_number_of_bytes(v101, v102);
            v67 = v2;
            if v1 != 3 {
                v36 = uu_od::format_error_message(v1, v101, v102, &g_41ce19, 10);
                v105 = *((&v36 as &char + 8) as &i64);
                v106 = *((&v36 as &char + 16) as &i64);
                v107 = __rust_alloc(32, 8);
                *(v107 as &i192) = v36;
                *((v107 + 8) as &i64) = v105;
                *((v107 + 16) as &i64) = v106;
                *((v107 + 24) as &i32) = 1;
                v111 = a0;
                *((v111 + 8) as &i64) = v107;
                *((v111 + 16) as &&i64) = &g_503150;
                *(v111 as &i64) = 2;
                if v67 {
                    goto LABEL_490e45;
                }
            } else {
                v103 = 1;
LABEL_490d21:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, &g_41ce23, 13);
                v26 = &g_41ce23;
                v27 = 13;
                if v12 == 2 {
                    v108 = v13;
                    if !v108 {
                        goto LABEL_490e85;
                    }
                    if !*((v108 + 16) as &i64) {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41ce51, 54);
                        v113 = alloc::alloc::exchange_malloc();
                    } else {
                        v112 = *(*((v108 + 8) as &i64) as &i8) - 100;
                        switch (v112) {
                        case 10:
                            break;
                        case 20:
                            break;
                        case 11:
LABEL_490e85:
                            *((v69 + 48) as &i64) = v23;
                            *((v69 + 32) as &i64) = v21;
                            *((v69 + 56) as &i64) = v25;
                            *((v69 + 64) as &i64) = v6;
                            *((v69 + 72) as &i64) = v65;
                            *(v69 as &i64) = v103;
                            *((v69 + 8) as &i64) = v67;
                            *((v69 + 16) as &i64) = v30;
                            *((v69 + 24) as &i64) = v32;
                            *((v69 + 80) as &i64) = v28;
                            *((v69 + 88) as &i64) = v24;
                            *((v69 + 96) as &i8) = v0;
                            *((v69 + 97) as &i8) = v11;
                            *((v69 + 98) as &i8) = 2;
                            return a0;
                        default:
                            v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41ce30, 33);
                            v113 = alloc::alloc::exchange_malloc();
                        }
                    }
                    *(v113 as &i64) = v115;
                    *((v113 + 8) as &i64) = v114;
                    *((v113 + 16) as &i64) = v116;
                    *((v113 + 24) as &i32) = 1;
                    v117 = a0;
                    *((v117 + 8) as &i64) = v113;
                    *((v117 + 16) as &&i64) = &g_503150;
                    *(v117 as &i64) = 2;
                    goto LABEL_490f5b;
                }
            }
        } else {
            v72 = *((a1 + 8) as &i64);
            v73 = 97;
            v74 = 0;
            v75 = 0;
            while (!(*((v72 + v74 + 8) as &i64) == 5) || !(!(*((v76 + 4) as &i8) ^ 104)) || !(!(*(v76 as &i32) ^ 1952737655))) {
                v74 += 16;
                v73 += 104;
                v75 += 1;
                if v71 << 4 == v74 {
                    goto LABEL_490a6d;
                }
            }
            if v75 >= *((a1 + 40) as &i64) {
                core::panicking::panic_bounds_check(); /* do not return */
            }
            if !(*((*((a1 + 32) as &i64) + v73) as &i8) == 2) {
                goto LABEL_490a6d;
            }
            v77 = *((v70 + 8) as &i64);
            v78 = *((v70 + 16) as &i64);
            v1 = uu_od::parse_nrofbytes::parse_number_of_bytes(v77, v78);
            v80 = v1;
            v79 = v2;
            if v80 == 3 {
                v24 = v79;
                goto LABEL_490a7e;
            }
            v35 = uu_od::format_error_message(v80, v77, v78, &g_41cdce, 5);
            v82 = *((&v35 as &char + 8) as &i64);
            v83 = *((&v35 as &char + 16) as &i64);
            v84 = __rust_alloc(32, 8);
            *(v84 as &i192) = v35;
            *((v84 + 8) as &i64) = v82;
            *((v84 + 16) as &i64) = v83;
            *((v84 + 24) as &i32) = 1;
            v89 = a0;
            *((v89 + 8) as &i64) = v84;
            *((v89 + 16) as &&i64) = &g_503150;
            *(v89 as &i64) = 2;
            if v24 {
LABEL_490e45:
            }
LABEL_490f5b:
            return a0;
        }
    }
}
