fn uu_sort::FieldSelector::get_range::resolve_index(a0: &u8, a1: &u8, a2: &&struct_0, a3: u32, a4: void*) -> u64 {
    let v0: u64;  // [sp-0x38], Other Possible Types: &u64
    let v2: &struct_1;  // r8
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // r9
    let v7: &u8;  // rdx
    let v8: &u8;  // rdx
    let v9: &&struct_0;  // rax
    let v10: &&struct_0;  // rax
    let v12: &u8;  // 4096
    let v13: &u64;  // r12
    let v14: &struct_1;  // rcx
    let v15: &u64;  // r12
    let v16: &struct_1;  // r11
    let v17: &u64;  // r15
    let v18: u64;  // r13
    let v19: u32;  // ebp
    let v20: u32;  // r11d
    let v21: u32;  // r14d
    let v22: u32;  // r11d
    let v24: &u8;  // rdx
    let v25: &u8;  // r8
    let v26: u64;  // r10
    let v27: void*;  // rcx
    let v29: &u8;  // r8
    let v30: &u8;  // r8
    let v31: &u8;  // r11
    let v32: u64;  // r9
    let v33: &u8;  // rbx
    let v37: u64;  // rax

    v0 = v3;
    v4 = a4->field_0;
    if a2 && v4 > a3 {
        return 3;
    }
    v6 = a4->field_8;
    if v6 {
        if v4 == 1 {
            v7 = 0;
            if !(!a4->field_10) {
                goto LABEL_4c4f66;
            }
        } else {
            if !a2 {
                core::option::unwrap_failed(); /* do not return */
            }
            v10 = v4 - 1;
            if v10 >= a3 {
                core::panicking::panic_bounds_check(); /* do not return */
            }
            v7 = *((a2 as &u8 + 0x10 * v10 as u64) as &i64);
            if !a4->field_10 {
LABEL_4c510f:
                if v7 {
                    if v7 >= a1 {
                        if v7 != a1 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((a0 + v7) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
            } else {
                if !v7 {
                    v7 = 0;
                    goto LABEL_4c4f5e;
                } else {
                    if v7 >= a1 {
                        if v7 != a1 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((a0 + v7) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
LABEL_4c4f5e:
LABEL_4c4f66:
                        v13 = a0 + v7;
                        v14 = a1 - v7;
                        if a1 != v7 {
                            v16 = 0;
                            v0 = v13;
                            do {
                                v17 = v13;
                                v2 = v16;
                                v18 = *(v17 as &i8);
                                if v18 >= 0 {
                                    v13 = v17 as &char + 1;
                                } else {
                                    v19 = v18 & 31;
                                    v20 = *((v17 as &char + 1) as &i8) & 63;
                                    if (v18 & 255) <= 223 {
                                        v13 = v17 as &char + 2;
                                        v18 = v19 * 64 | v20;
                                    } else {
                                        v21 = *((v17 as &char + 2) as &i8) & 63 | v20 * 64;
                                        if (v18 & 255) >= 240 {
                                            v13 = v17 as &char + 4;
                                            v18 = *((v17 as &char + 3) as &i8) & 63 | v21 * 64 | (v19 & 7) * 0x40000;
                                        } else {
                                            v13 = v17 as &char + 3;
                                            v18 = v21 | v19 * 0x1000;
                                        }
                                    }
                                }
                                if v18 - 9 >= 5 && v18 != 32 {
                                    if v18 < 128 {
                                        goto LABEL_4c50dc;
                                    }
                                    if v18 >> 8 > 31 {
                                        switch (v22) {
                                        case 32:
                                            break;
                                        case 48:
LABEL_4c50a9:
                                            if !(!v18 == 5760) {
                                                continue;
                                            }
                                            goto LABEL_4c50dc;
                                        default:
LABEL_4c50dc:
                                            goto LABEL_4c50df;
                                        }
                                    } else {
                                        switch (v22) {
                                        case 0:
                                            break;
                                        case 22:
                                            goto LABEL_4c50a9;
                                        default:
LABEL_4c50dc:
                                            goto LABEL_4c50df;
                                        }
                                    }
                                    goto LABEL_4c50a9;
                                }
                            } while ((v16 = v2 - v17 + v13, v13 != a0 + a1));
LABEL_4c50df:
                            v15 = v0;
                        }
                    }
                    v7 = v12;
                    goto LABEL_4c510f;
                }
            }
        }
        v24 = v8;
        v25 = a0 + v24;
        v26 = a0 + a1;
        v27 = 0;
        if v6 == 1 {
            goto LABEL_4c5191;
        }
        loop {
            v31 = v29;
            v32 = v6 - 1;
            if v31 == v26 {
                break;
            } else {
                v33 = (*(v31) < 0 ? (*(v31) < 224 ? v31 + 2 : (*(v31) < 240 ? v31 + 3 : v31 + 4)) : v31 + 1);
                v27 += v33 - v31;
                if v32 == 1 {
LABEL_4c5191:
                    if v30 != v26 {
                        break;
                    }
                }
            }
        }
        v5 = (-0x100 | a1 <= &v24[v37]) * 3;
        return v5;
    } else if !a2 {
        core::option::unwrap_failed(); /* do not return */
    } else {
        v9 = v4 - 1;
        if v9 >= a3 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v5 = 1 + (*((8 + a2 as &u8 + 0x10 * v9 as u64) as &i64) < 1);
        return v5;
    }
}
