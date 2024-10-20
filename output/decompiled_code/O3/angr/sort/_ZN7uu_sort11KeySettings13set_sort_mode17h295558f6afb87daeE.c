long long uu_sort::KeySettings::set_sort_mode::h295558f6afb87dae(unsigned long long a0[3], char a1[6], unsigned int a2)
{
    unsigned int v0;  // [sp-0x78]
    unsigned int v1;  // [sp-0x74]
    unsigned long long v2;  // [sp-0x70], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x68]
    unsigned long v4;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x58]
    void* v6;  // [sp-0x50]
    unsigned long v7;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x38]
    unsigned long long v9;  // [sp-0x30]
    unsigned long long v10;  // [sp-0x28]
    unsigned int *v12;  // rbx
    unsigned int *v13;  // rax
    unsigned long long v14;  // rax

    v12 = a2;
    v13 = a1[5];
    if (v13 != 6 && (char)v13 != (char)v12)
    {
        v0 = *((int *)(4365832 + 0x4 * v13));
        v1 = *((int *)(4365832 + 4 * (v12 & 255)));
        v7 = &v0;
        v8 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        v9 = &v1;
        v10 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        v2 = &g_5928c0;
        v3 = 3;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        v14 = alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v2);
        return v14;
    }
    v14 = uu_sort::KeySettings::check_compatibility::h3d85f1f4827fb631(&v2, v12 & 4294967295, a1[3], a1[2]);
    if (v2 != 0x8000000000000000)
    {
        v14 = v4;
        a0[2] = v14;
        *((int128_t *)&a0[0]) = *((int128_t *)&v2);
        return v14;
    }
    a1[5] = (char)v12;
    a0[0] = 0x8000000000000000;
    return v14;
}
