long long uu_env::parse_args_from_str::ha63b8bbceed9831c(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    int v5;  // [sp-0x38]
    int v6;  // [sp-0x28]
    unsigned long long v7;  // [sp-0x18]

    uu_env::split_iterator::split::h2ad0ba729ee8da1c(&v0, a1, a2);
    if (*((int *)&v0) == 8)
    {
        a0[2] = *((long long *)&v3);
        *((int128_t *)&a0[0]) = *((int128_t *)&v1);
        return a0;
    }
    v7 = *((long long *)&v4);
    *((int128_t *)&v6) = *((int128_t *)&v2);
    *((int128_t *)&v5) = *((int128_t *)&v0);
    a0[1] = uu_env::parse_args_from_str::_$u7b$$u7b$closure$u7d$$u7d$::h3c361bada9b8fd30(&v5);
    a0[2] = &g_548908;
    a0[0] = 0x8000000000000000;
    return a0;
}
