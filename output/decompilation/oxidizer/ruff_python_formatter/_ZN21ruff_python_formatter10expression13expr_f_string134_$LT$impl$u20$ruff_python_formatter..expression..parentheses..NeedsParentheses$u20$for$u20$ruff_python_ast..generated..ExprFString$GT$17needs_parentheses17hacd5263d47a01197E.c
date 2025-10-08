fn ruff_python_formatter::expression::expr_f_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprFString>::needs_parentheses(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: struct16;  // [bp-0x20]
    let v1: struct80;  // [bp-0x10]
    let v2: struct12;  // [bp-0x8]
    let v4: struct12;  // r14
    let v5: struct80;  // rbx
    let v6: u64;  // rax

    if *(a0 as &i64) < 9223372036854775810 {
        return 0;
    }
    v2 = v4;
    v1 = v5;
    v0 = struct16 {
        field_0: 2
        field_8: a0
    };
    v6 = <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v0, a3);
    if v6 {
        return v6 & -0x100 | 3;
    }
    return ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *(a3 as &i64), *((a3 + 8) as &i64)) & -0x100 | 2;
}
