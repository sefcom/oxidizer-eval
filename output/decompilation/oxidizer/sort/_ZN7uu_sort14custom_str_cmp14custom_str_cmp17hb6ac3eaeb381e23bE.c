fn uu_sort::custom_str_cmp::custom_str_cmp(a0: u64, a1: u64, a2: u64, a3: u64, a4: u8, a5: u8, a6: u8) -> long long {
    let v0: u8;  // [bp-0x72]
    let v1: u8;  // [bp-0x71]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: i64;  // [bp-0x60]
    let v5: i64;  // [bp-0x58]
    let v6: u64;  // [bp-0x50]
    let v7: u64;  // [bp-0x48]
    let v8: i64;  // [bp-0x40]
    let v9: i64;  // [bp-0x38]
    let v10: u64;  // rax
    let v11: u32;  // r13d
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: struct8;  // rbx
    let v15: u64;  // 4096
    let v16: struct8;  // rax
    let v17: struct8;  // rax
    let v18: struct8;  // rbx

    v0 = a4;
    v1 = a5;
    if (a4 | a5 | a6) == 1 {
        v2 = a0;
        v3 = a1 + a0;
        v4 = &v0;
        v5 = &v1;
        v6 = a2;
        v7 = a3 + a2;
        v8 = &v0;
        v9 = &v1;
        loop {
            v11 = core::iter::traits::iterator::Iterator::try_fold(&v2, &v4);
            v12 = core::iter::traits::iterator::Iterator::try_fold(&v6, &v8);
            if v11 == 0x110000 {
                return v12 & -0x100 | -(v12 != 0x110000);
            } else if v12 != 0x110000 {
                v13 = uu_sort::custom_str_cmp::cmp_chars(v11, v12, v10 & 255);
                if v13 {
                    return v13;
                }
            } else {
                return v12 & -0x100 | 1;
            }
        }
    } else {
        v14 = a1 - a3;
        if a1 < a3 {
            v15 = a1;
        } else {
            v15 = a3;
        }
        v16 = memcmp(a0, a2, v15);
        if v16 as u32 {
            v17 = v16;
        } else {
            v17 = v14;
        }
        v18 = v17;
        return v16 & 0xffffff00 | (v18 > 0) - (v18 < 0);
    }
}
