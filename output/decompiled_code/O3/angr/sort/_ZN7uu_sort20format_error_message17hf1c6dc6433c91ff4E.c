long long uu_sort::format_error_message::hf1c6dc6433c91ff4(unsigned long long a0, unsigned long long *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x80]
    unsigned long long v2;  // [sp-0x78]
    unsigned long long v3;  // [sp-0x70]
    void* v4;  // [sp-0x68]
    unsigned long long v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    char v7;  // [sp-0x50]
    unsigned long v8;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v11;  // [sp-0x30]
    void* v12;  // [sp-0x28]
    unsigned long v13;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x10]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    v13 = a4;
    v14 = a5;
    v16 = *(a1);
    if (!v16)
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4457453889067c9e;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v17 = &g_5ff4c8;
        goto LABEL_523ebc;
    }
    else if ((unsigned int)v16 != 1)
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4457453889067c9e;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v8 = &g_5ff508;
        v9 = 3;
    }
    else
    {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4457453889067c9e;
        v2 = &v4;
        v3 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v17 = &g_5ff4e8;
LABEL_523ebc:
        v8 = v17;
        v9 = 2;
    }
    v12 = 0;
    v10 = &v0;
    v11 = 2;
    ::0x51b950::core::option::Option$LT$T$GT$::map_or_else::hf7c47f284adcb320(a0, &v8);
    return a0;
}
