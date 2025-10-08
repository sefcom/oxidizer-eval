long long fish::wutil::wstr_offset_in(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    unsigned long v5;  // cc_ndep

    if (a2 <= a0 && a0 + a1 * 4 <= a2 + a3 * 4)
    {
        if (!((char)_ccall(8, 36, a0 - a2 >> 2, a0 - a2 >> 1, v5)))
            return a0 - a2 >> 2;
        v0 = &g_14c17e8;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14c1810); /* do not return */
    }
    v0 = &g_14c17d8;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    core::panicking::panic_fmt(&v0, &g_14c17f8); /* do not return */
}
