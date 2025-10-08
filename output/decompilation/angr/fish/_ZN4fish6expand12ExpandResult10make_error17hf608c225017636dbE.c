long long fish::expand::ExpandResult::make_error(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (!a0)
    {
        v0 = &g_14d8038;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d8048); /* do not return */
    }
    return a0;
}
