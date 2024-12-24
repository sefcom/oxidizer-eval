long long uu_env::string_parser::StringParser::substring::hac18944f4f14e78e(unsigned long long a0[2], unsigned long long a1[2])
{
    unsigned long v0;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x70]
    int v3;  // [sp-0x68]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    unsigned long long v10;  // r14

    v10 = a1[0];
    if (v10 > a0[1])
    {
        v0 = &g_5496c0;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h1b747a50f8aaca69(&v4, a0[0], a0[1], v10);
    if (a1[1] - v10 <= *((long long *)&v6))
    {
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h1b747a50f8aaca69(&v7, *((long long *)&v5), *((long long *)&v6), a1[1] - v10);
        return *((long long *)&v7);
    }
    v0 = &g_5496c0;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
}
