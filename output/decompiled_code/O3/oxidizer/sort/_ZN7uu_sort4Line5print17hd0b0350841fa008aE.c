fn uu_sort::Line::print(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i64;  // [sp-0xf8]
    let v2: i64;  // [sp-0xf0]
    let v3: i64;  // [bp-0xe8]
    let v4: i8;  // [bp-0xe0]
    let v5: struct24;  // [bp-0xd0], Other Possible Types: struct16, i64
    let v6: i64;  // [sp-0xc0]
    let v7: i64;  // [bp-0xb8]
    let v8: i64;  // [sp-0xb0]
    let v9: i64;  // [sp-0x98]
    let v10: i64;  // [sp-0x90]
    let v11: struct24;  // [sp-0x88], Other Possible Types: i192
    let v12: i64;  // [sp-0x70]
    let v13: struct8;  // [bp-0x68]
    let v14: i64;  // [sp-0x60]
    let v15: i64;  // [sp-0x58]
    let v16: i64;  // [sp-0x50]
    let v17: i64;  // [sp-0x40]
    let v18: i64;  // [sp-0x38]
    let v20: i64;  // r12
    let v21: i64;  // rbx
    let v22: i64;  // rbx
    let v23: i64;  // rbx
    let v24: i64;  // r14
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // r14
    let v28: i64;  // rdx
    let v29: i64;  // rax
    let v30: i64;  // rcx
    let v31: i64;  // r13
    let v32: i64;  // r8
    let v33: i64;  // r9
    let v34: i256;  // ymm0
    let v35: i64;  // r12
    let v36: i64;  // r14
    let v37: i64;  // rdx
    let v38: i64;  // rdx
    let v39: i64;  // rsi
    let v40: i64;  // r15
    let v41: i64;  // r15
    let v42: i64;  // rbx
    let v43: i64;  // rbx
    let v44: i64;  // r15
    let v45: i64;  // rax
    let v46: i64;  // rdx
    let v47: i64;  // rsi
    let v48: i64;  // rsi
    let v50: i64;  // rax
    let v51: i64;  // rdx
    let v52: i64;  // r14
    let v53: i64;  // rcx
    let v54: i64;  // rax
    let v55: i64;  // rcx
    let v56: i64;  // rsi
    let v57: i64;  // rdi
    let v58: i64;  // r8
    let v59: i64;  // r9
    let v60: i64;  // r9
    let v61: i64;  // r10
    let v62: i64;  // r11
    let v63: i64;  // rbp
    let v65: i64;  // rbx
    let v66: i64;  // r14
    let v68: i64;  // rbx
    let v69: i64;  // r8
    let v70: i64;  // rbp
    let v71: i64;  // r15
    let v73: i64;  // r8
    let v74: i64;  // rdx
    let v75: i64;  // r8
    let v76: i64;  // r10
    let v77: i64;  // rsi
    let v78: i64;  // rdi
    let v79: i64;  // r9
    let v80: i64;  // r8
    let v81: i32;  // r10d
    let v82: i32;  // ebp
    let v83: i32;  // r11d
    let v84: i32;  // r10d
    let v85: i32;  // edi
    let v86: i32;  // r9d
    let v87: i64;  // r15
    let v88: i32;  // r8d
    let v89: i64;  // rcx
    let v90: i64;  // rsi
    let v91: i64;  // rbp
    let v92: i64;  // rbx
    let v94: i64;  // r8
    let v95: i64;  // r12
    let v96: i64;  // r15
    let v97: i64;  // r9
    let v98: i64;  // rsi
    let v99: i64;  // rcx
    let v100: i64;  // rcx
    let v101: i64;  // r10
    let v102: i64;  // r11
    let v103: i32;  // r10d
    let v104: i32;  // r11d
    let v107: i64;  // rbp
    let v108: i64;  // rdi
    let v109: i64;  // rbx
    let v110: i64;  // rsi
    let v111: i64;  // rdi
    let v112: i64;  // rbx
    let v113: i64;  // rdx
    let v114: i64;  // rax
    let v115: i64;  // rcx
    let v116: i64;  // rcx
    let v117: i64;  // rax

    v20 = *(a0 as &i64);
    if *((a2 + 124) as &i8) {
        v22 = v21;
        v11 = alloc::str::<impl str>::replace(v20, v22);
        v3 = &v11;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v5 = struct24 {
            field_0: &g_592938
            field_8: 2
            field_16: &v3
        };
        v8 = 0;
        v7 = 1;
        v25 = std::io::Write::write_fmt(a1, &v5);
        if v25 {
            vvar_1986{stack -208} = v25;
            core::result::unwrap_failed(); /* do not return */
        }
        v13 = struct8 {
            field_16: 0
        };
        v14 = 8;
        v15 = 0;
        uu_sort::tokenize(v20, v22, *((a2 + 120) as &i32), &v13);
        v16 = *((a2 + 8) as &i64);
        v12 = *((a2 + 16) as &i64);
        v28 = v22;
        if v12 {
            v31 = v16;
            v18 = v12 * 56 + v31;
            v17 = -(v28);
            v2 = v28;
            v1 = v20;
            do {
                v35 = uu_sort::FieldSelector::get_range(v31, v20, v28, v14, v15);
                v36 = *((v31 + 53) as &i8);
                if v36 >= 2 {
                    if v36 != 2 {
                        if !(v36 == 3) {
                            goto LABEL_4c30f0;
                        }
                        v40 = v113;
                        v41 = v40 - v35;
                        v42 = v2;
                        if v40 < v35 {
LABEL_4c36ed:
                            goto LABEL_4c3740;
                        } else {
                            if v35 {
                                if v35 < v42 {
                                    if *((v1 + v35) as &i8) <= 191 {
                                        goto LABEL_4c36ed;
                                    }
                                } else {
                                    if !(v35 == v42) {
                                        goto LABEL_4c36ed;
                                    }
                                }
                            }
                            if v113 {
                                if v113 < v42 {
                                    if *((v1 + v113) as &i8) <= 191 {
                                        goto LABEL_4c36ed;
                                    }
                                } else {
                                    if !(v113 == v42) {
                                        goto LABEL_4c36ed;
                                    }
                                }
                            }
                            v5 = struct16 {
                                field_0: v49 + v35
                                field_16: v113 + v49
                            };
                            v6 = 0;
                            v7 = 0;
                            v50 = core::str::<impl str>::trim_matches(v1 + v35, v41);
                            v52 = "JAN";
                            v53 = 0;
                            do {
                                v56 = *((v52 + 8) as &i64);
                                if !v56 {
LABEL_4c2ca5:
                                    v70 = core::iter::traits::iterator::Iterator::try_fold(&v5, &v7);
                                    if *((v52 + 16) as &i8) {
                                        if v113 as u32 == 0x110000 {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                        v5 = core::iter::traits::iterator::Iterator::try_fold(&v7);
                                        if v113 as u32 != 0x110000 {
                                            v5 = core::iter::traits::iterator::Iterator::try_fold(&v7);
                                            if v113 as u32 != 0x110000 && v113 as u32 != 0x110000 {
                                                goto LABEL_4c2f8b;
                                            }
                                        }
                                    }
                                    goto LABEL_4c2f82;
                                }
                                v57 = *(v52 as &i64);
                                if v56 >= v113 {
                                    goto LABEL_4c2be0;
                                }
                                if *((v50 + v56) as &i8) > 191 && (v58 = *(v50 as &i8) as u8 as u64, v59 = *(v57 as &i8) as u8 as u64, ((((v58 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v58 as i8) == ((((v59 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v59 as i8)) {
                                    v60 = 0;
                                    if v56 - 1 == v60 {
                                        goto LABEL_4c2ca5;
                                    }
                                    v61 = *((v50 + v60 + 1) as &i8);
                                    v62 = *((v57 + v60 + 1) as &i8);
                                    v60 += 1;
                                    if (((v61 - 65 & 4294967295 & 255 & 255) < 26) << 5 | v61) == (((v62 - 65 & 4294967295 & 255 & 255) < 26) << 5 | v62) {
                                        continue;
                                    }
                                }
LABEL_4c2be0:
                                v53 += 24;
                                v52 = "JAN" + v53;
                            } while (v53 != 288);
LABEL_4c2f82:
LABEL_4c2f8b:
                            v35 += v70;
                            v87 = v71 - v70;
                            if v70 > v71 {
                                v87 = 0;
                            }
                            v91 = v87 + v35;
                            goto LABEL_4c30f0;
                        }
                    }
                    v39 = v113;
                    if v39 < v35 {
                        goto LABEL_4c3740;
                    }
                    v43 = v2;
                    if v35 {
                        if v35 < v43 {
                            if *((v1 + v35) as &i8) <= 191 {
                                goto LABEL_4c370e;
                            }
                        } else {
                            if !(v35 == v43) {
                                goto LABEL_4c370e;
                            }
                        }
                    }
                    if v113 {
                        if v113 < v43 {
                            if *((v1 + v113) as &i8) <= 191 {
                                goto LABEL_4c370e;
                            }
                        } else {
                            if v113 != v43 {
LABEL_4c370e:
                                goto LABEL_4c3740;
                            }
                        }
                    }
                    v45 = uu_sort::get_leading_gen(v1 + v35, v39 - v35, v113);
                    v35 += v45;
                    v51 = v113 - v45;
                    if v45 > v113 {
                        v51 = 0;
                    }
                    v63 = v51 + v35;
                    goto LABEL_4c30f0;
                }
                v37 = v113;
                if v37 < v35 {
LABEL_4c364e:
                    goto LABEL_4c3740;
                }
                if v35 {
                    if v35 < v2 {
                        if *((v1 + v35) as &i8) <= 191 {
                            goto LABEL_4c364e;
                        }
                    } else {
                        if !(v35 == v2) {
                            goto LABEL_4c364e;
                        }
                    }
                }
                if v113 {
                    if v113 < v2 {
                        if *((v1 + v113) as &i8) <= 191 {
                            goto LABEL_4c364e;
                        }
                    } else {
                        if !(v113 == v2) {
                            goto LABEL_4c364e;
                        }
                    }
                }
                v44 = v1 + v35;
                v4 = v36 == 1;
                v3 = 0x2e00110000;
                uu_sort::numeric_str_cmp::NumInfo::parse(&v5, v44, v37 - v35, &v3);
                v46 = v6;
                v47 = v7;
                v48 = v47 - v46;
                if v47 < v46 {
                    v48 = 0;
                }
                v54 = v46 + v35;
                v55 = v48 + v54;
                if !v47 && !v46 {
                    if v54 > v55 {
LABEL_4c3740:
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v68 = v2;
                    v69 = v1;
                    if v54 {
                        if v54 < v68 {
                            if *((v69 + v54) as &i8) <= 191 {
                                goto LABEL_4c3731;
                            }
                        } else {
                            if !(v54 == v68) {
                                goto LABEL_4c3731;
                            }
                        }
                    }
                    if v55 {
                        if v55 < v68 {
                            if *((v69 + v55) as &i8) <= 191 {
                                goto LABEL_4c3731;
                            }
                        } else {
                            if v55 != v68 {
LABEL_4c3731:
                                goto LABEL_4c3740;
                            }
                        }
                    }
                    if v47 > v46 {
                        v73 = v69 + v54;
                        v74 = 0;
                        do {
                            v78 = v75;
                            v79 = *(v78 as &i8);
                            if v79 >= 0 {
                                v80 = v78 + 1;
                            } else {
                                v81 = v79 & 31;
                                v82 = *((v78 + 1) as &i8) & 63;
                                if (v79 & 255) <= 223 {
                                    v80 = v78 + 2;
                                    v79 = v81 * 64 | v82;
                                } else {
                                    v83 = *((v78 + 2) as &i8) & 63 | v82 * 64;
                                    if (v79 & 255) < 240 {
                                        v80 = v78 + 3;
                                        v79 = v83 | v81 * 0x1000;
                                    } else {
                                        v80 = v78 + 4;
                                        v79 = *((v78 + 3) as &i8) & 63 | v83 * 64 | (v81 & 7) * 0x40000;
                                    }
                                }
                            }
                            if v79 - 9 >= 5 && v79 != 32 {
                                if v79 < 128 {
                                    goto LABEL_4c2ed0;
                                }
                                if v79 >> 8 > 31 {
                                    switch (v84) {
                                    case 32:
                                        break;
                                    case 48:
LABEL_4c2ea9:
                                        if !(!v79 == 5760) {
                                            continue;
                                        }
                                        goto LABEL_4c2ed0;
                                    default:
LABEL_4c2ed0:
                                        v35 = v54 + v74;
                                        v89 = v55 + v74;
                                        goto LABEL_4c30f0;
                                    }
                                } else {
                                    switch (v84) {
                                    case 0:
                                        break;
                                    case 22:
                                        goto LABEL_4c2ea9;
                                    default:
LABEL_4c2ed0:
                                        v35 = v54 + v74;
                                        v89 = v55 + v74;
                                        goto LABEL_4c30f0;
                                    }
                                }
                                goto LABEL_4c2ea9;
                            }
                        } while ((v74 = v74 - v78 + v80, v80 != v48 + v73));
                    }
                    v74 = 0;
                    goto LABEL_4c2ed0;
                }
                if v36 != 1 {
                    v66 = 0x1600000000000;
                    v2 = v2;
                    goto LABEL_4c2fd3;
                }
                v65 = v2;
                v66 = 0x1600000000000;
                if v55 > v113 {
LABEL_4c36fc:
                    goto LABEL_4c3740;
                }
                if v55 {
                    if v55 < v65 {
                        if *((v1 + v55) as &i8) <= 191 {
                            goto LABEL_4c36fc;
                        }
                    } else {
                        if !(v55 == v65) {
                            goto LABEL_4c36fc;
                        }
                    }
                }
                if v113 {
                    if v113 < v65 {
                        if *((v1 + v113) as &i8) <= 191 {
                            goto LABEL_4c36fc;
                        }
                    } else {
                        if !(v113 == v65) {
                            goto LABEL_4c36fc;
                        }
                    }
                }
                if v113 != v55 {
                    v76 = v1;
                    v77 = *((v76 + v55) as &i8);
                    if v77 < 0 {
                        v85 = v77 & 31;
                        v86 = *((v76 + v55 + 1) as &i8) & 63;
                        if (v77 & 255) <= 223 {
                            v77 = v85 * 64 | v86;
                        } else {
                            v88 = *((v76 + v55 + 2) as &i8) & 63 | v86 * 64;
                            v77 = ((v77 & 255 & 255) < 240 ? *((v76 + v55 + 3) as &i8) & 63 | v88 * 64 | (v85 & 7) * 0x40000 : v88 | v85 * 0x1000);
                        }
                    }
                    v90 = v77 - 69;
                    if v90 <= 38 {
                        v0 = 274881087813;
                        if (*((&v0 as &u8 + ((v90 & 63) >> 3)) as &i8) >> (v90 & 63 & 7) & 1) {
                            v55 += 1;
                        }
                    }
                }
LABEL_4c2fd3:
                if v35 <= v54 {
                    v94 = 0;
                } else {
LABEL_4c360d:
                    goto LABEL_4c3740;
                }
                loop {
                    v97 = v96;
                    v98 = v95;
                    v99 = v46 + v98;
                    if v35 {
                        if v35 < v92 {
                            if *(v44 as &i8) <= 191 {
                                goto LABEL_4c360d;
                            }
                        } else {
                            if !(v35 == v92) {
                                goto LABEL_4c360d;
                            }
                        }
                    }
                    if v99 {
                        if v99 < v92 {
                            if *((v97 + v46) as &i8) <= 191 {
                                goto LABEL_4c360d;
                            }
                            goto LABEL_4c304c;
                        }
                        goto LABEL_4c360d;
                    }
LABEL_4c304c:
                    if v46 == v94 {
                        break;
                    }
                    v100 = *((v97 + v46 - 1) as &i8);
                    if v100 < 0 {
                        v101 = *((v97 + v46 - 2) as &i8);
                        if v101 >= 192 {
                            v103 = v101 & 31;
                        } else {
                            v102 = *((v97 + v46 - 3) as &i8);
                            if v102 < 192 {
                                v104 = v102 & 63 | (*((v97 + v46 - 4) as &i8) & 7) * 64;
                                v66 = 0x1600000000000;
                                v2 = v2;
                            } else {
                                v104 = v102 & 15;
                            }
                            v103 = v101 & 63 | v104 * 64;
                        }
                        v100 = v100 & 63 | v103 * 64;
                    }
                    if v100 > 48 || (v0 = v66, !((*((&v0 as &u8 + ((v100 & 4294967295 & 63) >> 3)) as &i8) as u8 as u64 >> (v100 & 4294967295 & 63 & 7) as i8 as u8 as u64) as u8 & 1)) {
                        v35 = v46 + v98;
                        break;
                    }
                    v54 -= 1;
                    v94 += 1;
                    if v35 > v46 + v98 - 1 {
                        goto LABEL_4c360d;
                    }
                }
LABEL_4c30f0:
                v107 = v38;
                v108 = *((&v11 as &char + 8) as &i64);
                if v35 {
                    v109 = *((&v11 as &char + 16) as &i64);
                    if v35 < v109 {
                        if *((v108 + v35) as &i8) <= 191 {
                            goto LABEL_4c366f;
                        }
                    } else {
                        if v35 != v109 {
LABEL_4c366f:
                            v1 = v108;
                            goto LABEL_4c3740;
                        }
                    }
                }
                alloc::str::<impl str>::repeat(&v3, &g_4291c5, 1, unicode_width::str_width(v108, v35, 0));
                v9 = &v3;
                v10 = <alloc::string::String as core::fmt::Display>::fmt;
                v5 = struct24 {
                    field_0: &g_41f080
                    field_8: 1
                    field_16: &v9
                };
                v8 = 0;
                v6 = &v9;
                v7 = 1;
                v25 = std::io::Write::write_fmt(a1, &v5);
                if !(!v25) {
                    goto LABEL_4c362f;
                }
                v110 = v107;
                if v110 <= v35 {
                    v5 = struct24 {
                        field_0: "^ no match for key\n"
                        field_8: 1
                        field_16: 8
                    };
                    v34 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v7 = 0;
                    v25 = std::io::Write::write_fmt(a1, &v5);
                    v6 = v6;
                    v2 = v2;
                    v1 = v1;
                    if !v25 {
                        goto LABEL_4c2955;
                    }
                    goto LABEL_4c3682;
                }
                v111 = *((&v11 as &char + 8) as &i64);
                v112 = *((&v11 as &char + 16) as &i64);
                if v35 {
                    if v35 < v112 {
                        if *((v111 + v35) as &i8) <= 191 {
                            goto LABEL_4c365f;
                        }
                    } else {
                        if !(v35 == v112) {
                            goto LABEL_4c365f;
                        }
                    }
                }
                if v107 < v112 {
                    if *((v111 + v107) as &i8) <= 191 {
                        goto LABEL_4c365f;
                    }
                } else {
                    if v107 != v112 {
LABEL_4c365f:
                        v1 = v111;
                        goto LABEL_4c3740;
                    }
                }
                alloc::str::<impl str>::repeat(&v3, &g_4291c4, 1, unicode_width::str_width(v111 + v35, v110 - v35, 0));
                v9 = &v3;
                v10 = <alloc::string::String as core::fmt::Display>::fmt;
                v5 = struct24 {
                    field_0: &g_592938
                    field_8: 2
                    field_16: &v9
                };
                v8 = 0;
                v7 = 1;
                v25 = std::io::Write::write_fmt(a1, &v5);
                if !(!v25) {
                    goto LABEL_4c362f;
                }
                v6 = v6;
                v2 = v2;
                v1 = v1;
LABEL_4c2955:
                v28 = v2;
                v6 = v6;
                v31 += 56;
            } while (v31 != v18);
        }
        v114 = *((a2 + 152) as &i8);
        if ... {
LABEL_4c34c6:
            return v29;
        }
        if !v28 {
            v5 = struct24 {
                field_0: "^ no match for key\n"
                field_8: 1
                field_16: 8
            };
            v7 = 0;
            v29 = std::io::Write::write_fmt(a1, &v5);
            if !v29 {
                return v29;
            }
LABEL_4c3682:
        } else {
            alloc::str::<impl str>::repeat(&v3, &g_4291c4, 1, unicode_width::str_width(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), 0));
            v9 = &v3;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v5 = struct24 {
                field_0: &g_592938
                field_8: 2
                field_16: &v9
            };
            v8 = 0;
            v7 = 1;
            v25 = std::io::Write::write_fmt(a1, &v5);
            if v25 {
LABEL_4c362f:
                if v3 {
                    vvar_2004{stack -208} = v25;
                    core::result::unwrap_failed(); /* do not return */
                }
            } else {
                if v3 {
                    return v29;
                }
                goto LABEL_4c34c6;
            }
        }
        v5 = v25;
        core::result::unwrap_failed(); /* do not return */
    } else {
        v23 = v22;
        v24 = *((a1 + 16) as &i64);
        if *(a1 as &i64) - v24 > v22 {
            memcpy(*((a1 + 8) as &i64) + v24, v20, v23);
            v27 = v24 + v23;
            *((a1 + 16) as &i64) = v27;
        } else {
            v26 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v20, v23, a3, a4, a5);
            if v26 {
                v5 = v26;
                core::result::unwrap_failed(); /* do not return */
            }
            v27 = *((a1 + 16) as &i64);
        }
        v29 = *((a2 + 153) as &i8);
        v3 = v29;
        v30 = *(a1 as &i64) - v27;
        if *(a1 as &i64) - v27 >= 2 {
            *((*((a1 + 8) as &i64) + v27) as &i8) = v29;
            *((a1 + 16) as &i64) = v27 + 1;
            return v29;
        }
        v29 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v3, 1, v30, v32, v33);
        if !v29 {
            return v29;
        }
        v5 = v29;
        core::result::unwrap_failed(); /* do not return */
    }
}
