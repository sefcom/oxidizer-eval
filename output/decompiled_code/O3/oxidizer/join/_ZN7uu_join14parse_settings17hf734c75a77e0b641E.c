fn uu_join::parse_settings(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x308]
    let v2: i64;  // [sp-0x1e0]
    let v3: i64;  // [bp-0x1d8], Other Possible Types: struct24, Arguments, Enum, struct16, String
    let v4: i64;  // [sp-0x1d0]
    let v5: i64;  // [bp-0x1c8]
    let v6: i64;  // [bp-0x1c0]
    let v7: i64;  // [sp-0x1b8]
    let v8: i128;  // [bp-0x1a8], Other Possible Types: String
    let v9: i64;  // [sp-0x1a0]
    let v10: i128;  // [bp-0x198]
    let v11: i8;  // [bp-0x190]
    let v12: i64;  // [sp-0x188]
    let v13: i64;  // [sp-0x180], Other Possible Types: Argument
    let v14: i64;  // [sp-0x178]
    let v15: i64;  // [sp-0x170]
    let v16: i8;  // [bp-0x168]
    let v17: i8;  // [bp-0x160]
    let v18: i64;  // [bp-0x158]
    let v19: i64;  // [sp-0x150]
    let v20: i64;  // [sp-0x148], Other Possible Types: struct16
    let v21: i64;  // [sp-0x140]
    let v22: i64;  // [sp-0x138]
    let v23: i64;  // [sp-0x130]
    let v24: i64;  // [sp-0x120]
    let v25: i64;  // [sp-0x118]
    let v26: i64;  // [sp-0x110]
    let v27: i128;  // [sp-0x108], Other Possible Types: struct16, struct24, Arguments
    let v28: i64;  // [sp-0x100]
    let v29: i64;  // [sp-0xf8]
    let v30: i128;  // [sp-0xf0]
    let v31: i64;  // [sp-0xe8]
    let v32: i64;  // [sp-0xe0]
    let v33: i64;  // [sp-0xd8]
    let v34: i64;  // [sp-0xd0]
    let v35: i64;  // [sp-0xc8]
    let v36: i64;  // [bp-0xc0]
    let v37: i64;  // [sp-0xb8]
    let v38: i8;  // [sp-0xb0]
    let v39: i8;  // [sp-0xaf]
    let v40: i8;  // [sp-0xae]
    let v41: i8;  // [bp-0xad]
    let v42: i32;  // [sp-0xac]
    let v43: i8;  // [sp-0xab]
    let v44: i8;  // [sp-0xaa]
    let v45: i8;  // [sp-0xa9]
    let v46: i64;  // [bp-0xa8]
    let v47: i64;  // [sp-0xa0]
    let v48: i64;  // [sp-0x98]
    let v49: i64;  // [sp-0x88]
    let v50: i64;  // [sp-0x80]
    let v51: i64;  // [sp-0x78]
    let v52: i64;  // [sp-0x70]
    let v53: i64;  // [sp-0x68]
    let v54: i64;  // [sp-0x60]
    let v55: i64;  // [sp-0x58]
    let v56: i64;  // [sp-0x50]
    let v57: i64;  // [sp-0x48]
    let v58: i64;  // [sp-0x40]
    let v59: i64;  // [sp-0x38]
    let v61: i64;  // rax
    let v62: i64;  // r13
    let v63: i64;  // rax
    let v64: i64;  // rax
    let v65: i64;  // rbp
    let v66: i64;  // rax
    let v67: i128;  // xmm0
    let v68: i64;  // r15
    let v69: i128;  // xmm0
    let v70: i64;  // r13
    let v71: i64;  // r12
    let v72: i128;  // xmm0
    let v73: i64;  // rbp
    let v74: i64;  // r14
    let v76: i64;  // rbp
    let v77: i64;  // r14
    let v78: i64;  // r12
    let v79: i64;  // rdx
    let v80: i64;  // rbp
    let v82: i64;  // rax
    let v84: i64;  // r14
    let v85: i64;  // rdx
    let v86: i64;  // rcx
    let v87: i64;  // rax
    let v88: i64;  // rax
    let v89: i64;  // rbx
    let v90: i64;  // rcx
    let v91: i64;  // rax
    let v92: i128;  // xmm0
    let v93: i64;  // rax
    let v94: i128;  // xmm0
    let v95: i64;  // r12
    let v96: i64;  // r13
    let v97: i64;  // rbx
    let v98: i64;  // rsi
    let v99: i64;  // rax
    let v100: i64;  // rcx
    let v101: i64;  // r13
    let v103: i64;  // r14
    let v104: i64;  // rcx
    let v105: i64;  // rsi
    let v106: i64;  // rbx
    let v107: i64;  // rdx
    let v108: i64;  // rax
    let v109: i64;  // r12
    let v110: i64;  // rcx
    let v111: i32;  // ecx
    let v112: i32;  // r8d
    let v113: i32;  // edi
    let v117: i64;  // rdx
    let v118: i64;  // rcx
    let v119: i64;  // rax
    let v120: i64;  // rax
    let v121: i64;  // rdi
    let v122: i64;  // rsi
    let v123: i32;  // r8d
    let v124: i32;  // r10d
    let v125: i32;  // r9d
    let v126: i64;  // rdx
    let v127: i64;  // r13
    let v128: i64;  // r13
    let v129: i64;  // rdi
    let v130: i64;  // rsi
    let v131: i32;  // r8d
    let v132: i32;  // r10d
    let v133: i32;  // r9d
    let v134: i64;  // rax
    let v135: i64;  // rax
    let v136: i64;  // rcx
    let v137: i64;  // rcx
    let v138: i64;  // rax
    let v139: i128;  // xmm0
    let v140: i128;  // xmm0
    let v142: i128;  // xmm0
    let v143: i128;  // xmm1
    let v144: i128;  // xmm2

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, a1, &g_41b1bd, 1);
    v20 = &g_41b1bd;
    v21 = 1;
    if v8 != 2 {
        v7 = v12;
        v67 = v8;
        v5 = v10;
        v3 = v67;
        v13 = &v20;
        v14 = <&T as core::fmt::Display>::fmt;
        v15 = &v3;
        v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v27 = "Mismatch between definition and access of `";
        v28 = 2;
        v31 = 0;
        v29 = &v13;
        v30 = 2;
        v27 = core::panicking::panic_fmt();
    }
    v61 = v9;
    if !v61 {
        v62 = 0;
        goto LABEL_493eba;
    }
    v27 = uu_join::parse_field_number(*((v61 + 8) as &i64), *((v61 + 16) as &i64));
    v63 = v27;
    if !v63 {
        v50 = v28;
        v62 = 1;
LABEL_493eba:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, a1, &g_41b1be, 1);
        v20 = &g_41b1be;
        v21 = 1;
        if v8 != 2 {
            vvar_1977{stack -440} = v12;
            vvar_1978{reg 224} = v8;
            v5 = v10;
            v3 = v67;
            vvar_1979{stack -384} = &v20;
            vvar_1980{stack -376} = <&T as core::fmt::Display>::fmt;
            vvar_1981{stack -368} = &v3;
            v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            vvar_1982{stack -264} = "Mismatch between definition and access of `";
            vvar_1983{stack -256} = 2;
            vvar_1984{stack -232} = 0;
            vvar_1985{stack -248} = &v13;
            vvar_1986{stack -240} = 2;
            vvar_1987{stack -264} = core::panicking::panic_fmt();
        }
        v64 = v9;
        if !v64 {
            v65 = 0;
            goto LABEL_493f3e;
        }
        v27 = uu_join::parse_field_number(*((v64 + 8) as &i64), *((v64 + 16) as &i64));
        v63 = v27;
        if !v63 {
            v54 = v28;
            v65 = 1;
LABEL_493f3e:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, a1, &g_41b1bf, 1);
            v20 = &g_41b1bf;
            v21 = 1;
            if v8 != 2 {
                vvar_1989{stack -440} = v12;
                vvar_1990{reg 224} = v8;
                v5 = v10;
                v3 = v67;
                vvar_1991{stack -384} = &v20;
                vvar_1992{stack -376} = <&T as core::fmt::Display>::fmt;
                vvar_1993{stack -368} = &v3;
                v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                vvar_1994{stack -264} = "Mismatch between definition and access of `";
                vvar_1995{stack -256} = 2;
                vvar_1996{stack -232} = 0;
                vvar_1997{stack -248} = &v13;
                vvar_1998{stack -240} = 2;
                vvar_1999{stack -264} = core::panicking::panic_fmt();
            }
            v66 = v9;
            if !v66 {
                v49 = 0;
                goto LABEL_493fe6;
            } else {
                v27 = uu_join::parse_field_number(*((v66 + 8) as &i64), *((v66 + 16) as &i64));
                v63 = v27;
                if !v63 {
                    v53 = v28;
                    v49 = 1;
LABEL_493fe6:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v27, a1, &g_41b1bb, 1);
                    v20 = &g_41b1bb;
                    v21 = 1;
                    if v27 {
                        v12 = v32;
                        v69 = v28;
                        v10 = v30;
                        v8 = v69;
                        v13 = &v20;
                        v14 = <&T as core::fmt::Display>::fmt;
                        v15 = &v8;
                    } else {
                        v57 = v62;
                        v68 = v28;
                        v55 = v65;
                        v56 = v68;
                        if !v56 {
                            v68 = core::ops::function::FnOnce::call_once;
                            v70 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h6966785369e74fefE;
                            v2 = 0;
                            v71 = 0;
                            v25 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h6966785369e74fefE;
                        } else {
                            v25 = v30;
                            v2 = v33;
                        }
                        v59 = v34;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v27, a1, &g_41b1bc, 1);
                        v20 = &g_41b1bc;
                        v21 = 1;
                        if v27 {
                            v12 = v32;
                            v72 = v28;
                            v10 = v30;
                            v8 = v72;
                            v13 = &v20;
                            v14 = <&T as core::fmt::Display>::fmt;
                            v15 = &v8;
                        } else {
                            v24 = v28;
                            if !v24 {
                                v24 = core::ops::function::FnOnce::call_once;
                                v73 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h6966785369e74fefE;
                                v74 = 0;
                                v52 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h6966785369e74fefE;
                            } else {
                                v52 = v30;
                            }
                            v26 = 0;
                            v58 = v34;
                            v51 = 0;
                            v19 = 0;
                            loop {
                                v79 = v19 & 4294967295 & 4294967295;
                                do {
                                    v19 = v79 & 4294967295;
                                    if v68 {
                                        if !(v78) || !(v78 != v32) {
                                            do {
                                                v70 = v70;
                                                if !(v70) || !(v70 != v25) {
                                                    if !v2 || v2 == v59 {
                                                        v78 = 0;
                                                        v2 = 0;
                                                        goto LABEL_494270;
                                                    } else {
                                                        v2 += 32;
                                                        v78 = 0;
                                                        goto LABEL_494230;
                                                    }
                                                }
                                            } while ((v79 = v85 | -0x100 | 1, *(v9 as &i8) == 49));
                                        } else {
                                            v78 += 32;
                                            v2 = v2;
LABEL_494230:
                                            v82 = v68();
                                            goto LABEL_494332;
                                        }
                                    }
LABEL_494270:
                                    v2 = v2;
                                    if !(v77) || !(v77 != v32) {
                                        do {
                                            v76 = v80;
                                            if !(v76) || !(v76 != v52) {
                                                v84 = v26;
                                                if v84 && v84 != v58 {
                                                    v18 = v84 + 32;
                                                    v77 = 0;
                                                    goto LABEL_49430e;
                                                }
                                                v36 = 0;
                                                v41 = 0;
                                                v45 = 10;
                                                v33 = 9223372036854775811;
                                                v27 = 0;
                                                v28 = 8;
                                                v29 = 0;
                                                v31 = 1;
                                                v32 = 0;
                                                v40 = !vvar_1810;
                                                v38 = v19;
                                                v39 = v51;
                                                a0 = a0;
                                                v89 = v57;
                                                v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41b1c0, 1) as i8;
                                                v3 = uu_join::get_field_number(v89, v50, v55, v54);
                                                v90 = v3;
                                                v91 = v4;
                                                if v90 || (v36 = v91, v3 = uu_join::get_field_number(v89, v50, v49, v53), v90 = v3, v91 = v4, v90) {
                                                    *((a0 + 8) as &i64) = v90;
                                                    *((a0 + 16) as &i64) = v91;
                                                } else {
                                                    v37 = v91;
                                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, a1, &g_41b1c1, 1);
                                                    v47 = &g_41b1c1;
                                                    v48 = 1;
                                                    if v13.value as i32 != 2 {
                                                        v12 = v17;
                                                        v94 = *(&v13.value as &i128);
                                                        v10 = v15;
                                                        v8 = v94;
                                                        v20 = &v47;
                                                        v21 = <&T as core::fmt::Display>::fmt;
                                                        v22 = &v8;
                                                        v23 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                                                        v3 = "Mismatch between definition and access of `";
                                                        v4 = 2;
                                                        v7 = 0;
                                                        v5 = &v20;
                                                        v6 = 2;
                                                        v3 = core::panicking::panic_fmt();
                                                    }
                                                    v93 = v14;
                                                    if !v93 {
                                                        v95 = 9223372036854775811;
                                                        goto LABEL_49468b;
                                                    } else {
                                                        v3 = uu_join::parse_separator(*((v93 + 8) as &i64), *((v93 + 16) as &i64));
                                                        v95 = v3;
                                                        v96 = v4;
                                                        v97 = v5;
                                                        if v95 == 9223372036854775812 {
                                                            *((a0 + 8) as &i64) = v96;
                                                            *((a0 + 16) as &i64) = v97;
                                                        } else {
                                                            v33 = v95;
                                                            v34 = v96;
                                                            v35 = v97;
LABEL_49468b:
                                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3, a1, &g_41b1c2, 1);
                                                            v99 = clap_builder::parser::error::MatchesError::unwrap(&g_41b1c2, 1, &v3);
                                                            if !v99 {
LABEL_494c17:
                                                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3, a1, &g_41b1c3, 1);
                                                                v138 = clap_builder::parser::error::MatchesError::unwrap(&g_41b1c3, 1, &v3);
                                                                if v138 {
                                                                    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v138 + 8) as &i64), *((v138 + 16) as &i64));
                                                                    v32 = v5;
                                                                    v30 = v3;
                                                                }
                                                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41b1c4, 13) as i8 {
                                                                    v44 = 1;
                                                                }
                                                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41b1d1, 11) as i8 {
                                                                    v44 = 2;
                                                                }
                                                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41b1dc, 6) as i8 {
                                                                    v43 = 1;
                                                                }
                                                                v45 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41b1e2, 1) as i8 ? 10 : 0);
                                                                *((a0 + 64) as &i64) = v35;
                                                                v142 = v27;
                                                                v143 = v29;
                                                                v144 = *((&v30 as &char + 8) as &i128);
                                                                *((a0 + 48) as &i64) = v33;
                                                                *((a0 + 32) as &i128) = v144;
                                                                *((a0 + 16) as &i128) = v143;
                                                                *(a0 as &i128) = v142;
                                                                *((a0 + 80) as &i64) = v37;
                                                                *((a0 + 88) as &i8) = v38;
                                                                *((a0 + 92) as &i32) = v42;
                                                                *((a0 + 94) as &i8) = v44;
                                                                *((a0 + 95) as &i8) = v45;
                                                                return a0;
                                                            }
                                                            v100 = *((v99 + 8) as &i64);
                                                            v46 = *((v99 + 16) as &i64);
                                                            if v46 != 4 || *(v100 as &i32) != 1869903201 {
                                                                v24 = v96;
                                                                v98 = v95;
                                                                v20 = 0;
                                                                v21 = 8;
                                                                v22 = 0;
                                                                v101 = 0;
                                                                v18 = v100;
                                                                v103 = 0;
                                                                v19 = v46 + v100;
                                                                v19 = v19;
                                                            } else {
                                                                v42 = 1;
                                                                goto LABEL_494c17;
                                                            }
                                                            loop {
                                                                v105 = 0;
                                                                do {
                                                                    v106 = v100;
                                                                    v107 = v103;
                                                                    if v106 == v104 {
                                                                        v117 = v46;
                                                                        break;
                                                                    }
                                                                    v108 = *(v106 as &i8);
                                                                    if v108 >= 0 {
                                                                        v109 = v106 + 1;
                                                                    } else {
                                                                        v111 = v108 & 31;
                                                                        v112 = *((v106 + 1) as &i8) & 63;
                                                                        if (v108 & 255) <= 223 {
                                                                            v109 = v106 + 2;
                                                                            v108 = v111 * 64 | v112;
                                                                        } else {
                                                                            v113 = *((v106 + 2) as &i8) & 63 | v112 * 64;
                                                                            if (v108 & 255) < 240 {
                                                                                v109 = v106 + 3;
                                                                                v108 = v113 | v111 * 0x1000;
                                                                            } else {
                                                                                v109 = v106 + 4;
                                                                                v108 = *((v106 + 3) as &i8) & 63 | v113 * 64 | (v111 & 7) * 0x40000;
                                                                            }
                                                                        }
                                                                        v110 = v19;
                                                                    }
                                                                    v103 = v109 - v106 + v107;
                                                                } while (!(v108 <= 44) || !((v0 = 0x100100000200, ((*((&v0 as &u8 + ((v108 & 4294967295 & 63) >> 3)) as &i8) as u8 as u64 >> (v108 & 4294967295 & 63 & 7) as i8 as u8 as u64) as u8 & 1))));
                                                                v118 = v18 + v105;
                                                                v119 = v117;
                                                                v120 = v119 - v105;
                                                                if v119 == v105 {
                                                                    v13 = 0;
                                                                    v14 = v118;
                                                                    v15 = v120;
                                                                    v16 = 1;
                                                                    v47 = &v13;
                                                                    v48 = <os_display::Quoted as core::fmt::Display>::fmt;
                                                                    v3 = Arguments {
                                                                        pieces: ["invalid file number in field spec: "]
                                                                        args: &[&Argument] {
                                                                            ptr: &v47
                                                                            len: <UNKNOWN>
                                                                        }
                                                                        fmt: None
                                                                    };
                                                                    v6 = 1;
                                                                    v8 = alloc::fmt::format::format_inner(&v3);
                                                                    v11 = 1;
                                                                    v134 = __rust_alloc(32, 8);
                                                                    goto LABEL_494b8e;
                                                                }
                                                                v121 = *(v118 as &i8);
                                                                if v121 >= 0 {
                                                                    v122 = v118 + 1;
                                                                } else {
                                                                    v123 = v121 & 31;
                                                                    v124 = *((v118 + 1) as &i8) & 63;
                                                                    if (v121 & 255) <= 223 {
                                                                        v122 = v118 + 2;
                                                                        v121 = v123 * 64 | v124;
                                                                    } else {
                                                                        v125 = *((v118 + 2) as &i8) & 63 | v124 * 64;
                                                                        if (v121 & 255) >= 240 {
                                                                            v122 = v118 + 4;
                                                                            v121 = *((v118 + 3) as &i8) & 63 | v125 * 64 | (v123 & 7) * 0x40000;
                                                                        } else {
                                                                            v122 = v118 + 3;
                                                                            v121 = v125 | v123 * 0x1000;
                                                                        }
                                                                    }
                                                                }
                                                                v126 = v119 + v18;
                                                                if v121 == 48 {
                                                                    break;
                                                                }
                                                                if v121 != 49 && v121 == 50 {
                                                                    v127 = 0x100;
                                                                    goto LABEL_4948fa;
                                                                }
                                                                v127 = 0;
LABEL_4948fa:
                                                                if v122 == v126 {
LABEL_494ad0:
                                                                    v13 = 0;
                                                                    v14 = v118;
                                                                    v15 = v120;
                                                                    v16 = 1;
                                                                    v47 = &v13;
                                                                    v48 = <os_display::Quoted as core::fmt::Display>::fmt;
                                                                    v3 = Arguments {
                                                                        pieces: ["invalid field specifier: "]
                                                                        args: &[&Argument] {
                                                                            ptr: &v47
                                                                            len: <UNKNOWN>
                                                                        }
                                                                        fmt: None
                                                                    };
                                                                    v5 = &v47;
                                                                    v6 = 1;
                                                                    v8 = alloc::fmt::format::format_inner(&v3);
                                                                    v11 = 1;
                                                                    v134 = __rust_alloc(32, 8);
LABEL_494b8e:
                                                                    v139 = v8;
                                                                    *((v134 + 16) as &i128) = v10;
                                                                    *(v134 as &i128) = v139;
                                                                    v26 = &g_4fdb88;
                                                                    goto LABEL_494ba6;
                                                                }
                                                                v129 = *(v122 as &i8);
                                                                if v129 >= 0 {
                                                                    v130 = v122 + 1;
                                                                } else {
                                                                    v131 = v129 & 31;
                                                                    v132 = *((v122 + 1) as &i8) & 63;
                                                                    if (v129 & 255) <= 223 {
                                                                        v130 = v122 + 2;
                                                                        v129 = v131 * 64 | v132;
                                                                    } else {
                                                                        v133 = *((v122 + 2) as &i8) & 63 | v132 * 64;
                                                                        if (v129 & 255) >= 240 {
                                                                            v130 = v122 + 4;
                                                                            v129 = *((v122 + 3) as &i8) & 63 | v133 * 64 | (v131 & 7) * 0x40000;
                                                                        } else {
                                                                            v130 = v122 + 3;
                                                                            v129 = v133 | v131 * 0x1000;
                                                                        }
                                                                    }
                                                                }
                                                                if !(v129 == 46) {
                                                                    goto LABEL_494ad0;
                                                                }
                                                                v3 = uu_join::parse_field_number(v130, v126 - v130);
                                                                v134 = v3;
                                                                v26 = v4;
                                                                if !v134 {
                                                                    v2 = (v2 & -0x10000) + v127 + 1;
                                                                    v128 = v22;
                                                                } else {
                                                                    goto LABEL_494ba6;
                                                                }
LABEL_4949e2:
                                                                if v128 == v20 {
                                                                    v20 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                                                }
                                                                v135 = v128 * 16;
                                                                v136 = v21;
                                                                *((v136 + v135) as &i64) = v2;
                                                                *((v136 + v135 + 8) as &i64) = v26;
                                                                v101 = v128 + 1;
                                                                v22 = v101;
                                                                v137 = v19;
                                                                if v106 == v137 {
                                                                    v29 = v22;
                                                                    v27 = v20;
                                                                    goto LABEL_494c17;
                                                                }
                                                            }
                                                            if v122 == v126 {
                                                                v2 &= -0x100;
                                                                goto LABEL_4949e2;
                                                            } else {
                                                                v13 = 0;
                                                                v14 = v118;
                                                                v15 = v120;
                                                                v16 = 1;
                                                                v47 = &v13;
                                                                v48 = <os_display::Quoted as core::fmt::Display>::fmt;
                                                                v3 = Arguments {
                                                                    pieces: ["invalid field specifier: "]
                                                                    args: &[&Argument] {
                                                                        ptr: &v47
                                                                        len: <UNKNOWN>
                                                                    }
                                                                    fmt: None
                                                                };
                                                                v6 = 1;
                                                                v8 = alloc::fmt::format::format_inner(&v3);
                                                                v11 = 1;
                                                                v134 = __rust_alloc(32, 8);
                                                                v140 = v8;
                                                                *((v134 + 16) as &i128) = v10;
                                                                *(v134 as &i128) = v140;
                                                                v26 = &g_4fdb88;
LABEL_494ba6:
                                                                *((a0 + 8) as &i64) = v134;
                                                                *((a0 + 16) as &i64) = v26;
                                                                *(a0 as &i64) = 0x8000000000000000;
                                                            }
LABEL_4945a7:
                                                            if ((0x8000000000000000 ^ v98) != 1 & (0x8000000000000000 ^ v98) < 4) {
                                                                return a0;
                                                            } else if !v98 {
                                                                return a0;
                                                            } else {
                                                                return a0;
                                                            }
                                                        }
                                                    }
                                                }
                                                *(a0 as &i64) = 0x8000000000000000;
                                                v98 = 9223372036854775811;
                                                goto LABEL_4945a7;
                                            }
                                        } while ((v79 = v85 | -0x100 | 1, *(v9 as &i8) == 49));
                                    } else {
                                        v77 += 32;
                                        v18 = v26;
                                    }
LABEL_49430e:
                                    v82 = v24();
                                    v68 = 0;
                                    v26 = v18;
LABEL_494332:
                                    v2 = v2;
                                    v86 = *((v82 + 8) as &i64);
                                    v87 = *((v82 + 16) as &i64);
                                    if v10 != 1 {
                                        v8 = 0;
                                        v9 = v86;
                                        v10 = v87;
                                        v11 = 1;
                                        v13 = Argument {
                                            value: &v8
                                            formatter: <os_display::Quoted as core::fmt::Display>::fmt
                                        };
                                        v27 = Arguments {
                                            pieces: ["invalid file number: "]
                                            args: [&v13]
                                            fmt: None
                                        };
                                        v3 = alloc::fmt::format::format_inner(&v27);
                                        v6 = 1;
                                        v88 = __rust_alloc(32, 8);
                                        v92 = v3;
                                        *((v88 + 16) as &i64) = v5;
                                        *(v88 as &i128) = v92;
                                        a0 = a0;
                                        *((a0 + 8) as &i64) = v88;
                                        *((a0 + 16) as &&i64) = &g_4fdb88;
                                        *(a0 as &i64) = 0x8000000000000000;
                                        return a0;
                                    }
                                } while ((v79 = v85 | -0x100 | 1, *(v9 as &i8) == 49));
                                v51 = v79 | -0x100 | 1;
                            }
                        }
                    }
                    v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                    v3 = "Mismatch between definition and access of `";
                    v4 = 2;
                    v7 = 0;
                    v5 = &v13;
                    v6 = 2;
                    v3 = core::panicking::panic_fmt();
                }
            }
        }
    }
    *((a0 + 8) as &i64) = v63;
    *((a0 + 16) as &i64) = v28;
    *(a0 as &i64) = 0x8000000000000000;
    return a0;
}
