fn uu_expand::Options::new(a0: void*, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x210]
    let v1: i64;  // [bp-0x208]
    let v2: i64;  // [sp-0x200]
    let v3: i64;  // [sp-0x1f8]
    let v4: i64;  // [sp-0x1f0]
    let v5: i64;  // [sp-0x1e8]
    let v6: i64;  // [sp-0x1d8], Other Possible Types: struct32, struct16
    let v7: i64;  // [sp-0x1d0]
    let v8: i128;  // [sp-0x1c8]
    let v9: i64;  // [sp-0x1c0]
    let v10: i64;  // [sp-0x1b8]
    let v11: i64;  // [sp-0x1a8], Other Possible Types: Enum
    let v12: i64;  // [sp-0x1a0]
    let v13: i64;  // [sp-0x198]
    let v14: i64;  // [sp-0x190]
    let v15: i64;  // [bp-0x188]
    let v16: i64;  // [bp-0x180], Other Possible Types: struct24, Enum
    let v17: i64;  // [bp-0x178]
    let v18: i192;  // [bp-0x170]
    let v19: i8;  // [bp-0x168]
    let v20: i8;  // [bp-0x160]
    let v21: i8;  // [bp-0x158]
    let v22: i8;  // [bp-0x150]
    let v23: i8;  // [bp-0x140]
    let v24: i64;  // [bp-0x138], Other Possible Types: struct32
    let v25: i64;  // [sp-0x130]
    let v26: i64;  // [bp-0x128]
    let v27: i64;  // [sp-0x120]
    let v28: i64;  // [bp-0x118]
    let v29: i64;  // [sp-0x108]
    let v30: i64;  // [bp-0xf8]
    let v31: i64;  // [sp-0xf0]
    let v32: i128;  // [bp-0xe8]
    let v33: i64;  // [sp-0xe0]
    let v34: i64;  // [sp-0xd8]
    let v35: i64;  // [sp-0xd0]
    let v36: i64;  // [sp-0xc8]
    let v37: i64;  // [sp-0xb8]
    let v38: Enum;  // [sp-0xb0], Other Possible Types: i64
    let v39: Enum;  // [sp-0x70], Other Possible Types: i64
    let v41: i128;  // xmm0
    let v42: i64;  // rax
    let v43: i64;  // r14
    let v44: i64;  // r12
    let v45: i64;  // r9
    let v46: i64;  // r15
    let v47: i8;  // bl
    let v48: i64;  // r13
    let v49: i64;  // r12
    let v51: i64;  // r13
    let v52: i64;  // rax
    let v53: i64;  // rsi
    let v54: i64;  // rdx
    let v55: i32;  // ecx
    let v56: i32;  // ecx
    let v57: i32;  // r8d
    let v58: i32;  // edi
    let v59: i64;  // r13
    let v60: i64;  // r13
    let v61: i64;  // rax
    let v62: i64;  // rbx
    let v63: i32;  // r9d
    let v64: i64;  // r14
    let v65: i64;  // r12
    let v66: i64;  // rsi
    let v67: i64;  // rbp
    let v68: i64;  // rdx
    let v69: i32;  // ecx
    let v70: i32;  // r8d
    let v71: i32;  // edi
    let v72: i64;  // rdx
    let v73: i64;  // rdx
    let v74: i64;  // rsi
    let v75: i64;  // rdx
    let v76: i32;  // ecx
    let v78: i64;  // rax
    let v79: i32;  // ecx
    let v80: i64;  // rcx
    let v81: i64;  // rcx
    let v82: i64;  // r15
    let v83: i64;  // r13
    let v84: i64;  // rbp
    let v85: i64;  // r12
    let v86: i64;  // r14
    let v88: i64;  // r13
    let v89: i64;  // rbx
    let v90: i64;  // r12
    let v93: i64;  // rbx
    let v95: i64;  // rax
    let v96: i64;  // r12
    let v97: i64;  // rcx
    let v98: i64;  // r13
    let v99: i32;  // edi
    let v100: i32;  // edx
    let v101: i32;  // eax
    let v102: i64;  // rdi
    let v103: i64;  // r12
    let v104: i64;  // rsi
    let v105: i64;  // rbp
    let v107: i64;  // rsi
    let v108: i64;  // rax
    let v109: i64;  // r13
    let v110: i64;  // rdx
    let v111: i64;  // rsi
    let v112: i64;  // rdi
    let v113: i64;  // r8
    let v114: i64;  // rcx
    let v115: i128;  // xmm0
    let v117: i64;  // rbp
    let v118: i64;  // rax
    let v119: i64;  // r15

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, a1, &anon.c0a2baf3a258817979713691effb9d34.6.llvm.9602832291383151297, 4);
    v35 = &anon.c0a2baf3a258817979713691effb9d34.6.llvm.9602832291383151297;
    v36 = 4;
    if v16 {
        v34 = v21;
        v41 = v17;
        v32 = v19;
        v30 = v41;
        v11 = &v35;
        v12 = <&T as core::fmt::Display>::fmt;
        v13 = &v30;
        v14 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v6 = "Mismatch between definition and access of `";
        v7 = 2;
        v10 = 0;
        v8 = &v11;
        v9 = 2;
        v6 = core::panicking::panic_fmt();
    }
    v24 = v18;
    v26 = v20;
    v28 = v22;
    v29 = v23;
    if v38 {
        *(&v38 as &Enum) = Enum {
            field_0: v17
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
        };
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v30, &v38);
        v43 = v31;
        v16 = alloc::str::join_generic_copy(v43, v32, &g_419120, &g_1);
        v44 = v17;
        v45 = v18;
        v46 = v44 + v45;
        if v45 {
            v48 = 0;
            do {
                v52 = v49;
                v53 = *(v52 as &i8);
                if v53 >= 0 {
                    v54 = v52 + &g_1 as &u8;
                    v55 = v53;
                    if v55 == 44 {
                        goto LABEL_482349;
                    }
                    goto LABEL_482340;
                }
                v56 = v53 & 31;
                v57 = *((v52 + &g_1 as &u8) as &i8) & 63;
                if (v53 & 255) <= 223 {
                    v54 = v52 + 2;
                    v55 = v56 * 64 | v57;
                    if v55 == 44 {
                        goto LABEL_482349;
                    }
                    goto LABEL_482340;
                }
                v58 = *((v52 + 2) as &i8) & 63 | v57 * 64;
                if (v53 & 255) >= 240 {
                    v54 = v52 + 4;
                    v55 = (v56 & 7) * 0x40000 | *((v52 + 3) as &i8) & 63 | v58 * 64;
                    if v55 == 44 {
                        goto LABEL_482349;
                    }
                } else {
                    v54 = v52 + 3;
                    v55 = v56 * 0x1000 | v58;
                    if v55 == 44 {
                        goto LABEL_482349;
                    }
                }
LABEL_482340:
                if v55 != 32 {
                    goto LABEL_482419;
                }
LABEL_482349:
                v48 = v48 - v52 + v54;
            } while (v54 != v46);
        }
LABEL_482419:
        v59 = v51;
        if v45 == v59 {
            v42 = __rust_alloc(8, 8);
            *(v42 as &i64) = 8;
            v0 = &g_1;
            v47 = 0;
            v1 = &g_1;
        } else {
            v37 = v45 - v59;
            v3 = v16;
            v2 = v43;
            v5 = v44;
            v60 = v59 + v44;
            v6 = 0;
            v42 = 8;
            v8 = 0;
            v61 = 0;
            v0 = 0;
            v62 = 0;
            v63 = 0;
            v64 = 0;
            v15 = v60;
            v65 = 0;
            do {
                v66 = v64;
                do {
                    v67 = v60;
                    v68 = v65;
                    if v67 == v46 {
                        v65 = v68;
                        v60 = v46;
                        v64 = v66;
                        v72 = v37;
                        v73 = v72 - v66;
                        if v72 == v66 {
                            goto LABEL_482487;
                        }
                    }
                    v61 = *(v67 as &i8);
                    if v61 >= 0 {
                        v60 = v67 + &g_1 as &u8;
                    } else {
                        v69 = v61 & 31;
                        v70 = *((v67 + &g_1 as &u8) as &i8) & 63;
                        if (v61 & 255) <= 223 {
                            v60 = v67 + 2;
                            v61 = v69 * 64 | v70;
                        } else {
                            v71 = *((v67 + 2) as &i8) & 63 | v70 * 64;
                            if (v61 & 255) < 240 {
                                v60 = v67 + 3;
                                v61 = v71 | v69 * 0x1000;
                            } else {
                                v60 = v67 + 4;
                                v61 = *((v67 + 3) as &i8) & 63 | v71 * 64 | (v69 & 7) * 0x40000;
                            }
                        }
                    }
                    v65 = v60 - v67 + v68;
                    v64 = v65;
                } while (v61 != 44 && v61 != 32);
                v73 = v68 - v66;
                if v68 == v66 {
                    goto LABEL_482487;
                }
                v1 = v63;
                v74 = v66 + v15;
LABEL_48258e:
                v75 = v73;
                v61 = v61 | -0x100 | 2;
                switch (v76) {
                case 43:
                    v74 += &g_1 as &u8;
                    v62 = v61 & 4294967295;
                    if !(v75 - &g_1 as &u8) as &i64 {
                        goto LABEL_482480;
                    } else {
                        goto LABEL_48258e;
                    }
                    goto LABEL_48258e;
                case 47:
                    v61 = v61 | -0x100 | &g_1;
                default:
                    v16 = core::str::converts::from_utf8(v74, v75);
                    if v16 {
                        v11 = *((&v16 as &char + 8) as &i128);
                        core::result::unwrap_failed(); /* do not return */
                    }
                    v4 = v17;
                    v0 = v18;
                    v11 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v17, v0);
                    switch (v11) {
                    case 0:
                        v4 = v12;
                        if !v4 {
                            v82 = 9223372036854775811;
                            goto LABEL_482af2;
                        } else {
                            if !(v0) || !(*((v42 + (v0 << 3) - 8) as &i64) >= v4) {
                                v0 = v8;
                                v78 = v1;
                                if (v78 & 1) {
                                    v65 = &g_1;
                                    v86 = __rust_alloc(&g_1, &g_1);
                                    v67 = &g_1;
                                    if v62 != 1 {
                                        *(v86 as &i8) = 43;
                                    } else {
                                        *(v86 as &i8) = 47;
                                    }
                                    v82 = 9223372036854775810;
                                    v0 = &g_1;
                                    v60 = v60 | -0x100 | &g_1;
                                    v62 = 0;
                                    break;
                                } else {
                                    v79 = ((v62 & 255 & 255) ? v78 : &g_1);
                                    v1 = v79;
                                    if v0 == v6 {
                                        v6 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                    }
                                    v61 = v42;
                                    v80 = v0;
                                    *((v61 + v80 * 8) as &i64) = v4;
                                    v0 = v80 + &g_1 as &u8;
                                    v8 = v0;
                                    v63 = v1;
                                    goto LABEL_482487;
                                }
                            } else {
                                v82 = 9223372036854775813;
LABEL_482af2:
                                break;
                            }
                            *((a0 + 8) as &i8) = v60;
                            *((a0 + 9) as &i32) = v62;
                            *((a0 + 15) as &i8) = v62 >> 48;
                            *((a0 + 13) as &i16) = v62 >> 32;
                            *((a0 + 16) as &i64) = v86;
                            *((a0 + 24) as &i64) = v0;
                            *((a0 + 32) as &i64) = v82;
                            *((a0 + 40) as &i64) = v65;
                            *((a0 + 48) as &i64) = v67;
                            *(a0 as &i64) = 0x8000000000000000;
                            if v30 {
                                return v119;
                            }
                            return v119;
                        }
                    case 2:
                        v83 = v0;
                        if v83 {
                            v95 = __rust_alloc(v0, &g_1);
                            if v95 {
                                v88 = v0;
                            }
                        }
                        v60 = v88;
                        memcpy(v86, v4, v60);
                        v62 = v60 >> 8;
                        v82 = 9223372036854775812;
                        break;
                    default:
                        v84 = v0;
                        v85 = v4;
                        if !v84 {
                            break;
                        } else {
                            v89 = 0;
                            do {
                                v96 = v90;
                                v97 = *(v96 as &i8);
                                if v97 >= 0 {
                                    v98 = v96 + &g_1 as &u8;
                                    goto LABEL_482b40;
                                }
                                v99 = v97 & 31;
                                v100 = *((v96 + &g_1 as &u8) as &i8) & 63;
                                if (v97 & 255) <= 223 {
                                    v98 = v96 + 2;
                                    v102 = v99 * 64 | v100;
                                } else {
                                    v101 = *((v96 + 2) as &i8) & 63 | v100 * 64;
                                    if (v97 & 255) < 240 {
                                        v98 = v96 + 3;
                                        v102 = v101 | v99 * 0x1000;
                                    } else {
                                        v98 = v96 + 4;
                                        v97 = *((v96 + 3) as &i8) & 63 | v101 * 64 | (v99 & 7) * 0x40000;
LABEL_482b40:
                                        v102 = v97 & 4294967295;
                                    }
                                }
                                if !(v102 - 48 < 10) && (!(v102 >= 128) || !(core::unicode::unicode_data::n::lookup(v102) as i8)) {
                                    break;
                                }
                                v89 = v89 - v96 + v98;
                                v103 = v98;
                            } while (v103 != v85 + v84);
                            break;
                        }
                        v104 = v4 + v93;
                        v105 = v84 - v93;
                        if v84 == v93 || (*(v104 as &i8) | 4) != 47 {
                            v16 = <T as alloc::slice::hack::ConvertVec>::to_vec(v104, v105);
                            v60 = v16;
                            v62 = v60 >> 8;
                            v0 = v18;
                            v82 = 0x8000000000000000;
                            v86 = v17;
                            break;
                        } else {
                            v82 = v105;
                            if v105 != 1 && *((v104 + &g_1 as &u8) as &i8) <= 191 {
                                core::str::slice_error_fail(); /* do not return */
                            }
                            v109 = v104;
                            v86 = __rust_alloc(&g_1, &g_1);
                            *(v86 as &i8) = *(v109 as &i8);
                            v65 = __rust_alloc(v82, &g_1);
                            memcpy(v65, v109, v82);
                            v60 = v109 | -0x100 | &g_1;
                            v62 = 0;
                            v0 = &g_1;
                            break;
                        }
                    }
                }
LABEL_482480:
                v62 = v61 & 4294967295;
LABEL_482487:
            } while (v67 != v46);
            v81 = v0;
            if !v81 {
                v42 = __rust_alloc(8, 8);
                *(v42 as &i64) = 8;
                v0 = &g_1;
                v47 = 0;
                v1 = &g_1;
            } else {
                v47 = (v81 == &g_1 ? v62 & 4294967295 & 4294967295 : 0);
                v1 = v6;
            }
        }
    } else {
        v42 = __rust_alloc(8, 8);
        *(v42 as &i64) = 8;
        v1 = &g_1;
        v47 = 0;
        v0 = &g_1;
    }
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.c0a2baf3a258817979713691effb9d34.7.llvm.9602832291383151297, 7) as i8;
    v107 = *(v42 as &i64);
    v108 = v0;
    if v108 != 1 {
        v110 = 8;
        do {
            v112 = *((v42 + v110) as &i64);
            v113 = v112 - v111;
        } while ((v110 += 8, v108 << 3 != v110));
    }
    alloc::str::<impl str>::repeat(&v11, &g_419121, &g_1, v114);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, a1, &anon.c0a2baf3a258817979713691effb9d34.9.llvm.9602832291383151297, 5);
    v35 = &anon.c0a2baf3a258817979713691effb9d34.9.llvm.9602832291383151297;
    v36 = 5;
    if v16 {
        v10 = (&v20)[8];
        v115 = *((&v16 as &char + 8) as &i128);
        v8 = (&v18)[8];
        v6 = v115;
        v30 = &v35;
        v31 = <&T as core::fmt::Display>::fmt;
        v32 = &v6;
        v33 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v24 = "Mismatch between definition and access of `";
        v25 = 2;
        v28 = 0;
        v26 = &v30;
        v27 = 2;
        v24 = core::panicking::panic_fmt();
    }
    v24 = v18;
    v26 = v20;
    v28 = v22;
    v29 = v23;
    if v39 {
        *(&v39 as &Enum) = Enum {
            field_0: v17
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
        };
        v16 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v39);
    } else {
        v117 = __rust_alloc(24, 8);
        v118 = __rust_alloc(&g_1, &g_1);
        *(v118 as &i8) = 45;
        *(v117 as &&i64) = &g_1;
        *((v117 + 8) as &i64) = v118;
        *((v117 + 16) as &&i64) = &g_1;
        v16 = &g_1;
        v17 = v117;
        v18 = &g_1;
    }
    *((a0 + 16) as &i64) = v18;
    *(a0 as &i64) = v16;
    *((a0 + 8) as &i64) = v17;
    *((a0 + 64) as &i64) = v13;
    *((a0 + 48) as &i128) = v11;
    *((a0 + 24) as &i64) = v1;
    *((a0 + 32) as &i64) = v42;
    *((a0 + 40) as &i64) = v0;
    *((a0 + 72) as &i8) = v15;
    *((a0 + 73) as &unsigned long) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.c0a2baf3a258817979713691effb9d34.8.llvm.9602832291383151297, 7) as i32 ^ &g_1;
    *((a0 + 74) as &i8) = v47;
    return v119;
}
