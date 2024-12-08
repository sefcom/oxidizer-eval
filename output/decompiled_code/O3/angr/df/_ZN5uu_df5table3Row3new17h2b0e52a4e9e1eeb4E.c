double uu_df::table::Row::new::h2b0e52a4e9e1eeb4(long long a0)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x60]
    int v2;  // [sp-0x58]
    unsigned long long v3;  // [sp-0x48]
    int v4;  // [sp-0x38]
    unsigned long long v5;  // [sp-0x28]
    unsigned long long v6;  // [sp-0x20]
    char v7;  // [bp-0x10]
    int v9;  // xmm0
    int v10;  // xmm0
    int v11;  // xmm0
    int v12;  // xmm0
    int v13;  // ymm0

    v6 = 0x8000000000000000;
    ::0x4ca5f0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc16753352a2893e5(&v0, "total%", 5);
    v3 = *((long long *)&v1);
    v9 = *((int128_t *)&v0);
    v2 = v9;
    ::0x4ca5f0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc16753352a2893e5(&v0, "-", 1);
    v5 = *((long long *)&v1);
    v10 = *((int128_t *)&v0);
    v4 = v10;
    ::0x4ca5f0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc16753352a2893e5(&v0, "-", 1);
    *((long long *)&a0->field_80) = *((long long *)&v1);
    v11 = *((int128_t *)&v0);
    *((void*)&a0->field_78) = v11;
    (&a0->field_90)[1] = *((long long *)&v7);
    v12 = *((int128_t *)&v6);
    *((void*)((char *)&a0->field_80 + 8)) = v12;
    a0->field_60 = v3;
    *((void*)&a0->field_50) = v2;
    *((void*)&(&a0->field_60)[1]) = v4;
    *((unsigned long long *)((char *)&a0->field_68 + 8)) = v5;
    a0->field_0 = 0;
    a0->field_10 = 0;
    a0->field_20 = 0;
    a0->field_30 = 0;
    a0->field_40 = 0;
    a0->field_98 = 0;
    a0->field_a8 = 0;
    return (unsigned long long)(v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v4 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000);
}
