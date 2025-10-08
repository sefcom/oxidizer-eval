fn ruff_python_formatter::expression::expr_slice::is_simple_expr(a0: i128) -> char {
    let v1: core::result::Result<usize, std::io::error::Error>;  // eax
    let v2: i64;  // rdi
    let v3: i64;  // rdi

    v1 = *(a0 as &i32);
    if *(a0 as &i32) == 3 {
        loop {
            v2 = a0;
            if *((v2 + 28) as &i8) == 1 {
                break;
            }
            v3 = *((v2 + 8) as &i64);
            v1 = *(*((v2 + 8) as &i64) as &i32);
            a0 = v3;
            if *(*((v2 + 8) as &i64) as &i32) != 3 {
                break;
            }
        }
    }
    return v1 == 28 | v1 - 19 < 6;
}
