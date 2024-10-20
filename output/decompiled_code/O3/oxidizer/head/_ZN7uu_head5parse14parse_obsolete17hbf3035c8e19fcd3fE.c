fn uu_head::parse::parse_obsolete(a0: void*, a1: &u64, a2: u32) -> u64 {
    let v0: struct16;  // [sp-0xe0], Other Possible Types: i64
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: struct24;  // [sp-0xc8], Other Possible Types: i64, Arguments
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xb8]
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x90]
    let v8: i64;  // [sp-0x88]
    let v9: Argument;  // [bp-0x80]
    let v10: String;  // [sp-0x70], Other Possible Types: i192
    let v11: i64;  // [sp-0x58]
    let v12: i64;  // [sp-0x50]
    let v13: i64;  // [sp-0x48]
    let v14: Enum;  // [sp-0x40], Other Possible Types: i128
    let v16: i64;  // rax
    let v17: i64;  // rcx
    let v18: i64;  // rax
    let v19: i32;  // edi
    let v20: i32;  // r10d
    let v21: i32;  // r9d
    let v25: i64;  // r8
    let v26: i64;  // r13
    let v27: i64;  // rdi
    let v28: i64;  // rcx
    let v29: i32;  // r9d
    let v30: i32;  // r11d
    let v31: i32;  // r10d
    let v32: i64;  // r8
    let v33: i64;  // r12
    let v34: i64;  // r9
    let v37: i64;  // rcx
    let v38: i64;  // rdi
    let v39: i64;  // r9
    let v40: i64;  // r15
    let v41: i32;  // r10d
    let v42: i32;  // ebp
    let v43: i32;  // r11d
    let v44: i64;  // r15
    let v45: i64;  // rcx
    let v46: i64;  // cc_ndep
    let v47: i64;  // rbp
    let v48: i64;  // r14
    let v49: i64;  // rdx
    let v50: i64;  // rcx
    let v51: i64;  // rsi
    let v52: i64;  // rsi
    let v53: i64;  // rsi
    let v54: i64;  // rdi
    let v55: i32;  // esi
    let v56: i32;  // r9d
    let v57: i32;  // esi
    let v58: i32;  // r9d
    let v59: i32;  // r8d
    let v60: i64;  // rdi
    let v61: i32;  // r8d
    let v62: i32;  // esi
    let v63: i32;  // r9d
    let v64: i32;  // r8d
    let v65: i64;  // r13
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i64;  // rcx
    let v69: i64;  // r14
    let v70: i64;  // rax
    let v71: i64;  // rcx
    let v72: i64;  // r14
    let v73: i64;  // rax
    let v74: i64;  // rcx
    let v75: i64;  // r14
    let v76: i64;  // r12
    let v77: i64;  // rax
    let v78: i64;  // rcx
    let v79: i64;  // rax
    let v80: i64;  // rax
    let v81: i64;  // rcx
    let v82: i64;  // r14
    let v83: i64;  // r15
    let v84: i64;  // r13
    let v85: i64;  // r12
    let v86: i64;  // rax
    let v87: i64;  // rcx
    let v88: i64;  // rcx

    if a2 {
        v16 = a1 + 1;
        v17 = *(a1 as &i8);
        if v17 < 0 {
            v19 = v17 & 31;
            v20 = *((a1 + 1) as &i8) & 63;
            if (v17 & 255) <= 223 {
                if (v19 << 6 | v20) != 45 {
                    *(a0 as &i64) = 0;
                    return a0;
                }
            } else {
                v21 = *((a1 + 2) as &i8) & 63 | v20 * 64;
                if (v17 & 255) < 240 {
                    if (v21 | v19 << 12) != 45 {
                        *(a0 as &i64) = 0;
                        return a0;
                    }
                } else {
                    if (*((a1 + 3) as &i8) & 63 | v21 << 6 | (v19 & 7) << 18) != 45 {
                        *(a0 as &i64) = 0;
                        return a0;
                    }
                }
            }
        } else if v17 != 45 {
            *(a0 as &i64) = 0;
            return a0;
        }
        v25 = v18;
        v26 = a1 + a2;
        if v25 == v26 {
            *(a0 as &i64) = 0;
            return a0;
        }
        v27 = *(v25 as &i8);
        if v27 >= 0 {
            v28 = v25 + 1;
        } else {
            v29 = v27 & 31;
            v30 = *((v25 + 1) as &i8) & 63;
            if (v27 & 255) < 224 {
                v28 = v25 + 2;
                v27 = v29 * 64 | v30;
            } else {
                v31 = *((v25 + 2) as &i8) & 63 | v30 * 64;
                if (v27 & 255) < 240 {
                    v28 = v25 + 3;
                    v27 = v31 | v29 * 0x1000;
                } else {
                    v28 = v25 + 4;
                    v27 = *((v25 + 3) as &i8) & 63 | v31 * 64 | (v29 & 7) * 0x40000;
                }
            }
        }
        if v27 - 48 <= 9 {
            v32 = v25 - a1;
            v33 = 0;
            if v28 != v26 {
                v34 = v28 - a1;
                do {
                    v37 = v28;
                    v38 = v34;
                    v39 = *(v37 as &i8);
                    if v39 >= 0 {
                        v40 = v37 + 1;
                    } else {
                        v41 = v39 & 31;
                        v42 = *((v37 + 1) as &i8) & 63;
                        if (v39 & 255) <= 223 {
                            v40 = v37 + 2;
                            v39 = v41 * 64 | v42;
                        } else {
                            v43 = *((v37 + 2) as &i8) & 63 | v42 * 64;
                            if (v39 & 255) >= 240 {
                                v40 = v37 + 4;
                                v39 = *((v37 + 3) as &i8) & 63 | v43 * 64 | (v41 & 7) * 0x40000;
                            } else {
                                v40 = v37 + 3;
                                v39 = v43 | v41 * 0x1000;
                            }
                        }
                    }
                    if v39 - 48 >= 10 {
                        v33 = v39 & 4294967295;
                        goto LABEL_48cc8e;
                    }
                } while ((v34 = v38 - v37 + v40, v40 != v26));
            }
LABEL_48cc8e:
            if v32 == -1 {
                core::str::traits::str_index_overflow_fail(); /* do not return */
            }
            v45 = v32 + 1;
            if a2 != 1 && *(v16 as &i8) < 192 {
                core::str::slice_error_fail(); /* do not return */
            }
            if v45 >= a2 {
                if v45 != a2 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((a1 + v45) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
            v14 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v16, v32);
            if v14 {
                *((a0 + 8) as &i64) = 0;
                *((a0 + 16) as &i8) = 1;
                *(a0 as &i64) = 1;
                return a0;
            }
            v11 = *((&v14 as &char + 8) as &i64);
            v12 = v11;
            v47 = 0;
            v8 = 0;
            v48 = 0;
            v49 = 0;
            loop {
                v50 = v44;
                v51 = v33 - 98 & 4294967295;
                switch (v51) {
                case 0:
                    v47 = 1;
                    v53 = 0x200;
                    break;
                case 1:
                    v6 = 1;
                    v47 = 1;
                    if v50 == v26 {
                        goto LABEL_48cf79;
                    }
                    goto LABEL_48ce3a;
                case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 10: case 12: case 13: case 14: case 16: case 17: case 18: case 19: case 21: case 22: case 23:
LABEL_48cf9e:
                    *((a0 + 8) as &i64) = 0;
                    *((a0 + 16) as &i8) = 0;
                    *(a0 as &i64) = 1;
                    return a0;
                case 9:
                    v47 = 1;
                    v53 = 0x400;
                    break;
                case 11:
                    v47 = 1;
                    v53 = 0x100000;
                    v6 = v53;
LABEL_48ce31:
                    if !(v50 == v26) {
                        goto LABEL_48ce3a;
                    }
LABEL_48cf79:
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                    if !(!(v49 & 1)) {
                        goto LABEL_48cfcd;
                    }
                    goto LABEL_48d039;
                case 15:
                    if v50 != v26 {
                        v54 = *(v50 as &i8);
                        if v54 >= 0 {
                            v46 = amd64g_calculate_rflags_c(17, v54 & 255, 0, v46);
                            v44 = v50 + 1;
                            v49 = v49 | -0x100 | 1;
                            v48 = 0;
                            goto LABEL_48cd35;
                        } else {
                            v57 = v54 & 31;
                            v44 = v50 + 2;
                            v58 = *((v50 + 1) as &i8) & 63;
                            v33 = v57 * 64 | v58;
                            v49 = v49 | -0x100 | 1;
                            v48 = 0;
                            if (v54 & 255) > 223 {
                                v44 = v50 + 3;
                                v61 = *((v50 + 2) as &i8) & 63 | v58 * 64;
                                v33 = v57 * 0x1000 | v61;
                                v48 = 0;
                                if (v54 & 255) >= 240 {
                                    v44 = v50 + 4;
                                    v33 = *((v50 + 3) as &i8) & 63 | v61 * 64 | (v57 & 7) * 0x40000;
                                    v48 = 0;
                                }
                            }
                            continue;
                        }
                    } else {
                        v0 = 0;
                        v1 = 8;
                        v2 = 0;
                        v48 = 0;
LABEL_48cfcd:
                        v3 = std::sys::os_str::bytes::Slice::to_owned(&g_41a000, 2);
                        v7 = v3;
                        v65 = v2;
                        if v65 == v0 {
                            v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        v66 = v1;
                        v67 = v65 * 2;
                        v68 = v67 + v65;
                        *((v66 + v68 * 8) as &i64) = v7;
                        *((v66 + v68 * 8 + 8) as &i64) = v4;
                        *((v66 + v68 * 8 + 16) as &i64) = v5;
                        v46 = (v67 + v65 <= v67 ? 1 : 0);
                        v2 = v65 + 1;
LABEL_48d039:
                        if !(v48 & 1) {
                            goto LABEL_48d0b7;
                        }
LABEL_48d05c:
                        v3 = std::sys::os_str::bytes::Slice::to_owned(&g_41a002, 2);
                        v69 = v2;
                        if v69 == v0 {
                            v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        v70 = v1;
                        v71 = v69 * 3;
                        *((v70 + v71 * 8) as &i64) = v3;
                        *((v70 + v71 * 8 + 8) as &i64) = v4;
                        *((v70 + v71 * 8 + 16) as &i64) = v5;
                        v46 = v69 < v0;
                        v2 = v69 + 1;
                        goto LABEL_48d0b7;
                    }
                case 20:
                    if v50 == v26 {
                        v0 = 0;
                        v1 = 8;
                        v2 = 0;
                        goto LABEL_48d05c;
                    } else {
                        v54 = *(v50 as &i8);
                        if v54 >= 0 {
                            v46 = amd64g_calculate_rflags_c(17, v54 & 255, 0, v46);
                            v44 = v50 + 1;
                            v48 = v48 | -0x100 | 1;
                            v49 = 0;
                            goto LABEL_48cd35;
                        } else {
                            v55 = v54 & 31;
                            v44 = v50 + 2;
                            v56 = *((v50 + 1) as &i8) & 63;
                            v33 = v55 * 64 | v56;
                            v48 = v48 | -0x100 | 1;
                            v49 = 0;
                            if (v54 & 255) > 223 {
                                v44 = v50 + 3;
                                v59 = *((v50 + 2) as &i8) & 63 | v56 * 64;
                                v33 = v55 * 0x1000 | v59;
                                v49 = 0;
                                if (v54 & 255) >= 240 {
                                    v44 = v50 + 4;
                                    v33 = *((v50 + 3) as &i8) & 63 | v59 * 64 | (v55 & 7) * 0x40000;
                                    v49 = 0;
                                }
                            }
                            continue;
                        }
                    }
                case 24:
                    v8 = (v52 + &g_419f84 as &u8) as &i64 | -0x100 | 1;
                    if v50 == v26 {
                        goto LABEL_48cf79;
                    }
LABEL_48ce3a:
                    v44 = v50 + 1;
                    v60 = *(v50 as &i8);
                    v33 = v60 & 4294967295;
                    if v60 < 0 {
                        v62 = v60 & 31;
                        v44 = v50 + 2;
                        v63 = *((v50 + 1) as &i8) & 63;
                        v33 = v62 * 64 | v63;
                        if (v60 & 255) > 223 {
                            v44 = v50 + 3;
                            v64 = *((v50 + 2) as &i8) & 63 | v63 * 64;
                            v33 = v62 * 0x1000 | v64;
                            if (v60 & 255) >= 240 {
                                v44 = v50 + 4;
                                v33 = *((v50 + 3) as &i8) & 63 | v64 * 64 | (v62 & 7) * 0x40000;
                            }
                        }
                    }
                    continue;
                default:
                    if !v33 {
                        goto LABEL_48ce31;
                    }
                    goto LABEL_48cf9e;
                }
LABEL_48cd35:
                v33 = v54 & 4294967295;
            }
LABEL_48d0b7:
            if (v8 & 1) {
                v3 = std::sys::os_str::bytes::Slice::to_owned(&g_41a004, 2);
                v72 = v2;
                if v72 == v0 {
                    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                v73 = v1;
                v74 = v72 * 3;
                *((v73 + v74 * 8) as &i64) = v3;
                *((v73 + v74 * 8 + 8) as &i64) = v4;
                *((v73 + v74 * 8 + 16) as &i64) = v5;
                v46 = v72 < v0;
                v2 = v72 + 1;
            }
            if v47 != 1 {
                v3 = std::sys::os_str::bytes::Slice::to_owned(&g_41a008, 2);
                v76 = v2;
                if v76 == v0 {
                    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                v80 = v1;
                v81 = v76 * 3;
                *((v80 + v81 * 8) as &i64) = v3;
                *((v80 + v81 * 8 + 8) as &i64) = v4;
                *((v80 + v81 * 8 + 16) as &i64) = v5;
                v2 = v76 + 1;
                v9 = Argument {
                    value: &v12
                    formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                };
                v3 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v9]
                    fmt: None
                };
                v10 = alloc::fmt::format::format_inner(&v3);
                v82 = v10;
                v83 = *((&v10 as &char + 8) as &i64);
                v84 = *((&v10 as &char + 16) as &i64);
                v85 = v2;
                if v85 == v0 {
                    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
            } else {
                v3 = std::sys::os_str::bytes::Slice::to_owned(&g_41a006, 2);
                v75 = v2;
                if v75 == v0 {
                    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                v77 = v1;
                v78 = v75 * 3;
                *((v77 + v78 * 8) as &i64) = v3;
                *((v77 + v78 * 8 + 8) as &i64) = v4;
                *((v77 + v78 * 8 + 16) as &i64) = v5;
                v2 = v75 + 1;
                v79 = v11;
                if !(amd64g_calculate_condition(0, 48, v79, vvar_1054, amd64g_calculate_rflags_c(8, v75, v0, v46)) as char) {
                    v13 = v79 * vvar_1054;
                    v9 = Argument {
                        value: &v13
                        formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                    };
                    v3 = Arguments {
                        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                        args: [&v9]
                        fmt: None
                    };
                    v10 = alloc::fmt::format::format_inner(&v3);
                    v82 = v10;
                    v83 = *((&v10 as &char + 8) as &i64);
                    v84 = *((&v10 as &char + 16) as &i64);
                    v85 = v2;
                    if v85 == v0 {
                        v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                    }
                } else {
                    *((a0 + 8) as &i64) = 0;
                    *((a0 + 16) as &i8) = 1;
                    *(a0 as &i64) = 1;
                    if v0 {
                        return a0;
                    }
                    return a0;
                }
            }
            v86 = v1;
            v87 = v85 * 3;
            *((v86 + v87 * 8) as &i64) = v82;
            *((v86 + v87 * 8 + 8) as &i64) = v83;
            *((v86 + v87 * 8 + 16) as &i64) = v84;
            v88 = v1;
            *((a0 + 8) as &i64) = v88;
            *((a0 + 16) as &i64) = v88;
            *((a0 + 24) as &i64) = v0;
            *((a0 + 32) as &i64) = v88 + v85 * 24 + 24;
            *(a0 as &i64) = 1;
            return a0;
        }
    }
    *(a0 as &i64) = 0;
    return a0;
}
