fn uu_test::parser::Parser::boolop(a0: &Option<struct32>, a1: u32, a2: &struct40) -> u64 {
    let v0: Option<struct32>;  // [bp-0x58], Other Possible Types: i64
    let v1: struct24;  // [sp-0x50]
    let v4: struct24;  // [sp-0x30]

    v4 = std::sys::os_str::bytes::Slice::to_owned("-a");
    v1 = v4;
    v0 = 2;
    if <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a2, &v0) as i8 {
        v0 = uu_test::parser::Parser::term(a1);
        return Some(struct32 {
            field_0: v8
            field_16: *((&v0 as &char + 16) as &i128)
        });
    }
    v0 = uu_test::parser::Parser::expr(a1);
}
