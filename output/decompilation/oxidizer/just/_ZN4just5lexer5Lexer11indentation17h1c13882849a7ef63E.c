fn just::lexer::Lexer::indentation(a0: u64, a1: u64) -> long long {
    core::option::unwrap(a1);
    return *((a0 + a1 * 16 - 16) as &i64);
}
