fn uu_wc::process_chunk(a0: &u64, a1: &u64, a2: u64, a3: &u64, a4: &u8) -> u64 {
    let v0: &u64;  // [sp-0x38]
    let v1: u64;  // [sp-0x30]
    let v2: u64;  // [sp-0x28]
    let v3: u64;  // [sp-0x20]
    let v4: u64;  // [sp-0x18]
    let v5: u64;  // [sp-0x10]
    let v7: &u64;  // rsi
    let v8: u64;  // r15
    let v9: u64;  // r14
    let v10: u64;  // r13
    let v11: u64;  // r12
    let v12: u64;  // rbx
    let v13: void*;  // r11
    let v14: u64;  // r12
    let v15: u64;  // r15
    let v16: u64;  // rbx
    let v17: &u64;  // rsi
    let v18: &u64;  // rsi
    let v19: &u8;  // rcx
    let v20: &u64;  // rsi
    let v21: u32;  // r9d
    let v22: u32;  // r13d
    let v23: u32;  // r10d
    let v24: u32;  // r9d
    let v25: u8;  // r9b
    let v26: u64;  // r9
    let v27: u32;  // cc_dep1
    let v28: u32;  // cc_dep2
    let v29: u64;  // r11
    let v30: u64;  // r9
    let v31: &u8;  // r10
    let v32: &u8;  // r9
    let v33: u64;  // r9
    let v34: u32;  // ecx
    let v36: u64;  // r11

    v7 = a1;
    v5 = v8;
    v4 = v9;
    v3 = v10;
    v2 = v11;
    v1 = v12;
    v0 = a3;
    v13 = *(a3);
    if !a2 {
        v16 = a0[4];
    } else {
        v14 = *(a4);
        v15 = a0[3];
        v16 = a0[4];
        do {
            v18 = v17;
            v19 = *(v18 as &i8);
            if v19 as u8 >= 0 {
                v20 = v18 as &char + 1;
            } else {
                v21 = v19 as u32 & 31;
                v22 = *((v18 as &char + 1) as &i8) & 63;
                if (v19 & 255) <= 223 {
                    v20 = v18 as &char + 2;
                    v19 = v21 * 64 | v22;
                } else {
                    v23 = *((v18 as &char + 2) as &i8) & 63 | v22 * 64;
                    if (v19 & 255) < 240 {
                        v20 = v18 as &char + 3;
                        v19 = v23 | v21 * 0x1000;
                    } else {
                        v20 = v18 as &char + 4;
                        v19 = *((v18 as &char + 3) as &i8) & 63 | v23 * 64 | (v21 & 7) * 0x40000;
                    }
                }
            }
            if !((v19 + 9) as u32 >= 5) || !(v19 as u32 != 32) {
LABEL_487a1a:
                *(a4) = 0;
                v14 = 0;
                goto LABEL_487a21;
            }
            if v19 as u32 < 128 {
                goto LABEL_487ba0;
            }
            if v19 as u32 >> 8 <= 31 {
                switch (v24) {
                case 0:
                    v25 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v19 & 4294967295];
                    break;
                case 22:
                    v27 = v19 as u32;
                    v28 = 5760;
                    goto LABEL_487b5f;
                default:
LABEL_487ba0:
                    if !(!(v14 & 255 & 255)) {
                        goto LABEL_487a21;
                    }
                    goto LABEL_487ba9;
                }
                goto LABEL_487b5f;
            } else {
                switch (v24) {
                case 32:
                    v26 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v19 & 4294967295];
                    v25 = v26 | -0x100 | (v26 & 255) >> 1 & 255;
                    if !(!(v25 & 1)) {
                        goto LABEL_487a1a;
                    }
                    goto LABEL_487ba0;
                case 48:
                    v27 = v19 as u32;
                    v28 = 0x3000;
LABEL_487b5f:
                    if !(!v27 == v28) {
                        goto LABEL_487a1a;
                    }
                    goto LABEL_487ba0;
                default:
LABEL_487ba0:
                    if !(!(v14 & 255 & 255)) {
                        goto LABEL_487a21;
                    }
LABEL_487ba9:
                    *(a4) = 1;
                    v15 += 1;
                    a0[3] = v15;
                    v14 = v14 | -0x100 | 1;
LABEL_487a21:
                    if (v19 + 12) as u32 < 2 {
LABEL_487a35:
                        a0[4] = v29;
                        v13 = 0;
                        continue;
                    } else {
                        if v19 as u32 == 9 {
                            v13 = (v13 & -8) + 8;
                            continue;
                        }
                        if v19 as u32 == 10 {
                            goto LABEL_487a35;
                        }
                        if v19 as u32 < 127 {
                            v30 = -0x100 | 32 <= v19 as u32;
                            break;
                        } else if v19 as u32 <= 159 {
                            v30 = 0;
                            break;
                        } else {
                            v31 = v19 as u32 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[v19 as u32 >> 13] * 128;
                            if v31 as u32 > 2431 {
                                core::panicking::panic_bounds_check(); /* do not return */
                            }
                            v32 = v19 as u32 >> 2 & 15 | *((&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v31) as &i8) * 16;
                            if v32 as u32 >= 3808 {
                                core::panicking::panic_bounds_check(); /* do not return */
                            }
                            v33 = *((&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v32) as &i8);
                            v34 = 1;
                            if ((v33 & 255) >> (v19 as u8 << 1 & 6 & 31) & 3) != 3 {
                                v34 = (v33 & 255) >> (v19 as u8 * 2 & 6 & 31) & 3;
                            }
                            v30 = v34;
                            break;
                        }
                        v13 += v30;
                        continue;
                    }
                }
            }
        } while ((*(a3) = v13 as u64, v20 != v7 + a2));
    }
    *(a0) = *(a0) + a2;
    a0[4] = v36;
    return a3;
}
