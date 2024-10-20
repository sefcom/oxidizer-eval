fn uu_wc::process_chunk(a0: &u64, a1: &u64, a2: u64, a3: &u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v5: &u64;  // rsi
    let v6: u64;  // r15
    let v7: u64;  // r14
    let v8: u64;  // r12
    let v9: u64;  // rbx
    let v10: u64;  // r10
    let v11: void*;  // r11
    let v12: &u64;  // rsi
    let v13: &u64;  // rsi
    let v14: u64;  // rcx
    let v15: &u64;  // rsi
    let v16: u32;  // r8d
    let v17: u32;  // ebp
    let v18: u32;  // r9d
    let v19: u64;  // r11
    let v20: u64;  // r8
    let v21: &u8;  // r9
    let v22: &u8;  // r8
    let v23: u64;  // r8
    let v24: u32;  // ecx
    let v25: u64;  // r11

    v5 = a1;
    v3 = v6;
    v2 = v7;
    v1 = v8;
    v0 = v9;
    v10 = a0[4];
    v11 = *(a3);
    if a2 {
        do {
            v13 = v12;
            v14 = *(v13 as &i8);
            if v14 >= 0 {
                v15 = v13 as &char + 1;
            } else {
                v16 = v14 & 31;
                v17 = *((v13 as &char + 1) as &i8) & 63;
                if (v14 & 255) <= 223 {
                    v15 = v13 as &char + 2;
                    v14 = v16 * 64 | v17;
                } else {
                    v18 = *((v13 as &char + 2) as &i8) & 63 | v17 * 64;
                    if (v14 & 255) >= 240 {
                        v15 = v13 as &char + 4;
                        v14 = *((v13 as &char + 3) as &i8) & 63 | v18 * 64 | (v16 & 7) * 0x40000;
                    } else {
                        v15 = v13 as &char + 3;
                        v14 = v18 | v16 * 0x1000;
                    }
                }
            }
            if v14 - 12 < 2 {
LABEL_486fa4:
                a0[4] = v19;
                v11 = 0;
            } else {
                if v14 == 9 {
                    v11 = (v11 & -8) + 8;
                    continue;
                }
                if v14 == 10 {
                    goto LABEL_486fa4;
                }
                if v14 < 127 {
                    v20 = -0x100 | 32 <= v14;
                } else if v14 <= 159 {
                    v20 = 0;
                } else {
                    v21 = v14 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[v14 >> 13] * 128;
                    if v21 as u32 > 2431 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v22 = v14 >> 2 & 15 | *((&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v21) as &i8) * 16;
                    if v22 as u32 >= 3808 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v23 = *((&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v22) as &i8);
                    v24 = 1;
                    if ((v23 & 255) >> (v14 << 1 & 6 & 31) & 3) != 3 {
                        v24 = (v23 & 255) >> (v14 * 2 & 6 & 31) & 3;
                    }
                    v20 = v24;
                }
                v11 += v20;
            }
        } while ((*(a3) = v11 as u64, v15 != v5 + a2));
    }
    *(a0) = *(a0) + a2;
    a0[4] = v25;
    return a3;
}
