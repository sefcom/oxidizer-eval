fn uu_test::parser::Parser::maybe_boolop(a0: &struct8, a1: u32) -> u64 {
    let v0: iNone;  // [sp-0xd8], Other Possible Types: struct8
    let v1: iNone;  // [sp-0xc8]
    let v2: i64;  // [sp-0xb8]
    let v3: i8;  // [bp-0xa8]
    let v4: i8;  // [bp-0x98]
    let v5: i8;  // [bp-0x88]
    let v6: i8;  // [sp-0x80], Other Possible Types: struct8
    let v7: Option<Result<struct24, struct32>>;  // [sp-0x58]
    let v8: struct8;  // [sp-0x30]

    if !uu_test::parser::Parser::peek_is_boolop(a1) as i8 {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v3, a1);
    v7 = uu_test::parser::Parser::peek(a1);
    match v7 {
        Some(_) => {
            v0 = *(&v3 as &i320);
            v6 = uu_test::parser::Parser::boolop(a1, &v0);
            if v6.field_0 as i32 == 7 {
                v0 = uu_test::parser::Parser::maybe_boolop(a1);
            }
        },
        None => {
            v2 = *(&v5 as &i64);
            v1 = *(&v4 as &i128);
            v0 = *(&v3 as &i128);
            uu_test::parser::Symbol::into_literal(&v6, &v0);
            v8 = uu_test::parser::Parser::literal(a1, &v6);
        },
    }
}
