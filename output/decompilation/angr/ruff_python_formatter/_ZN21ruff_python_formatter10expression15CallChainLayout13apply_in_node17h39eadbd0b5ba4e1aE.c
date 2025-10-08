long long ruff_python_formatter::expression::CallChainLayout::apply_in_node(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    struct_0 **v3;  // r15
    struct_5 *v4;  // rax
    unsigned int v5;  // ecx
    unsigned long v6;  // rdi
    struct struct_0 *v7[6];  // rax
    struct_4 *v8;  // rax
    unsigned long long v9[2];  // rax

    v0 = v2;
    if ((char)a0)
        return a0 & 4294967295;
    v3 = a3->field_30;
    v4 = v3(a2);
    v5 = v4->field_20;
    if (v5 != 3)
    {
        a0 = v6 & 0xffffffffffffff00 | 2;
        if (v5 != 2)
        {
            return a0 & 4294967295;
        }
        else if (!v4->field_24)
        {
            return a0 & 4294967295;
        }
    }
    v7 = a1.into();
    v8 = v3(a2);
    v9 = v3(a2);
    return 16.from_expression(v7, v8->field_10->field_60->field_8, v8->field_10->field_60->field_10, v9[0], v9[1]);
}
