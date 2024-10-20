long long uu_od::format_error_message::h2d99d3e6860d4a6d(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x70]
    unsigned long long v3;  // [sp-0x68]
    void* v4;  // [sp-0x60]
    unsigned long long v5;  // [sp-0x58]
    unsigned long long v6;  // [sp-0x50]
    char v7;  // [sp-0x48]
    unsigned long v8;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x38]
    unsigned long long v10;  // [sp-0x30]
    unsigned long long v11;  // [sp-0x28]
    void* v12;  // [sp-0x20]
    unsigned long v13;  // [sp-0x10], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x8]
    unsigned long long v16;  // rax

    v13 = a4;
    v14 = a5;
    if (!a1)
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v16 = &g_5032e8;
        goto LABEL_49813b;
    }
    else if (a1 != 1)
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v8 = &g_503328;
        v9 = 3;
    }
    else
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v16 = &g_503308;
LABEL_49813b:
        v8 = v16;
        v9 = 2;
    }
    v12 = 0;
    v10 = &v0;
    v11 = 2;
    return alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v8);
}
