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
    let v14: u64;  // r10
    let v15: u64;  // r14
    let v16: u64;  // rbx
    let v17: &u64;  // rsi
    let v18: &u64;  // rsi
    let v19: u64;  // rbp
    let v20: &u64;  // rsi
    let v21: u32;  // ecx
    let v22: u32;  // r15d
    let v23: u32;  // r8d
    let v24: u64;  // r9
    let v25: u64;  // rcx
    let v26: &u8;  // r8
    let v27: &u8;  // rcx
    let v28: u64;  // r8
    let v29: u8;  // cl
    let v30: u32;  // ecx
    let v32: u64;  // r9

    v7 = a1;
    v5 = v8;
    v4 = v9;
    v3 = v10;
    v2 = v11;
    v1 = v12;
    v0 = a3;
    v13 = *(a3);
    if !a2 {
        v14 = a0[4];
    } else {
        v14 = a0[4];
        v15 = a0[2];
        v16 = a0[1] + 1;
        do {
            v18 = v17;
            v19 = *(v18 as &i8);
            if v19 >= 0 {
                v20 = v18 as &char + 1;
            } else {
                v21 = v19 & 31;
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
            if v19 - 12 < 2 {
LABEL_488146:
                a0[4] = v24;
                v13 = 0;
                goto LABEL_4881f2;
            } else {
                if v19 == 9 {
                    v13 = (v13 & -8) + 8;
                    *(a3) = v13;
                    continue;
                }
                if v19 == 10 {
                    goto LABEL_488146;
                }
                if v19 < 127 {
                    v25 = -0x100 | 32 <= v19;
                } else if v19 <= 159 {
                    v25 = 0;
                } else {
                    v26 = v19 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[v19 >> 13] * 128;
                    if v26 as u32 > 2431 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v27 = v19 >> 2 & 15 | *((&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v26) as &i8) * 16;
                    if v27 as u32 >= 3808 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v28 = *((&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v27) as &i8);
                    v29 = v19 * 2 & 4294967295;
                    v30 = 1;
                    if ((v28 & 255) >> (v29 & 6 & 31) & 3) != 3 {
                        v30 = (v28 & 255) >> (v29 & 6 & 31) & 3;
                    }
                    v25 = v30;
                }
                v13 += v25;
LABEL_4881f2:
                *(a3) = v13;
                if v19 == 10 {
                    v15 += 1;
                    a0[2] = v15;
                }
            }
        } while ((a0[1] = v16, v16 += 1, v20 != v7 + a2));
    }
    *(a0) = *(a0) + a2;
    a0[4] = v32;
    return a3;
}
