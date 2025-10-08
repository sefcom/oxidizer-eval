long long ruff_python_formatter::expression::has_parentheses(unsigned long long a0, struct_2 *a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx

    v0 = v2;
    v3 = ruff_python_formatter::expression::has_own_parentheses(a0, a1->field_10);
    v4 = v3 & 4294967295;
    if ((char)v3 == 2 || !((char)v4 & 1))
    {
        v5 = a0.from();
        v4 = (!(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v5, v6, a1->field_10->field_60->field_8, a1->field_10->field_60->field_10, a1->field_0, a1->field_8) ? v4 & 4294967295 : 1);
    }
    return v4 & 4294967295;
}
