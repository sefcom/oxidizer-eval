long long uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long v0;  // [sp-0x118]
    unsigned long v1;  // [sp-0x110]
    char *v2;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x100]
    char *v4;  // [sp-0xf8]
    unsigned long long v5;  // [sp-0xf0]
    char *v6;  // [sp-0xe8]
    unsigned long long v7;  // [sp-0xe0]
    unsigned long long v8;  // [sp-0xd8], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0xd0]
    char *v10;  // [sp-0xc8]
    unsigned long long v11;  // [sp-0xc0]
    void* v12;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    unsigned long long v13;  // [sp-0xb0]
    struct struct_0 **v14;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    unsigned long long v15;  // [sp-0xa0]
    void* v16;  // [sp-0x98]
    unsigned long long v17;  // [sp-0x90]
    char v18;  // [sp-0x88]
    unsigned long long v19;  // [sp-0x80]
    unsigned long long v20;  // [sp-0x70]
    unsigned long long v21;  // [sp-0x60]
    unsigned long long v22;  // [sp-0x58]
    char v23;  // [sp-0x50]
    int v24;  // [sp-0x40]
    int v26;  // xmm0
    int v27;  // ymm0
    int v28;  // ymm1
    int v29;  // ymm1
    int v30;  // xmm1

    uu_dd::numbers::SuffixType::base_and_suffix::he90531716fe26654(&v12, a3, a1, a2);
    v26 = *((int128_t *)&v14);
    v24 = v26;
    __floatuntidf(a1, a2);
    v0 = (unsigned long long)(v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26);
    __floatuntidf(v12, v13);
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v0;
    v30 = DivV((uint128_t)v29, v26);
    v1 = (unsigned long long)(v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30);
    if ((((char)(CmpF(0x4024000000000000, v1) & 69) | (char)((CmpF(0x4024000000000000, v1) & 69) >> 6)) & 1) != 1)
    {
        v8 = &v1;
        v9 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v10 = &v24;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        v12 = 0;
        v13 = 1;
        v14 = 2;
        v16 = 0;
        v17 = 32;
        v18 = 3;
        v19 = 2;
        v20 = 2;
        v21 = 1;
        v22 = 32;
        v23 = 3;
        v2 = &g_561a88;
        v3 = 2;
        v6 = &v12;
        v7 = 2;
        v4 = &v8;
        v5 = 2;
    }
    else
    {
        round(v0);
        v8 = v0 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x4024000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
        v2 = &v8;
        v3 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v4 = &v24;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        v12 = &g_561a88;
        v13 = 2;
        v16 = 0;
        v14 = &v2;
        v15 = 2;
    }
    ::0x4e30c0::core::option::Option$LT$T$GT$::map_or_else::hc1b70357c4d75658();
    return a0;
}
