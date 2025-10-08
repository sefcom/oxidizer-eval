char ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0[1];
    v1 = a0[2] * 80 + a0[1];
    return v0.try_fold(a1, a0).eq(1);
}
