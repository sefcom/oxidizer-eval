fn ruff_python_formatter::expression::expr_yield_from::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprYieldFrom>::needs_parentheses(a0: u64, a1: u32, a2: u32, a3: void*) -> long long {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: 1
        field_8: a0
    };
    return <ruff_python_formatter::expression::expr_yield::AnyExpressionYield as ruff_python_formatter::expression::parentheses::NeedsParentheses>::needs_parentheses(&v0, a1, a2, a3);
}
