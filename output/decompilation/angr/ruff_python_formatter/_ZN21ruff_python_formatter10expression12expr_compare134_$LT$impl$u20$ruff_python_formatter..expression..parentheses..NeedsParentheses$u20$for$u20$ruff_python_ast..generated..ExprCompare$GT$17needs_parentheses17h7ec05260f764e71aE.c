long long ruff_python_formatter::expression::expr_compare::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCompare>::needs_parentheses(struct_2 *a0, unsigned long a1, unsigned long a2, struct_0 *a3)
{
    void* v0;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    unsigned long long v7;  // r14
    unsigned long long v8;  // rbx
    struct_1 *v9;  // rdx
    unsigned long v10;  // rdi
    unsigned long long v11;  // rax
    void* v12;  // rax
    unsigned long v13;  // rax

    if (a1 == 39)
        return v13 & 0xffffffffffffff00 | 1;
    v5 = v7;
    v4 = v8;
    v9 = a0->field_0;
    switch (v9->field_0)
    {
    case 17:
        v0 = 2;
        v1 = &v9->field_8;
        if (v9->field_8 != 9223372036854775809 && v0.is_multiline(a3))
        {
            v10 = a3->field_10;
            v11 = 44;
            goto LABEL_709c07;
        }
        break;
    case 18:
        v0 = 3;
        v1 = &v9->field_8;
        v12 = 0;
        if ((char)(((0 ^ v9->field_8) & (0 ^ -(v9->field_8))) >> 63))
            break;
        if (!v0.is_multiline(a3))
            goto LABEL_709c29;
        v10 = a3->field_10;
        v11 = 45;
LABEL_709c07:
        v2 = v11;
        v3 = v1;
        if (v10 + 64.get_inner(&v2) || !a0->field_20)
            goto LABEL_709c29;
        v12 = ((char)ruff_python_formatter::expression::expr_compare::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCompare>::needs_parentheses::{{closure}}(a3, a0->field_18)) * 3;
        break;
    case 19:
        v0 = 0;
        v1 = &v9->field_8;
        v12 = 0;
        if (!((char)(((0 ^ v9->field_8) & (0 ^ -(v9->field_8))) >> 63)))
            break;
        if (v0.is_multiline(a3))
        {
            v10 = a3->field_10;
            v11 = 46;
            goto LABEL_709c07;
        }
        break;
    case 20:
        v0 = 1;
        v1 = &v9->field_8;
        if (v9->field_8 && v0.is_multiline(a3))
        {
            v10 = a3->field_10;
            v11 = 47;
            goto LABEL_709c07;
        }
        break;
    default:
LABEL_709c29:
        v12 = 0;
        break;
    }
    return v12;
}
