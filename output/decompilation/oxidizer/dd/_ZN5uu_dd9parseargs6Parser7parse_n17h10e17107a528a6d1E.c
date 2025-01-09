fn uu_dd::parseargs::Parser::parse_n(a0: &struct32, a1: u32, a2: u32) -> u64 {
    let v0: u8;  // [bp-0x48]
    let v1: i8;  // [bp-0x40]
    let v4: u64;  // rax
    let v6: u64;  // r13

    v4 = uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v0, a1, a2);
    v6 = v1;
    if *(&v0 as &i64) != 14 {
        return struct32 {
            field_0: v5
            field_8: v6
            field_16: v2
        };
    }
    v4 = <char as core::str::pattern::Pattern>::is_contained_in(a1, a2);
    a0->field_10 = v6;
    v6 = v4 & 4294967295;
}
