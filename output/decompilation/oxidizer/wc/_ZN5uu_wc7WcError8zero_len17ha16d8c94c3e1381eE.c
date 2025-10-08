fn uu_wc::WcError::zero_len(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // rcx
    let v5: u64;  // rsi
    let v6: u64;  // rdi
    let v7: u64;  // rcx
    let v8: u64;  // r14
    let v9: u64;  // rbx

    v4 = 0x8000000000000000;
    if !a1 {
        return struct8 {
            field_0: 9223372036854775811
        };
    }
    if *(a1 as &i64) == 9223372036854775809 {
        v5 = &g_41a13e;
        v6 = 1;
        v7 = v4;
    } else {
        v2 = v8;
        v1 = v9;
        uu_wc::escape_name_wrapper(&v0, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
        v7 = v0;
    }
    *(a0 as &u64) = v7;
    *((a0 + 8) as &u64) = v5;
    *((a0 + 16) as &u64) = v6;
    *((a0 + 24) as &u64) = a2;
    return a0;
}
