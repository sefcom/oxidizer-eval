fn just::lexer::Lexer::at_eol(a0: i64) -> long long {
    let v1: u64;  // rax

    if *((a0 + 192) as &i32) != 10 {
        return just::lexer::Lexer::rest_starts_with(a0, "\r\n");
    }
    return v1 & -0x100 | 1;
}
