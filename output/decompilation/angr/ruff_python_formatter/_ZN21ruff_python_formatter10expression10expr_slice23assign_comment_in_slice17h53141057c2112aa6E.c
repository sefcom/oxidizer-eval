long long ruff_python_formatter::expression::expr_slice::assign_comment_in_slice(unsigned int a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x3c]
    char v2;  // [bp-0x34]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax

    ruff_python_formatter::expression::expr_slice::find_colons(&v3, a1, a2, a3->field_0, a3->field_4, a3->field_8, *((long long *)&a3->field_10));
    v5 = v0.expect(&v3);
    if (a0 < *((int *)&v0))
    {
        return 0;
    }
    else if (v2 == 90)
    {
        return v5 & 0xffffffffffffff00 | 1;
    }
    else
    {
        return v1 & 0xffffffffffffff00 | 2 - (a0 < (unsigned int)v1);
    }
}
