fn uu_test::parser::Parser::maybe_boolop(a0: &Option<struct32>, a1: u32) -> u64 {
    let v0: i128;  // [sp-0xd8], Other Possible Types: Option<struct32>, struct40
    let v1: i128;  // [sp-0xc8]
    let v2: i64;  // [sp-0xb8]
    let v3: i8;  // [bp-0xa8]
    let v4: i8;  // [bp-0x98]
    let v5: i8;  // [bp-0x88]
    let v6: i256;  // [bp-0x80], Other Possible Types: Option<struct32>
    let v7: i8;  // [bp-0x58]
    let v8: Option<struct24>;  // [sp-0x30]

    if !uu_test::parser::Parser::peek_is_boolop(a1) as i8 {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v3, a1);
    uu_test::parser::Parser::peek(&v7, a1);
    if v7 == 6 {
        v2 = v5;
        v1 = v4;
        v0 = v3;
        uu_test::parser::Symbol::into_literal(&v6, &v0);
        v8 = uu_test::parser::Parser::literal(a1, &v6);
        return Some(struct32 {
            field_0: v14
            field_16: v15
        });
    } else {
        v0 = struct40 {
            field_0: v3
            field_16: v4
            field_32: v5
        };
        v6 = uu_test::parser::Parser::boolop(a1, &v0);
        if v6 == 7 {
            v0 = uu_test::parser::Parser::maybe_boolop(a1);
            return Some(struct32 {
                field_0: v14
                field_16: v15
            });
        }
    }
}
