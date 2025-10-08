fn ruff_python_formatter::expression::CallChainLayout::from_expression(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u8 {
    let v0: u64;  // [bp-0x38]
    let v1: u32;  // [bp-0x34]
    let v3: u64;  // rax
    let v4: struct12;  // 4096
    let v5: i64;  // r13
    let v6: i64;  // rdi
    let v8: u64;  // rdx

    v0 = v3;
    v1 = 0;
    v4 = a1;
    loop {
        v5 = v8;
        match (a0) {
            16 | 26 => {
                a0 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v6);
                if ruff_python_formatter::expression::parentheses::is_expression_parenthesized(a0, v4, a2, a3, a4, a5) {
                    return (v1 < 2) + 1;
                }
                break;
            }
            25 => {
                if ruff_python_formatter::expression::parentheses::is_expression_parenthesized(ruff_python_ast::expression::<impl core::convert::From<&alloc::boxed::Box<ruff_python_ast::generated::Expr>> for ruff_python_ast::generated::ExprRef>::from(v5 + 40), v8, a2, a3, a4, a5) {
                    return (v1 < 2) + 1;
                }
                break;
            }
            _ => {
                v1 += ruff_python_formatter::expression::parentheses::is_expression_parenthesized(a0, v5, a2, a3, a4, a5);
                return (v1 < 2) + 1;
            }
        }
    }
}
