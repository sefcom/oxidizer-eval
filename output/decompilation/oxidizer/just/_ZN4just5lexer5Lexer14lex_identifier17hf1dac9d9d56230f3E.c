fn just::lexer::Lexer::lex_identifier(a0: &struct80, a1: i64) -> u64 {
    let v0: u128;  // [bp-0x68]
    let v1: iNone;  // [bp-0x58]
    let v2: alloc::string::String;  // [bp-0x48]
    let v3: u128;  // [bp-0x38]
    let v4: i8;  // [bp-0x28]
    let v5: i8;  // [bp-0x20]
    let v8: struct80;  // eax
    let v9: struct24;  // rax

    just::lexer::Lexer::advance(a1);
    if &v5 != "%" {
        return struct80 {
            field_0: v0
            field_16: v1
            field_32: v2
            field_48: v3
            field_64: *(&v4 as &i128)
        };
    }
    if *((a1 + 192) as &i32) != 0x110000 {
        while (v8 - 97 < 26 || v8 >= 65 && (v8 == 95 || v8 < 91) || !(10 <= v8 - 48 & v8 != 45)) {
            just::lexer::Lexer::advance(a1);
            if &v5 != "%" {
                return struct80 {
                    field_0: v0
                    field_16: v1
                    field_32: v2
                    field_48: v3
                    field_64: *(&v4 as &i128)
                };
            }
            if *((a1 + 192) as &i32) == 0x110000 {
                break;
            }
        }
    }
    v9 = just::lexer::Lexer::token(a1, 24);
    *((a0 + 72) as &i8) = 37;
    return v9;
}
