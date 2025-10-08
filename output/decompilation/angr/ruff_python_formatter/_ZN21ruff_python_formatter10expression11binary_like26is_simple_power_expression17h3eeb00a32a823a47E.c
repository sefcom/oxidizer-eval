long long ruff_python_formatter::expression::binary_like::is_simple_power_expression(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax

    v0 = v2;
    if ((char)ruff_python_formatter::expression::binary_like::is_simple_power_operand(a0) && (char)ruff_python_formatter::expression::binary_like::is_simple_power_operand(a1) && !(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(a0.from(), v3, a2, a3, a4, a5))
    {
        v4 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(a1.from(), v3, a2, a3, a4, a5);
        return v4 & 0xffffffffffffff00 | (char)v4 ^ 1;
    }
    return 0;
}
