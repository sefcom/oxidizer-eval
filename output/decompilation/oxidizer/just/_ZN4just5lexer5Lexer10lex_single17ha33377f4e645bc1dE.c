fn just::lexer::Lexer::lex_single(a0: &struct80, a1: i64, a2: i8) -> u64 {
    let v0: u128;  // [bp-0x68]
    let v1: u128;  // [bp-0x58]
    let v2: struct192;  // [bp-0x48]
    let v3: u128;  // [bp-0x38]
    let v4: i8;  // [bp-0x28]
    let v5: i8;  // [bp-0x20]
    let v7: struct80;  // rax
    let v8: struct24;  // rax

    v7 = just::lexer::Lexer::advance(a1);
    if &v5 != "%" {
        return struct80 {
            field_0: v0
            field_16: v1
            field_32: v2
            field_48: v3
            field_64: *(&v4 as &i128)
        };
    }
    v8 = just::lexer::Lexer::token(a1, a2);
    *((a0 + 72) as &i8) = 37;
    return v8;
}
