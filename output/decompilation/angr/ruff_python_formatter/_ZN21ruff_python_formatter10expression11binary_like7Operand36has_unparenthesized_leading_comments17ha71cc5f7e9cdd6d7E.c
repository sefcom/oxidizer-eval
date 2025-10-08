char ruff_python_formatter::expression::binary_like::Operand::has_unparenthesized_leading_comments(unsigned long long a0[4], struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax
    char v9;  // al

    if (!a0[0])
        return a0[3];
    v0 = a0[1].from();
    v1 = v7;
    v3 = a1->padding_0[16].leading(&v0);
    v8 = a0[1].from();
    if (!(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v8, v7, a1->field_60->field_8, a1->field_60->field_10, a2, a3))
        return v7;
    v4 = v3;
    v5 = v3 + v7 * 12;
    v0 = a2;
    v1 = a3;
    v2 = &a0[1];
    v4.any(&v0);
    return v9;
}
