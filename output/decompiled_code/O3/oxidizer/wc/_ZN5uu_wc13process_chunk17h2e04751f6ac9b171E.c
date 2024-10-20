fn uu_wc::process_chunk(a0: &u64, a1: &u64, a2: u64, a3: &u64) -> u64 {
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
    let v13: void*;  // r9
    let v14: u64;  // rbx
    let v15: u64;  // r10
    let v16: &u64;  // rsi
    let v17: &u64;  // rsi
    let v18: u64;  // r13
    let v19: &u64;  // rsi
    let v20: u32;  // ecx
    let v21: u32;  // ebp
    let v22: u32;  // r8d
    let v23: u64;  // r9
    let v24: u64;  // rcx
    let v25: &u8;  // r8
    let v26: &u8;  // rcx
    let v27: u64;  // r8
    let v28: u8;  // cl
    let v29: u32;  // ecx
    let v31: u64;  // r9

    v7 = a1;
    v5 = v8;
    v4 = v9;
    v3 = v10;
    v2 = v11;
    v1 = v12;
    v0 = a3;
    v13 = *(a3);
    if !a2 {
        v15 = a0[4];
    } else {
        v14 = a0[2];
        v15 = a0[4];
        do {
            v17 = v16;
            v18 = *(v17 as &i8);
            if v18 >= 0 {
                v19 = v17 as &char + 1;
            } else {
                v20 = v18 & 31;
                v21 = *((v17 as &char + 1) as &i8) & 63;
                if (v18 & 255) <= 223 {
                    v19 = v17 as &char + 2;
                    v18 = v20 * 64 | v21;
                } else {
                    v22 = *((v17 as &char + 2) as &i8) & 63 | v21 * 64;
                    if (v18 & 255) >= 240 {
                        v19 = v17 as &char + 4;
                        v18 = *((v17 as &char + 3) as &i8) & 63 | v22 * 64 | (v20 & 7) * 0x40000;
                    } else {
                        v19 = v17 as &char + 3;
                        v18 = v22 | v20 * 0x1000;
                    }
                }
            }
            if v18 - 12 < 2 {
LABEL_486b99:
                a0[4] = v23;
                v13 = 0;
                goto LABEL_486c40;
            } else {
                if v18 == 9 {
                    v13 = (v13 & -8) + 8;
                    *(a3) = v13;
                    continue;
                }
                if v18 == 10 {
                    goto LABEL_486b99;
                }
                if v18 < 127 {
                    v24 = -0x100 | 32 <= v18;
                } else if v18 <= 159 {
                    v24 = 0;
                } else {
                    v25 = v18 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[v18 >> 13] * 128;
                    if v25 as u32 > 2431 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v26 = v18 >> 2 & 15 | *((&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v25) as &i8) * 16;
                    if v26 as u32 >= 3808 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v27 = *((&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v26) as &i8);
                    v28 = v18 * 2 & 4294967295;
                    v29 = 1;
                    if ((v27 & 255) >> (v28 & 6 & 31) & 3) != 3 {
                        v29 = (v27 & 255) >> (v28 & 6 & 31) & 3;
                    }
                    v24 = v29;
                }
                v13 += v24;
LABEL_486c40:
                *(a3) = v13;
                if v18 == 10 {
                    v14 += 1;
                    a0[2] = v14;
                }
            }
        } while (v19 != v7 + a2);
    }
    *(a0) = *(a0) + a2;
    a0[4] = v31;
    return a3;
}
