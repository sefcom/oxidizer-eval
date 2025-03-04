fn uu_sort::custom_str_cmp::custom_str_cmp(a0: void*, a1: u32, a2: void*, a3: u32, a4: u8, a5: u32, a6: u8) -> u64 {
    let v0: u8;  // [sp-0x72]
    let v1: u8;  // [sp-0x71]
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: &u8;  // [sp-0x60]
    let v5: &u8;  // [sp-0x58]
    let v6: u64;  // [sp-0x50]
    let v7: u64;  // [sp-0x48]
    let v8: &u8;  // [sp-0x40]
    let v9: &u8;  // [sp-0x38]
    let v10: u64;  // rax
    let v12: u64;  // rcx
    let v13: u32;  // r13d
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: u64;  // cc_ndep
    let v17: u64;  // rax
    let v18: u64;  // rbx
    let v20: u64;  // rbx

    v10 = a6;
    v0 = a4;
    v1 = a5;
    if !a5 && !v10 && !a4 {
        if a1 < a3 {
            v12 = a1;
        } else {
            v12 = a3;
        }
        v17 = memcmp(a0, a2, v12) as u32;
        if v18 {
            v20 = v17;
        } else {
            v20 = a1 - a3;
        }
        v15 = (amd64g_calculate_condition(9, 20, v20, 0, v16) as char ? v20 : 255);
        return v15;
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
            v15 = v14 & -0x100 | -(v14 != 0x110000);
            return v15;
        } else if v14 == 0x110000 {
            v15 = v14 & -0x100 | 1;
            return v15;
        } else {
            v15 = uu_sort::custom_str_cmp::cmp_chars(v13, v14 & 4294967295, v10 & 4294967295 & 4294967295);
            if v15 {
                return v15;
            }
        }
    }
}
