fn ruff_python_formatter::expression::expr_unary_op::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprUnaryOp>::needs_parentheses(a0: i64, a1: u64, a2: i64, a3: i64) -> char {
    let v0: struct16;  // [bp-0x28]
    let v1: u64;  // [bp-0x18]
    let v2: u64;  // [bp-0x10]
    let v3: u64;  // [bp-0x8]
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: u64;  // rbx
    let v8: u64;  // rax
    let v9: u8;  // al
    let v10: u64;  // rdx

    if a1 == 39 {
        return 1;
    }
    v3 = v5;
    v2 = v6;
    v1 = v7;
    v8 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*(a0 as &i64));
    v9 = 3;
    if ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v8, v10, *((*((*((a3 + 16) as &i64) + 96) as &i64) + 8) as &i64), *((*((*((a3 + 16) as &i64) + 96) as &i64) + 16) as &i64), *(a3 as &i64), *((a3 + 8) as &i64)) {
        return v9;
    }
    v0 = struct16 {
        field_0: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*(a0 as &i64))
        field_8: v10
    };
    v9 = 1;
    if !hashbrown::map::HashMap<K,V,S,A>::get_inner(*((a3 + 16) as &i64) + 64, &v0) {
        ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(*(a0 as &i64));
    }
    return v9;
}
