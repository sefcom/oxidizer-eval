fn ruff_python_formatter::expression::expr_string_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprStringLiteral>::needs_parentheses(a0: i64, a1: i64, a2: i64, a3: u64) -> long long {
    let v0: struct16;  // [bp-0x10]
    let v2: &mut [u8];  // rax

    if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        return 0;
    }
    v0 = struct16 {
        field_0: 0
        field_8: a0
    };
    v2 = <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v0, a3);
    return v2 & -0x100 | v2 as u8 | 2;
}
