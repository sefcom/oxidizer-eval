long long fish::screen::ScreenData::add_line(unsigned long long a0[5])
{
    void* v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    uint128_t v2;  // [bp-0x20]
    char v3;  // [bp-0x10]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 0;
    a0[2].push(&v0);
    if (!a0[4])
        core::option::unwrap_failed(&g_14e1660); /* do not return */
    return a0[3] + a0[4] * 40 - 40;
}
