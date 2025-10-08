long long fish::ast::is_same_node(unsigned long long a0, struct_1 *a1, unsigned long long a2, struct_3 *a3)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long v8;  // rax

    if (a0 != a2)
    {
        return 0;
    }
    else if (a1 != a3)
    {
        v3 = v5;
        v2 = v6;
        a1->field_40(&v0, a0);
        v7 = a3->field_40(&v1, a2);
        return v7 & 0xffffffffffffff00 | *((int *)&v0) == *((int *)&v1);
    }
    else
    {
        return v8 & 0xffffffffffffff00 | 1;
    }
}
