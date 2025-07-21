fn uu_test::parser::Parser::maybe_boolop(a0: &struct32, a1: i64) {
    let v0: struct40;  // [sp-0xd8]
    let v1: struct40;  // [bp-0xa8], Other Possible Types: u8
    let v2: u8;  // [bp-0x80]
    let v3: Option<struct32>;  // [bp-0x80]
    let v4: u8;  // [bp-0x58]
    let v5: u8;  // [bp-0x30]
    let v9: u128;  // xmm1

    if !uu_test::parser::Parser::peek_is_boolop(a1) as i8 {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v1, a1);
    uu_test::parser::Parser::peek(&v4, a1);
    if *(&v4 as &i32) == 6 {
        v0 = v1;
        uu_test::parser::Symbol::into_literal(&v2, &v0);
        uu_test::parser::Parser::literal(&v5, a1, &v2);
        if *(&v5 as &i32) != 7 {
            return struct32 {
                field_0: v2
                field_16: v9
            };
        }
    } else {
        v0 = v1;
        v3 = uu_test::parser::Parser::boolop(a1, &v0);
        match v3 {
            Some(_) => {
                return struct32 {
                    field_0: v2
                    field_16: v9
                };
            },
            None => {
                uu_test::parser::Parser::maybe_boolop(&v0, a1);
                if v0.field_0 as i32 != 7 {
                    return struct32 {
                        field_0: v2
                        field_16: v9
                    };
                }
            },
        }
    }
    return struct8 {
        field_0: 7
    };
}
