long long fish_printf::fmt_fp::decimal::Decimal::should_round_up(struct_0 *a0, unsigned int a1, unsigned long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long v3;  // rbp
    unsigned int v4;  // r15d
    unsigned long v5;  // cc_ndep
    unsigned int *v6;  // rax
    char v7;  // al
    unsigned int v8;  // cc_dep1
    unsigned int v9;  // cc_dep2
    int v10;  // xmm0
    int v11;  // xmm1

    v0 = v2;
    v3 = a3;
    v4 = a2;
    if (!(unsigned int)a2)
    {
        if ((char)_ccall(0, 23, (unsigned long long)(a1 + 1), 0, _ccall(19, a2 & 4294967295, 0, v5)))
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_1518118); /* do not return */
        }
        else if (a1 + 1 == a0->field_18)
        {
            return 0;
        }
    }
    if ((unsigned int)v3 < 0x3b9aca00)
    {
        v6 = a0.index(a1, &g_1518148);
        v7 = (unsigned int)((0 CONCAT *(v6)) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT *(v6)) / (v3 & 4294967295));
    }
    else
    {
        v7 = (!a1 ? 0 : (char)*((int *)a0.index(a1 - 1, &g_1518130)));
    }
    v8 = v4;
    v9 = (unsigned int)v3 >> 1;
    if (v4 >= v9 && v8 == v9 && (char)_ccall(0, 23, (unsigned long long)(a1 + 1), 0, (unsigned long long)(char)(v8 < v9)))
        core::panicking::panic_const::panic_const_add_overflow(&g_1518160); /* do not return */
    if (a0->field_24)
    {
        v11 = g_547ec0[!(v7 & 1)] ^ 0x80000000000000008000000000000000;
        v10 ^= 0x80000000000000008000000000000000;
    }
    return (CmpEQV(AddV(v10, v11), v11) ^ -1) & 1;
}
