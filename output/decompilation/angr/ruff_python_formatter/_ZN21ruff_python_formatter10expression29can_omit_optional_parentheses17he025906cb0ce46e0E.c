long long ruff_python_formatter::expression::can_omit_optional_parentheses(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    void* v3;  // [bp-0x20]
    void* v4;  // [bp-0x1a]
    unsigned int v5;  // [bp-0x18]
    char v6;  // [bp-0x14]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v9;  // rbx

    v7 = v9;
    v0 = 0;
    v3 = 0;
    v4 = 0;
    v2 = a1;
    v0.visit_subexpression(a0);
    if (v6 != 1)
    {
        return 0;
    }
    else if (v5 >= 2)
    {
        return 0;
    }
    else if (*((char *)&v4 + 7) >= 2)
    {
        if (v3 && (char)ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(v3, a1))
            return 1;
        if ((int)v0 >= 2)
            return ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(v1, a1);
        return 0;
    }
    else
    {
        return 1;
    }
}
