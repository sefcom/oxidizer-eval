fn ruff_python_formatter::expression::parentheses::is_expression_parenthesized(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: struct16;  // [bp-0x90]
    let v1: u8;  // [bp-0x74]
    let v2: struct12;  // [bp-0x70], Other Possible Types: struct41
    let v4: u32;  // edx
    let v6: struct12;  // rax

    v0 = struct16 {
        field_0: a0
        field_8: a1
    };
    <ruff_python_ast::generated::ExprRef as ruff_text_size::traits::Ranged>::range(&v0);
    v2 = ruff_python_trivia::tokenizer::first_non_trivia_token(v4, a4, a5);
    if v2.field_8 as i8 != 6 {
        return 0;
    }
    v2 = ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to(<ruff_python_ast::generated::ExprRef as ruff_text_size::traits::Ranged>::range(&v0) as u32, a4, a5, a2, a3);
    v6 = core::iter::traits::iterator::Iterator::try_fold(&v2);
    return v6 & -0x100 | v1 == 5;
}
