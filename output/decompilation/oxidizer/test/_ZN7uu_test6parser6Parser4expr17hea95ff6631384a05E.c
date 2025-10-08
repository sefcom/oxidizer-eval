fn uu_test::parser::Parser::expr(a0: i64, a1: i64) -> double {
    let v0: Option<struct32>;  // [bp-0x30]
    let v1: struct32;  // [bp-0x30]

    if !uu_test::parser::Parser::peek_is_boolop(a1) {
        v0 = uu_test::parser::Parser::term(a1);
        if let Some(_) = v0 {
            return struct32 {
                field_0: v1
                field_16: *((&v0 as &char + 16) as &i128)
            };
        }
    }
    uu_test::parser::Parser::maybe_boolop(&v1, a1);
    if v1.field_0 as i32 != 7 {
        return struct32 {
            field_0: v1
            field_16: *((&v0 as &char + 16) as &i128)
        };
    }
    return struct8 {
        field_0: 7
    };
}
