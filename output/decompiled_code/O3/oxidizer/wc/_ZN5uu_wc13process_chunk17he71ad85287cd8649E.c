fn uu_wc::process_chunk(a0: &u64, a1: &u64, a2: u64, a3: &u8) -> u64 {
    let v0: u64;  // [sp-0x20]
    let v1: u64;  // [sp-0x18]
    let v2: u64;  // [sp-0x10]
    let v3: i64;  // [sp-0x8]
    let v6: u64;  // r15
    let v7: u64;  // r14
    let v8: u64;  // rbx
    let v9: u64;  // rax
    let v10: u64;  // r11
    let v11: u64;  // r8
    let v12: u64;  // r9
    let v13: &u8;  // rbx
    let v14: u32;  // ebp
    let v15: u32;  // r15d
    let v16: u32;  // r14d
    let v17: u32;  // ebp
    let v18: u8;  // bpl
    let v19: u64;  // rbp
    let v20: u32;  // cc_dep1
    let v21: u32;  // cc_dep2

    if !a2 {
        *(a0) = *(a0) + a2;
        return v9;
    }
    v3 = vvar_79{reg 56};
    v2 = v6;
    v1 = v7;
    v0 = v8;
    v9 = a1 + a2;
    v10 = *(a3);
    v11 = a0[2];
    v12 = a0[3];
    do {
        v13 = *(a1 as &i8);
        if v13 as u8 >= 0 {
            a1 = a1 as &char + 1;
        } else {
            v14 = v13 as u32 & 31;
            v15 = *((a1 as &char + 1) as &i8) & 63;
            if (v13 & 255) <= 223 {
                a1 = a1 as &char + 2;
                v13 = v14 * 64 | v15;
            } else {
                v16 = *((a1 as &char + 2) as &i8) & 63 | v15 * 64;
                if (v13 & 255) < 240 {
                    a1 = a1 as &char + 3;
                    v13 = v16 | v14 * 0x1000;
                } else {
                    a1 = a1 as &char + 4;
                    v13 = *((a1 as &char + 3) as &i8) & 63 | v16 * 64 | (v14 & 7) * 0x40000;
                }
            }
        }
        if !((v13 + 9) as u32 >= 5) || !(v13 as u32 != 32) {
LABEL_488318:
            *(a3) = 0;
            v10 = 0;
            continue;
        }
        if v13 as u32 < 128 {
LABEL_4883a7:
            if !v10 {
                *(a3) = 1;
                v12 += 1;
                a0[3] = v12;
                v10 = v10 | -0x100 | 1;
            }
        } else {
            v17 = v13 as u32 >> 8;
            if v17 > 31 {
                if v17 != 32 {
                    if !(v17 == 48) {
                        goto LABEL_4883a7;
                    }
                    v20 = v13 as u32;
                    v21 = 0x3000;
                } else {
                    v19 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v13 & 4294967295];
                    v18 = v19 | -0x100 | (v19 & 255) >> 1 & 255;
LABEL_48839a:
                    if !(!(v18 & 1)) {
                        goto LABEL_488318;
                    }
                    goto LABEL_4883a7;
                }
            } else {
                if !v17 {
                    v18 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v13 & 4294967295];
                    goto LABEL_48839a;
                } else {
                    if !(v17 == 22) {
                        goto LABEL_4883a7;
                    }
                    v20 = v13 as u32;
                    v21 = 5760;
                }
            }
            if !v20 == v21 {
                goto LABEL_4883a7;
            }
            goto LABEL_488318;
        }
        if v13 as u32 == 10 {
            v11 += 1;
            a0[2] = v11;
        }
    } while (a1 != v9);
}
