long long fish::wgetopt::WGetopter::next_opt(unsigned long long a0[14])
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a0[13] > a0[4])
    {
        v0 = &g_14e4a50;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e4a60); /* do not return */
    }
    return a0.wgetopt_inner(&v0);
}
