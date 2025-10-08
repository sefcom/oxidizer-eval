long long just::assignment::<impl core::fmt::Display for just::binding::Binding<just::expression::Expression>>::fmt(char a0[207], unsigned long long a1[2])
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [sp-0x60]
    char *v2;  // [sp-0x58], Other Possible Types: unsigned long long
    int v3;  // [bp-0x50], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    char v7[207];  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rax
    unsigned long v12;  // r15
    unsigned long long v13;  // rax

    v10 = a1[0];
    if (a0[206])
    {
        v0 = &g_82db30;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        v11 = v10.write_fmt(a1[1], &v0);
        if ((char)v11)
            return v11 & 0xffffffffffffff00 | 1;
    }
    if (a0[205])
    {
        v0 = &g_82db40;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        v12 = a1[1];
        v13 = v10.write_fmt(v12, &v0);
        if ((char)v13)
            return v13 & 0xffffffffffffff00 | 1;
    }
    else
    {
        v12 = a1[1];
    }
    v5 = &a0[128];
    v6 = <just::name::Name as core::fmt::Display>::fmt;
    *((char *[207])&v7[0]) = a0;
    v8 = <just::expression::Expression as core::fmt::Display>::fmt;
    v0 = &g_82db50;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 2;
    return v10.write_fmt(v12, &v0);
}
