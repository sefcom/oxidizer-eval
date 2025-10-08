fn just::lexer::Lexer::lex_double(a1: i64, a2: i8) -> : struct80 {
    let a0: i64;  // rdi
    let v0: struct80;  // [bp-0x68], Other Possible Types: u640
    let v1: struct80;  // [bp-0x58]
    let v2: u128;  // [bp-0x48]
    let v3: u128;  // [bp-0x38]

    v0 = just::lexer::Lexer::advance(a1);
    if &v0 as u8 == "%" {
        v0 = just::lexer::Lexer::advance(a1);
        if &v0 as u8 == "%" {
            just::lexer::Lexer::token(a1, a2);
            *((a0 + 72) as &i8) = 37;
            return;
        }
    }
    return struct80 {
        field_0: v0 as i128
        field_16: v1
        field_32: v2
        field_48: v3
        field_64: *((&v0 as &char + 64) as &i128)
    };
}
