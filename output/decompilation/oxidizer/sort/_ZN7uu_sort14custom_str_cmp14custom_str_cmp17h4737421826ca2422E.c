fn uu_sort::custom_str_cmp::custom_str_cmp(a0: void*, a1: u32, a2: void*, a3: u32, a4: u8, a5: u32) -> u64 {
    let v0: u8;  // [bp-0x72]
    let v1: u8;  // [sp-0x71]
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: &u8;  // [sp-0x60]
    let v5: &u8;  // [sp-0x58]
    let v6: u64;  // [sp-0x50]
    let v7: u64;  // [sp-0x48]
    let v8: &u8;  // [sp-0x40]
    let v9: &u8;  // [sp-0x38]
    let v10: i64;  // [bp+0x8]
    let v11: u64;  // rax
    let v13: u64;  // 4096
    let v14: u32;  // r13d
    let v15: u64;  // rax
    let v16: u64;  // rax
    let v17: u64;  // cc_ndep
    let v18: u64;  // rax
    let v19: u64;  // rax

    v11 = v10;
    v1 = a5;
    if !a5 && !v11 && !a4 {
        if a1 < a3 {
            v13 = a1;
        } else {
            v13 = a3;
        }
        v18 = memcmp(a0, a2, v13) as u32;
        if v18 {
            v19 = v18;
        } else {
            v19 = a1 - a3;
        }
        v16 = (amd64g_calculate_condition(9, 20, v19, 0, v17) as char ? v19 : 255);
        return v16;
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
        v14 = core::iter::traits::iterator::Iterator::try_fold(&v2, &v4) as i32;
        v15 = core::iter::traits::iterator::Iterator::try_fold(&v6, &v8);
        if v14 == 0x110000 {
            v16 = v15 & -0x100 | -(v15 != 0x110000);
            return v16;
        } else if v15 != 0x110000 {
            v16 = uu_sort::custom_str_cmp::cmp_chars(v14, v15 & 4294967295, v11 & 4294967295 & 4294967295);
            if v16 {
                return v16;
            }
        } else {
            v16 = v15 & -0x100 | 1;
            return v16;
        }
    }
}
