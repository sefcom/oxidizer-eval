fn ruff_python_formatter::expression::expr_subscript::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprSubscript>::needs_parentheses(a0: i64, a1: u64, a2: i64, a3: i64) -> long long {
    let v0: struct16;  // [bp-0x40]
    let v2: i64;  // rbx
    let v3: u64;  // rbp
    let v4: struct16;  // rbp
    let v5: u64;  // rax
    let v6: u64;  // rdx
    let v7: u64;  // rax

    v2 = *((a3 + 16) as &i64);
    v3 = *(a3 as &i64);
    if ruff_python_formatter::expression::CallChainLayout::from_expression(26, a0, *((*((v2 + 96) as &i64) + 8) as &i64), *((*((v2 + 96) as &i64) + 16) as &i64), v3, *((a3 + 8) as &i64)) != 1 {
        v5 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*(a0 as &i64));
        v4 = v3 & -0x100 | 3;
        if !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v5, v6, *((*((v2 + 96) as &i64) + 8) as &i64), *((*((v2 + 96) as &i64) + 16) as &i64), v3, *((a3 + 8) as &i64)) {
            v7 = ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(*(a0 as &i64)) as u64;
            v4 = v7 & 4294967295;
            if v7 == 2 {
                v4 = v4 & -0x100 | 2;
                if a1 == 2 && *((a2 + 112) as &i64) && ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::ptr_eq(<ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((a2 + 112) as &i64)), v6, 53, a0) {
                    v4 = v4 & -0x100 | 3;
                    if ruff_python_ast::nodes::Parameters::is_empty(*((a2 + 88) as &i64)) {
                        v0 = struct16 {
                            field_0: 79
                            field_8: *((a2 + 88) as &i64)
                        };
                        v4 = (hashbrown::map::HashMap<K,V,S,A>::get_inner(v2 + 64, &v0)) * 3;
                    }
                }
            }
        }
    }
    return v4 & 4294967295;
}
