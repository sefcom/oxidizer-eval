fn uu_nl::SectionDelimiter::parse(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x1f8]
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xb8]
    let v6: i64;  // [sp-0xb0]
    let v7: i64;  // [sp-0xa8]
    let v8: i64;  // [sp-0xa0]
    let v9: struct59;  // [sp-0x98], Other Possible Types: i472
    let v10: i8;  // [bp-0x50]
    let v11: i8;  // [bp-0x48]
    let v12: i8;  // [bp-0x40]
    let v13: i8;  // [bp-0x38]
    let v15: i64;  // rbx
    let v16: i64;  // rbx
    let v17: i64;  // rdx
    let v18: i64;  // r11
    let v19: i64;  // rdi
    let v20: i64;  // rsi
    let v21: i64;  // rax
    let v22: i64;  // rcx
    let v23: i64;  // r12
    let v24: i64;  // r8
    let v25: i64;  // r13
    let v26: i64;  // rbp
    let v27: i64;  // r10
    let v28: i64;  // r13
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // r13
    let v32: i64;  // r13
    let v33: i64;  // rbx
    let v34: i64;  // rdx
    let v35: i64;  // r12
    let v36: i64;  // r12
    let v37: i64;  // r8
    let v39: i64;  // r10
    let v40: i64;  // r13
    let v41: i64;  // rdx
    let v42: i64;  // r8
    let v43: i64;  // r8
    let v44: i64;  // r9
    let v45: i64;  // rax
    let v47: i64;  // rax
    let v48: i64;  // r9
    let v49: i64;  // r8
    let v51: i64;  // r8
    let v53: i64;  // rcx
    let v54: i32;  // eax
    let v55: i32;  // r9d
    let v56: i32;  // r8d
    let v58: i64;  // rax
    let v59: i64;  // rax
    let v61: i64;  // rax
    let v62: i64;  // rcx
    let v63: i64;  // rdx

    v16 = v15 | -0x100 | 3;
    if !(a1 && a3) {
        return v16 & 4294967295;
    }
    v9 = core::str::pattern::StrSearcher::new(a0, a1, a2, a3);
    v17 = *((&v9 as &char + 8) as &i64);
    v18 = *((&v9 as &char + 24) as &i64);
    v19 = v10;
    v20 = v11;
    if !v9 {
        if (v18 & 0xff0000) {
            return v16 & 4294967295;
        }
        v27 = 0;
        loop {
            if v17 {
                if v17 >= v20 {
                    if v17 == v20 {
                        goto LABEL_533776;
                    }
                    goto LABEL_53391a;
                } else if *((v19 + v17) as &i8) < 192 {
                    goto LABEL_53391a;
                }
            }
LABEL_533776:
            if v17 == v20 {
                if v18 {
                    v18 = v18 | -0x100 | v18 ^ 1;
                    goto LABEL_533788;
                } else {
                    v2 = v27;
                    v1 = a1;
                    v3 = a3;
                    break;
                }
            }
            v53 = *((v19 + v17) as &i8);
            if v53 >= 0 {
                if !(!(v18 & 255 & 255)) {
                    goto LABEL_533740;
                }
                goto LABEL_53379d;
            }
            v54 = v53 & 31;
            v55 = *((v19 + v17 + 1) as &i8) & 63;
            if (v53 & 255) < 224 {
                v53 = v54 * 64 | v55;
                if !(!(v18 & 255 & 255)) {
                    goto LABEL_533740;
                }
                goto LABEL_53379d;
            }
            v56 = *((v19 + v17 + 2) as &i8) & 63 | v55 * 64;
            if (v53 & 255) >= 240 {
                v53 = *((v19 + v17 + 3) as &i8) & 63 | v56 * 64 | (v54 & 7) * 0x40000;
                if !(v18 & 255 & 255) {
                    goto LABEL_53379d;
                }
LABEL_533740:
                goto LABEL_533743;
            }
            v53 = v56 | v54 * 0x1000;
            if !(!(v18 & 255 & 255)) {
                goto LABEL_533740;
            }
LABEL_53379d:
            v58 = 1;
            if v53 >= 128 {
                v58 = 2;
                if v53 >= 0x800 {
                    v58 = 4 - (v53 < 0x10000);
                }
            }
            v59 = v58 + v17;
            if v58 + v17 {
                if v59 >= v20 {
                    if !(v59 == v20) {
                        goto LABEL_53391a;
                    }
                } else {
                    if *((v19 + v59) as &i8) < 192 {
LABEL_53391a:
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
            }
            if v59 == v20 {
                v18 = 0;
LABEL_533788:
            } else {
                v18 = v18 | -0x100 | 1;
LABEL_533743:
                v18 = v18 | -0x100 | v18 ^ 1;
            }
            v27 += 1;
        }
    } else {
        v21 = *((&v9 as &char + 40) as &i64);
        v22 = v13;
        v23 = v22 - 1;
        v24 = v23 + v21;
        if v24 >= v20 {
            return v16 & 4294967295;
        }
        v1 = a1;
        v3 = a3;
        v16 = *((&v9 as &char + 32) as &i64);
        v25 = v9;
        v26 = v12;
        v4 = v18;
        v7 = v22 - v18;
        v6 = v17 - 1;
        v8 = -(v17);
        v2 = 0;
        v5 = v16;
        loop {
            if v25 != -1 {
                do {
                    v0 = v16;
                    if (*((&v0 as &u8 + ((*((v19 + v24) as &i8) & 63) >> 3)) as &i8) >> (*((v19 + v24) as &i8) & 63 & 7) & 1) {
                        v23 = v23;
                        v35 = v34;
                    } else {
                        v30 = v29 + v22;
                        v31 = 0;
                        continue;
                    }
                    do {
                        v37 = v36;
                        if v37 >= v22 {
                            v23 = v23;
                            v16 = v5;
                            loop {
                                v42 = v41;
                                if v28 >= v42 {
                                    v25 = 0;
                                    goto LABEL_533563;
                                }
                                v43 = v42 - 1;
                                if !(v43 < v22) || !((v44 = v43 + v29, v44 < v20)) {
                                    break;
                                }
                                if *((v26 + v43) as &i8) != *((v19 + v44) as &i8) {
                                    v30 = v29 + v4;
                                    v32 = v7;
                                }
                            }
                        }
                        if !(v29 + v37 < v20) {
                            goto LABEL_5338fd;
                        }
                        v39 = v37 + 1;
                    } while (*((v26 + v37) as &i8) == *((v19 + v29 + v37) as &i8));
                    v30 = v29 + v8 + v39;
                    v40 = 0;
                    v33 = v5;
                } while ((v16 = v33, v24 = v30 + v23, v24 < v20));
            } else {
                v0 = v16;
                if !(*((&v0 as &u8 + ((*((v19 + v24) as &i8) & 63) >> 3)) as &i8) >> (*((v19 + v24) as &i8) & 63 & 7) & 1) {
                    v45 = v29 + v22;
                    goto LABEL_533663;
                }
            }
            v48 = v47;
            v49 = 0;
            if v17 + v49 >= v22 {
                v6 = v6;
                loop {
                    v51 = v6;
                    if v51 == -1 {
                        break;
                    }
                    if v6 >= v22 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    if v29 + v51 >= v20 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    if *((v26 + v51) as &i8) != *((v19 + v29 + v51) as &i8) {
                        v45 = v29 + v4;
LABEL_533663:
                        goto LABEL_533666;
                    }
                }
                v25 = -1;
LABEL_533563:
                v21 = v29 + v22;
                v2 += 1;
                v24 = v21 + v23;
                if v24 >= v20 {
                    break;
                }
            } else {
                if v17 + v48 >= v20 {
LABEL_5338fd:
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                v45 = v48 + 1;
LABEL_533666:
                v24 = v23 + v45;
                if !(v24 < v20) {
                    break;
                }
            }
        }
    }
    v61 = v2;
    v62 = v61 * v3;
    if v61 == 1 {
        v16 = v16 | -0x100 | v62 == v1 ^ 3;
    } else {
        v63 = v1;
        if v61 == 2 {
            v16 = v16 | -0x100 | (v62 != v63) * 2 | 1;
        } else {
            v16 = v16 | -0x100 | 3;
            if v61 == 3 {
                v16 = (-0x100 | v62 != v63) * 3 & 4294967295;
            }
        }
    }
}
