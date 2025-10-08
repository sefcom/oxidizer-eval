fn uu_dd::parseargs::Parser::parse_bytes(a1: i64, a2: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x28]

    v0 = uu_dd::parseargs::parse_bytes_with_opt_multiplier(a1, a2);
    return struct32 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v0.field_16
    };
}
