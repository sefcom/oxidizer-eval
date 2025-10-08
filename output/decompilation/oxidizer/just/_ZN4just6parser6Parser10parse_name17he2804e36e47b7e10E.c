fn just::parser::Parser::parse_name(a0: i64, a1: u64) -> int {
    let v0: struct82;  // [bp-0x58]
    let v1: struct80;  // [bp-0x48]
    let v2: struct144;  // [bp-0x38]
    let v3: iNone;  // [bp-0x28]

    v0 = just::parser::Parser::expect(a1, 24);
    if &v0 as u8 != "%" {
        return struct80 {
            field_0: v0.field_0
            field_16: v1
            field_32: v2
            field_48: v3
            field_64: *(&v0.field_64 as &i128)
        };
    }
    just::name::Name::from_identifier(a0, &v0);
    *((a0 + 72) as &i8) = 37;
    return;
}
