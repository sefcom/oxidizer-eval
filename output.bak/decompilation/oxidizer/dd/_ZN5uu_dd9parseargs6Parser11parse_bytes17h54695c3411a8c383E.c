fn uu_dd::parseargs::Parser::parse_bytes(a0: &struct32, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x28]
    let v3: struct32;  // rax
    let v4: u128;  // xmm0

    v3 = uu_dd::parseargs::parse_bytes_with_opt_multiplier(a1, a2);
    v4 = v0;
    return struct32 {
        field_0: v4
        field_16: v1
    };
}
