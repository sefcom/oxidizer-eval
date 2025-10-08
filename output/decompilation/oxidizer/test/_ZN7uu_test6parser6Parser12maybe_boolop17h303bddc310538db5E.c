fn uu_test::parser::Parser::maybe_boolop(a0: &struct32, a1: i64) {
    let v0: Option<struct32>;  // [bp-0xb8], Other Possible Types: u8
    let v1: struct40;  // [bp-0x90]
    let v2: Option<struct24>;  // [bp-0x68]
    let v3: u128;  // [bp-0x58]
    let v4: u8;  // [bp-0x48]

    if !uu_test::parser::Parser::peek_is_boolop(a1) {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v4, a1);
    v1 = uu_test::parser::Parser::peek(a1);
    if v1.field_0 as i32 == 6 {
        uu_test::parser::Symbol::into_literal(&v0, &v4);
        v2 = uu_test::parser::Parser::literal(a1, &v0);
        match v2 {
            Some(_) => {
                return struct32 {
                    field_0: v2 as i128
                    field_16: v3
                };
            },
            None => {
                return struct8 {
                    field_0: 7
                };
            },
        }
    } else {
        v0 = uu_test::parser::Parser::boolop(a1, &v4);
        if let Some(_) = v0 {
            return struct32 {
                field_0: v0 as i128
                field_16: *((&v0 as &char + 16) as &i128)
            };
        }
        uu_test::parser::Parser::maybe_boolop(&v0, a1);
        if let None = v0 {
            return struct8 {
                field_0: 7
            };
        }
        return struct32 {
            field_0: v0 as i128
            field_16: *((&v0 as &char + 16) as &i128)
        };
    }
}
