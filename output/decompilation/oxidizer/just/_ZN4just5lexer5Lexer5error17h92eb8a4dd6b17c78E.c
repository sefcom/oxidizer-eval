fn just::lexer::Lexer::error(a0: u64, a1: i64, a2: i64) -> int {
    let v0: struct72;  // [bp-0x60]
    let v2: u64;  // rdx

    if !(*(a2 as &i64) == 9223372036854775878 || *(a2 as &i64) == 9223372036854775880) {
        just::lexer::Lexer::lexeme(a1);
    } else if just::string_kind::StringKind::from_token_start(just::lexer::Lexer::lexeme(a1), v2) == 2 {
        just::lexer::Lexer::internal_error(a0, a1, "Lexer::error: expected string or backtick token start");
        return;
    }
    just::compile_error::CompileError::new(a0, &v0 as u128, a2);
    return;
}
