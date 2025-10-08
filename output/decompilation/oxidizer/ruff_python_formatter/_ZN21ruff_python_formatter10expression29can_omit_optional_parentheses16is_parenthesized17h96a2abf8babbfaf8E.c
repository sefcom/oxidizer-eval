fn ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    if *(a0 as &i32) != 26 {
        v0 = v2;
        v3 = ruff_python_formatter::expression::has_parentheses(a0, a1);
        return v3 & -0x100 | v3 & 1;
    }
    return 0;
}
