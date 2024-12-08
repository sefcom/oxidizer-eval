long long uu_sort::KeySettings::check_compatibility::h539fc7a8f175034f(unsigned long long *a0, unsigned int *a1, char a2, char a3)
{
    unsigned int v0;  // [sp-0x54]
    unsigned long v1;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x40]
    unsigned long long v4;  // [sp-0x38]
    unsigned long v5;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x28]
    unsigned long long v7;  // [sp-0x20]
    unsigned long long v8;  // [sp-0x18]
    void* v9;  // [sp-0x10]
    unsigned long long v11;  // rax

    if ((a1 & 255) > 3)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    if (a3)
    {
        v0 = *((int *)(4344448 + 4 * (a1 & 4294967295)));
        v11 = "d";
    }
    else if (a2)
    {
        v0 = *((int *)(4344448 + 4 * (a1 & 4294967295)));
        v11 = "i";
    }
    else
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v1 = v11;
    v2 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
    v3 = &v0;
    v4 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
    v5 = &g_5fed50;
    v6 = 3;
    v9 = 0;
    v7 = &v1;
    v8 = 2;
    return ::0x51b950::core::option::Option$LT$T$GT$::map_or_else::hf7c47f284adcb320(a0, &v5);
}
