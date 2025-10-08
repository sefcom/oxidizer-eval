fn ruff_python_formatter::statement::stmt_assign::should_inline_comments(a0: i64, a1: i64, a2: i64, a3: u64) -> long long {
    let v0: struct16;  // [bp-0x8]
    let v2: struct16;  // rax
    let v3: u64;  // rax
    let v5: struct16;  // rdx
    let v6: struct16;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax

    v0 = v2;
    v3 = 0;
    match (*(a0 as &i32)) {
        17 => {
            v9 = ruff_python_formatter::expression::expr_f_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprFString>::needs_parentheses(a0 + 8, &g_487a98.field_0, v5, a3);
            return v9 & -0x100 | v9 == 2;
        }
        18 => {
            v8 = ruff_python_formatter::expression::expr_t_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprTString>::needs_parentheses(a0 + 8, &g_487a98.field_0, v5, a3);
            return v8 & -0x100 | v8 == 2;
        }
        19 => {
            v7 = ruff_python_formatter::expression::expr_string_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprStringLiteral>::needs_parentheses(a0 + 8, &g_487a98.field_0, v5, a3);
            return v7 & -0x100 | v7 == 2;
        }
        20 => {
            v6 = ruff_python_formatter::expression::expr_bytes_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprBytesLiteral>::needs_parentheses(a0 + 8, &g_487a98.field_0, v5, a3);
            return v6 & -0x100 | v6 as u8 == 2;
        }
        21 | 22 | 23 | 28 => {
            break;
        }
        _ => {
            return v3;
        }
    }
}
