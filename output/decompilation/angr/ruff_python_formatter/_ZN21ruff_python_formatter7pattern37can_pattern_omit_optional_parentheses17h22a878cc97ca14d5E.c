long long ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses(unsigned long long a0, unsigned long a1)
{
    void* v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    int v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned short v4;  // [bp-0x10]
    unsigned long long v6;  // rax

    v0 = 0;
    *((uint128_t *)&v2) = 0;
    v4 = 0;
    v0.visit_pattern(a0);
    if ((char)v4 != 1)
    {
        return 0;
    }
    else if ((long long)v2 < 2)
    {
        if (v3)
        {
            v6 = (unsigned long long)ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(v3);
            if ((char)v6)
                return v6 & 0xffffffffffffff00 | 1;
        }
        if ((int)v0 >= 2)
            return (unsigned long long)ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(v1);
        return 0;
    }
    else
    {
        return 0;
    }
}
