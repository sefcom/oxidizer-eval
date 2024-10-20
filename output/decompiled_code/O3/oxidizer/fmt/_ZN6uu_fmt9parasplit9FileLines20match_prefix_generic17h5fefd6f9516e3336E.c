fn uu_fmt::parasplit::FileLines::match_prefix_generic(a0: u64, a1: u64, a2: &u64, a3: u64, a4: u8) -> u64 {
    let v0: &u64;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v3: &u64;  // r9
    let v4: void*;  // rax
    let v5: &u64;  // r9
    let v6: u64;  // rax
    let v7: &u64;  // r9
    let v8: &u64;  // r13
    let v9: &u64;  // r9
    let v10: &u64;  // r12
    let v11: u64;  // r14
    let v12: &u64;  // rbp
    let v13: u32;  // eax
    let v14: u32;  // edx
    let v15: u32;  // ecx
    let v16: &u64;  // r9
    let v17: u64;  // rax
    let v18: u32;  // ecx

    v3 = a2;
    v0 = a2;
    if a3 < a1 {
        v4 = 0;
    } else {
        v6 = bcmp(a0, v3, a1) as i64;
        v4 = v6 | -0x100 | !v6;
        v5 = v0;
    }
    v7 = v5;
    if v4 as u8 {
        return v4;
    } else if a4 {
        return v4;
    } else {
        if !a3 {
            return 0;
        }
        v1 = v7 + a3;
        v8 = 0;
        loop {
            v10 = v9;
            v11 = *(v10 as &i8);
            if v11 >= 0 {
                v12 = v10 as &char + 1;
                if !(!v8) {
                    goto LABEL_489440;
                }
                goto LABEL_489466;
            }
            v13 = v11 & 31;
            v14 = *((v10 as &char + 1) as &i8) & 63;
            if (v11 & 255) <= 223 {
                v12 = v10 as &char + 2;
                v11 = v13 * 64 | v14;
                if !(!v8) {
                    goto LABEL_489440;
                }
                goto LABEL_489466;
            }
            v15 = *((v10 as &char + 2) as &i8) & 63 | v14 * 64;
            if (v11 & 255) < 240 {
                v12 = v10 as &char + 3;
                v11 = v15 | v13 * 0x1000;
                if !(!v8) {
                    goto LABEL_489440;
                }
            } else {
                v12 = v10 as &char + 4;
                v11 = *((v10 as &char + 3) as &i8) & 63 | v15 * 64 | (v13 & 7) * 0x40000;
                if v8 {
LABEL_489440:
                    if a3 <= v8 {
                        if a3 != v8 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((v7 + v8) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
            }
LABEL_489466:
            if a3 - v8 >= a1 {
                v17 = bcmp(a0, v7 + v8, a1) as i64;
                v16 = v0;
                if !v17 {
                    v4 = v17 | -0x100 | 1;
                    return v4;
                }
            }
            v8 = v8 - v10 + v12;
            if !(v11 - 9 >= 5) || !(v11 != 32) {
                if v12 == v1 {
                    break;
                }
                continue;
            }
            if v11 < 128 {
                break;
            }
            if v11 >> 8 <= 31 {
                switch (v18) {
                case 0:
                    break;
                case 22:
                    goto LABEL_4894d0;
                default:
                    return 0;
                }
                goto LABEL_4894bc;
            } else {
                switch (v18) {
                case 32:
LABEL_4894bc:
                    break;
                case 48:
                    break;
                default:
                    return 0;
                }
LABEL_4894d0:
                if !(v11 == 5760) || !(v12 != v1) {
                    return 0;
                }
            }
        }
    }
}
