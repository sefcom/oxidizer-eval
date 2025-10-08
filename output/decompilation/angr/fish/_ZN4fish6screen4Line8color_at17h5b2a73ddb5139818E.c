long long fish::screen::Line::color_at(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long v0;  // [bp-0x8]

    if (a1 >= a0[2])
    {
        v0 = a0[2];
        core::panicking::panic_bounds_check(a1, v0, &g_14e15e8); /* do not return */
    }
    return *((int *)(a0[1] + a1 * 24 + 20));
}
