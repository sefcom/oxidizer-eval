fn just::lexer::Lexer::lex(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u8 {
    let v0: struct198;  // [bp-0xd8]

    v0 = just::lexer::Lexer::new(a1, a2, a3, a4);
    return just::lexer::Lexer::tokenize(a0, &v0);
}
