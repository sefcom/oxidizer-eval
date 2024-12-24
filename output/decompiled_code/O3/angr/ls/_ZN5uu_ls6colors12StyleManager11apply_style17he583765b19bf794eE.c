long long uu_ls::colors::StyleManager::apply_style::he583765b19bf794e(struct_0 *a0, char a1[30], unsigned long long a2, unsigned long a3, unsigned long a4, unsigned int a5)
{
    int v0;  // [bp-0x108], Other Possible Types: char, unsigned long long
    char v1;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0xf8], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0xf0]
    unsigned long long v5;  // [sp-0xe8]
    unsigned long long v6;  // [sp-0xe0]
    unsigned long long v7;  // [sp-0xd8]
    unsigned long long v8;  // [sp-0xd0]
    void* v9;  // [sp-0xc0]
    unsigned long long v10;  // [sp-0xb8]
    void* v11;  // [sp-0xb0]
    int v12;  // [sp-0xa8]
    unsigned int v13;  // [sp-0x98]
    unsigned long v14;  // [sp-0x88], Other Possible Types: char
    int v15;  // [bp-0x87]
    unsigned long long v16;  // [sp-0x80]
    unsigned long v17;  // [bp-0x78]
    unsigned int v18;  // [sp-0x77]
    unsigned long long v19;  // [sp-0x70]
    void* v20;  // [sp-0x68]
    unsigned long v21;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x50]
    unsigned long v23;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x40]
    char v25;  // [bp-0x38]
    char v26;  // [bp-0x28]
    unsigned long long v28;  // rbp
    struct_1 *v29;  // rax
    unsigned long long v31;  // rdx

    v28 = a5;
    v21 = a3;
    v22 = a4;
    v9 = 0;
    v10 = 1;
    v11 = 0;
    if (a1[8] == 2)
    {
        v29 = uu_ls::colors::StyleManager::get_normal_style::h5f48133501fc0fae(a1);
        if (v29)
        {
            v13 = *((int *)((char *)&v29->field_1 + 1));
            *((int128_t *)&v12) = *((int128_t *)&(&v29->field_0)[1]);
            if (v14 != 2)
            {
                v14 = v29->field_0;
                v15 = v12;
                v18 = v13;
                uu_ls::colors::StyleManager::get_style_code::h05a2e58646b8596a(&v0, a1, &v14);
                ::0x53afa0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v9, ::0x53ae40::core::slice::iter::Iter$LT$T$GT$::make_slice::h22edc543dc0ffceb(*((long long *)&v1), v3 + *((long long *)&v1)), v31);
                ::0x53aaa0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v0);
            }
        }
    }
    if (a2)
    {
        if (!(char)uu_ls::colors::StyleManager::is_current_style::h8313cc96bd609aee(a1, a2))
        {
            uu_ls::colors::StyleManager::reset::h8b3d7ca1b35fbf3a(&v0, a1, -0x100 | !a1[29]);
            ::0x53afa0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v9, ::0x53ae40::core::slice::iter::Iter$LT$T$GT$::make_slice::h22edc543dc0ffceb(*((long long *)&v1), v3 + *((long long *)&v1)), v31);
            ::0x53aaa0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v0);
            uu_ls::colors::StyleManager::get_style_code::h05a2e58646b8596a(&v0, a1, a2);
            ::0x53afa0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v9, ::0x53ae40::core::slice::iter::Iter$LT$T$GT$::make_slice::h22edc543dc0ffceb(*((long long *)&v1), v3 + *((long long *)&v1)), v31);
            ::0x53aaa0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v0);
            goto LABEL_53b941;
        }
    }
    else
    {
        if (!(uu_ls::colors::StyleManager::get_normal_style::h5f48133501fc0fae(a1)) || !((char)v0 != 2) || !((char)uu_ls::colors::StyleManager::is_current_style::h8313cc96bd609aee(a1, &v0)))
        {
LABEL_53b941:
        }
        else
        {
            uu_ls::colors::StyleManager::reset::h8b3d7ca1b35fbf3a(&v0, a1, 0);
            ::0x53afa0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v9, ::0x53ae40::core::slice::iter::Iter$LT$T$GT$::make_slice::h22edc543dc0ffceb((long long)(&v0)[8], v3 + (long long)(&v0)[8]), v31);
            ::0x53aaa0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v0);
        }
    }
    *((int *)&v23) = ((v28 & 255 & 255) ? &g_436f14 : 1);
    v24 = (v28 & 4294967295) * 3;
    uu_ls::colors::StyleManager::reset::h8b3d7ca1b35fbf3a(&v12, a1, 1);
    v0 = &v9;
    v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v3 = &v21;
    v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
    v5 = &v12;
    v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v7 = &v23;
    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
    v14 = &g_436f18;
    v16 = 4;
    v20 = 0;
    v17 = &v0;
    v19 = 4;
    ::0x53ae50::core::option::Option$LT$T$GT$::map_or_else::h4ac335b83d8d44c4(&v25, &v14);
    ::0x53aaa0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v12);
    a0->field_10 = *((long long *)&v26);
    a0->field_0 = *((int128_t *)&v25);
    return ::0x53aaa0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
}
