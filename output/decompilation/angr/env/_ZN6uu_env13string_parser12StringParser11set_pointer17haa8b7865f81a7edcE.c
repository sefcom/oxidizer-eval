double uu_env::string_parser::StringParser::set_pointer(long long a0, long long a1)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    uint128_t v3;  // [bp-0x40]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x18]
    int v7;  // xmm0

    a0->field_20 = a1;
    if (a0->field_8 < a1)
    {
        v0 = &g_5aa170;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_5aa228); /* do not return */
    }
    core::slice::<impl [T]>::split_at_unchecked(&v4, a0->field_0, a0->field_8, a1);
    v7 = *((int128_t *)&v5);
    *((void*)&a0->field_10) = v7;
    return (unsigned long long)v7;
}
