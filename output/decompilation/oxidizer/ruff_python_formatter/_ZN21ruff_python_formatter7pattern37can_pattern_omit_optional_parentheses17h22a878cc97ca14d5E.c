fn ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses(a0: &u64, a1: i64) -> long long {
    let v0: void*;  // [bp-0x30]
    let v1: &u64;  // [bp-0x28]
    let v2: u128;  // [bp-0x20]
    let v3: &u64;  // [bp-0x18]
    let v4: u16;  // [bp-0x10]
    let v6: u64;  // rax

    v0 = 0;
    v2 = 0;
    v4 = 0;
    ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern(&v0, a0);
    if v4 as i8 != 1 {
        return 0;
    } else if v2 as i64 < 2 {
        if v3 {
            v6 = ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(v3) as u64;
            if v6 {
                return v6 & -0x100 | 1;
            }
        }
        if v0 as i32 >= 2 {
            return ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(v1) as u64;
        }
        return 0;
    } else {
        return 0;
    }
}
