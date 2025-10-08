fn uu_dd::parseargs::Parser::parse_n(a1: i64, a2: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x48]
    let v1: u64;  // [bp-0x40]
    let v3: u64;  // r13
    let v5: struct24;  // r13
    let v6: u64;  // r13

    v0 = uu_dd::parseargs::parse_bytes_with_opt_multiplier(a1, a2);
    v3 = v1;
    if v0.field_0 != 14 {
        *((a0 + 16) as &u128) = v0.field_16;
    }
    v5 = <char as core::str::pattern::Pattern>::is_contained_in(a1, a2, a2);
    return struct24 {
        field_0: v0.field_0
        field_8: v6
        field_16: v1
    };
}
