void ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_end_tag(unsigned long long a0, struct_3 *a1)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    struct_0 *v3;  // rax
    unsigned int v4;  // ecx

    v3 = a1->field_30();
    v4 = v3->field_20;
    if (v4 < 2)
        return;
    if (v4 != 2)
    {
        v1 = 7;
    }
    else if (v3->field_24)
    {
        v1 = 9;
    }
    else
    {
        return;
    }
    v0 = 10;
    a1->field_18(a0, &v0);
    return;
}
