fn uu_dd::parseargs::Parser::parse_n(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x48]
    let v1: i8;  // [bp-0x40]
    let v2: i8;  // [bp-0x38]
    let v4: struct32;  // rax
    let v5: u64;  // r12
    let v6: u64;  // r13

    v4 = uu_dd::parseargs::parse_bytes_with_opt_multiplier(a1, a2);
    v5 = v0;
    v6 = v1;
    if v5 != 14 {
        *(&a0[2] as &i8) = v2;
    } else {
        v4 = <char as core::str::pattern::Pattern>::is_contained_in(a1, a2);
        a0[2] = v6;
        v6 = v4 & 4294967295;
    }
    return struct16 {
        field_0: v5
        field_8: v6
    };
}
