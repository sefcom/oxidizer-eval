fn uu_env::string_parser::StringParser::new(a1: i64, a2: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u320;  // [bp-0x30]
    let v2: u128;  // xmm0

    v0 = struct40 {
        field_0: a1
        field_8: a2
        field_16: a1
        field_24: a2
        field_32: 0
    };
    uu_env::string_parser::StringParser::set_pointer(&v0, 0);
    v2 = v0;
    return struct40 {
        field_0: v2
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: 0
    };
}
