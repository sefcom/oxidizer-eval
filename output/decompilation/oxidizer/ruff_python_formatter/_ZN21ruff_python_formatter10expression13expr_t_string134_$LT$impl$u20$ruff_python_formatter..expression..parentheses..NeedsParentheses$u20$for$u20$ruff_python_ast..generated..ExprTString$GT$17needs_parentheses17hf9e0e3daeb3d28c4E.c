fn ruff_python_formatter::expression::expr_t_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprTString>::needs_parentheses(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: struct16;  // [bp-0x20]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r14
    let v5: u64;  // rbx
    let v6: struct48;  // rax
    let v7: u64;  // rax

    if (((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char {
        return 0;
    }
    v2 = v4;
    v1 = v5;
    v0 = struct16 {
        field_0: 3
        field_8: a0
    };
    v6 = <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v0, a3);
    if v6 as u8 {
        return v6;
    }
    v7 = ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *(a3 as &i64), *((a3 + 8) as &i64));
    return v6;
}
