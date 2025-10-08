long long ruff_python_formatter::expression::expr_t_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprTString>::needs_parentheses(unsigned long long a0[3], unsigned long a1, unsigned long a2, unsigned long long a3[2])
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1[3];  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    if ((char)(((0 ^ a0[0]) & (0 ^ -(a0[0]))) >> 63))
        return 0;
    v3 = v5;
    v2 = v6;
    v1[0] = a0;
    v0 = 3;
    v7 = v0.is_multiline(a3);
    if (!(char)v7)
    {
        v8 = a0[1].from_interpolated_string_elements(a0[2], a3[0], a3[1]);
        v7 = v8 & 0xffffffffffffff00 | 2;
        if (!(char)v8)
            return v8 & 0xffffffffffffff00 | 2;
    }
    v7 = v7 & 0xffffffffffffff00 | 3;
    return v7;
}
