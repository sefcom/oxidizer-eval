long long uu_dd::parseargs::show_zero_multiplier_warning::hbe4ec55817d90dd4(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa0]
    struct struct_0 **v2;  // [sp-0x98], Other Possible Types: struct struct_1 **
    unsigned long long v3;  // [sp-0x90]
    void* v4;  // [sp-0x88]
    void* v5;  // [sp-0x78], Other Possible Types: char *
    unsigned long long v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    char v8;  // [sp-0x60]
    void* v9;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x50]
    unsigned long long v11;  // [sp-0x48]
    char v12;  // [sp-0x40]
    struct struct_0 **v13;  // [sp-0x38]
    unsigned long long v14;  // [sp-0x30]
    char *v15;  // [sp-0x28]
    unsigned long long v16;  // [sp-0x20]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rsi

    v9 = uucore::util_name::h60d842bf27b05e82();
    v10 = v18;
    v5 = &v9;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
    v0 = &g_560e98;
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
    v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v15 = &v9;
    v16 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v0 = &g_560eb8;
    v1 = 3;
    v4 = 0;
    v2 = &v13;
    v3 = 2;
    return std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v18);
}
