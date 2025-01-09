double uu_ln::numbered_backup_path::h43f0286cb18b9b8f(long long a0, long long a1, long long a2)
{
    unsigned long v0;  // [sp-0x138], Other Possible Types: unsigned long long
    char v1;  // [bp-0x128]
    char v2;  // [bp-0x120]
    char v3;  // [bp-0x118]
    char *v4;  // [sp-0x110]
    unsigned long long v5;  // [sp-0x108]
    char v6;  // [bp-0x100]
    char v7;  // [bp-0xf0]
    int v8;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xe0]
    struct struct_1 **v10;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xd0]
    void* v12;  // [sp-0xc8]
    int v15;  // ymm0
    int v16;  // ymm0
    int v17;  // xmm0
    unsigned long long v19;  // rsi
    int v20;  // xmm0

    v0 = 1;
    while (true)
    {
        v15 = v16;
        v4 = &v0;
        v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v8 = &g_52d0f0;
        v9 = 2;
        v12 = 0;
        v10 = &v4;
        v11 = 1;
        ::0x4b8610::core::option::Option$LT$T$GT$::map_or_else::hf2027c020971d755();
        v17 = *((int128_t *)&v6);
        v8 = v17;
        v10 = *((long long *)&v7);
        uu_ln::simple_backup_path::hd90ca54508e22200(&v1, a1, a2, v9, *((long long *)&v7));
        ::0x4b7ad0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h903473fdb0d332f1(&v8);
        std::fs::metadata::hebad4fc3d3e825b8(&v8, *((long long *)&v2), *((long long *)&v3));
        v19 = v9;
        if (v8 == 2)
            break;
        ::0x4b84f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(v8, v19);
        v0 += 1;
        ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3();
        v16 = v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17;
    }
    ::0x4b84f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(2, v19);
    a0->field_10 = *((long long *)&v3);
    v20 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v20;
    return (unsigned long long)((v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20);
}
