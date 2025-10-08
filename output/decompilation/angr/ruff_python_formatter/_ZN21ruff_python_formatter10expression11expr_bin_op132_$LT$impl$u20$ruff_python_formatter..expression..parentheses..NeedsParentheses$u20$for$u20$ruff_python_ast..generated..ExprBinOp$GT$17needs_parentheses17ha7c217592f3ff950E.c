long long ruff_python_formatter::expression::expr_bin_op::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprBinOp>::needs_parentheses(struct_1 *a0, unsigned long a1, unsigned long a2, struct_2 *a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // rbx
    struct_0 *v11;  // rdx
    unsigned long long v12;  // r15
    void* v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long v15;  // r14
    unsigned long v16;  // rax

    if (a1 == 39)
        return v16 & 0xffffffffffffff00 | 1;
    v6 = v8;
    v5 = v9;
    v4 = v10;
    v11 = a0->field_0;
    switch (v11->field_0)
    {
    case 17:
        v0 = 2;
        v1 = &v11->field_8;
        v12 = 2;
        if (v11->field_8 != 9223372036854775809)
            goto LABEL_70943b;
        goto LABEL_7094a5;
    case 18:
        v0 = 3;
        v1 = &v11->field_8;
        v12 = 3;
        v13 = 0;
        if ((char)(((0 ^ v11->field_8) & (0 ^ -(v11->field_8))) >> 63))
            break;
LABEL_70943b:
        if (!v0.is_multiline(a3) || (char)ruff_python_formatter::expression::has_parentheses(a0->field_8, a3) == 2)
            goto LABEL_7094a5;
        a3->field_10.dangling(a0);
        if (v14)
            goto LABEL_7094a5;
        v2 = *((long long *)(4755552 + 8 * v12));
        v3 = v1;
        v15 = a3->field_10 + 64;
        if (v15.get_inner(&v2))
            goto LABEL_7094a5;
        v2 = a0->field_8.from();
        v3 = v14;
        v13 = (!v15.get_inner(&v2)) * 3;
        break;
    case 19:
        v0 = 0;
        v1 = &v11->field_8;
        v13 = 0;
        v12 = 0;
        if (!((char)(((0 ^ v11->field_8) & (0 ^ -(v11->field_8))) >> 63)))
            break;
        goto LABEL_70943b;
    case 20:
        v0 = 1;
        v1 = &v11->field_8;
        v12 = 1;
        if (v11->field_8)
            goto LABEL_70943b;
        goto LABEL_7094a5;
    default:
LABEL_7094a5:
        v13 = 0;
        break;
    }
    return v13;
}
