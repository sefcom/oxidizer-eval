long long uu_pr::get_line_for_printing::hb3d52bb8370ed6ee(struct_0 *a0, struct_1 *a1, unsigned long long a2[5], unsigned long a3, unsigned long long a4, unsigned long a5)
{
    int v0;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x160]
    unsigned long long v2;  // [sp-0x158]
    unsigned long long v3;  // [sp-0x150]
    void* v4;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x140]
    int v6;  // [sp-0x138], Other Possible Types: unsigned long, unsigned long long
    int v7;  // [bp-0x130]
    unsigned long long v8;  // [sp-0x128]
    int v9;  // [sp-0x118]
    unsigned long long v10;  // [sp-0x108]
    int v11;  // [sp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0xf0]
    unsigned long long v13;  // [sp-0xe8]
    unsigned long long v14;  // [sp-0xe0]
    void* v15;  // [sp-0xd8]
    unsigned long v16;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v17;  // [sp-0xc0]
    unsigned long long v18;  // [sp-0xb8]
    void* v19;  // [sp-0xb0]
    unsigned long v20;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v21;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long v22;  // [sp-0x98], Other Possible Types: unsigned long long
    char v23;  // [bp-0x90]
    char v24;  // [bp-0x80]
    char v25;  // [bp-0x78]
    char v26;  // [bp-0x68]
    unsigned long v27;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x58]
    unsigned long long v29;  // [sp-0x50]
    char v30;  // [bp-0x48]
    unsigned long long v31;  // [bp+0x8]
    char v32;  // [bp+0x10]
    unsigned long long v35;  // rbp
    unsigned long long v36;  // rdx
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rax
    unsigned long long v42;  // rdx

    v16 = a3;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    uu_pr::get_formatted_line_number::h59148747216e7780(&v30, a1, a2[4], a4);
    core::result::Result$LT$T$C$E$GT$::unwrap::h69d618200eff15d3(-0x100 | a2[0] == 0x8000000000000000, v6);
    v6 = &a2[-0x100 | a2[0] == 0x8000000000000000];
    v11 = &v30;
    v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v13 = &v6;
    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdcc5ea12f14f5b72;
    v0 = &g_46c020;
    v1 = 2;
    v4 = 0;
    v2 = &v11;
    v3 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h1b0ef2f624a6aa37(&v23, &v0);
    *((int128_t *)&v9) = *((int128_t *)&v23);
    v35 = *((long long *)&v24);
    v10 = v35;
    v20 = &a1->padding_0[168];
    v39 = &v17;
    if (a1->field_143)
        v40 = v39;
    else
        v40 = &a1->padding_0[192];
    v41 = v40;
    v21 = core::iter::traits::iterator::Iterator::fold::hf291770222e187ba((long long)(&v9)[8], (long long)(&v9)[8] + v35, v36) * 7 + v35;
    if (a4 + 1 != *((long long *)&v32))
        v42 = v41;
    else
        v42 = v39;
    v22 = v42;
    v27 = &v16;
    v28 = &v21;
    v29 = &v9;
    if (!a5)
    {
        v2 = *((long long *)&v24);
        *((int128_t *)&v0) = *((int128_t *)&v23);
        goto LABEL_5c78e4;
    }
    else
    {
        uu_pr::get_line_for_printing::_$u7b$$u7b$closure$u7d$$u7d$::hd95e5058ee5a5157(&v0, &v27, v31);
        *((int128_t *)&v11) = *((int128_t *)&v1);
        v2 = v10;
        v0 = v9;
        if (v6 == 0x8000000000000000)
        {
LABEL_5c78e4:
            v8 = v2;
            *((int128_t *)&v6) = (int128_t)v0;
        }
        else
        {
            *((int128_t *)&v7) = (int128_t)v11;
            v6 = v0;
            ::0x5bf160::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hed0b916b044e1f09(&v0);
        }
    }
    v0 = &v20;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdcc5ea12f14f5b72;
    v2 = &v6;
    v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &v22;
    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdcc5ea12f14f5b72;
    v11 = &g_475770;
    v12 = 3;
    v15 = 0;
    v13 = &v0;
    v14 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h1b0ef2f624a6aa37(&v25, &v11);
    ::0x5bf160::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hed0b916b044e1f09(&v6);
    a0->field_10 = *((long long *)&v26);
    a0->field_0 = *((int128_t *)&v25);
    ::0x5bf160::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hed0b916b044e1f09(&v30);
    return ::0x5bf160::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hed0b916b044e1f09(&v17);
}
