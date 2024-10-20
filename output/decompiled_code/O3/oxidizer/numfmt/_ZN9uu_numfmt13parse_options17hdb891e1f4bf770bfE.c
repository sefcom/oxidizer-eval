fn uu_numfmt::parse_options(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x1f8]
    let v1: i8;  // [sp-0x1e9]
    let v2: i8;  // [bp-0x1e8], Other Possible Types: Enum
    let v3: i8;  // [bp-0x1e0]
    let v4: i64;  // [bp-0x1d8]
    let v5: i64;  // [sp-0x1c8]
    let v6: i32;  // [sp-0x1bc]
    let v7: i64;  // [sp-0x1b8], Other Possible Types: struct24, Enum, struct40
    let v8: i64;  // [sp-0x1b0]
    let v9: i64;  // [sp-0x1a8]
    let v10: i64;  // [sp-0x1a0]
    let v11: i64;  // [sp-0x198]
    let v12: i8;  // [bp-0x188]
    let v13: i8;  // [bp-0x178]
    let v14: i8;  // [bp-0x168]
    let v15: i64;  // [sp-0x160]
    let v16: i64;  // [sp-0x158]
    let v17: i64;  // [sp-0x150]
    let v18: i64;  // [sp-0x148]
    let v19: i8;  // [bp-0x140]
    let v20: i8;  // [bp-0x138]
    let v21: i64;  // [sp-0x130], Other Possible Types: Enum
    let v22: i64;  // [sp-0x128]
    let v23: i64;  // [sp-0x120]
    let v24: i64;  // [sp-0x118]
    let v25: i64;  // [sp-0x110]
    let v26: i64;  // [sp-0x108]
    let v27: i64;  // [sp-0x100]
    let v28: i128;  // [bp-0xf8]
    let v29: i128;  // [bp-0xf0]
    let v30: i128;  // [bp-0xe8]
    let v31: i64;  // [sp-0xe0]
    let v32: i64;  // [sp-0xd8]
    let v33: i64;  // [sp-0xd0]
    let v34: i128;  // [sp-0xc8]
    let v35: i64;  // [sp-0xb8]
    let v36: i64;  // [sp-0xb0]
    let v37: i16;  // [bp-0xa8]
    let v38: i64;  // [sp-0x98]
    let v39: i64;  // [sp-0x90]
    let v40: i64;  // [sp-0x88]
    let v41: i64;  // [sp-0x80]
    let v42: i64;  // [sp-0x78]
    let v43: i64;  // [sp-0x70]
    let v44: i64;  // [sp-0x68]
    let v45: i64;  // [sp-0x60]
    let v46: i128;  // [sp-0x58]
    let v47: i128;  // [sp-0x48]
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v51: i8;  // bpl
    let v52: i64;  // rcx
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v57: i64;  // rcx
    let v58: i64;  // rax
    let v59: i64;  // rax
    let v61: i64;  // rax
    let v63: i64;  // r15
    let v64: i64;  // rax
    let v65: i64;  // rax
    let v66: i64;  // rcx
    let v67: i64;  // rdx
    let v68: i64;  // rax
    let v69: i64;  // r8
    let v70: i64;  // rdi
    let v71: i64;  // r9
    let v73: i64;  // r15
    let v74: i64;  // rax
    let v75: i64;  // rsi
    let v76: i64;  // rdx
    let v77: i64;  // r11
    let v78: i64;  // rsi
    let v79: i64;  // r9
    let v80: i64;  // rcx
    let v81: i64;  // r9
    let v82: i64;  // r8
    let v83: i64;  // rdi
    let v84: i64;  // r11
    let v85: i64;  // r9
    let v86: i32;  // r10d
    let v87: i32;  // r10d
    let v88: i32;  // r13d
    let v89: i32;  // r15d
    let v90: i64;  // rax
    let v91: i64;  // r13
    let v92: i64;  // rax
    let v93: i128;  // xmm0
    let v94: i64;  // rcx
    let v95: i128;  // xmm0
    let v96: i128;  // xmm1
    let v97: i64;  // rax
    let v98: i64;  // rcx
    let v99: i64;  // r15
    let v100: i64;  // rax
    let v101: i64;  // rcx
    let v102: i64;  // rax
    let v103: i64;  // rcx
    let v104: i64;  // rcx
    let v105: i64;  // rax
    let v106: i32;  // edx
    let v107: i64;  // rax
    let v108: i64;  // rax
    let v109: i128;  // xmm0
    let v110: i128;  // xmm1
    let v111: i128;  // xmm2

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, a1, &g_413d6c, 4);
    v38 = &g_413d6c;
    v39 = 4;
    if v2 == 2 {
        v49 = v3;
        if !v49 {
            core::option::unwrap_failed(); /* do not return */
        }
        v21 = uu_numfmt::parse_unit(*((v49 + 8) as &i64), *((v49 + 16) as &i64));
        v50 = v21;
        v51 = *((&v21 as &char + 8) as &i8);
        if v50 != 0x8000000000000000 {
            v52 = *((&v21 as &char + 9) as &i64);
            *((a0 + 24) as &i64) = v23;
            *((a0 + 17) as &i64) = v52;
            *((a0 + 8) as &i64) = v50;
            *((a0 + 16) as &i8) = v51;
            *(a0 as &i64) = 2;
            return a0;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, a1, &g_41df58, 2);
        v38 = &g_41df58;
        v39 = 2;
        if v2 == 2 {
            v53 = v3;
            if !v53 {
                core::option::unwrap_failed(); /* do not return */
            }
            v21 = uu_numfmt::parse_unit(*((v53 + 8) as &i64), *((v53 + 16) as &i64));
            v55 = v21;
            if v55 != 0x8000000000000000 {
                v57 = *((&v21 as &char + 9) as &i64);
                *((a0 + 24) as &i64) = v23;
                *((a0 + 17) as &i64) = v57;
                *((a0 + 8) as &i64) = v55;
                *((a0 + 16) as &i8) = v1;
                *(a0 as &i64) = 2;
                return a0;
            }
            v1 = *((&v21 as &char + 8) as &i8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, a1, &g_41df5a, 9);
            v21 = &g_41df5a;
            v22 = 9;
            if v2 != 2 {
LABEL_48e367:
                v32 = v5;
                v30 = v4;
                v28 = v2;
                v54 = &v21;
                v15 = v54;
                v16 = <&T as core::fmt::Display>::fmt;
                v17 = &v28;
                v18 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v7 = "Mismatch between definition and access of `";
                v8 = 2;
                v11 = 0;
                v9 = &v15;
                v10 = 2;
                v7 = core::panicking::panic_fmt();
            }
            v58 = v3;
            if !v58 {
                core::option::unwrap_failed(); /* do not return */
            }
            v7 = uu_numfmt::parse_unit_size(*((v58 + 8) as &i64), *((v58 + 16) as &i64));
            v59 = v7;
            if v59 == 0x8000000000000000 {
                v47 = *((&v7 as &char + 8) as &i128);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, a1, &g_41df63, 7);
                v21 = &g_41df63;
                v22 = 7;
                if v2 != 2 {
                    vvar_1332{stack -216} = v5;
                    v30 = v4;
                    v28 = v2;
                    vvar_1336{stack -352} = v54;
                    vvar_1337{stack -344} = <&T as core::fmt::Display>::fmt;
                    vvar_1338{stack -336} = &v28;
                    vvar_1339{stack -328} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                    vvar_1340{stack -440} = "Mismatch between definition and access of `";
                    vvar_1341{stack -432} = 2;
                    vvar_1342{stack -408} = 0;
                    vvar_1343{stack -424} = &v15;
                    vvar_1344{stack -416} = 2;
                    vvar_1345{stack -440} = core::panicking::panic_fmt();
                }
                v61 = v3;
                if !v61 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v7 = uu_numfmt::parse_unit_size(*((v61 + 8) as &i64), *((v61 + 16) as &i64));
                v59 = v7;
                if v59 == 0x8000000000000000 {
                    v46 = *((&v7 as &char + 8) as &i128);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, a1, &g_41df6a, 7);
                    v21 = &g_41df6a;
                    v22 = 7;
                    if v2 != 2 {
                        vvar_1347{stack -216} = v5;
                        v30 = v4;
                        v28 = v2;
                        vvar_1351{stack -352} = v54;
                        vvar_1352{stack -344} = <&T as core::fmt::Display>::fmt;
                        vvar_1353{stack -336} = &v28;
                        vvar_1354{stack -328} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                        vvar_1355{stack -440} = "Mismatch between definition and access of `";
                        vvar_1356{stack -432} = 2;
                        vvar_1357{stack -408} = 0;
                        vvar_1358{stack -424} = &v15;
                        vvar_1359{stack -416} = 2;
                        vvar_1360{stack -440} = core::panicking::panic_fmt();
                    }
                    v63 = v3;
                    if !v63 {
                        goto LABEL_48daad;
                    }
                    v7 = core::num::<impl core::str::traits::FromStr for isize>::from_str(*((v63 + 8) as &i64), *((v63 + 16) as &i64));
                    if !(!v7) || !((v65 = v8, v65)) {
                        v7 = uu_numfmt::parse_options::{{closure}}(*((v63 + 8) as &i64), *((v63 + 16) as &i64));
                        v59 = v7;
                        if !(v59 == 0x8000000000000000) {
                            goto LABEL_48de4b;
                        }
                        v64 = v8;
                    }
LABEL_48daad:
                    v45 = 0;
                    v66 = *((a1 + 16) as &i64);
                    if !v66 {
LABEL_48dbd1:
                        v25 = 0;
LABEL_48dbdb:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, a1, &g_41df77, 5);
                        v21 = &g_41df77;
                        v22 = 5;
                        if v2 == 2 {
                            v74 = v3;
                            if !v74 {
                                core::option::unwrap_failed(); /* do not return */
                            }
                            v75 = *((v74 + 8) as &i64);
                            v76 = *((v74 + 16) as &i64);
                            v77 = 0;
                            loop {
                                v79 = v78;
                                v80 = v77;
                                do {
                                    v82 = v81;
                                    if v82 == v75 + v76 {
                                        if !(v76 - v80 != 1) && !(*((v75 + v80) as &i8) != 45) {
                                            goto LABEL_48dd17;
                                        }
                                        uucore::features::ranges::Range::from_list(&v7, v75, v76, v80, v82, v79, v0);
                                        v91 = v8;
                                        if v7 {
                                            *((a0 + 8) as &i64) = v91;
                                            *((a0 + 16) as &i64) = v27;
                                            *((a0 + 24) as &i64) = v43;
                                            *(a0 as &i64) = 2;
                                            return a0;
                                        }
                                        v43 = v10;
                                        v27 = v9;
                                        goto LABEL_48dda9;
                                    }
                                    v83 = v77;
                                    v84 = *(v82 as &i8);
                                    if v84 >= 0 {
                                        v85 = v82 + 1;
                                        v86 = v84;
                                    } else {
                                        v87 = v84 & 31;
                                        v88 = *((v82 + 1) as &i8) & 63;
                                        if (v84 & 255) <= 223 {
                                            v85 = v82 + 2;
                                            v86 = v87 * 64 | v88;
                                        } else {
                                            v89 = *((v82 + 2) as &i8) & 63 | v88 * 64;
                                            if (v84 & 255) < 240 {
                                                v85 = v82 + 3;
                                                v86 = v87 * 0x1000 | v89;
                                            } else {
                                                v85 = v82 + 4;
                                                v86 = (v87 & 7) * 0x40000 | *((v82 + 3) as &i8) & 63 | v89 * 64;
                                            }
                                        }
                                    }
                                    v77 = v85 - v82 + v83;
                                } while (v86 != 44 && v86 != 32);
                                if !(v83 - v80 == 1) || !(*((v75 + v80) as &i8) == 45) {
                                    continue;
                                }
LABEL_48dd17:
                                v90 = __rust_alloc(16, 8);
                                *(v90 as &i64) = 1;
                                v27 = v90;
                                *((v90 + 8) as &i64) = -1;
                                v43 = 1;
                                v91 = 1;
LABEL_48dda9:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a1, &g_41df7c, 6);
                                v38 = &g_41df7c;
                                v39 = 6;
                                if v15 != 2 {
                                    v5 = v19;
                                    v93 = v15;
                                    v4 = v17;
                                    v2 = v93;
                                    v21 = &v38;
                                    v22 = <&T as core::fmt::Display>::fmt;
                                    v23 = &v2;
                                    v24 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                                    v7 = "Mismatch between definition and access of `";
                                    v8 = 2;
                                    v11 = 0;
                                    v9 = &v21;
                                    v10 = 2;
                                    v7 = core::panicking::panic_fmt();
                                }
                                v92 = v16;
                                if !v92 {
                                    v37 = 0;
                                    v28 = 0;
                                    v30 = 0;
                                    v32 = 0;
                                    v33 = 1;
                                    v34 = 0;
                                    v35 = 1;
                                    v36 = 0;
                                    goto LABEL_48ded1;
                                }
                                <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(&v7, *((v92 + 8) as &i64), *((v92 + 16) as &i64));
                                v2 = *((&v7 as &char + 8) as &i128);
                                v4 = v10;
                                if v28 == 2 {
                                    *((a0 + 24) as &i64) = v4;
                                    *((a0 + 8) as &i128) = v2;
                                    *(a0 as &i64) = 2;
                                    goto LABEL_48dfeb;
                                }
                                v94 = v14;
                                v37 = v94;
                                v95 = v11;
                                v96 = v12;
                                v35 = v13;
                                v34 = v96;
                                v32 = v95;
                                v29 = v2;
                                v31 = v4;
                                v28 = v7;
                                if v1 != 5 && v94 {
                                    v7 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                                    *((a0 + 24) as &i64) = v9;
                                    *((a0 + 8) as &i192) = v7;
LABEL_48dfd7:
                                    *(a0 as &i64) = 2;
LABEL_48dfeb:
                                    if v91 {
                                        return a0;
                                    }
                                    return a0;
                                }
LABEL_48ded1:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, a1, &g_41df82, 9);
                                v8 = 0x8000000000000000;
                                v7 = 0;
                                v2 = core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap(&g_41df82, 9, &v7), &v7);
                                v97 = *((&v2 as &char + 8) as &i64);
                                v98 = *((&v2 as &char + 16) as &i64);
                                v99 = *((&v2 as &char + 24) as &i64);
                                if v2 {
                                    *((a0 + 8) as &i64) = v40;
                                    *((a0 + 16) as &i64) = v42;
                                    *((a0 + 24) as &i64) = v99;
                                    goto LABEL_48dfd7;
                                }
                                v42 = v98;
                                v40 = v97;
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, a1, &g_41df8b, 5);
                                v100 = clap_builder::parser::error::MatchesError::unwrap(&g_41df8b, 5, &v7);
                                if !v100 {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                v101 = *((v100 + 16) as &i64) - 2;
                                switch (v101) {
                                case 0:
                                    if !(*(v102 as &i16) == 28789) {
                                        goto LABEL_48e0c7;
                                    }
                                    v6 = 0;
                                    break;
                                case 2:
                                    v6 = v103 | -0x100 | 1;
                                    if !(*(v102 as &i32) == 1853321060) {
                                        goto LABEL_48e0c7;
                                    }
                                    break;
                                case 5:
                                    v6 = v102 | -0x100 | 4;
                                    if !(!(1953719666 ^ *((v102 + 3) as &i32))) || !(!(1918985582 ^ *(v102 as &i32))) {
                                        goto LABEL_48e0c7;
                                    }
                                    break;
                                case 7:
                                    v104 = 8243129028499698278 ^ *(v102 as &i64);
                                    v105 = *((v102 + 8) as &i8) ^ 111;
                                    v106 = -26;
                                    goto LABEL_48e11f;
                                case 10:
                                    v104 = 3275071796452749172 ^ *(v102 as &i64);
                                    v105 = *((v102 + 8) as &i32) ^ 1869768058;
                                    v106 = -25;
LABEL_48e11f:
                                    v6 = v106;
                                    if !v105 && !v104 {
                                        goto LABEL_48e128;
                                    } else {
                                        goto LABEL_48e0c7;
                                    }
                                default:
LABEL_48e0c7:
                                    v7 = "internal error: entered unreachable code: Should be restricted by clap";
                                    v8 = 1;
                                    v9 = &v20;
                                    v10 = 0;
                                    v7 = core::panicking::panic_fmt();
                                }
LABEL_48e128:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, a1, &g_41dff4, 6);
                                v107 = clap_builder::parser::error::MatchesError::unwrap(&g_41dff4, 6, &v7);
                                if !v107 {
                                    v26 = 0x8000000000000000;
                                } else {
                                    v7 = <alloc::string::String as core::clone::Clone>::clone(v107);
                                    v26 = v7;
                                    v41 = v8;
                                    v44 = v9;
                                }
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, a1, &g_41dffa, 7);
                                v108 = clap_builder::parser::error::MatchesError::unwrap(&g_41dffa, 7, &v7);
                                if !v108 {
                                    core::option::unwrap_failed(); /* do not return */
                                }
                                v2 = <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(*((v108 + 8) as &i64), *((v108 + 16) as &i64));
                                if v2 == 0x8000000000000000 {
                                    *((a0 + 80) as &i64) = v37;
                                    *((a0 + 64) as &i128) = v35;
                                    v109 = v28;
                                    v110 = *((&v29 as &char + 8) as &i128);
                                    v111 = v32;
                                    *((a0 + 48) as &i128) = v34;
                                    *((a0 + 32) as &i128) = v111;
                                    *((a0 + 16) as &i128) = v110;
                                    *(a0 as &i128) = v109;
                                    *((a0 + 88) as &i64) = v91;
                                    *((a0 + 96) as &i64) = v27;
                                    *((a0 + 104) as &i64) = v43;
                                    *((a0 + 112) as &i64) = v40;
                                    *((a0 + 120) as &i64) = v42;
                                    *((a0 + 128) as &i64) = v99;
                                    *((a0 + 136) as &i64) = v26;
                                    *((a0 + 144) as &i64) = v41;
                                    *((a0 + 152) as &i64) = v44;
                                    *((a0 + 160) as &i64) = v46 CONCAT v47;
                                    *((a0 + 176) as &i8) = v51;
                                    *((a0 + 177) as &i8) = v1;
                                    *((a0 + 184) as &i64) = v45;
                                    *((a0 + 192) as &i64) = v25;
                                    *((a0 + 200) as &i8) = *((&v2 as &char + 8) as &i8);
                                    *((a0 + 201) as &i8) = v6;
                                    return a0;
                                }
                                v9 = *((&v2 as &char + 16) as &i64);
                                v7 = v2;
                                core::result::unwrap_failed(); /* do not return */
                            }
                        }
                        goto LABEL_48e367;
                    } else {
                        v67 = *((a1 + 8) as &i64);
                        v68 = 97;
                        v69 = 0;
                        v70 = 0;
                        while (!(*((v67 + v69 + 8) as &i64) == 6) || !(!(*((v71 + 4) as &i16) ^ 29285)) || !(!(*(v71 as &i32) ^ 1684104552))) {
                            v69 += 16;
                            v68 += 104;
                            v70 += 1;
                            if v66 << 4 == v69 {
                                goto LABEL_48dbd1;
                            }
                        }
                        if v70 >= *((a1 + 40) as &i64) {
                            core::panicking::panic_bounds_check(); /* do not return */
                        }
                        if !(*((*((a1 + 32) as &i64) + v68) as &i8) == 2) {
                            goto LABEL_48dbd1;
                        }
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, a1, &g_41df71, 6);
                        v21 = &g_41df71;
                        v22 = 6;
                        if v2 != 2 {
                            vvar_1362{stack -216} = v5;
                            v30 = v4;
                            v28 = v2;
                            vvar_1366{stack -352} = v54;
                            vvar_1367{stack -344} = <&T as core::fmt::Display>::fmt;
                            vvar_1368{stack -336} = &v28;
                            vvar_1369{stack -328} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                            vvar_1370{stack -440} = "Mismatch between definition and access of `";
                            vvar_1371{stack -432} = 2;
                            vvar_1372{stack -408} = 0;
                            vvar_1373{stack -424} = &v15;
                            vvar_1374{stack -416} = 2;
                            vvar_1375{stack -440} = core::panicking::panic_fmt();
                        }
                        v73 = v3;
                        if !v73 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v7 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v73 + 8) as &i64), *((v73 + 16) as &i64));
                        if !v7 && (v25 = v8, v25) {
                            goto LABEL_48dbdb;
                        }
                        v7 = uu_numfmt::parse_options::{{closure}}(*((v73 + 8) as &i64), *((v73 + 16) as &i64));
                        v59 = v7;
                        if v59 == 0x8000000000000000 {
                            goto LABEL_48dbd1;
                        }
LABEL_48de4b:
                    }
                }
            }
            *((a0 + 8) as &i64) = v59;
            *((a0 + 16) as &i128) = v47;
            *(a0 as &i64) = 2;
            return a0;
        }
    }
    v32 = v5;
    v30 = v4;
    v28 = v2;
    vvar_1313{stack -352} = v54;
    vvar_1314{stack -344} = <&T as core::fmt::Display>::fmt;
    vvar_1315{stack -336} = &v28;
    vvar_1316{stack -328} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    vvar_1317{stack -440} = "Mismatch between definition and access of `";
    vvar_1318{stack -432} = 2;
    vvar_1319{stack -408} = 0;
    vvar_1320{stack -424} = &v15;
    vvar_1321{stack -416} = 2;
    vvar_1322{stack -440} = core::panicking::panic_fmt();
}
