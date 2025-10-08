long long fish::env::var::ElectricVar::for_name(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v0 = v2;
    if (((char)core::slice::<impl [T]>::binary_search_by(a0, a1) & 1))
    {
        return 0;
    }
    else if (v3 <= 13)
    {
        return &(&g_14d6968)[24 * v3];
    }
    else
    {
        core::panicking::panic_bounds_check(14, 14, &g_14d6e20); /* do not return */
    }
}
