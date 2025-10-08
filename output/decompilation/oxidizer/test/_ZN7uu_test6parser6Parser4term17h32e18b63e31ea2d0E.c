fn uu_test::parser::Parser::term(a0: i64, a1: u64) -> int {
    let v0: Option<struct24>;  // [bp-0x58], Other Possible Types: struct32
    let v1: Option<struct32>;  // [bp-0x58]
    let v2: iNone;  // [bp-0x58]
    let v3: u128;  // [bp-0x48]
    let v4: u8;  // [bp-0x38]

    uu_test::parser::Parser::next_token(&v4, a1);
    match (*(&v4 as &i64)) {
        0 => {
            v0 = uu_test::parser::Parser::lparen(a1);
            break;
        }
        1 => {
            v1 = uu_test::parser::Parser::bang(a1);
            if v2 as i32 != 7 {
                return v0;
            }
            return struct8 {
                field_0: 7
            };
        }
        5 => {
            uu_test::parser::Parser::uop(a1, &v4);
        }
        6 => {
            alloc::vec::Vec<T,A>::push(a1, &v4, "src/uu/test/src/parser.rs");
        }
        _ => {
            v0 = uu_test::parser::Parser::literal(a1, &v4);
            if let Some(_) = v0 {
                return Some(struct32 {
                    field_0: v0 as i128
                    field_16: v3
                });
            }
        }
    }
    return struct8 {
        field_0: 7
    };
}
