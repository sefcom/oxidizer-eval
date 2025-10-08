fn just::lexer::Lexer::at_eol_or_eof(a0: u64) -> char {
    if !just::lexer::Lexer::at_eol(a0) {
        return just::lexer::Lexer::at_eof(a0);
    }
    return 1;
}
