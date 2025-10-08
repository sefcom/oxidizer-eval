long long fish::color::Color::try_parse_named(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v0 = v2;
    if (((char)core::slice::<impl [T]>::binary_search_by(a0, a1) & 1))
    {
        return 4;
    }
    else if (v3 < 22)
    {
        return (&g_14d5708)[16 + 24 * v3] * 0x100 + 1;
    }
    else
    {
        core::panicking::panic_bounds_check(22, 22, &g_14d59d8); /* do not return */
    }
}
