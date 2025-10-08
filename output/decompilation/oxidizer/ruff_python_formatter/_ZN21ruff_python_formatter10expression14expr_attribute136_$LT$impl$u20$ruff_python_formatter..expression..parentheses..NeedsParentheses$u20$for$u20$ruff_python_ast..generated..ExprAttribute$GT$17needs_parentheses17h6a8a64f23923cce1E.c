fn ruff_python_formatter::expression::expr_attribute::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAttribute>::needs_parentheses(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v1: i64;  // r13
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // rax
    let v5: u64;  // rax

    v1 = *((a3 + 16) as &i64);
    if ruff_python_formatter::expression::CallChainLayout::from_expression(25, a0, *((*((v1 + 96) as &i64) + 8) as &i64), *((*((v1 + 96) as &i64) + 16) as &i64), *(a3 as &i64), *((a3 + 8) as &i64)) == 1 {
        return 0;
    }
    v2 = ruff_python_formatter::comments::Comments::dangling(v1, a0) & -0x100 | 1;
    if v3 {
        return v2;
    }
    v4 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((a0 + 40) as &i64));
    v5 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v4, v3, *((*((v1 + 96) as &i64) + 8) as &i64), *((*((v1 + 96) as &i64) + 16) as &i64), *(a3 as &i64), *((a3 + 8) as &i64));
    if !v5 {
        return ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(*((a0 + 40) as &i64)) as u64;
    }
    return v5 & -0x100 | 3;
}
