double _ZN5uu_od9prn_float17format_item_flo3217h11ffc10f1bd70a14E.llvm.13072642883736753861(long long a0)
{
    char *v0;  // [sp-0x80]
    unsigned long long v1;  // [sp-0x78]
    char v2;  // [bp-0x70]
    char v3;  // [bp-0x60]
    unsigned long v4;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x50]
    struct struct_0 **v6;  // [sp-0x48]
    unsigned long long v7;  // [sp-0x40]
    void* v8;  // [sp-0x38]
    char v9;  // [bp-0x28]
    int v11;  // xmm0
    int v12;  // ymm0

    uu_od::prn_float::format_flo32::h9997a42b85d61a4b(&v9);
    v0 = &v9;
    v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &g_542038;
    v5 = 1;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    ::0x4d4a70::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(&v2, &v4);
    ::0x4d49e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v9);
    a0->field_10 = *((long long *)&v3);
    v11 = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v11;
    return (unsigned long long)(v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11);
}
