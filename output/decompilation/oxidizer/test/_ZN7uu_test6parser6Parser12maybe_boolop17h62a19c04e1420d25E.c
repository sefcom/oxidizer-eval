fn uu_test::parser::Parser::maybe_boolop(a0: &struct32, a1: i64) {
    let v0: u64;  // [bp-0xd8]
    let v1: u128;  // [bp-0xc8]
    let v2: u64;  // [bp-0xb8]
    let v3: u8;  // [bp-0xa8]
    let v4: u128;  // [bp-0x98]
    let v5: u64;  // [bp-0x88]
    let v6: u8;  // [bp-0x80], Other Possible Types: Option<struct32>
    let v7: u128;  // [bp-0x80]
    let v8: u8;  // [bp-0x58]
    let v9: u8;  // [bp-0x30]
    let v13: u128;  // xmm1

    if !uu_test::parser::Parser::peek_is_boolop(a1) as i8 {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v3, a1);
    uu_test::parser::Parser::peek(&v8, a1);
    if *(&v8 as &i32) == 6 {
        v2 = v5;
        v1 = v4;
        v0 = v3;
        uu_test::parser::Symbol::into_literal(&v6, &v0);
        uu_test::parser::Parser::literal(&v9, a1, &v6);
        if *(&v9 as &i32) != 7 {
            return struct32 {
                field_0: v7
                field_16: v13
            };
        }
    } else {
        v0 = v3;
        v6 = uu_test::parser::Parser::boolop(a1, &v0);
        match v6 {
            Some(_) => {
                return struct32 {
                    field_0: v7
                    field_16: v13
                };
            },
            None => {
                uu_test::parser::Parser::maybe_boolop(&v0, a1);
                if v0 as i32 != 7 {
                    return struct32 {
                        field_0: v7
                        field_16: v13
                    };
                }
            },
        }
    }
    return struct8 {
        field_0: 7
    };
}
