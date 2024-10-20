fn uu_sort::custom_str_cmp::custom_str_cmp(a0: &u64, a1: i64, a2: &u64, a3: u64, a4: u8, a5: u64) -> u64 {
    let v0: u64;  // [sp-0x158]
    let v1: u64;  // [sp-0x38]
    let v2: i64;  // [bp+0x8]
    let v3: u64;  // rax
    let v4: u8;  // r10b
    let v6: &u64;  // rsi
    let v7: &u64;  // rcx
    let v8: void*;  // cc_ndep
    let v9: u64;  // rax
    let v10: u64;  // r14
    let v11: &u64;  // rsi
    let v12: u32;  // r15d
    let v13: u32;  // r13d
    let v14: u32;  // r12d
    let v15: u64;  // r14
    let v17: u32;  // r14d
    let v18: u64;  // r15
    let v19: u32;  // r12d
    let v20: u32;  // r11d
    let v21: u32;  // r13d
    let v23: u64;  // r15
    let v25: u32;  // r15d
    let v26: u64;  // cc_dep1
    let v27: u64;  // cc_dep2
    let v28: u32;  // r11d
    let v29: u64;  // rax
    let v30: u64;  // cc_ndep
    let v32: u64;  // rax

    v1 = v3;
    v4 = v2;
    if !a5 && !v4 && !a4 {
        v29 = (amd64g_calculate_condition(9, 20, v32, 0, v30) as char ? (-0x100 | v32) & 4294967295 & 4294967295 : 255);
        return v29;
    }
    v6 = a3 + a0;
    v7 = a3 + a2;
    loop {
        v9 = 0x110000;
        if a0 != v6 {
            break;
        }
        do {
LABEL_50e270:
            v11 = v11;
            v17 = 0x110000;
            if a2 == v7 {
                break;
            }
            v18 = *(a2 as &i8);
            if v18 >= 0 {
                v8 = amd64g_calculate_rflags_c(17, v18 & 255, 0, v8);
                a2 = a2 as &char + 1;
                if !(a5 & 255 & 255) {
                    goto LABEL_50e345;
                }
                goto LABEL_50e315;
            }
            v19 = v18 & 31;
            v20 = *((a2 as &char + 1) as &i8) & 63;
            if (v18 & 255) <= 223 {
                a2 = a2 as &char + 2;
                v18 = v19 * 64 | v20;
                if !(a5 & 255 & 255) {
                    goto LABEL_50e345;
                }
                goto LABEL_50e315;
            } else {
                v21 = *((a2 as &char + 2) as &i8) & 63 | v20 * 64;
                if (v18 & 255) >= 240 {
                    a2 = a2 as &char + 4;
                    v18 = *((a2 as &char + 3) as &i8) & 63 | v21 * 64 | (v19 & 7) * 0x40000;
                    if v18 == 0x110000 {
                        break;
                    }
                } else {
                    a2 = a2 as &char + 3;
                    v18 = v21 | v19 * 0x1000;
                    if !(a5 & 255 & 255) {
                        goto LABEL_50e345;
                    }
LABEL_50e315:
                    if !(v18 - 48 < 10) && !((v18 & -33) - 65 < 26) && !((v17 = 0x110000, v18 as u32 <= 32 && ((*((&v0 as &u8 + ((v18 & 4294967295 & 63) >> 3)) as &i8) as u8 as u64 >> (v18 & 4294967295 & 63 & 7) as u8 as u64) as u8 & 1))) {
                        continue;
                    }
LABEL_50e345:
                    v17 = (-95 <= v23 - 127 ? v23 : (a4 ? 0x110000 : v23));
                }
            }
        } while (v17 == 0x110000);
        if v9 == 0x110000 {
            v29 = v9 | -0x100 | -(v17 != 0x110000);
            return v29;
        } else if v17 != 0x110000 {
            if !v4 {
                v26 = v9 & 4294967295;
                v27 = v17;
            } else {
                v25 = (26 <= v9 - 97 ? v9 & 95 : v9);
                v28 = (26 <= v17 - 97 ? v17 : v17 & 95);
                v26 = v25;
                v27 = v28;
            }
            v29 = ((amd64g_calculate_condition(2, 7, v26, v27, v8) & 1 & 255) ? v26 != v27 : 255);
            if v29 {
                return v29;
            }
        } else {
            v29 = v9 | -0x100 | 1;
            return v29;
        }
    }
    v10 = *(a0 as &i8);
    if v10 >= 0 {
        v8 = amd64g_calculate_rflags_c(17, v10 & 255, 0, v8);
        a0 = a0 as &char + 1;
        if !(a5 & 255 & 255) {
            goto LABEL_50e230;
        }
        goto LABEL_50e205;
    }
    v12 = v10 & 31;
    v13 = *((a0 as &char + 1) as &i8) & 63;
    if (v10 & 255) <= 223 {
        a0 = a0 as &char + 2;
        v10 = v12 * 64 | v13;
        goto LABEL_50e200;
    }
    v14 = *((a0 as &char + 2) as &i8) & 63 | v13 * 64;
    if (v10 & 255) < 240 {
        a0 = a0 as &char + 3;
        v10 = v14 | v12 * 0x1000;
        if !(a5 & 255 & 255) {
            goto LABEL_50e230;
        }
    } else {
        a0 = a0 as &char + 4;
        v10 = *((a0 as &char + 3) as &i8) & 63 | v14 * 64 | (v12 & 7) * 0x40000;
        if v10 == 0x110000 {
            goto LABEL_50e270;
        }
LABEL_50e200:
        if !(a5 & 255 & 255) {
            goto LABEL_50e230;
        }
    }
LABEL_50e205:
    if !(v10 - 48 < 10) && !((v10 & -33) - 65 < 26) && !((v9 = 0x110000, v10 as u32 <= 32 && ((*((&v0 as &u8 + ((v10 & 4294967295 & 63) >> 3)) as &i8) as u8 as u64 >> (v10 & 4294967295 & 63 & 7) as u8 as u64) as u8 & 1))) {
LABEL_50e245:
        if v9 == 0x110000 {
            continue;
        }
        goto LABEL_50e270;
    }
LABEL_50e230:
    v9 = (-95 <= v15 - 127 ? v15 & 4294967295 : (a4 ? 0x110000 : v15));
    goto LABEL_50e245;
}
