fn uu_wc::WcError::zero_len(a0: &Option<struct32>, a1: void*, a2: u64) -> u64 {
    let v0: struct24;  // [sp-0x28]
    let v1: i64;  // [sp-0x10]
    let v2: i64;  // [sp-0x8]
    let v7: i64;  // r14
    let v8: i64;  // rbx

    if !a1 {
        return struct8 {
            field_0: 9223372036854775811
        };
    }
    if *(a1 as &i64) == 9223372036854775809 {
        return Some(struct32 {
            field_0: v4
            field_8: v5
            field_16: v6
            field_24: a2
        });
    }
    v2 = v7;
    v1 = v8;
    v0 = uucore::features::quoting_style::escape_name(*((a1 + 8) as &i64), *((a1 + 16) as &i64), &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
}
