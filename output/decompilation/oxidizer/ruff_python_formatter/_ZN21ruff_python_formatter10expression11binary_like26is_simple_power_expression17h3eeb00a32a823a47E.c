fn ruff_python_formatter::expression::binary_like::is_simple_power_expression(a0: void*, a1: void*, a2: u64, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // rax

    v0 = v2;
    if ruff_python_formatter::expression::binary_like::is_simple_power_operand(a0) && ruff_python_formatter::expression::binary_like::is_simple_power_operand(a1) && !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(<ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a0), v3, a2, a3, a4, a5) {
        v4 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(<ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1), v3, a2, a3, a4, a5);
        return v4 & -0x100 | v4 ^ 1;
    }
    return 0;
}
