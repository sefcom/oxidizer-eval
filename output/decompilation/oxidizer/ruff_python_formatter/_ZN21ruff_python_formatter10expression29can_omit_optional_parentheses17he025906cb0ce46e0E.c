fn ruff_python_formatter::expression::can_omit_optional_parentheses(a0: &u32, a1: void*) -> long long {
    let v0: struct16;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: void*;  // [bp-0x28]
    let v3: void*;  // [bp-0x20]
    let v4: void*;  // [bp-0x1a]
    let v5: struct16;  // [bp-0x18]
    let v6: struct26;  // [bp-0x14]
    let v7: u64;  // [bp-0x10]
    let v9: u64;  // rbx

    v7 = v9;
    v0 = 0;
    v3 = 0;
    v4 = 0;
    v2 = a1;
    ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor::visit_subexpression(&v0, a0);
    if v6 != 1 {
        return 0;
    } else if v5 >= 2 {
        return 0;
    } else if *((&v4 as &char + 7) as &i8) >= 2 {
        if v3 && ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(v3, a1) {
            return 1;
        }
        if v0.field_0 as i32 >= 2 {
            return ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(v1, a1);
        }
        return 0;
    } else {
        return 1;
    }
}
