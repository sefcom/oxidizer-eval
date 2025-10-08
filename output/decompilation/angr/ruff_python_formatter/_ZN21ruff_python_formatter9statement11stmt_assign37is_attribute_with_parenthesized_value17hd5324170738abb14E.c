long long ruff_python_formatter::statement::stmt_assign::is_attribute_with_parenthesized_value(struct_0 *a0, void* a1)
{
    struct_0 *v1;  // rbx
    unsigned int v2;  // eax
    unsigned long long v3;  // rbp
    unsigned long v4;  // cc_ndep

    v1 = a0;
    v2 = a0->field_0;
    v3 = vvar_35{reg 56} & 0xffffffffffffff00 | 1;
    if (a0->field_0 == 25)
    {
        while ((char)ruff_python_formatter::expression::has_parentheses(v1->field_30, a1) == 2)
        {
            v1 = v1->field_30;
            v2 = v1->field_0;
            v3 = v3 & 0xffffffffffffff00 | 1;
            if (v1->field_0 != 25)
                goto LABEL_71c8be;
        }
    }
LABEL_71c8be:
    if (v2 != 26)
        v3 = (v2 == 16 ? v3 & 0xffffffffffffff00 | _ccall(5, 4, v1->field_18, v1->field_28, v4) & 255 : 0);
    return v3 & 4294967295;
}
