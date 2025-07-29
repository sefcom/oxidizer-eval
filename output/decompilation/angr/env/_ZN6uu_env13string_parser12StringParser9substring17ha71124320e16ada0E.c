long long uu_env::string_parser::StringParser::substring(unsigned long long a0[2], unsigned long long a1[2])
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    uint128_t v3;  // [bp-0x68]
    char v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    unsigned long long v9;  // r14

    v9 = a1[0];
    if (v9 > a0[1])
    {
        v0 = &g_5aa170;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_5aa1f8); /* do not return */
    }
    core::slice::<impl [T]>::split_at_unchecked(&v4, a0[0], a0[1], v9);
    if (a1[1] - v9 > v6)
    {
        v0 = &g_5aa170;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_5aa210); /* do not return */
    }
    core::slice::<impl [T]>::split_at_unchecked(&v7, v5, v6, a1[1] - v9);
    return *((long long *)&v7);
}
