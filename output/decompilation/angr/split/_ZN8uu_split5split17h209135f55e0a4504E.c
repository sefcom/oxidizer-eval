long long uu_split::split(struct_0 *a0)
{
    char v0;  // [bp-0x1e8]
    char v1;  // [bp-0x150]
    char v2;  // [bp-0x118], Other Possible Types: unsigned long
    char v3;  // [bp-0x110]
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r14
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rcx

    v5 = a0->field_78;
    v6 = a0->field_80;
    if ((char)v5.equal(v6, "-rlsrc/uu/split/src/strategy.rs", 1))
    {
        v7 = std::io::stdio::stdin().new();
        v8 = &g_50b190;
        v9 = 0x2000;
        if (a0->field_0)
            goto LABEL_4722fb;
    }
    else
    {
        v0.open(v5, v6);
        v2.map_err_context(&v0, v5, v6);
        if (v2)
            return v2;
        v7 = *((long long *)&v3) & 4294967295.new();
        v8 = &g_50b138;
        v9 = 0x2000;
        if (a0->field_0)
        {
LABEL_4722fb:
            v9 = a0->field_8;
        }
    }
    v1.with_capacity(v9, v7, v8);
    v10 = a0->field_10 - 6;
    if (v10 >= 3)
        v10 = 3;
    goto (long long)(g_41bbe8[v10] + (char *)&g_41bbe8[0]);
}
