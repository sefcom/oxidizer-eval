long long uu_od::prn_float::format_flo32::h9997a42b85d61a4b()
{
    unsigned int v0;  // [sp-0x8c]
    char *v1;  // [sp-0x88]
    unsigned long long v2;  // [sp-0x80]
    unsigned long long v3;  // [sp-0x78]
    void* v4;  // [sp-0x70]
    unsigned long long v5;  // [sp-0x68]
    unsigned long long v6;  // [sp-0x60]
    struct struct_0 **v7;  // [sp-0x58]
    unsigned long long v8;  // [sp-0x50]
    char *v9;  // [sp-0x48]
    unsigned long long v10;  // [sp-0x40]
    unsigned long long v11;  // [sp-0x38]
    unsigned long long v12;  // [sp-0x28]
    unsigned long long v13;  // [sp-0x20]
    void* v14;  // [sp-0x18]
    unsigned long long v15;  // [sp-0x10]
    char v16;  // [sp-0x8]
    unsigned int v18;  // ymm0
    int v19;  // ymm1
    int v20;  // ymm0
    int v21;  // ymm1
    unsigned long long v22;  // rdi

    v0 = v18;
    v21 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 & (uint128_t)v20;
    if (!(((char)((CmpF((unsigned long long)v21, 0x7f800000) & 69) >> 6) & 1) != 1 && (unsigned int)v21 && !((unsigned int)v20 & 0x7f800000)))
        return uu_od::prn_float::format_float::h341a0cfde1a47520(v22, 14, 8);
    v1 = &v0;
    v2 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f32$GT$::fmt::h814b1cab8d475c50;
    v3 = 14;
    v4 = 0;
    v11 = 2;
    v12 = 1;
    v13 = 1;
    v14 = 0;
    v15 = 32;
    v16 = 3;
    v5 = &g_40dad0;
    v6 = 1;
    v9 = &v11;
    v10 = 1;
    v7 = &v1;
    v8 = 2;
    return ::0x4d4a70::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf();
}
