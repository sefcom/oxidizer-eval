fn uu_tail::parse::parse_obsolete(a0: u32, a1: u32) -> u64 {
    let v0: i32;  // [sp-0x5c]
    let v3: Enum;  // [sp-0x48], Other Possible Types: i128
    let v4: i8;  // [bp-0x38]
    let v6: i64;  // r10
    let v7: i64;  // r11
    let v8: i32;  // ebp
    let v9: i64;  // rsi
    let v10: i64;  // r12
    let v11: i64;  // r15
    let v12: i64;  // rdi
    let v13: i64;  // r12
    let v14: i64;  // rax
    let v15: i64;  // rcx
    let v16: i64;  // r14
    let v17: i64;  // rcx
    let v18: i64;  // rdx
    let v19: i32;  // r9d
    let v20: i32;  // r8d
    let v21: i32;  // edi
    let v22: i64;  // r14
    let v23: i64;  // r14
    let v24: i64;  // r8
    let v25: i64;  // cc_ndep
    let v26: i64;  // r12
    let v27: i64;  // rsi
    let v28: i64;  // rax
    let v29: i64;  // rbp
    let v30: i64;  // r13
    let v31: i64;  // rbp
    let v32: i32;  // r9d
    let v34: i64;  // rbp
    let v35: i64;  // r13
    let v36: i64;  // rbp
    let v37: i64;  // r14
    let v39: i64;  // rax
    let v42: i64;  // rax
    let v44: i64;  // rax
    let v45: i32;  // edx
    let v46: i32;  // edi
    let v47: i32;  // esi
    let v48: i64;  // r12
    let v49: i64;  // r12
    let v50: i64;  // r12
    let v51: i64;  // cc_ndep
    let v52: i64;  // rax
    let v53: i64;  // r12
    let v54: i32;  // edx
    let v55: i32;  // edi
    let v56: i32;  // esi
    let v57: i64;  // rsi
    let v58: i64;  // rdx
    let v59: i8;  // sil
    let v60: i8;  // dil
    let v61: i64;  // cc_ndep
    let v62: i64;  // rax

    v3 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v3 {
        *(a0 as &i8) = 3;
        *((a0 + 10) as &i8) = 2;
        return a0;
    }
    v6 = v4;
    if v6 && (v7 = *((&v3 as &char + 8) as &i64), v8 = *(v7 as &i8) as u8 as u32, !(v8 != 43) || !(v8 != 45)) {
        v9 = v6 - 1;
        v10 = v7 + 1;
        v11 = v7 + v6;
        v12 = 0;
        do {
            v14 = v13;
            if v14 == v11 {
                break;
            }
            v16 = v12;
            v17 = *(v14 as &i8);
            if v17 >= 0 {
                v18 = v14 + 1;
            } else {
                v19 = v17 & 31;
                v20 = *((v14 + 1) as &i8) & 63;
                if (v17 & 255) <= 223 {
                    v18 = v14 + 2;
                    v17 = v19 * 64 | v20;
                } else {
                    v21 = *((v14 + 2) as &i8) & 63 | v20 * 64;
                    if (v17 & 255) < 240 {
                        v18 = v14 + 3;
                        v17 = v21 | v19 * 0x1000;
                    } else {
                        v18 = v14 + 4;
                        v17 = *((v14 + 3) as &i8) & 63 | v21 * 64 | (v19 & 7) * 0x40000;
                    }
                }
            }
            v12 = v16 - v14 + v18;
            v15 = v17 - 48;
        } while (v15 < 10);
        v23 = v22;
        if !v23 {
            v24 = 10;
        } else {
            v7 = v7;
            v6 = v6;
            if v9 <= v23 {
                if v9 != v23 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v10 + v23) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
            v9 = v9;
            v3 = core::num::<impl core::str::traits::FromStr for u64>::from_str(v10, v23);
            if v3 {
                *(a0 as &i8) = 0;
                *((a0 + 10) as &i8) = 2;
                return a0;
            }
            v24 = *((&v3 as &char + 8) as &i64);
            if v9 <= v23 {
                if v9 != v23 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v10 + v23) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        v0 = v8;
        v26 = v10 + v23;
        v27 = v9 - v23;
        if v9 == v23 {
            v31 = 0;
            v32 = 108;
            goto LABEL_4ba652;
        }
        v28 = *(v26 as &i8);
        v29 = v27 - 1;
        v30 = v26 + 1;
        if v28 == 98 {
            v32 = 98;
            goto LABEL_4ba675;
        }
        v32 = v28;
        switch (v32) {
        case 99:
            goto LABEL_4ba675;
        case 108:
            if v27 > 16 {
                core::slice::memchr::memchr_aligned(102, v30);
            } else if v29 {
                do {
                    v39 = v37;
                    v15 = v15 | -0x100 | *((v7 + v39 + 2) as &i8) == 102;
                } while (*((v7 + v39 + 2) as &i8) != 102 && v6 - 3 != v39);
            }
            v32 = 108;
            do {
                if v30 == v11 {
LABEL_4ba84c:
                    v60 = v0;
                    v59 = v57 | -0x100 | v32 == 108;
                    v58 = 1;
LABEL_4ba85d:
                    v62 = v24;
                    if amd64g_calculate_condition(0, 48, v62, v58, v61) as char {
                        *(a0 as &i8) = 1;
                        *((a0 + 10) as &i8) = 2;
                        return a0;
                    }
                    *(a0 as &i64) = v62 * v58;
                    *((a0 + 8) as &u8) = v60 != 45;
                    *((a0 + 9) as &i8) = v59;
                    *((a0 + 10) as &u8) = core::slice::memchr::memchr_aligned(102, v35) == 1;
                    return a0;
                }
                v44 = *(v30 as &i8);
                if v44 >= 0 {
                    v25 = amd64g_calculate_rflags_c(17, v44 & 255, 0, v25);
                    v30 += 1;
                    continue;
                } else {
                    v45 = v44 & 31;
                    v46 = *((v30 + 1) as &i8) & 63;
                    if (v44 & 255) <= 223 {
                        v30 += 2;
                        v44 = v45 * 64 | v46;
                        continue;
                    } else {
                        v47 = *((v30 + 2) as &i8) & 63 | v46 * 64;
                        if (v44 & 255) < 240 {
                            v30 += 3;
                            v27 = v47 | v45 * 0x1000;
                            v44 = v27 & 4294967295;
                            continue;
                        } else {
                            v27 = v47 * 64;
                            v44 = *((v30 + 3) as &i8) & 63 | v27 | (v45 & 7) * 0x40000;
                            if v44 == 0x110000 {
                                goto LABEL_4ba84c;
                            }
                            v30 += 4;
                        }
                    }
                }
            } while (v44 == 102);
        default:
            v32 = 108;
LABEL_4ba675:
            v36 = v34;
            if v36 > 15 {
                break;
            } else {
                v24 = v24;
                if v36 {
                    do {
                        v42 = 1;
                        v15 = v15 | -0x100 | *((v35 + v42 - 1) as &i8) == 102;
                    } while (*((v35 + v42 - 1) as &i8) != 102 && v36 != v42);
                    break;
                } else {
                    v31 = 0;
LABEL_4ba652:
                    break;
                }
            }
            do {
                v50 = v49;
                if v50 == v36 + v48 {
LABEL_4ba75b:
                    if v32 == 98 {
                        v58 = 0x200;
                        v59 = 0;
                        v60 = v0;
                        goto LABEL_4ba85d;
                    }
                    goto LABEL_4ba84c;
                } else {
                    v52 = *(v50 as &i8);
                    if v52 >= 0 {
                        v51 = amd64g_calculate_rflags_c(17, v52 & 255, 0, v51);
                        v53 = v50 + 1;
                        continue;
                    }
                    v54 = v52 & 31;
                    v55 = *((v50 + 1) as &i8) & 63;
                    if (v52 & 255) <= 223 {
                        v53 = v50 + 2;
                        v52 = v54 * 64 | v55;
                        continue;
                    }
                    v56 = *((v50 + 2) as &i8) & 63 | v55 * 64;
                    if (v52 & 255) < 240 {
                        v53 = v50 + 3;
                        v27 = v56 | v54 * 0x1000;
                        v52 = v27 & 4294967295;
                        continue;
                    }
                    v27 = v56 * 64;
                    v52 = *((v50 + 3) as &i8) & 63 | v27 | (v54 & 7) * 0x40000;
                    if v52 == 0x110000 {
                        goto LABEL_4ba75b;
                    }
                    v53 = v50 + 4;
                }
            } while (v52 == 102);
        }
        if v0 == 45 && v23 {
            *(a0 as &i8) = 2;
            *((a0 + 10) as &i8) = 2;
            return a0;
        }
    }
    *((a0 + 10) as &i8) = 3;
    return a0;
}
