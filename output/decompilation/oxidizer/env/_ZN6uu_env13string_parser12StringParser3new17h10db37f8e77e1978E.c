fn uu_env::string_parser::StringParser::new(a0: &struct40, a1: u64, a2: u64) -> int {
    let v0: struct40;  // [bp-0x30]
    let v3: u128;  // xmm0

    v0 = struct40 {
        field_0: a1
        field_8: a2
        field_16: a1
        field_24: a2
        field_32: 0
    };
    uu_env::string_parser::StringParser::set_pointer(&v0, 0);
    v3 = *(&v0.field_0 as &i128);
    return struct40 {
        field_0: v3
        field_16: *(&v0.field_16 as &i128)
        field_32: v1
    };
}
