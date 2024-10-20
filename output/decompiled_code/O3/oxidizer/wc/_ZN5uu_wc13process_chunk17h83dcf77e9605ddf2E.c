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
    let v13: void*;  // r10
    let v14: u64;  // r12
    let v15: u64;  // r14
    let v16: u64;  // r15
    let v17: u64;  // r11
    let v18: &u64;  // rsi
    let v19: &u64;  // rsi
    let v20: &u8;  // r9
    let v21: &u64;  // rsi
    let v22: u32;  // ecx
    let v23: u32;  // ebp
    let v24: u32;  // edi
    let v25: u32;  // ecx
    let v26: u8;  // cl
    let v27: u64;  // rcx
    let v28: u32;  // cc_dep1
    let v29: u32;  // cc_dep2
    let v30: u64;  // r10
    let v31: u64;  // rcx
    let v32: &u8;  // rdi
    let v33: &u8;  // rcx
    let v34: u64;  // rdi
    let v35: u8;  // cl
    let v36: u32;  // ecx
    let v38: u64;  // r10

    v7 = a1;
    v5 = v8;
    v4 = v9;
    v3 = v10;
    v2 = v11;
    v1 = v12;
    v0 = a3;
    v13 = *(a3);
    if !a2 {
        v17 = a0[4];
    } else {
        v14 = *(a4);
        v15 = a0[2];
        v16 = a0[3];
        v17 = a0[4];
        do {
            v19 = v18;
            v20 = *(v19 as &i8);
            if v20 as u8 >= 0 {
                v21 = v19 as &char + 1;
            } else {
                v22 = v20 as u32 & 31;
                v23 = *((v19 as &char + 1) as &i8) & 63;
                if (v20 & 255) <= 223 {
                    v21 = v19 as &char + 2;
                    v20 = v22 * 64 | v23;
                } else {
                    v24 = *((v19 as &char + 2) as &i8) & 63 | v23 * 64;
                    if (v20 & 255) >= 240 {
                        v21 = v19 as &char + 4;
                        v20 = *((v19 as &char + 3) as &i8) & 63 | v24 * 64 | (v22 & 7) * 0x40000;
                    } else {
                        v21 = v19 as &char + 3;
                        v20 = v24 | v22 * 0x1000;
                    }
                }
            }
            if !((v20 + 9) as u32 >= 5) || !(v20 as u32 != 32) {
LABEL_487749:
                *(a4) = 0;
                v14 = 0;
                goto LABEL_487750;
            }
            if v20 as u32 < 128 {
                goto LABEL_4878c3;
            }
            if v20 as u32 >> 8 <= 31 {
                switch (v25) {
                case 0:
                    v26 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v20 & 4294967295];
                    break;
                case 22:
                    v28 = v20 as u32;
                    v29 = 5760;
                    goto LABEL_487889;
                default:
LABEL_4878c3:
                    if !(!(v14 & 255 & 255)) {
                        goto LABEL_487750;
                    }
                    goto LABEL_4878cc;
                }
                goto LABEL_487889;
            } else {
                switch (v25) {
                case 32:
                    v27 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v20 & 4294967295];
                    v26 = v27 | -0x100 | (v27 & 255) >> 1 & 255;
                    if !(!(v26 & 1)) {
                        goto LABEL_487749;
                    }
                    goto LABEL_4878c3;
                case 48:
                    v28 = v20 as u32;
                    v29 = 0x3000;
LABEL_487889:
                    if !(!v28 == v29) {
                        goto LABEL_487749;
                    }
                    goto LABEL_4878c3;
                default:
LABEL_4878c3:
                    if !(!(v14 & 255 & 255)) {
                        goto LABEL_487750;
                    }
LABEL_4878cc:
                    *(a4) = 1;
                    v16 += 1;
                    a0[3] = v16;
                    v14 = v14 | -0x100 | 1;
LABEL_487750:
                    if (v20 + 12) as u32 < 2 {
LABEL_487769:
                        a0[4] = v30;
                        v13 = 0;
                        goto LABEL_48785f;
                    } else {
                        if v20 as u32 == 9 {
                            v13 = (v13 & -8) + 8;
                            *(a3) = v13;
                            continue;
                        }
                        if v20 as u32 == 10 {
                            goto LABEL_487769;
                        }
                        if v20 as u32 < 127 {
                            v31 = -0x100 | 32 <= v20 as u32;
                            break;
                        } else if v20 as u32 <= 159 {
                            v31 = 0;
                            break;
                        } else {
                            v32 = v20 as u32 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[v20 as u32 >> 13] * 128;
                            if v32 as u32 > 2431 {
                                core::panicking::panic_bounds_check(); /* do not return */
                            }
                            v33 = v20 as u32 >> 2 & 15 | *((&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v32) as &i8) * 16;
                            if v33 as u32 >= 3808 {
                                core::panicking::panic_bounds_check(); /* do not return */
                            }
                            v34 = *((&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v33) as &i8);
                            v35 = (v20 * 2 & 4294967295) as u8;
                            v36 = 1;
                            if ((v34 & 255) >> (v35 & 6 & 31) & 3) != 3 {
                                v36 = (v34 & 255) >> (v35 & 6 & 31) & 3;
                            }
                            v31 = v36;
                            break;
                        }
                        v13 += v31;
LABEL_48785f:
                        *(a3) = v13;
                        if v20 as u32 == 10 {
                            v15 += 1;
                            a0[2] = v15;
                        }
                    }
                }
            }
        } while (v21 != v7 + a2);
    }
    *(a0) = *(a0) + a2;
    a0[4] = v38;
    return a3;
}
