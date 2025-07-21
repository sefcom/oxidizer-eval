fn uu_sort::custom_str_cmp::custom_str_cmp(a0: i64, a1: i64, a2: i64, a3: i64, a4: i256, a5: i64, a6: i8) -> long long {
    let v0: u8;  // [bp-0x72]
    let v1: u8;  // [bp-0x71]
    let v2: u64;  // [bp-0x70]
    let v3: struct24;  // [bp-0x68]
    let v4: struct24;  // [bp-0x60]
    let v5: struct147;  // [bp-0x58]
    let v6: struct32;  // [bp-0x50]
    let v7: struct32;  // [bp-0x48]
    let v8: i64;  // [bp-0x40]
    let v9: i64;  // [bp-0x38]
    let v10: u64;  // rax
    let v11: &str;  // rbx
    let v12: std::path::PathBuf;  // 4096
    let v13: u32;  // r13d
    let v14: struct24;  // rax
    let v15: struct16;  // rax
    let v16: core::fmt::rt::Argument;  // rax
    let v17: core::fmt::rt::Argument;  // rax

    v10 = a6;
    v0 = a4;
    v1 = a5;
    if !a5 && !v10 && !a4 {
        v11 = a1 - a3;
        if a1 < a3 {
            v12 = a1;
        } else {
            v12 = a3;
        }
        v16 = memcmp(a0, a2, v12);
        if v16 as u32 {
            v17 = v16;
        } else {
            v17 = v11;
        }
        return (v17 >= 0 ? v17 : 255);
    }
    v2 = a0;
    v3 = a1 + a0;
    v4 = &v0;
    v5 = &v1;
    v6 = a2;
    v7 = a3 + a2;
    v8 = &v0;
    v9 = &v1;
    loop {
        v13 = core::iter::traits::iterator::Iterator::try_fold(&v2, &v4) as i32;
        v14 = core::iter::traits::iterator::Iterator::try_fold(&v6, &v8);
        if v13 == 0x110000 {
            return v14 & -0x100 | -(v14 as u32 != 0x110000);
        } else if v14 as u32 != 0x110000 {
            v15 = uu_sort::custom_str_cmp::cmp_chars(v13, v14 as u32, v10 & 255);
            if v15 as u8 {
                return v15;
            }
        } else {
            return v14 & -0x100 | 1;
        }
    }
}
