fn ruff_python_formatter::statement::stmt_assign::has_target_own_parentheses(a0: i64, a1: u64) -> char {
    if *(a0 as &i32) == 30 {
        return 1;
    }
    return ruff_python_formatter::expression::has_own_parentheses(a0, a1) != 2;
}
