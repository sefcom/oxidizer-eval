fn ruff_python_formatter::expression::has_parentheses(a0: i64, a1: i64) -> u64 {
    let v0: struct12;  // [bp-0x28]
    let v2: struct12;  // rax
    let v3: core::fmt::rt::Argument;  // rax
    let v4: u64;  // rbx
    let v5: core::fmt::Arguments;  // rax
    let v6: u64;  // rdx

    v0 = v2;
    v3 = ruff_python_formatter::expression::has_own_parentheses(a0, *((a1 + 16) as &i64));
    v4 = v3 & 4294967295;
    if v3 as u8 == 2 || !(v4 & 1) {
        v5 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a0);
        v4 = (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v5, v6, *((*((*((a1 + 16) as &i64) + 96) as &i64) + 8) as &i64), *((*((*((a1 + 16) as &i64) + 96) as &i64) + 16) as &i64), *(a1 as &i64), *((a1 + 8) as &i64)) ? v4 & 4294967295 : 1);
    }
    return v4 & 4294967295;
}
