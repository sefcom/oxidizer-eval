long long fish::parse_util::Parentheses::closing(unsigned long long a0[3])
{
    unsigned long long v0;  // [bp-0x8]

    if (a0[1] < a0[2])
    {
        v0 = a0[1] - a0[2];
        core::panicking::panic_const::panic_const_sub_overflow(&g_14dd660); /* do not return */
    }
    return v0;
}
