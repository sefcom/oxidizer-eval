long long uu_pr::get_line_for_printing::h8a9c61ca270edd26(struct_2 *a0, struct_1 *a1, unsigned long long a2[5], unsigned long a3, unsigned long long a4, unsigned long a5)
{
    char *v0;  // [sp-0x168]
    unsigned long long v1;  // [sp-0x160]
    char *v2;  // [sp-0x158], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v3;  // [sp-0x150]
    void* v4;  // [sp-0x148], Other Possible Types: struct struct_0 **
    unsigned long long v5;  // [sp-0x140]
    char *v6;  // [sp-0x138], Other Possible Types: unsigned long, unsigned long long
    char *v7;  // [bp-0x130]
    unsigned long long v8;  // [sp-0x128]
    char *v9;  // [sp-0x118]
    unsigned long long v10;  // [sp-0x108]
    char *v11;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0xf0]
    char *v13;  // [sp-0xe8], Other Possible Types: struct struct_0 **
    unsigned long long v14;  // [sp-0xe0]
    void* v15;  // [sp-0xd8]
    unsigned long v16;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v17;  // [sp-0xc0]
    unsigned long long v18;  // [sp-0xb8]
    void* v19;  // [sp-0xb0]
    unsigned long v20;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v21;  // [sp-0xa0], Other Possible Types: unsigned long long
    char *v22;  // [sp-0x98]
    char v23;  // [bp-0x90]
    char v24;  // [bp-0x80]
    char v25;  // [bp-0x78]
    char v26;  // [bp-0x68]
    char *v27;  // [sp-0x60]
    char *v28;  // [sp-0x58]
    struct struct_0 **v29;  // [sp-0x50]
    char v30;  // [bp-0x48]
    unsigned long long v31;  // [bp+0x8]
    char v32;  // [bp+0x10]
    unsigned long long v35;  // rbp
    char *v38;  // rdx
    char *v39;  // rdx
    char *v40;  // rax
    char *v41;  // rdx

    v16 = a3;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    uu_pr::get_formatted_line_number::hdc8b635f2fe32dc7(&v30, a1, a2[4], a4);
    core::result::Result$LT$T$C$E$GT$::unwrap::h1ac7a762ade089cc(a2[0] == 0x8000000000000000, v6);
    v6 = &a2[a2[0] == 0x8000000000000000];
    v11 = &v30;
    v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v13 = &v6;
    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    v0 = &g_46bf10;
    v1 = 2;
    v4 = 0;
    v2 = &v11;
    v3 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd();
    *((int128_t *)&v9) = *((int128_t *)&v23);
    v35 = *((long long *)&v24);
    v10 = v35;
    v20 = &a1->padding_0[168];
    v38 = &v17;
    if (a1->field_143)
        v39 = v38;
    else
        v39 = &a1->padding_0[192];
    v40 = v39;
    v21 = core::iter::traits::iterator::Iterator::fold::h9922291a76037142((&v9)[1], &((&v9)[1])[v35]) * 7 + v35;
    if (a4 + 1 != *((long long *)&v32))
        v41 = v40;
    else
        v41 = v38;
    v22 = v41;
    v27 = &v16;
    v28 = &v21;
    v29 = &v9;
    if (!a5)
    {
        v2 = *((long long *)&v24);
        *((int128_t *)&v0) = *((int128_t *)&v23);
        goto LABEL_5c8434;
    }
    else
    {
        uu_pr::get_line_for_printing::_$u7b$$u7b$closure$u7d$$u7d$::h3e398a0d38c95d65(&v0, &v27, v31);
        *((int128_t *)&v11) = *((int128_t *)&v1);
        v2 = v10;
        v0 = v9;
        if (v6 == 0x8000000000000000)
        {
LABEL_5c8434:
            v8 = v2;
            *((int128_t *)&v6) = *((int128_t *)&v0);
        }
        else
        {
            *((int128_t *)&v7) = *((int128_t *)&v11);
            v6 = v0;
            ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v0);
        }
    }
    v0 = &v20;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    v2 = &v6;
    v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &v22;
    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    v11 = &g_475660;
    v12 = 3;
    v15 = 0;
    v13 = &v0;
    v14 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd();
    ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v6);
    a0->field_10 = *((long long *)&v26);
    a0->field_0 = *((int128_t *)&v25);
    ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v30);
    return ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v17);
}
