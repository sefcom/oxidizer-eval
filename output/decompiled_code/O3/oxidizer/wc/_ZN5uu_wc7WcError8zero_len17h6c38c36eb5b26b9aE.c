fn uu_wc::WcError::zero_len(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [sp-0x28], Other Possible Types: i192
    let v1: i64;  // [sp-0x10]
    let v2: i64;  // [sp-0x8]
    let v4: i64;  // rcx
    let v5: i64;  // rsi
    let v6: i64;  // rdi
    let v7: i64;  // r14
    let v8: i64;  // rbx

    v4 = 0x8000000000000000;
    if !a1 {
        return struct8 {
            field_0: 9223372036854775811
        };
    }
    if *(a1 as &i64) == 9223372036854775809 {
        v5 = &g_41e2e7;
        v6 = 1;
    } else {
        v2 = v7;
        v1 = v8;
        v0 = uucore::features::quoting_style::escape_name(*((a1 + 8) as &i64), *((a1 + 16) as &i64), &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
        v4 = v0;
        v5 = *((&v0 as &char + 8) as &i64);
        v6 = *((&v0 as &char + 16) as &i64);
    }
    *(a0 as &i64) = v4;
    *((a0 + 8) as &i64) = v5;
    *((a0 + 16) as &i64) = v6;
    *((a0 + 24) as &i64) = a2;
    return a0;
}
