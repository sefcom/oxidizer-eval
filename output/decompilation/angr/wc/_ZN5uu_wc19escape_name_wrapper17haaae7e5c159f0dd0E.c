long long uu_wc::escape_name_wrapper(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    int v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x18]
    unsigned long long v7;  // 4106
    unsigned long long v8;  // rcx
    unsigned long v9;  // cc_ndep

    uucore::features::quoting_style::escape_name(&v4, a1, a2, &g_41a13f);
    v0.from_utf8(&v4);
    v7 = v0;
    v8 = ((0 ^ v7) & (0 ^ -(v7))) >> 63 & 255;
    v5 = *((long long *)&(&v2)[8 * v8]);
    *((int128_t *)&v1) = *((int128_t *)&(&v0)[8 * v8]);
    v3 = v5;
    v0 = _ccall(1, 8, 0, v7, v9) & 255;
    a0.expect(&v0, &g_4f9300);
    return a0;
}
