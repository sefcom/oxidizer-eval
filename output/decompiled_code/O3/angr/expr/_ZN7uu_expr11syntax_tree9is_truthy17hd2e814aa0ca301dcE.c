long long uu_expr::syntax_tree::is_truthy::hd2e814aa0ca301dc(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    char v3[3];  // rdx
    unsigned long long v4;  // rsi
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rax

    v1 = 0x8000000000000000;
    if (a0->field_0 != 0x8000000000000000)
        return -0x100 | a0->field_18 != 1;
    v2 = *((long long *)&a0->field_18);
    if (!v2)
        return 0;
    v3 = a0->field_10;
    if (v2 != 1)
    {
        v4 = v3[0];
    }
    else
    {
        v4 = v3[0];
        v1 = -255;
        if ((char)v4 == 45)
            return -255;
    }
    if ((char)v4 != 48)
    {
        v1 = v1 | -0x100 | 1;
        if ((unsigned int)v4 != 45)
            return v1;
    }
    do
    {
        v6 = 1;
        v1 = v7 | -0x100 | v2 != v6;
    } while (v2 != v6 && v3[v6] == 48);
    return v1;
}
