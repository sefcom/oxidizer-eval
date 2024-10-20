fn uu_wc::process_chunk(a0: &u64, a1: &u64, a2: u64, a3: &u8) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v4: i64;  // [sp-0x8]
    let v7: u64;  // r15
    let v8: u64;  // r14
    let v9: u64;  // r12
    let v10: u64;  // rbx
    let v11: u64;  // rax
    let v12: u64;  // rbx
    let v13: u64;  // r8
    let v14: u64;  // r10
    let v15: u64;  // r9
    let v16: &u8;  // r14
    let v17: u32;  // ebp
    let v18: u32;  // r12d
    let v19: u32;  // r15d
    let v20: u32;  // ebp
    let v21: u8;  // bpl
    let v22: u64;  // rbp
    let v23: u32;  // cc_dep1
    let v24: u32;  // cc_dep2

    if !a2 {
        *(a0) = *(a0) + a2;
        return v11;
    }
    v4 = vvar_81{reg 56};
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v11 = a1 + a2;
    v12 = *(a3);
    v13 = a0[3];
    v14 = a0[2];
    v15 = a0[1] + 1;
    do {
        v16 = *(a1 as &i8);
        if v16 as u8 >= 0 {
            a1 = a1 as &char + 1;
        } else {
            v17 = v16 as u32 & 31;
            v18 = *((a1 as &char + 1) as &i8) & 63;
            if (v16 & 255) <= 223 {
                a1 = a1 as &char + 2;
                v16 = v17 * 64 | v18;
            } else {
                v19 = *((a1 as &char + 2) as &i8) & 63 | v18 * 64;
                if (v16 & 255) < 240 {
                    a1 = a1 as &char + 3;
                    v16 = v19 | v17 * 0x1000;
                } else {
                    a1 = a1 as &char + 4;
                    v16 = *((a1 as &char + 3) as &i8) & 63 | v19 * 64 | (v17 & 7) * 0x40000;
                }
            }
        }
        if !((v16 + 9) as u32 >= 5) || !(v16 as u32 != 32) {
LABEL_4875a9:
            *(a3) = 0;
            v12 = 0;
            continue;
        }
        if v16 as u32 < 128 {
LABEL_48763c:
            if !v12 {
                *(a3) = 1;
                v13 += 1;
                a0[3] = v13;
                v12 = v12 | -0x100 | 1;
            }
        } else {
            v20 = v16 as u32 >> 8;
            if v20 > 31 {
                if v20 != 32 {
                    if !(v20 == 48) {
                        goto LABEL_48763c;
                    }
                    v23 = v16 as u32;
                    v24 = 0x3000;
                } else {
                    v22 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v16 & 4294967295];
                    v21 = v22 | -0x100 | (v22 & 255) >> 1 & 255;
LABEL_48762f:
                    if !(!(v21 & 1)) {
                        goto LABEL_4875a9;
                    }
                    goto LABEL_48763c;
                }
            } else {
                if !v20 {
                    v21 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v16 & 4294967295];
                    goto LABEL_48762f;
                } else {
                    if !(v20 == 22) {
                        goto LABEL_48763c;
                    }
                    v23 = v16 as u32;
                    v24 = 5760;
                }
            }
            if !v23 == v24 {
                goto LABEL_48763c;
            }
            goto LABEL_4875a9;
        }
        if v16 as u32 == 10 {
            v14 += 1;
            a0[2] = v14;
        }
        a0[1] = v15;
        v15 += 1;
    } while (a1 != v11);
}
