fn uu_sort::Line::print(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i64;  // [bp-0xf8]
    let v2: i8;  // [bp-0xf0]
    let v3: i8;  // [bp-0xe8]
    let v4: i64;  // [bp-0xe0]
    let v5: i8;  // [bp-0xd8]
    let v6: struct24;  // [bp-0xd0], Other Possible Types: struct16, i64
    let v7: i64;  // [sp-0xc0]
    let v8: i64;  // [bp-0xb8]
    let v9: i64;  // [sp-0xb0]
    let v10: i64;  // [sp-0x98]
    let v11: i64;  // [sp-0x90]
    let v12: struct24;  // [sp-0x88], Other Possible Types: i192
    let v13: i64;  // [sp-0x70]
    let v14: struct8;  // [bp-0x68]
    let v15: i64;  // [sp-0x60]
    let v16: i64;  // [sp-0x58]
    let v17: i64;  // [sp-0x50]
    let v18: i64;  // [sp-0x40]
    let v19: i64;  // [sp-0x38]
    let v21: i64;  // r12
    let v22: i64;  // rbx
    let v23: i64;  // rbx
    let v24: i64;  // rbx
    let v25: i64;  // r14
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // r14
    let v29: i64;  // rdx
    let v30: i64;  // rax
    let v31: i64;  // rcx
    let v32: i64;  // r13
    let v33: i64;  // r8
    let v34: i64;  // r9
    let v35: i256;  // ymm0
    let v36: i64;  // r12
    let v37: i64;  // r14
    let v38: i64;  // rdx
    let v39: i64;  // rdx
    let v40: i64;  // rsi
    let v41: i64;  // r15
    let v42: i64;  // r15
    let v43: i64;  // rbx
    let v44: i64;  // rbx
    let v45: i64;  // r15
    let v46: i64;  // rax
    let v47: i64;  // rdx
    let v48: i64;  // rsi
    let v49: i64;  // rsi
    let v51: i64;  // rax
    let v52: i64;  // rdx
    let v53: i64;  // r14
    let v54: i64;  // rcx
    let v55: i64;  // rax
    let v56: i64;  // rcx
    let v57: i64;  // rsi
    let v58: i64;  // rdi
    let v59: i64;  // r8
    let v60: i64;  // r9
    let v61: i64;  // r9
    let v62: i64;  // r10
    let v63: i64;  // r11
    let v64: i64;  // rbp
    let v66: i64;  // rbx
    let v67: i64;  // r14
    let v69: i64;  // rbx
    let v70: i64;  // r8
    let v71: i64;  // rbp
    let v72: i64;  // r15
    let v74: i64;  // r8
    let v75: i64;  // rdx
    let v76: i64;  // r8
    let v77: i64;  // r10
    let v78: i64;  // rsi
    let v79: i64;  // rdi
    let v80: i64;  // r9
    let v81: i64;  // r8
    let v82: i32;  // r10d
    let v83: i32;  // ebp
    let v84: i32;  // r11d
    let v85: i32;  // r10d
    let v86: i32;  // edi
    let v87: i32;  // r9d
    let v88: i64;  // r15
    let v89: i32;  // r8d
    let v90: i64;  // rcx
    let v91: i64;  // rsi
    let v92: i64;  // rbp
    let v93: i64;  // rbx
    let v95: i64;  // r8
    let v96: i64;  // r12
    let v97: i64;  // r15
    let v98: i64;  // r9
    let v99: i64;  // rsi
    let v100: i64;  // rcx
    let v101: i64;  // rcx
    let v102: i64;  // r10
    let v103: i64;  // r11
    let v104: i32;  // r10d
    let v105: i32;  // r11d
    let v108: i64;  // rbp
    let v109: i64;  // rdi
    let v110: i64;  // rbx
    let v111: i64;  // rsi
    let v112: i64;  // rdi
    let v113: i64;  // rbx
    let v114: i64;  // rdx
    let v115: i64;  // rax
    let v116: i64;  // rcx
    let v117: i64;  // rcx
    let v118: i64;  // rax

    v21 = *(a0 as &i64);
    if *((a2 + 124) as &i8) {
        v23 = v22;
        v12 = alloc::str::<impl str>::replace(v21, v23);
        v3 = &v12;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = struct24 {
            field_0: &g_592938
            field_8: 2
            field_16: &v3
        };
        v9 = 0;
        v8 = 1;
        v26 = std::io::Write::write_fmt(a1, &v6);
        if v26 {
            vvar_1986{stack -208} = v26;
            core::result::unwrap_failed(); /* do not return */
        }
        v14 = struct8 {
            field_16: 0
        };
        v15 = 8;
        v16 = 0;
        uu_sort::tokenize(v21, v23, *((a2 + 120) as &i32), &v14);
        v17 = *((a2 + 8) as &i64);
        v13 = *((a2 + 16) as &i64);
        v29 = v23;
        if v13 {
            v32 = v17;
            v19 = v13 * 56 + v32;
            v18 = -(v29);
            v2 = v29;
            v1 = v21;
            do {
                v36 = uu_sort::FieldSelector::get_range(v32, v21, v29, v15, v16);
                v37 = *((v32 + 53) as &i8);
                if v37 >= 2 {
                    if v37 != 2 {
                        if !(v37 == 3) {
                            goto LABEL_4c20b0;
                        }
                        v41 = v114;
                        v42 = v41 - v36;
                        v43 = v2;
                        if v41 < v36 {
LABEL_4c26ad:
                            goto LABEL_4c2700;
                        } else {
                            if v36 {
                                if v36 < v43 {
                                    if *((v1 + v36) as &i8) <= 191 {
                                        goto LABEL_4c26ad;
                                    }
                                } else {
                                    if !(v36 == v43) {
                                        goto LABEL_4c26ad;
                                    }
                                }
                            }
                            if v114 {
                                if v114 < v43 {
                                    if *((v1 + v114) as &i8) <= 191 {
                                        goto LABEL_4c26ad;
                                    }
                                } else {
                                    if !(v114 == v43) {
                                        goto LABEL_4c26ad;
                                    }
                                }
                            }
                            v6 = struct16 {
                                field_0: v50 + v36
                                field_16: v114 + v50
                            };
                            v7 = 0;
                            v8 = 0;
                            v51 = core::str::<impl str>::trim_matches(v1 + v36, v42);
                            v53 = "JAN";
                            v54 = 0;
                            do {
                                v57 = *((v53 + 8) as &i64);
                                if !v57 {
LABEL_4c1c65:
                                    v71 = core::iter::traits::iterator::Iterator::try_fold(&v6, &v8);
                                    if *((v53 + 16) as &i8) {
                                        if v114 as u32 == 0x110000 {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                        v6 = core::iter::traits::iterator::Iterator::try_fold(&v8);
                                        if v114 as u32 != 0x110000 {
                                            v6 = core::iter::traits::iterator::Iterator::try_fold(&v8);
                                            if v114 as u32 != 0x110000 && v114 as u32 != 0x110000 {
                                                goto LABEL_4c1f4b;
                                            }
                                        }
                                    }
                                    goto LABEL_4c1f42;
                                }
                                v58 = *(v53 as &i64);
                                if v57 >= v114 {
                                    goto LABEL_4c1ba0;
                                }
                                if *((v51 + v57) as &i8) > 191 && (v59 = *(v51 as &i8) as u8 as u64, v60 = *(v58 as &i8) as u8 as u64, ((((v59 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v59 as i8) == ((((v60 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v60 as i8)) {
                                    v61 = 0;
                                    if v57 - 1 == v61 {
                                        goto LABEL_4c1c65;
                                    }
                                    v62 = *((v51 + v61 + 1) as &i8);
                                    v63 = *((v58 + v61 + 1) as &i8);
                                    v61 += 1;
                                    if (((v62 - 65 & 4294967295 & 255 & 255) < 26) << 5 | v62) == (((v63 - 65 & 4294967295 & 255 & 255) < 26) << 5 | v63) {
                                        continue;
                                    }
                                }
LABEL_4c1ba0:
                                v54 += 24;
                                v53 = "JAN" + v54;
                            } while (v54 != 288);
LABEL_4c1f42:
LABEL_4c1f4b:
                            v36 += v71;
                            v88 = v72 - v71;
                            if v71 > v72 {
                                v88 = 0;
                            }
                            v92 = v88 + v36;
                            goto LABEL_4c20b0;
                        }
                    }
                    v40 = v114;
                    if v40 < v36 {
                        goto LABEL_4c2700;
                    }
                    v44 = v2;
                    if v36 {
                        if v36 < v44 {
                            if *((v1 + v36) as &i8) <= 191 {
                                goto LABEL_4c26ce;
                            }
                        } else {
                            if !(v36 == v44) {
                                goto LABEL_4c26ce;
                            }
                        }
                    }
                    if v114 {
                        if v114 < v44 {
                            if *((v1 + v114) as &i8) <= 191 {
                                goto LABEL_4c26ce;
                            }
                        } else {
                            if v114 != v44 {
LABEL_4c26ce:
                                goto LABEL_4c2700;
                            }
                        }
                    }
                    v46 = uu_sort::get_leading_gen(v1 + v36, v40 - v36, v114);
                    v36 += v46;
                    v52 = v114 - v46;
                    if v46 > v114 {
                        v52 = 0;
                    }
                    v64 = v52 + v36;
                    goto LABEL_4c20b0;
                }
                v38 = v114;
                if v38 < v36 {
LABEL_4c260e:
                    goto LABEL_4c2700;
                }
                if v36 {
                    if v36 < v2 {
                        if *((v1 + v36) as &i8) <= 191 {
                            goto LABEL_4c260e;
                        }
                    } else {
                        if !(v36 == v2) {
                            goto LABEL_4c260e;
                        }
                    }
                }
                if v114 {
                    if v114 < v2 {
                        if *((v1 + v114) as &i8) <= 191 {
                            goto LABEL_4c260e;
                        }
                    } else {
                        if !(v114 == v2) {
                            goto LABEL_4c260e;
                        }
                    }
                }
                v45 = v1 + v36;
                v4 = v37 == 1;
                v3 = 0x2e00110000;
                uu_sort::numeric_str_cmp::NumInfo::parse(&v6, v45, v38 - v36, &v3);
                v47 = v7;
                v48 = v8;
                v49 = v48 - v47;
                if v48 < v47 {
                    v49 = 0;
                }
                v55 = v47 + v36;
                v56 = v49 + v55;
                if !v48 && !v47 {
                    if v55 > v56 {
LABEL_4c2700:
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v69 = v2;
                    v70 = v1;
                    if v55 {
                        if v55 < v69 {
                            if *((v70 + v55) as &i8) <= 191 {
                                goto LABEL_4c26f1;
                            }
                        } else {
                            if !(v55 == v69) {
                                goto LABEL_4c26f1;
                            }
                        }
                    }
                    if v56 {
                        if v56 < v69 {
                            if *((v70 + v56) as &i8) <= 191 {
                                goto LABEL_4c26f1;
                            }
                        } else {
                            if v56 != v69 {
LABEL_4c26f1:
                                goto LABEL_4c2700;
                            }
                        }
                    }
                    if v48 > v47 {
                        v74 = v70 + v55;
                        v75 = 0;
                        do {
                            v79 = v76;
                            v80 = *(v79 as &i8);
                            if v80 >= 0 {
                                v81 = v79 + 1;
                            } else {
                                v82 = v80 & 31;
                                v83 = *((v79 + 1) as &i8) & 63;
                                if (v80 & 255) <= 223 {
                                    v81 = v79 + 2;
                                    v80 = v82 * 64 | v83;
                                } else {
                                    v84 = *((v79 + 2) as &i8) & 63 | v83 * 64;
                                    if (v80 & 255) < 240 {
                                        v81 = v79 + 3;
                                        v80 = v84 | v82 * 0x1000;
                                    } else {
                                        v81 = v79 + 4;
                                        v80 = *((v79 + 3) as &i8) & 63 | v84 * 64 | (v82 & 7) * 0x40000;
                                    }
                                }
                            }
                            if v80 - 9 >= 5 && v80 != 32 {
                                if v80 < 128 {
                                    goto LABEL_4c1e90;
                                }
                                if v80 >> 8 > 31 {
                                    switch (v85) {
                                    case 32:
                                        break;
                                    case 48:
LABEL_4c1e69:
                                        if !(!v80 == 5760) {
                                            continue;
                                        }
                                        goto LABEL_4c1e90;
                                    default:
LABEL_4c1e90:
                                        v36 = v55 + v75;
                                        v90 = v56 + v75;
                                        goto LABEL_4c20b0;
                                    }
                                } else {
                                    switch (v85) {
                                    case 0:
                                        break;
                                    case 22:
                                        goto LABEL_4c1e69;
                                    default:
LABEL_4c1e90:
                                        v36 = v55 + v75;
                                        v90 = v56 + v75;
                                        goto LABEL_4c20b0;
                                    }
                                }
                                goto LABEL_4c1e69;
                            }
                        } while ((v75 = v75 - v79 + v81, v81 != v49 + v74));
                    }
                    v75 = 0;
                    goto LABEL_4c1e90;
                }
                if v37 != 1 {
                    v67 = 0x1600000000000;
                    v2 = v2;
                    goto LABEL_4c1f93;
                }
                v66 = v2;
                v67 = 0x1600000000000;
                if v56 > v114 {
LABEL_4c26bc:
                    goto LABEL_4c2700;
                }
                if v56 {
                    if v56 < v66 {
                        if *((v1 + v56) as &i8) <= 191 {
                            goto LABEL_4c26bc;
                        }
                    } else {
                        if !(v56 == v66) {
                            goto LABEL_4c26bc;
                        }
                    }
                }
                if v114 {
                    if v114 < v66 {
                        if *((v1 + v114) as &i8) <= 191 {
                            goto LABEL_4c26bc;
                        }
                    } else {
                        if !(v114 == v66) {
                            goto LABEL_4c26bc;
                        }
                    }
                }
                if v114 != v56 {
                    v77 = v1;
                    v78 = *((v77 + v56) as &i8);
                    if v78 < 0 {
                        v86 = v78 & 31;
                        v87 = *((v77 + v56 + 1) as &i8) & 63;
                        if (v78 & 255) <= 223 {
                            v78 = v86 * 64 | v87;
                        } else {
                            v89 = *((v77 + v56 + 2) as &i8) & 63 | v87 * 64;
                            v78 = ((v78 & 255 & 255) < 240 ? *((v77 + v56 + 3) as &i8) & 63 | v89 * 64 | (v86 & 7) * 0x40000 : v89 | v86 * 0x1000);
                        }
                    }
                    v91 = v78 - 69;
                    if v91 <= 38 {
                        v0 = 274881087813;
                        if (*((&v0 as &u8 + ((v91 & 63) >> 3)) as &i8) >> (v91 & 63 & 7) & 1) {
                            v56 += 1;
                        }
                    }
                }
LABEL_4c1f93:
                if v36 <= v55 {
                    v95 = 0;
                } else {
LABEL_4c25cd:
                    goto LABEL_4c2700;
                }
                loop {
                    v98 = v97;
                    v99 = v96;
                    v100 = v47 + v99;
                    if v36 {
                        if v36 < v93 {
                            if *(v45 as &i8) <= 191 {
                                goto LABEL_4c25cd;
                            }
                        } else {
                            if !(v36 == v93) {
                                goto LABEL_4c25cd;
                            }
                        }
                    }
                    if v100 {
                        if v100 < v93 {
                            if *((v98 + v47) as &i8) <= 191 {
                                goto LABEL_4c25cd;
                            }
                            goto LABEL_4c200c;
                        }
                        goto LABEL_4c25cd;
                    }
LABEL_4c200c:
                    if v47 == v95 {
                        break;
                    }
                    v101 = *((v98 + v47 - 1) as &i8);
                    if v101 < 0 {
                        v102 = *((v98 + v47 - 2) as &i8);
                        if v102 >= 192 {
                            v104 = v102 & 31;
                        } else {
                            v103 = *((v98 + v47 - 3) as &i8);
                            if v103 < 192 {
                                v105 = v103 & 63 | (*((v98 + v47 - 4) as &i8) & 7) * 64;
                                v67 = 0x1600000000000;
                                v2 = v2;
                            } else {
                                v105 = v103 & 15;
                            }
                            v104 = v102 & 63 | v105 * 64;
                        }
                        v101 = v101 & 63 | v104 * 64;
                    }
                    if v101 > 48 || (v0 = v67, !((*((&v0 as &u8 + ((v101 & 4294967295 & 63) >> 3)) as &i8) as u8 as u64 >> (v101 & 4294967295 & 63 & 7) as i8 as u8 as u64) as u8 & 1)) {
                        v36 = v47 + v99;
                        break;
                    }
                    v55 -= 1;
                    v95 += 1;
                    if v36 > v47 + v99 - 1 {
                        goto LABEL_4c25cd;
                    }
                }
LABEL_4c20b0:
                v108 = v39;
                v109 = *((&v12 as &char + 8) as &i64);
                if v36 {
                    v110 = *((&v12 as &char + 16) as &i64);
                    if v36 < v110 {
                        if *((v109 + v36) as &i8) <= 191 {
                            goto LABEL_4c262f;
                        }
                    } else {
                        if v36 != v110 {
LABEL_4c262f:
                            goto LABEL_4c2700;
                        }
                    }
                }
                alloc::str::<impl str>::repeat(&v3, &g_4291c5, 1, unicode_width::str_width(v109, v36, 0));
                v10 = &v3;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v6 = struct24 {
                    field_0: &g_41f080
                    field_8: 1
                    field_16: &v10
                };
                v9 = 0;
                v7 = &v10;
                v8 = 1;
                v26 = std::io::Write::write_fmt(a1, &v6);
                if !(!v26) {
                    goto LABEL_4c25ef;
                }
                v111 = v108;
                if v111 <= v36 {
                    v6 = struct24 {
                        field_0: "^ no match for key\n"
                        field_8: 1
                        field_16: 8
                    };
                    v35 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v8 = 0;
                    v26 = std::io::Write::write_fmt(a1, &v6);
                    v7 = v7;
                    v2 = v2;
                    v1 = v1;
                    if !v26 {
                        goto LABEL_4c1915;
                    }
                    goto LABEL_4c2642;
                }
                v112 = *((&v12 as &char + 8) as &i64);
                v113 = *((&v12 as &char + 16) as &i64);
                if v36 {
                    if v36 < v113 {
                        if *((v112 + v36) as &i8) <= 191 {
                            goto LABEL_4c261f;
                        }
                    } else {
                        if !(v36 == v113) {
                            goto LABEL_4c261f;
                        }
                    }
                }
                if v108 < v113 {
                    if *((v112 + v108) as &i8) <= 191 {
                        goto LABEL_4c261f;
                    }
                } else {
                    if v108 != v113 {
LABEL_4c261f:
                        goto LABEL_4c2700;
                    }
                }
                alloc::str::<impl str>::repeat(&v3, &g_4291c4, 1, unicode_width::str_width(v112 + v36, v111 - v36, 0));
                v10 = &v3;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v6 = struct24 {
                    field_0: &g_592938
                    field_8: 2
                    field_16: &v10
                };
                v9 = 0;
                v8 = 1;
                v26 = std::io::Write::write_fmt(a1, &v6);
                if !(!v26) {
                    goto LABEL_4c25ef;
                }
                v7 = v7;
                v2 = v2;
                v1 = v1;
LABEL_4c1915:
                v29 = v2;
                v7 = v7;
                v32 += 56;
            } while (v32 != v19);
        }
        v115 = *((a2 + 152) as &i8);
        if ... {
LABEL_4c2486:
            return v30;
        }
        if !v29 {
            v6 = struct24 {
                field_0: "^ no match for key\n"
                field_8: 1
                field_16: 8
            };
            v8 = 0;
            v30 = std::io::Write::write_fmt(a1, &v6);
            if !v30 {
                return v30;
            }
LABEL_4c2642:
        } else {
            alloc::str::<impl str>::repeat(&v3, &g_4291c4, 1, unicode_width::str_width(*((&v12 as &char + 8) as &i64), *((&v12 as &char + 16) as &i64), 0));
            v10 = &v3;
            v11 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = struct24 {
                field_0: &g_592938
                field_8: 2
                field_16: &v10
            };
            v9 = 0;
            v8 = 1;
            v26 = std::io::Write::write_fmt(a1, &v6);
            if v26 {
LABEL_4c25ef:
                if v3 {
                    vvar_2004{stack -208} = v26;
                    core::result::unwrap_failed(); /* do not return */
                }
            } else {
                if v3 {
                    return v30;
                }
                goto LABEL_4c2486;
            }
        }
        v6 = v26;
        core::result::unwrap_failed(); /* do not return */
    } else {
        v24 = v23;
        v25 = *((a1 + 16) as &i64);
        if *(a1 as &i64) - v25 > v23 {
            memcpy(*((a1 + 8) as &i64) + v25, v21, v24);
            v28 = v25 + v24;
            *((a1 + 16) as &i64) = v28;
        } else {
            v27 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v21, v24, a3, a4, a5, v1, v2, v3, v4, v5);
            if v27 {
                v6 = v27;
                core::result::unwrap_failed(); /* do not return */
            }
            v28 = *((a1 + 16) as &i64);
        }
        v30 = *((a2 + 153) as &i8);
        v3 = v30;
        v31 = *(a1 as &i64) - v28;
        if *(a1 as &i64) - v28 >= 2 {
            *((*((a1 + 8) as &i64) + v28) as &i8) = v30;
            *((a1 + 16) as &i64) = v28 + 1;
            return v30;
        }
        v30 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v3, 1, v31, v33, v34, v1, v2, v3, v4, v5);
        if !v30 {
            return v30;
        }
        v6 = v30;
        core::result::unwrap_failed(); /* do not return */
    }
}
