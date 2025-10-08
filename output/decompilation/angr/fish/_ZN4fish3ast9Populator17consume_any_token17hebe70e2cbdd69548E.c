double fish::ast::Populator::consume_any_token(long long a0, long long a1)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    uint128_t v3;  // [bp-0x30]
    char v4;  // [bp-0x18]
    char v5;  // [bp-0xf]
    unsigned int v7;  // eax
    int v8;  // xmm0

    v4.pop(a1 + 48);
    v7 = v5;
    switch (v7)
    {
    case 14:
        v0 = &g_14c5300;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14c5320); /* do not return */
    case 11:
        v0 = &g_14c5310;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14c5338); /* do not return */
    default:
        v8 = *((int128_t *)&v4);
        *((void*)a0) = v8;
        return (unsigned long long)v8;
    }
}
