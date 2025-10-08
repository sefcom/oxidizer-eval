long long ruff_python_formatter::expression::expr_string_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprStringLiteral>::needs_parentheses(unsigned long long *a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x10]
    unsigned long long *v1;  // [bp-0x8]
    unsigned long long v3;  // rax

    if (!((char)(((0 ^ *(a0)) & (0 ^ -(*(a0)))) >> 63)))
        return 0;
    v1 = a0;
    v0 = 0;
    v3 = v0.is_multiline(a3);
    return v3 & 0xffffffffffffff00 | (char)v3 | 2;
}
