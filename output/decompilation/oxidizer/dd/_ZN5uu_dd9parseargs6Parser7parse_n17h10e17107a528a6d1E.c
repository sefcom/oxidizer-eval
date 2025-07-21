fn uu_dd::parseargs::Parser::parse_n(a1: i64, a2: i64) -> : struct32 {
    let a0: u32;  // rsi
    let v0: struct32;  // [bp-0x48]
    let v1: u64;  // [bp-0x40]
    let v3: u64;  // r13
    let v4: u32;  // eax
    let v5: i64;  // rdi

    v0 = uu_dd::parseargs::parse_bytes_with_opt_multiplier(a0, a1);
    v3 = v1;
    if v0.field_0 == 14 {
        v4 = <char as core::str::pattern::Pattern>::is_contained_in(a0, a1, a1);
        *((v5 + 16) as &u64) = v1;
        v3 = v4;
    } else {
        *((v5 + 16) as &u128) = v0.field_16;
    }
    *((v5 + 8) as &u64) = v3;
    *(v5 as &u64) = v0.field_0;
    return;
}
