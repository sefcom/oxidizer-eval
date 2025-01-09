fn uu_test::parser::parse(a0: &struct32, a1: &struct24) -> u64 {
    let v0: Option<struct32>;  // [sp-0x80]
    let v1: u256;  // [sp-0x60], Other Possible Types: struct32

    v1 = uu_test::parser::Parser::new(a1);
    v0 = uu_test::parser::Parser::parse(&v1);
    return struct32 {
        field_0: v3
        field_16: *((&v0 as &char + 16) as &i128)
    };
}
