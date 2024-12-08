long long uu_dd::parseargs::show_zero_multiplier_warning::h1d7f9d07b1d322f6(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa0]
    unsigned long long v2;  // [sp-0x98]
    unsigned long long v3;  // [sp-0x90]
    void* v4;  // [sp-0x88]
    void* v5;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    char v8;  // [sp-0x60]
    void* v9;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x50]
    unsigned long long v11;  // [sp-0x48]
    char v12;  // [sp-0x40]
    unsigned long v13;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x30]
    unsigned long long v15;  // [sp-0x28]
    unsigned long long v16;  // [sp-0x20]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rsi

    v9 = uucore::util_name::h412db5e565a079f3();
    v10 = v18;
    v5 = &v9;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h54a2e53495620de4;
    v0 = &g_561768;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v18);
    v5 = 0;
    v6 = "0x";
    v7 = 2;
    v8 = 1;
    v9 = 0;
    v10 = "00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs";
    v11 = 3;
    v12 = 1;
    v13 = &v5;
    v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v15 = &v9;
    v16 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v0 = &g_561788;
    v1 = 3;
    v4 = 0;
    v2 = &v13;
    v3 = 2;
    return std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v18);
}
