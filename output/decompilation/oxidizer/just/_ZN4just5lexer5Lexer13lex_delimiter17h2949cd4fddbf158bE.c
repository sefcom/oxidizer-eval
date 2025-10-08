fn just::lexer::Lexer::lex_delimiter(a0: &struct80, a1: i64, a2: i8) -> u64 {
    let v0: alloc::string::String;  // [bp-0x91]
    let v1: u8;  // [bp-0x90]
    let v2: i8;  // [bp-0x80]
    let v3: i8;  // [bp-0x70]
    let v4: u128;  // [bp-0x60]
    let v5: i8;  // [bp-0x50]
    let v6: i8;  // [bp-0x48]
    let v7: alloc::string::String;  // [bp-0x30]
    let v9: struct72;  // rsi

    v0 = a2;
    match (a2) {
        7 => {
            break;
        }
        8 => {
            just::lexer::Lexer::close_delimiter(&v1, a1, 0);
            if &v6 != "%" {
                return struct80 {
                    field_0: *(&v1 as &i128)
                    field_16: *(&v2 as &i128)
                    field_32: *(&v3 as &i128)
                    field_48: v4
                    field_64: *(&v5 as &i128)
                };
            }
            break;
        }
        9 => {
            break;
        }
        10 => {
            just::lexer::Lexer::close_delimiter(&v1, a1, 1);
            if &v6 != "%" {
                return struct80 {
                    field_0: *(&v1 as &i128)
                    field_16: *(&v2 as &i128)
                    field_32: *(&v3 as &i128)
                    field_48: v4
                    field_64: *(&v5 as &i128)
                };
            }
            break;
        }
        28 => {
            v9 = 2;
            just::lexer::Lexer::open_delimiter(a1, v9);
        }
        29 => {
            just::lexer::Lexer::close_delimiter(&v1, a1, 2);
            if &v6 != "%" {
                return struct80 {
                    field_0: *(&v1 as &i128)
                    field_16: *(&v2 as &i128)
                    field_32: *(&v3 as &i128)
                    field_48: v4
                    field_64: *(&v5 as &i128)
                };
            }
            break;
        }
        _ => {
            v7 = format!("Lexer::lex_delimiter called with non-delimiter token: `{}`", &v0);
            return just::lexer::Lexer::internal_error(a0, a1, &v7);
        }
    }
    return just::lexer::Lexer::lex_single(a0, a1, a2);
}
