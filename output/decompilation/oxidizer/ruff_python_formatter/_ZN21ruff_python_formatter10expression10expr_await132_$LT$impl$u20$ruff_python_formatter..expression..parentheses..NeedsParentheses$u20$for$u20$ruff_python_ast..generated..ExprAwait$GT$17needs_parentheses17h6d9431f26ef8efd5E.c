fn ruff_python_formatter::expression::expr_await::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAwait>::needs_parentheses(a0: i64, a1: u64, a2: i64, a3: i64) -> char {
    let v0: struct12;  // [bp-0x18]
    let v2: struct12;  // rax
    let v3: core::fmt::Arguments;  // rax
    let v4: u64;  // rdx

    v0 = v2;
    if a1 == 39 {
        return 1;
    }
    v3 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*(a0 as &i64));
    if !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v3, v4, *((*((*((a3 + 16) as &i64) + 96) as &i64) + 8) as &i64), *((*((*((a3 + 16) as &i64) + 96) as &i64) + 16) as &i64), *(a3 as &i64), *((a3 + 8) as &i64)) {
        return ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(*(a0 as &i64)) as u8;
    }
    return 3;
}
