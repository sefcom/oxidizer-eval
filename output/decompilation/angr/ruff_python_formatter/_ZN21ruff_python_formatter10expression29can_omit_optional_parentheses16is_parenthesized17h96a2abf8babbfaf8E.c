long long ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(unsigned int *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (*(a0) != 26)
    {
        v0 = v2;
        v3 = ruff_python_formatter::expression::has_parentheses(a0, a1);
        return v3 & 0xffffffffffffff00 | (char)v3 & 1;
    }
    return 0;
}
