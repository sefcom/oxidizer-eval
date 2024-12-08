long long uu_cat::cat_files::h4ddececc589175a4(unsigned long a0, unsigned long a1, void* a2)
{
    int v0;  // [sp-0x248], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x240]
    unsigned long long v2;  // [sp-0x238]
    unsigned long long v3;  // [sp-0x230]
    void* v4;  // [sp-0x220], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x218]
    unsigned long long v6;  // [sp-0x210]
    char v7;  // [sp-0x208]
    void* v8;  // [sp-0x200]
    unsigned long long v9;  // [sp-0x1f8]
    void* v10;  // [sp-0x1f0]
    unsigned long long v11;  // [sp-0x1e8]
    unsigned short v12;  // [sp-0x1e0]
    char v13;  // [sp-0x1de]
    unsigned long v14;  // [sp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x1d0]
    int v16;  // [sp-0x1c8]
    unsigned long long v17;  // [sp-0x1b8]
    char v18;  // [bp-0x1b0]
    char v19;  // [bp-0x1a0]
    int v20;  // [bp-0x198], Other Possible Types: char, unsigned long, unsigned long long
    char v21;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x188]
    int v23;  // [bp-0x180], Other Possible Types: unsigned int, unsigned long long
    void* v24;  // [sp-0x178]
    char v25;  // [bp-0xf8]
    char v26;  // [bp-0xe8]
    char v27;  // [bp-0xe0]
    unsigned long long v28;  // [sp-0xc8]
    char v29;  // [bp-0xc0]
    unsigned long long v31;  // rdx
    unsigned long long v32[3];  // rax
    int v33;  // ymm0
    unsigned long long v34;  // r15
    unsigned long long v35;  // r12
    unsigned long long v38[2];  // rax
    int v39;  // xmm0
    unsigned long long v40;  // rsi
    void* v41;  // rbx
    unsigned long long v42;  // rbx

    v4 = std::io::stdio::stdout::h077da66234850927();
    uucore::features::fs::FileInformation::from_file::hc95f6dfe9c572561(&v20, &v4, v31);
    if (!v20)
    {
        memcpy(&v29, &v21, 144);
        v28 = 1;
    }
    else
    {
        v28 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hb965fc295d8f8e8d(&v20);
    }
    v11 = 1;
    v12 = 1;
    v13 = 0;
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v14 = a0;
    v15 = a0 + a1 * 24;
    v32 = ::0x4ae4f0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h799b2144c869d22e(&v14);
    if (v32)
    {
        do
        {
            v34 = v32[1];
            v35 = v32[2];
            uu_cat::cat_path::h7560a8ba43ea5165(&v18, v34, v35, a2, &v11, v38);
            if (*((long long *)&v18) != 9223372036854775814)
            {
                v17 = *((long long *)&v19);
                v39 = *((int128_t *)&v18);
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                v16 = v39;
                v4 = 0;
                v5 = v34;
                v6 = v35;
                v7 = 0;
                v0 = &v4;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v2 = &v16;
                v3 = _$LT$uu_cat..CatError$u20$as$u20$core..fmt..Display$GT$::fmt::h59c99a43d4bfa339;
                v20 = &g_5190d8;
                v21 = 2;
                v24 = 0;
                v22 = &v0;
                v23 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h24d68d39ebdd82bc(&v27, &v20);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h78a8ffe1a532e7d2(&v8, &v27, v31);
                core::ptr::drop_in_place$LT$uu_cat..CatError$GT$::hacb58074f5c1b713(&v16);
            }
            v32 = ::0x4ae4f0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h799b2144c869d22e(&v14);
        } while (v32);
        if (*((char *)&v12 + 1))
        {
            v20 = &g_519000;
            v21 = 1;
            v22 = 8;
            *((int128_t *)&v23) = 0;
            std::io::stdio::_print::he918bceb0c89db46(&v20, v40, v31);
        }
    }
    if (!v10)
    {
        v41 = 0;
    }
    else
    {
        v4 = uucore::util_name::h412db5e565a079f3();
        v5 = v31;
        v0 = &v4;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d8376407766cd6c;
        v20 = &g_519010;
        v21 = 2;
        v24 = 0;
        v22 = &v0;
        v23 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h24d68d39ebdd82bc(&v25, &v20);
        *((int128_t *)&v0) = *((int128_t *)&v25);
        v2 = *((long long *)&v26);
        v42 = v10;
        alloc::str::join_generic_copy::h7565c49bea742877(&v4, v9, v42, v1, *((long long *)&v26));
        v22 = v6;
        *((int128_t *)&v20) = *((int128_t *)&v4);
        v23 = v42;
        v41 = alloc::boxed::Box$LT$T$GT$::new::h9772c6555d1c3153(&v20);
        ::0x4ad720::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h883b7022ce3b7899(&v0);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4fb7fa1618b0b981(&v8);
    return v41;
}
