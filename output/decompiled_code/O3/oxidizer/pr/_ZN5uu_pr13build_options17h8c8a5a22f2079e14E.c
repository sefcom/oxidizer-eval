fn uu_pr::build_options(a0: void*, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x430]
    let v1: i8;  // [sp-0x42a]
    let v2: i8;  // [sp-0x429]
    let v4: i8;  // [sp-0x419]
    let v5: i64;  // [sp-0x418]
    let v6: i64;  // [bp-0x410]
    let v7: i64;  // [sp-0x408], Other Possible Types: Arguments, Enum
    let v8: i64;  // [sp-0x400]
    let v9: i8;  // [bp-0x3fc]
    let v10: i64;  // [sp-0x3f8]
    let v11: i64;  // [bp-0x3f0]
    let v13: i64;  // [sp-0x3c8], Other Possible Types: struct12
    let v14: i64;  // [bp-0x3c0]
    let v15: i32;  // [sp-0x3bc]
    let v16: i64;  // [sp-0x3b8]
    let v17: i8;  // [sp-0x3b0]
    let v18: i64;  // [bp-0x3a8]
    let v19: i64;  // [sp-0x3a0]
    let v20: i64;  // [bp-0x398]
    let v22: i64;  // [sp-0x388]
    let v23: i64;  // [sp-0x380]
    let v24: i64;  // [sp-0x378]
    let v25: i8;  // [sp-0x370]
    let v26: i8;  // [bp-0x368]
    let v29: i32;  // [sp-0x34c]
    let v30: i64;  // [sp-0x348], Other Possible Types: Enum, struct40, struct12, struct24
    let v31: i64;  // [sp-0x340]
    let v32: i64;  // [sp-0x338]
    let v33: i32;  // [bp-0x330]
    let v34: i64;  // [sp-0x328]
    let v35: i64;  // [bp-0x320]
    let v36: i64;  // [sp-0x318]
    let v37: i64;  // [bp-0x310]
    let v38: i16;  // [bp-0x308]
    let v39: i64;  // [sp-0x304]
    let v40: i32;  // [sp-0x2fc]
    let v42: i64;  // [sp-0x288]
    let v43: i64;  // [sp-0x280]
    let v44: i64;  // [bp-0x278]
    let v45: i64;  // [bp-0x268], Other Possible Types: Enum, struct16
    let v46: i64;  // [sp-0x260]
    let v47: i64;  // [bp-0x258]
    let v49: i64;  // [sp-0x248]
    let v50: i64;  // [sp-0x240]
    let v51: i64;  // [sp-0x238]
    let v52: i8;  // [sp-0x230]
    let v53: i64;  // [sp-0x228]
    let v56: i64;  // [sp-0x1a0]
    let v57: i64;  // [sp-0x198]
    let v58: i192;  // [sp-0x190], Other Possible Types: struct24
    let v59: i64;  // [sp-0x188]
    let v61: i64;  // [sp-0x170]
    let v62: i64;  // [sp-0x168]
    let v63: i64;  // [sp-0x158], Other Possible Types: struct12
    let v64: String;  // [sp-0x150]
    let v65: i128;  // [sp-0x148]
    let v67: i64;  // [sp-0x128]
    let v68: i64;  // [sp-0x120]
    let v69: i64;  // [sp-0x118]
    let v70: i64;  // [bp-0x100]
    let v71: i64;  // [sp-0xf8]
    let v72: i64;  // [sp-0xf0]
    let v73: i128;  // [sp-0xe8], Other Possible Types: Enum
    let v74: i64;  // [sp-0xd8]
    let v75: i64;  // [sp-0xd0]
    let v76: i128;  // [sp-0xc8], Other Possible Types: struct12
    let v77: i128;  // [sp-0xb8]
    let v86: i8;  // al
    let v87: i8;  // r13b
    let v88: i64;  // rax
    let v89: i64;  // rcx
    let v90: i64;  // rdx
    let v91: i64;  // rdi
    let v92: i64;  // rax
    let v93: i64;  // rax
    let v94: i64;  // rax
    let v95: i128;  // xmm0
    let v96: i64;  // r12
    let v98: i64;  // rax
    let v99: i64;  // rbx
    let v100: i64;  // rax
    let v102: i64;  // rbp
    let v103: i64;  // 4096
    let v105: i64;  // r12
    let v106: i64;  // rax
    let v107: i128;  // xmm0
    let v108: i256;  // ymm0
    let v109: i256;  // ymm0
    let v110: i64;  // rax
    let v111: i128;  // xmm0
    let v112: i64;  // rbp
    let v113: i64;  // rbx
    let v114: i64;  // rbx
    let v116: i64;  // rcx
    let v119: i64;  // rax
    let v120: i64;  // rdi
    let v121: i64;  // rax
    let v122: i64;  // rax
    let v123: i64;  // rax
    let v126: i64;  // rax
    let v128: i64;  // rax
    let v129: i64;  // rax
    let v130: i64;  // rsi
    let v131: i64;  // rdx
    let v132: i64;  // r14
    let v133: i32;  // ebx
    let v134: i32;  // ebp
    let v135: i256;  // ymm0
    let v136: i64;  // rax
    let v139: i128;  // xmm0
    let v140: i64;  // rdx
    let v141: i64;  // rax
    let v142: i64;  // rsi
    let v143: i32;  // ebp
    let v144: i256;  // ymm0
    let v146: i128;  // xmm0
    let v148: i128;  // xmm0
    let v149: i128;  // xmm1
    let v150: i128;  // xmm2
    let v151: i64;  // rax
    let v152: i64;  // rcx
    let v153: i64;  // rax
    let v154: i64;  // rcx
    let v155: i64;  // rdx
    let v156: i64;  // rax
    let v157: i64;  // rdx
    let v158: i64;  // rsi
    let v159: i64;  // r8
    let v160: i64;  // rsi
    let v161: i64;  // rdx
    let v162: i64;  // rcx
    let v163: i64;  // rdi
    let v164: i64;  // rax
    let v165: i64;  // rdx
    let v166: i64;  // r14
    let v167: i64;  // r12
    let v168: i64;  // r15
    let v170: i64;  // rbx
    let v173: i64;  // rbp
    let v174: i64;  // r13
    let v175: i64;  // rax

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_46a9a7, 9) as i8;
    v86 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_46b01d, 5) as i8;
    v87 = v86 & 4294967295;
    if v86 {
        v88 = *((a1 + 16) as &i64);
        if v88 {
            v89 = *((a1 + 8) as &i64);
            v90 = 0;
            do {
                if *((v89 + v90 + 8) as &i64) == 6 {
                    v91 = *((v89 + v90) as &i64);
                    if !(*((v91 + 4) as &i16) ^ 28269) && !(*(v91 as &i32) ^ 1970040675) {
                        v92 = __rust_alloc(58, 1);
                        *((v92 + 42) as &i128) = 144083244614520001419074623893236771188;
                        *((v92 + 32) as &i128) = 139737190892813016661927418245767788320;
                        *((v92 + 16) as &i128) = 153434592255605008562721134927719591285;
                        *(v92 as &i128) = 146383695321264567531344429801855148387;
                        *((a0 + 8) as &i64) = 9223372036854775809;
                        *((a0 + 16) as &i64) = 58;
                        *((a0 + 24) as &i64) = v92;
                        *((a0 + 32) as &i64) = 58;
                        *(a0 as &i64) = 2;
                        return a0;
                    }
                }
            } while ((v90 += 16, v88 << 4 != v90));
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_46abbe, 6) as i8 {
            v93 = __rust_alloc(60, 1);
            *((v93 + 44) as &i128) = 144083244614520001419074623893236771188;
            *((v93 + 32) as &i128) = 137483775097931229737844146005987259247;
            *((v93 + 16) as &i128) = 152047998869518547962763631078891091055;
            *(v93 as &i128) = 130432959371845577056498745078491013475;
            *((a0 + 8) as &i64) = 9223372036854775809;
            *((a0 + 16) as &i64) = 60;
            *((a0 + 24) as &i64) = v93;
            *((a0 + 32) as &i64) = 60;
            *(a0 as &i64) = 2;
            return a0;
        }
    }
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_46b01d, 5) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v18, a1, &g_46a4ae, 6);
    v13 = &g_46a4ae;
    v14 = 6;
    if v18 != 2 {
        v49 = v22;
        v95 = v18;
        v47 = v20;
        v45 = v95;
        v7 = &v13;
        v8 = <&T as core::fmt::Display>::fmt;
        v10 = &v45;
        v11 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v30 = "Mismatch between definition and access of `";
        v31 = 2;
        v34 = 0;
        v32 = &v7;
        v33 = 2;
        v30 = core::panicking::panic_fmt();
    }
    v94 = v19;
    if v94 {
        v96 = *((v94 + 8) as &i64);
    } else {
        v96 = 0;
    }
    v57 = 1;
    if v87 {
        v98 = 0;
        v99 = 1;
    } else if !a3 {
        core::panicking::panic_bounds_check(); /* do not return */
    } else {
        v99 = *(a2 as &i64);
        v98 = *((a2 + 8) as &i64);
        if v98 == 1 {
            v98 = -0x100 | *(v99 as &i8) != 45;
            if *(v99 as &i8) == 45 {
                v99 = 1;
            }
        }
    }
    v57 = v57;
    if vvar_1248{reg 56} {
        v102 = v100;
        v57 = __rust_alloc(v102, 1);
        if v57 {
            v57 = v57;
        }
    }
    v62 = v102;
    memcpy(v57, v105, v102);
    v30 = uu_pr::parse_usize(v103, &g_46a720, 17);
    a0 = a0;
    v106 = v30;
    if v106 == 9223372036854775814 {
        v68 = 1;
        goto LABEL_5440a9;
    }
    v107 = *((&v30 as &char + 16) as &i128);
    vvar_56{reg 224} = ((vvar_1300{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1299{reg 224}))
    v45 = v107;
    if v106 != 9223372036854775813 {
        *((a0 + 24) as &i128) = v45;
        *((a0 + 8) as &i64) = v106;
        *((a0 + 16) as &i64) = v68;
        *(a0 as &i64) = 2;
    }
    v68 = v31;
LABEL_5440a9:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v18, a1, &g_46a582, 12);
    v13 = &g_46a582;
    v14 = 12;
    if v18 != 2 {
        v49 = v22;
        v111 = v18;
        v47 = v20;
        v45 = v111;
        v7 = &v13;
        v8 = <&T as core::fmt::Display>::fmt;
        v10 = &v45;
        v11 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v30 = "Mismatch between definition and access of `";
        v31 = 2;
        v34 = 0;
        v32 = &v7;
        v33 = 2;
        v30 = core::panicking::panic_fmt();
    }
    v110 = v19;
    if v110 {
        v112 = *((v110 + 8) as &i64);
        v113 = *((v110 + 16) as &i64);
        v45 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v112, v113);
        if !v45 {
            v119 = __rust_alloc(1, 1);
            v42 = v119;
            *(v119 as &i8) = 9;
            v67 = v46;
        } else {
            if v113 < 2 {
                if !(v113 == 1) {
                    goto LABEL_544134;
                }
            } else {
                if *((v112 + 1) as &i8) <= 191 {
LABEL_544134:
                    core::str::slice_error_fail(); /* do not return */
                }
            }
            v123 = __rust_alloc(1, 1);
            v42 = v123;
            *(v123 as &i8) = *(v112 as &i8);
            if v113 >= 2 && *((v112 + 1) as &i8) <= 191 {
                core::str::slice_error_fail(); /* do not return */
            }
            v30 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v112 + 1, v113 - 1);
            if !v30 {
                v126 = v31;
            }
            v67 = v126;
        }
        v43 = 1;
        v29 = 0;
        goto LABEL_544337;
    }
    v114 = a1;
    v29 = v116 | -0x100 | 1;
    if !*((v114 + 16) as &i64) {
        v122 = 0x8000000000000000;
    } else {
        do {
            if *((*((v114 + 8) as &i64) + 0 + 8) as &i64) == 12 && !(*((v120 + 8) as &i32) ^ 1936027241) && !(*(v120 as &i64) ^ 7795012309816800622) {
                v68 = 1;
                v121 = __rust_alloc(1, 1);
                v42 = v121;
                *(v121 as &i8) = 9;
                v67 = 5;
                v29 = 0;
                v122 = 1;
                goto LABEL_544237;
            }
        } while ((v90 += 16, v88 << 4 != v90));
    }
LABEL_544237:
    v43 = v122;
LABEL_544337:
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v114, &g_46a4fc, 12) as i8;
    if v1 {
        alloc::str::<impl str>::repeat(&v70, &g_46b2e0, 1, 2);
    } else {
        v128 = __rust_alloc(1, 1);
        *(v128 as &i8) = 10;
        v70 = 1;
        v71 = v128;
        v72 = 1;
    }
    v129 = __rust_alloc(1, 1);
    v69 = v129;
    *(v129 as &i8) = 10;
    if v87 {
LABEL_5443f5:
        v7 = chrono::offset::local::Local::now(v130, v131);
        v132 = 0x8000000000000000;
        v133 = v9;
        v13 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v7, v133);
        v134 = v13;
        vvar_1559{reg 224} = (((vvar_56{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, Load(addr=stack_base-964, size=8, endness=Iend_LE)))
        s_278 =L Conv(256->128, vvar_1559{reg 224})<16>
        v18 = 0;
        v19 = 1;
        v20 = 0;
        v51 = 32;
        v52 = 3;
        v45 = 0;
        v47 = 0;
        v49 = &v18;
        v50 = &anon.0f10eb28c8b8d847c69197656f440a48.0.llvm.2574126996462421831;
        if <chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt(&v9, &v45) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        v139 = v18;
        v30 = v139;
        v32 = v20;
        v40 = v134;
        v38 = 1;
        vvar_4036{stack -772} = Conv(256->64, ((((vvar_1559{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1586{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-632, size=16, endness=Iend_LE))))
        v33 = v133;
        v34 = &g_46b2ec;
        v35 = 14;
        v36 = 8;
        v37 = 0;
        v18 = 0;
        v19 = 1;
        v20 = 0;
        v51 = 32;
        v52 = 3;
        v45 = 0;
        v47 = 0;
        v49 = &v18;
        if <chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt() as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        v44 = v18;
        v56 = v19;
        v141 = v20;
        v61 = v141;
        v142 = v30;
        v46 = v46;
        if v142 != 0x8000000000000000 {
            v46 = v46;
            if v142 {
                v46 = v46;
                goto LABEL_544962;
            }
        }
        goto LABEL_544962;
    }
    if !a3 {
        core::panicking::panic_bounds_check(); /* do not return */
    }
    v130 = *(a2 as &i64);
    v131 = *((a2 + 8) as &i64);
    if v131 == 1 && *(v130 as &i8) == 45 {
        goto LABEL_5443f5;
    }
    v30 = std::sys::pal::unix::fs::stat(v130, v131);
    if v30 == 2 {
        v132 = 0x8000000000000000;
        v56 = 1;
        v61 = 0;
        v136 = 0;
        v44 = 0;
        v45 = v45;
        v46 = v46;
        goto LABEL_544962;
    }
    memcpy(&v47, &v30, 160);
    v45 = struct16 {
        field_0: v137
        field_8: v138
    };
    v63 = std::fs::Metadata::modified(&v45);
    v132 = 0x8000000000000000;
    v140 = *((&v63 as &char + 8) as &i32);
    if v140 == 0x3b9aca00 {
        goto LABEL_54493c;
    } else {
        v30 = <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::convert::From<std::time::SystemTime>>::from(v63, v140);
        v13 = v30;
        v15 = <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(1, &v30) as i32;
        v76 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v13, v15);
        v143 = v76;
        vvar_1655{reg 224} = (((vvar_56{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, Load(addr=stack_base-196, size=8, endness=Iend_LE)))
        s_278 =L Conv(256->128, vvar_1655{reg 224})<16>
        v7 = 0;
        v8 = 1;
        v10 = 0;
        v24 = 32;
        v25 = 3;
        v18 = 0;
        v20 = 0;
        v22 = &v7;
        v23 = &anon.0f10eb28c8b8d847c69197656f440a48.0.llvm.2574126996462421831;
        if <chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt(&v15, &v18) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        v146 = v7;
        v30 = v146;
        v32 = v10;
        v40 = v143;
        v38 = 1;
        vvar_4077{stack -772} = Conv(256->64, ((((vvar_1655{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1664{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-632, size=16, endness=Iend_LE))))
        v33 = v15;
        v34 = &g_46b2ec;
        v35 = 14;
        v36 = 8;
        v37 = 0;
        v7 = 0;
        v8 = 1;
        v10 = 0;
        v24 = 32;
        v25 = 3;
        v18 = 0;
        v20 = 0;
        v22 = &v7;
        v132 = 0x8000000000000000;
        if <chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt() as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        v44 = v7;
        v136 = v10;
        v61 = v136;
        v8 = v8;
        if v44 == 0x8000000000000000 {
LABEL_54493c:
            v61 = 0;
            v136 = 0;
            v44 = 0;
        }
        v8 = v8;
        v56 = 1;
        v45 = v45;
        v46 = v46;
    }
LABEL_544962:
    v0 = v136 | -0x100 | 1;
    v5 = &v30;
    regex::regex::string::Regex::new(&v30, &g_46b2fa, 18);
    if !v30 {
        v47 = *((&v30 as &char + 24) as &i64);
        v45 = v31;
        core::result::unwrap_failed(); /* do not return */
    }
    v77 = *((&v30 as &char + 16) as &i128);
    v76 = v30;
    regex::regex::string::Regex::captures_at(&v18, &v76, a4, a5);
    if v18 == 2 {
        v6 = 1;
        v30 = v30;
        v31 = v31;
        v32 = v32;
    }
    v53 = v26;
    v148 = v18;
    v149 = v20;
    v150 = v22;
    v51 = v24;
    v49 = v150;
    v47 = v149;
    v45 = v148;
    if !*((&v49 as &char + 8) as &i32) {
LABEL_5465c0:
        core::option::unwrap_failed(); /* do not return */
    }
    v151 = v51;
    v152 = *((v151 + 32) as &i64);
    if v152 == 1 {
        v153 = 3;
        v154 = 2;
    }
    v155 = *((&v49 as &char + 12) as &i32);
    if !(v152 > v155) || !((v156 = *((v151 + 24) as &i64), v154 = *((v156 + v155 * 8) as &i32) as u32 as u64, *((v156 + (v155 << 3) + 4) as &i32) as u32 as u64 - v154 >= 2)) || !(v154 < v157) || !(v159) || !(v153 < v157) || !((v160 = *((v158 + v153 * 8) as &i64), v160)) {
        goto LABEL_5465c0;
    }
    v161 = v159 - 1;
    v162 = v160 - 1;
    v163 = *((&v51 as &char + 8) as &i64);
    v164 = v53;
    if v161 > v162 {
LABEL_544b1c:
        core::str::slice_error_fail(); /* do not return */
    }
    if v161 {
        if v161 >= v164 {
            if !(v161 == v164) {
                goto LABEL_544b1c;
            }
        } else {
            if *((v163 + v161) as &i8) <= 191 {
                goto LABEL_544b1c;
            }
        }
    }
    if v162 {
        if v162 >= v164 {
            if !(v162 == v164) {
                goto LABEL_544b1c;
            }
        } else {
            if *((v163 + v162) as &i8) <= 191 {
                goto LABEL_544b1c;
            }
        }
    }
    v30 = struct24 {
        field_0: 0
        field_8: v165
        field_16:         core::str::<impl str>::trim_matches(v163 + v161, v160 - v159)
    };
    v33 = v165;
    v34 = 0;
    v35 = v165;
    v36 = 249108103226;
    v37 = 1;
    v38 = 1;
    v58 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v30, v165);
    if !*((&v58 as &char + 16) as &i64) {
        core::panicking::panic_bounds_check(); /* do not return */
    }
    v166 = v59;
    v167 = *(v166 as &i64);
    v168 = *((v166 + 8) as &i64);
    if v168 {
        if v168 < 0 {
            v6 = 0;
        }
        v6 = 1;
    }
    memcpy(v170, v167, v168);
    v73 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v170, v168);
    if !v73 {
        v173 = *((&v73 as &char + 8) as &i64);
        v174 = 9223372036854775813;
        v8 = v8;
    } else {
        v13 = 0;
        v14 = v32;
        v16 = v165;
        v17 = 1;
        v74 = &v13;
        v75 = <os_display::Quoted as core::fmt::Display>::fmt;
        v7 = Arguments {
            pieces: ["invalid + argument "]
            args: &[&Argument] {
                ptr: &v74
                len: <UNKNOWN>
            }
            fmt: None
        };
        v11 = 1;
        v64 = alloc::fmt::format::format_inner(&v7);
        v174 = 9223372036854775809;
        v7 = v65;
        v8 = v8;
    }
    v175 = v51;
    *(v175 as &i32) = vvar_4139 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x544d41;
    }
    v132 = 0x8000000000000000;
    if !vvar_4139 - 1 {
        goto LABEL_0x544d51;
    }
}
