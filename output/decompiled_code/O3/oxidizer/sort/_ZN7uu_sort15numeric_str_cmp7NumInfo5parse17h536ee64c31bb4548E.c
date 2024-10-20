fn uu_sort::numeric_str_cmp::NumInfo::parse(a0: void*, a1: &u64, a2: &u8, a3: void*) -> u64 {
    let v0: u64;  // [sp-0x150]
    let v1: u32;  // [sp-0x54]
    let v2: &u8;  // [sp-0x48]
    let v3: u64;  // [sp-0x30]
    let v4: u64;  // [sp-0x28]
    let v5: u64;  // [sp-0x20]
    let v6: u64;  // [sp-0x18]
    let v7: u64;  // [sp-0x10]
    let v8: i64;  // [sp-0x8]
    let v11: u64;  // r15
    let v12: u64;  // r14
    let v13: u64;  // r13
    let v14: u64;  // r12
    let v15: u64;  // rbx
    let v16: u64;  // rbx
    let v17: u32;  // ebp
    let v18: u32;  // eax
    let v19: u64;  // r8
    let v20: &u8;  // rcx
    let v21: &u64;  // r14
    let v22: void*;  // r10
    let v23: &u8;  // r9
    let v25: &u8;  // rcx
    let v27: &u8;  // rdx
    let v28: &u8;  // rdi
    let v29: u32;  // r13d
    let v30: u32;  // r11d
    let v31: u32;  // edx
    let v32: &u8;  // rcx
    let v33: &u8;  // rdx
    let v34: &u8;  // rdx
    let v35: u32;  // cc_dep1
    let v36: u32;  // cc_dep2
    let v38: &u8;  // r15
    let v39: u8;  // r15b
    let v40: u32;  // r15d
    let v41: u64;  // rsi
    let v42: u64;  // rsi
    let v43: &u8;  // rdx
    let v46: u8;  // dl
    let v47: &u8;  // rdx
    let v50: &u8;  // rcx
    let v51: &u64;  // r14
    let v52: &u8;  // rcx
    let v53: &u8;  // rdi
    let v54: u32;  // r9d
    let v55: u32;  // r11d
    let v56: u32;  // edx
    let v57: &u8;  // rdx
    let v60: &u8;  // rdi
    let v61: &u8;  // rdi
    let v68: &u8;  // rdi
    let v69: u64;  // rdi

    if !a2 {
        v19 = 0;
        v25 = 0;
    } else {
        v8 = vvar_250{reg 56};
        v7 = v11;
        v6 = v12;
        v5 = v13;
        v4 = v14;
        v3 = v15;
        v16 = a1 + a2;
        v17 = a3->field_0;
        v18 = a3->field_4;
        v1 = (a3 | -0x100 | 1) as u32;
        v19 = -1;
        v20 = 0;
        v2 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        do {
            v28 = *(a1 as &i8);
            if v28 as u8 >= 0 {
                a1 = a1 as &char + 1;
            } else {
                v29 = v28 as u32 & 31;
                v30 = *((a1 as &char + 1) as &i8) & 63;
                if (v28 & 255) < 224 {
                    a1 = a1 as &char + 2;
                    v28 = v29 * 64 | v30;
                } else {
                    v31 = *((a1 as &char + 2) as &i8) & 63 | v30 * 64;
                    if (v28 & 255) >= 240 {
                        a1 = a1 as &char + 4;
                        v27 = v31 * 64;
                        v28 = *((a1 as &char + 3) as &i8) & 63 | v27 as u32 | (v29 & 7) * 0x40000;
                    } else {
                        a1 = a1 as &char + 3;
                        v27 = v31 | v29 * 0x1000;
                        v28 = v27 & 4294967295;
                    }
                }
            }
            v23 = v23 - a1 + a1;
            if !1 {
                goto LABEL_50e4cf;
            }
            v27 = v28 + 9 & 4294967295;
            if v27 as u32 >= 5 && v28 as u32 != 32 {
                if v28 as u32 <= 127 {
                    if !(v28 as u32 == 45) {
                        goto LABEL_50e4cf;
                    }
                    v1 = 0;
                    continue;
                }
                v27 = v28 as u32 >> 8;
                if v27 as u32 <= 31 {
                    switch (v27 as u32) {
                    case 0:
                        v33 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v28 & 4294967295];
                        break;
                    case 22:
                        v35 = v28 as u32;
                        v36 = 5760;
                        goto LABEL_50e6ed;
                    default:
LABEL_50e4cf:
                        if v17 == v28 as u32 {
                            goto LABEL_50e430;
                        }
                        goto LABEL_50e4d7;
                    }
                    goto LABEL_50e4d7;
                }
                switch (v27 as u32) {
                case 32:
                    v34 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v28 & 4294967295];
                    v33 = v34 | -0x100 | (v34 & 255) >> 1 & 255;
                    v27 = v33 | -0x100 | v33 as u8 & 1;
                    if !(!(v33 as u8 & 1)) {
                        break;
                    }
                    goto LABEL_50e4cf;
                case 48:
                    v35 = v28 as u32;
                    v36 = 0x3000;
LABEL_50e6ed:
                    v27 = v27 | -0x100 | v35 == v36;
                    if !(!v35 == v36) {
                        break;
                    }
                    goto LABEL_50e4cf;
                default:
LABEL_50e4cf:
                    if v17 != v28 as u32 {
LABEL_50e4d7:
                        if v28 as u32 == v18 {
                            if !(v2 as i8 & 1) {
                                v27 = v27 | -0x100 | 1;
                                v2 = v27;
                                goto LABEL_50e430;
                            }
                            v28 = v18;
LABEL_50e775:
                            if v22 == 1 {
                                goto LABEL_50e79f;
                            }
                            goto LABEL_50e785;
                        }
                        if (v28 + 58) as u32 < -10 {
                            goto LABEL_50e775;
                        }
                        v27 = v2;
                        v38 = v27 & 4294967295;
                        v39 = v38 as u8 & 1;
                        v40 = v38 | -0x100 | v39;
                        v41 = v22;
                        v42 = v41 - 1;
                        if v41 == 1 || v28 as u32 != 48 {
                            v43 = v40;
                            goto LABEL_50e57c;
                        } else if !v39 {
                            v21 = v21 | -0x100 | 1;
                        } else {
                            v19 -= 1;
                            v43 = v27 | -0x100 | 1;
LABEL_50e57c:
                            v19 = (v43 as u8 ^ 1) + v19;
                            v46 = v28 as u32 != 48;
                            v47 = v43 | -0x100 | v43 as u8 ^ 1 | -0x100 | v46;
                            v22 = !v42 | v46;
                            if a1 == v16 {
                                v61 = a2;
                                if v22 {
                                    goto LABEL_50e7df;
                                } else {
                                    v19 = 0;
                                    goto LABEL_50e7df;
                                }
                            }
                            v25 = v23;
                            v51 = a1;
                            v52 = v50;
                            v53 = *(a1 as &i8);
                            if v53 as u8 >= 0 {
                                a1 = v51 as &char + 1;
                            } else {
                                v54 = v53 as u32 & 31;
                                v55 = *((v51 as &char + 1) as &i8) & 63;
                                if (v53 & 255) <= 223 {
                                    a1 = v51 as &char + 2;
                                    v53 = v54 * 64 | v55;
                                } else {
                                    v56 = *((v51 as &char + 2) as &i8) & 63 | v55 * 64;
                                    if (v53 & 255) >= 240 {
                                        a1 = v51 as &char + 4;
                                        v27 = v56 * 64;
                                        v53 = *((v51 as &char + 3) as &i8) & 63 | v27 as u32 | (v54 & 7) * 0x40000;
                                    } else {
                                        a1 = v51 as &char + 3;
                                        v27 = v56 | v54 * 0x1000;
                                        v53 = v27 & 4294967295;
                                    }
                                }
                            }
                            v23 = v25 - v51 + a1;
                            v21 = v51 | -0x100 | 1;
                            if v17 != v53 as u32 {
                                if v53 as u32 != v18 {
                                    v27 = v53 + 58 & 4294967295;
                                    if v27 as u32 < -10 {
                                        goto LABEL_50e796;
                                    }
                                    v42 = v22 - 1;
                                    if v22 == 1 || v53 as u32 != 48 {
                                        v57 = v40;
                                    } else if v39 {
                                        v19 -= 1;
                                        v57 = v27 | -0x100 | 1;
                                    } else {
                                        v22 = 0;
                                        goto LABEL_50e430;
                                    }
                                    v19 = (v57 as u8 ^ 1) + v19;
                                    v47 = v57 | -0x100 | v53 as u32 != 48;
                                    continue;
                                }
                                if !v39 {
                                    v21 = v21 | -0x100 | 1;
                                    v27 = v27 | -0x100 | 1;
                                    v2 = v27;
                                    break;
                                } else {
                                    v53 = v18;
                                }
LABEL_50e796:
                                if v22 == 1 {
LABEL_50e79f:
                                    if a3->field_8 {
                                        v69 = v68 as u32 - 69;
                                        if v69 <= 38 {
                                            v0 = 274881087813;
                                            if (*((&v0 + ((v69 & 63) >> 3)) as &i8) >> (v69 & 63 & 7) & 1) {
                                                v23 += 1;
                                            }
                                        }
                                    }
                                    goto LABEL_50e7df;
                                }
LABEL_50e785:
                                v19 = 0;
                                goto LABEL_50e7df;
                            }
                        }
                    }
LABEL_50e430:
                    break;
                }
            }
        } while ((v20 = v32, a1 != v16));
        v60 = a2;
LABEL_50e7df:
    }
    a0->field_0 = v19;
    a0->field_8 = 1;
    a0->field_10 = v25;
    a0->field_18 = 0;
    return a0;
}
