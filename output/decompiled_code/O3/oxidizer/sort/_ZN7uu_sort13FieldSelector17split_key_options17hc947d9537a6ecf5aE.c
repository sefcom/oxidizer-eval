fn uu_sort::FieldSelector::split_key_options(a0: &u64, a1: &u64, a2: &u64) -> u64 {
    let v0: &u64;  // [sp-0x38], Other Possible Types: u64
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: &u64;  // r12
    let v5: &u64;  // 4096
    let v6: &u64;  // r12
    let v7: void*;  // r14
    let v8: &u64;  // 4096
    let v9: &u64;  // rbx
    let v10: u64;  // rdi
    let v11: &u64;  // r13
    let v12: u32;  // eax
    let v13: u32;  // edx
    let v14: u32;  // ecx

    v0 = v2;
    v3 = 1;
    if !a2 {
        v6 = 0;
        v7 = 0;
    } else {
        v4 = 0;
        v0 = a1;
        do {
            v9 = v5;
            v10 = *(v9 as &i8);
            if v10 >= 0 {
                v11 = v9 as &char + 1;
            } else {
                v12 = v10 & 31;
                v13 = *((v9 as &char + 1) as &i8) & 63;
                if (v10 & 255) <= 223 {
                    v11 = v9 as &char + 2;
                    v10 = v12 * 64 | v13;
                } else {
                    v14 = *((v9 as &char + 2) as &i8) & 63 | v13 * 64;
                    if (v10 & 255) < 240 {
                        v11 = v9 as &char + 3;
                        v10 = v14 | v12 * 0x1000;
                    } else {
                        v11 = v9 as &char + 4;
                        v10 = *((v9 as &char + 3) as &i8) & 63 | v14 * 64 | (v12 & 7) * 0x40000;
                    }
                }
            }
            if !((v10 & -33) - 65 >= 26) || !(v10 < 128) && !(!core::unicode::unicode_data::alphabetic::lookup(v10) as i8) {
                v8 = v0;
                if v4 {
                    if a2 <= v4 {
                        if a2 != v4 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((v8 + v4) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
                v7 = a2 - v4;
                v3 = v8 + v4;
                *(a0) = v8;
                a0[1] = v6;
                a0[2] = v3;
                a0[3] = v7;
                return v3;
            }
            v4 = v4 - v9 + v11;
        } while (v11 != a1 + a2);
        v7 = 0;
        v3 = 1;
        v8 = v0;
    }
    *(a0) = v8;
    a0[1] = v6;
    a0[2] = v3;
    a0[3] = v7;
    return v3;
}
