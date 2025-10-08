long long fish::color::Color::to_term256_index(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if ((char)a0 != 2)
    {
        v0 = &g_14d56a0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d56b0); /* do not return */
    }
    return fish::color::term256_color_for_rgb((a0 & 4294967295) >> 8 & 4294967295);
}
