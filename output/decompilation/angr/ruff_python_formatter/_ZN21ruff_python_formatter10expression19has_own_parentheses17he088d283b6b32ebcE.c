long long ruff_python_formatter::expression::has_own_parentheses(struct_0 *a0, unsigned long long a1)
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    v2 = v1 & 0xffffffffffffff00 | 2;
    switch (a0->field_0)
    {
    case 6: case 7: case 29:
LABEL_7104ad:
        if (!a0->field_18)
            goto LABEL_7104cf;
        else
            goto LABEL_7104e8;
    case 8: case 9: case 10: case 26:
LABEL_7104e8:
        return v2 & 0xffffffffffffff00 | 1;
    case 11:
        return (v1 & 0xffffffffffffff00 | 2) & 0xffffffffffffff00 | 2 - a0->padding_2d[3];
    case 16:
        v2 = a0->field_18 + a0->field_28;
        if (!a0->field_18 + a0->field_28)
            goto LABEL_7104cf;
        else
            goto LABEL_7104e8;
    case 30:
        if (!a0->field_28[4])
            goto LABEL_7104c3;
        else
            goto LABEL_7104ad;
    default:
LABEL_7104c3:
        return v1 & 0xffffffffffffff00 | 2;
    }
LABEL_7104cf:
    v2 = a1.dangling(a0.from(), v3);
    if (!v3)
        return 0;
}
