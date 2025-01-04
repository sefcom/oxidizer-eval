long long uu_cp::file_mode_for_interactive_overwrite::h819430914012e276(unsigned long long a0[6], unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x16c]
    char *v1;  // [sp-0x168]
    unsigned long long v2;  // [sp-0x160]
    unsigned long long v3;  // [sp-0x158]
    char *v4;  // [bp-0x148], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x138], Other Possible Types: unsigned long long
    char *v6;  // [sp-0x130], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x128]
    struct struct_0 **v8;  // [sp-0x120], Other Possible Types: unsigned long long
    char v9;  // [sp-0x118]
    unsigned long v10;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x100]
    struct struct_0 **v12;  // [sp-0xf8]
    unsigned long long v13;  // [sp-0xf0]
    char *v14;  // [sp-0xe8]
    unsigned long long v15;  // [sp-0xe0]
    char v16;  // [bp-0xd8]
    char v17;  // [bp-0xc8]
    char v18;  // [bp-0xc0]
    char v19;  // [bp-0x88]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbp
    char *v23;  // xmm0

    std::fs::metadata::h003d8cdbffde7c56(&v18, a1, a2);
    if (*((int *)&v18) == 2)
    {
        a0[0] = 0x8000000000000000;
        v21 = ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v18);
        return v21;
    }
    v22 = *((int *)&v19);
    if ((char)v22 < 0)
    {
        a0[0] = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = (unsigned int)v22 & 3967;
    v1 = &v0;
    v2 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::hf46ebcb02778fa65;
    v4 = 2;
    v5 = 0;
    v6 = 4;
    v7 = 0;
    v8 = 34359738400;
    v9 = 3;
    v10 = &g_41e7f0;
    v11 = 1;
    v14 = &v4;
    v15 = 1;
    v12 = &v1;
    v13 = 1;
    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v16, &v10);
    *((int128_t *)&v1) = *((int128_t *)&v16);
    v3 = *((long long *)&v17);
    uucore::features::fs::display_permissions_unix::ha124e9a87900f11e(&v10, v22 & 4294967295, 0);
    v5 = v3;
    v23 = *((int128_t *)&v1);
    v4 = v23;
    *((int128_t *)&v6) = *((int128_t *)&v10);
    v8 = v12;
    a0[4] = v7;
    a0[5] = v8;
    a0[2] = v5;
    v21 = v6;
    a0[3] = v21;
    a0[0] = v23;
    return v21;
}
