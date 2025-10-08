long long fish::wcstringutil::count_preceding_backslashes(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    char v3;  // [bp-0x18], Other Possible Types: uint128_t

    if (a2 > a1)
    {
        v0 = &g_14e49c8;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e49d8); /* do not return */
    }
    v0 = a0;
    v1 = a0 + a1 * 4;
    v2 = a2;
    v3 = 0;
    return v0.fold();
}
