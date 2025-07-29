long long uu_touch::get_year(unsigned long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a1 <= 1)
    {
        v0 = v2;
        core::panicking::panic_bounds_check(a1 - 2, a1, &g_770378); /* do not return */
    }
    return *((char *)(a0 + a1 - 2)) * 2 * 5 & 0xffffff00 | *((char *)(a0 + a1 - 2)) * 10 + *((char *)(a0 + a1 - 1)) - 16;
}
