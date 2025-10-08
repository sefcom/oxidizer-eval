fn ruff_python_formatter::statement::stmt_assign::should_parenthesize_target(a0: void*, a1: i64) -> long long {
    let v0: struct15;  // [bp-0x18]
    let v2: struct15;  // rax
    let v3: struct16;  // rax

    v0 = v2;
    if !ruff_python_formatter::statement::stmt_assign::has_target_own_parentheses(a0, *((a1 + 16) as &i64)) {
        v3 = ruff_python_formatter::statement::stmt_assign::is_attribute_with_parenthesized_value(a0, a1);
        return v3 & -0x100 | v3 as u8 ^ 1;
    }
    return 0;
}
