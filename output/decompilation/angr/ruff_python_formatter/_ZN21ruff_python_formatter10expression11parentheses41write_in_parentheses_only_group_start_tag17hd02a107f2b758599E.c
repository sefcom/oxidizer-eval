long long ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_start_tag(unsigned long long a0, struct_3 *a1)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    char v3;  // [sp-0x18]
    char v4;  // [bp-0x14]
    struct_0 *v6;  // rax
    unsigned int v7;  // ecx
    unsigned int v8;  // eax

    v6 = a1->field_30();
    v7 = v6->field_20;
    if (v7 < 2)
        return v6;
    if (v7 == 2)
    {
        v8 = v6->field_24;
        if (!v8)
            return v2;
        v1 = 8;
        v2 = v8;
        v3 = 1;
        v4 = 0;
    }
    else
    {
        v1 = 6;
        v2 = 0;
        v3 = 0;
    }
    v0 = 10;
    return a1->field_18(a0, &v0);
}
