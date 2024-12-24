fn uu_test::parser::Parser::maybe_boolop(a0: void*, a1: u32) -> u64 {
    let v0: i320;  // [sp-0xd8], Other Possible Types: Option<struct32>
    let v1: i128;  // [sp-0xc8]
    let v2: i64;  // [sp-0xb8]
    let v3: i8;  // [bp-0xa8]
    let v4: i8;  // [bp-0x98]
    let v5: i8;  // [bp-0x88]
    let v6: i8;  // [bp-0x80], Other Possible Types: Option<struct32>
    let v7: i8;  // [bp-0x58]
    let v8: i192;  // [sp-0x30], Other Possible Types: Option<struct24>
    let v10: i64;  // rax
    let v12: i128;  // xmm0
    let v13: i128;  // xmm1

    v10 = uu_test::parser::Parser::peek_is_boolop(a1);
    if !v10 {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v3, a1);
    uu_test::parser::Parser::peek(&v7, a1);
    if v7 != 6 {
        v0 = v3;
        v6 = uu_test::parser::Parser::boolop(a1, &v0);
        match v6 {
            Some(_) => {
                v12 = v6;
                v13 = *((&v6 as &char + 16) as &i128);
            },
            None => {
                v0 = uu_test::parser::Parser::maybe_boolop(a1);
                if v0 == 7 {
                    return struct8 {
                        field_0: 7
                    };
                }
            },
        }
    } else {
        v2 = v5;
        v1 = v4;
        v0 = v3;
        uu_test::parser::Symbol::into_literal(&v6, &v0);
        v8 = uu_test::parser::Parser::literal(a1, &v6);
        if v8 == 7 {
            return struct8 {
                field_0: 7
            };
        }
    }
    return struct32 {
        field_0: v12
        field_16: v13
    };
}
