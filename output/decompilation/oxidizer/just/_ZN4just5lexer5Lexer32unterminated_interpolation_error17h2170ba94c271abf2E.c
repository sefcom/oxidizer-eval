fn just::lexer::Lexer::unterminated_interpolation_error(a0: u64, a1: void*) -> long long {
    let v0: u64;  // [bp-0x68]

    v0 = 9223372036854775879;
    return just::compile_error::CompileError::new(a0, a1, &v0);
}
