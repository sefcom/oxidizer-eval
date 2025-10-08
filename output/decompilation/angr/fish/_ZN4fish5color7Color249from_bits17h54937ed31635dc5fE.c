long long fish::color::Color24::from_bits(unsigned int a0)
{
    unsigned int v0;  // [bp-0x34]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    uint128_t v4;  // [bp-0x18]

    v0 = a0 >> 24;
    if (a0 > 16777215)
    {
        v1 = &g_14d5650;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::assert_failed(0, &v0, &g_550cf8, &v1, &g_14d5660); /* do not return */
    }
    return (a0 & &g_ff0000) >> 16 | a0 & 0xff00 | a0 * 0x10000;
}
