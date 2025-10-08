fn ruff_python_formatter::expression::expr_named::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprNamed>::needs_parentheses(a0: u64) -> long long {
    let v1: u64;  // rax

    match (a0) {
        2 | 4 | 5 | 7 | 8 | 9 | 10 | 17 | 39 | 40 | 41 | 60 | 84 => {
            return v1 & -0x100 | 1;
        }
        _ => {
            return 0;
        }
    }
}
