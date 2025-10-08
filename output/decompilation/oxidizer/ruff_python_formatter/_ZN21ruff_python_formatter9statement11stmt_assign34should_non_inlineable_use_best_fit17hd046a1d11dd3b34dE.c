fn ruff_python_formatter::statement::stmt_assign::should_non_inlineable_use_best_fit(a0: i64, a1: u64, a2: u64, a3: void*) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v4: u64;  // rax
    let v5: struct15;  // rax
    let v6: struct9;  // rax

    v0 = v2;
    match (*(a0 as &i32)) {
        26 => {
            v6 = ruff_python_formatter::expression::expr_subscript::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprSubscript>::needs_parentheses(a0 + 8, a1, a2, a3);
            return v6 & -0x100 | v6 as u8 == 2;
        }
        25 => {
            v5 = ruff_python_formatter::expression::expr_attribute::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAttribute>::needs_parentheses(a0 + 8, a1, a2, a3);
            return v5 & -0x100 | v5 as u8 == 2;
        }
        16 => {
            v4 = ruff_python_formatter::expression::expr_call::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCall>::needs_parentheses(a0 + 8, a1, a2, a3);
            return v4 & -0x100 | v4 == 2;
        }
        _ => {
            return 0;
        }
    }
}
