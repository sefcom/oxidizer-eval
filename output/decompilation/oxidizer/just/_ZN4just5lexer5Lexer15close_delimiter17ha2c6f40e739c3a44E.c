fn just::lexer::Lexer::close_delimiter(a0: &struct80, a1: i64, a2: i8) -> u64 {
    let v0: struct24;  // [bp-0x68]
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: u64;  // rax

    if *((a1 + 64) as &i64) {
        v5 = *((a1 + 64) as &i64) - 1;
        *((a1 + 64) as &u64) = v5;
        v6 = v5 * 16;
        if *((*((a1 + 56) as &i64) + v6) as &i8) == a2 {
            *((a0 + 72) as &i8) = 37;
            return v6;
        }
    }
    v0 = v7;
    return just::lexer::Lexer::error(a0, a1, &v0);
}
