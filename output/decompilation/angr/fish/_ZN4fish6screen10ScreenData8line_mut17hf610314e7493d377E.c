long long fish::screen::ScreenData::line_mut(unsigned long long a0[5], unsigned long long a1)
{
    unsigned long v0;  // [bp-0x8]

    if (a1 >= a0[4])
    {
        v0 = a0[4];
        core::panicking::panic_bounds_check(a1, v0, &g_14e16f0); /* do not return */
    }
    return a1 * 40 + a0[3];
}
