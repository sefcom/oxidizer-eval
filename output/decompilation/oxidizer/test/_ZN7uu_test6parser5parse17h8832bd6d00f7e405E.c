fn uu_test::parser::parse(a0: u32, a1: &struct24) -> u64 {
    let v0: Option<struct32>;  // [sp-0x80]
    let v1: struct32;  // [sp-0x60]

    v1 = uu_test::parser::Parser::new(a1);
    v0 = uu_test::parser::Parser::parse(&v1);
    match v0 {
        Some(_) => {
            return a0;
        },
    }
}
