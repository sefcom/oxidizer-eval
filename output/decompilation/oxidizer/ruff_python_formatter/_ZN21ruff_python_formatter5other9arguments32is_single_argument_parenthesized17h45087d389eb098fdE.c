fn ruff_python_formatter::other::arguments::is_single_argument_parenthesized(a0: &u32, a1: u32, a2: u64, a3: u32) -> long long {
    let v2: struct21;  // [bp-0x50]
    let v4: u32;  // edx

    <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a0);
    if v4 > a1 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v2 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, a3, v4, a1);
}
