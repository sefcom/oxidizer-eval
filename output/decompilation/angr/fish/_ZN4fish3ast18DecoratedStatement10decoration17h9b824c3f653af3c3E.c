long long fish::ast::DecoratedStatement::decoration(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    if (a0->field_10 == 2)
        return 0;
    v5 = a0->field_10.keyword();
    if ((char)v5 == 3)
        return v5 & 0xffffffffffffff00 | 2;
    v6 = v5 & 4294967295;
    if ((unsigned int)v6 == 5)
    {
        return v6 & 0xffffffffffffff00 | 1;
    }
    else if ((unsigned int)v6 == 9)
    {
        return v6 & 0xffffffffffffff00 | 3;
    }
    else
    {
        v0 = &g_14c4d58;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14c4e40); /* do not return */
    }
}
