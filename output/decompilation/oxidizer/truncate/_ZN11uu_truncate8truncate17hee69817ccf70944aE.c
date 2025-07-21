fn uu_truncate::truncate(a0: i8, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> long long {
    let v0: u128;  // [bp-0x48]
    let v1: u32;  // [bp-0x40]
    let v2: u64;  // [bp-0x38]
    let v3: u128;  // [bp-0x28]
    let v4: u32;  // [bp-0x20]
    let v5: u64;  // [bp-0x18]
    let v7: u8;  // dil
    let v8: struct32;  // rax
    let v9: u64;  // rsi
    let v10: struct32;  // rbx

    v7 = a0 ^ 1;
    if *(a2 as &i64) == 0x8000000000000000 {
        if *(a3 as &i64) == 0x8000000000000000 {
            core::panicking::panic("internal error: entered unreachable code"); /* do not return */
        }
        v0 = *(a3 as &i128);
        v2 = *((a3 + 16) as &i64);
        v8 = uu_truncate::truncate_size_only(*((a3 + 16) as &i64), a4, a5, v7, a5) as u64;
        goto LABEL_4ae2b3;
    } else {
        if *(a3 as &i64) == 0x8000000000000000 {
            v0 = *(a2 as &i128);
            v2 = *((a2 + 16) as &i64);
            v8 = uu_truncate::truncate_reference_file_only(v1, *((a2 + 16) as &i64), a4, a5, v7);
LABEL_4ae2b3:
            v10 = v8;
        } else {
            v9 = *((a2 + 16) as &i64);
            v5 = *((a2 + 16) as &i64);
            v3 = *(a2 as &i128);
            v0 = *(a3 as &i128);
            v2 = *((a3 + 16) as &i64);
            v10 = uu_truncate::truncate_reference_and_size(v4, v9, v1, *((a3 + 16) as &i64), a4, a5, v7);
        }
        return v10;
    }
}
