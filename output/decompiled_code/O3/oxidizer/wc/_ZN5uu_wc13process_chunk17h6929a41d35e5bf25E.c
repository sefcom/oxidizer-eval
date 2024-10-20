fn uu_wc::process_chunk(a0: &u64, a1: &u64, a2: u64, a3: &u8) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // [sp-0x10]
    let v2: i64;  // [sp-0x8]
    let v5: u64;  // r14
    let v6: u64;  // rbx
    let v7: u64;  // rax
    let v8: u64;  // r10
    let v9: u64;  // r8
    let v10: &u8;  // r11
    let v11: u32;  // ebx
    let v12: u32;  // r14d
    let v13: u32;  // ebp
    let v14: u32;  // ebx
    let v15: u8;  // r11b
    let v16: u64;  // r11
    let v17: u32;  // cc_dep1
    let v18: u32;  // cc_dep2

    if !a2 {
        *(a0) = *(a0) + a2;
        return v7;
    }
    v2 = vvar_71{reg 56};
    v1 = v5;
    v0 = v6;
    v7 = a1 + a2;
    v8 = *(a3);
    v9 = a0[3];
    do {
        v10 = *(a1 as &i8);
        if v10 as u8 >= 0 {
            a1 = a1 as &char + 1;
        } else {
            v11 = v10 as u32 & 31;
            v12 = *((a1 as &char + 1) as &i8) & 63;
            if (v10 & 255) <= 223 {
                a1 = a1 as &char + 2;
                v10 = v11 * 64 | v12;
            } else {
                v13 = *((a1 as &char + 2) as &i8) & 63 | v12 * 64;
                if (v10 & 255) < 240 {
                    a1 = a1 as &char + 3;
                    v10 = v13 | v11 * 0x1000;
                } else {
                    a1 = a1 as &char + 4;
                    v10 = *((a1 as &char + 3) as &i8) & 63 | v13 * 64 | (v11 & 7) * 0x40000;
                }
            }
        }
        if !((v10 + 9) as u32 >= 5) || !(v10 as u32 != 32) {
LABEL_4870d0:
            *(a3) = 0;
            v8 = 0;
            continue;
        }
        if v10 as u32 < 128 {
LABEL_4871e1:
            if !v8 {
                *(a3) = 1;
                v9 += 1;
                a0[3] = v9;
                v8 = v8 | -0x100 | 1;
            }
        } else {
            v14 = v10 as u32 >> 8;
            if v14 > 31 {
                if v14 != 32 {
                    if !(v14 == 48) {
                        goto LABEL_4871e1;
                    }
                    v17 = v10 as u32;
                    v18 = 0x3000;
                } else {
                    v16 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v10 & 4294967295];
                    v15 = v16 | -0x100 | (v16 & 255) >> 1 & 255;
LABEL_4871d4:
                    if !(!(v15 & 1)) {
                        goto LABEL_4870d0;
                    }
                    goto LABEL_4871e1;
                }
            } else {
                if !v14 {
                    v15 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v10 & 4294967295];
                    goto LABEL_4871d4;
                } else {
                    if !(v14 == 22) {
                        goto LABEL_4871e1;
                    }
                    v17 = v10 as u32;
                    v18 = 5760;
                }
            }
            if !v17 == v18 {
                goto LABEL_4871e1;
            }
            goto LABEL_4870d0;
        }
    } while (a1 != v7);
}
