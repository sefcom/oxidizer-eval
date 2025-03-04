long long uu_pr::get_line_for_printing::h8a9c61ca270edd26(struct_2 *a0, struct_0 *a1, unsigned long long a2[5], unsigned long a3, unsigned long long a4, unsigned long a5, unsigned long long a6, unsigned long a7)
{
    char *v0;  // [sp-0x168]
    char *v1;  // [bp-0x168]
    unsigned long long v2;  // [sp-0x160]
    char *v3;  // [sp-0x158], Other Possible Types: struct struct_1 **, unsigned long long
    unsigned long long v4;  // [sp-0x150]
    void* v5;  // [sp-0x148], Other Possible Types: struct struct_1 **
    unsigned long long v6;  // [sp-0x140]
    char *v7;  // [sp-0x138]
    unsigned long v8;  // [sp-0x138]
    unsigned long long v9;  // [sp-0x128]
    char *v10;  // [sp-0x118]
    unsigned long long v11;  // [sp-0x108]
    char *v12;  // [bp-0xf8]
    unsigned long long v13;  // [sp-0xf0]
    char *v14;  // [sp-0xe8], Other Possible Types: struct struct_1 **
    unsigned long long v15;  // [sp-0xe0]
    void* v16;  // [sp-0xd8]
    unsigned long v17;  // [sp-0xc8]
    void* v18;  // [sp-0xc0]
    unsigned long long v19;  // [sp-0xb8]
    void* v20;  // [sp-0xb0]
    unsigned long v21;  // [sp-0xa8]
    unsigned long v22;  // [sp-0xa0]
    char *v23;  // [sp-0x98]
    char v24;  // [bp-0x90]
    char v25;  // [bp-0x80]
    char v26;  // [bp-0x78]
    char v27;  // [bp-0x68]
    char *v28;  // [sp-0x60]
    char *v29;  // [sp-0x58]
    struct struct_1 **v30;  // [sp-0x50]
    char v31;  // [bp-0x48]
    unsigned long long v33;  // rbp
    char *v35;  // rax

    v17 = a3;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    uu_pr::get_formatted_line_number::hdc8b635f2fe32dc7(&v31, a1, a2[4], a4);
    core::result::Result$LT$T$C$E$GT$::unwrap::h1ac7a762ade089cc(a2[0] == 0x8000000000000000, v8);
    v8 = &a2[a2[0] == 0x8000000000000000];
    v12 = &v31;
    v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v14 = &v8;
    v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    v0 = &g_46bf10;
    v2 = 2;
    v5 = 0;
    v3 = &v12;
    v4 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&v24, &v0);
    *((int128_t *)&v10) = *((int128_t *)&v24);
    v33 = *((long long *)&v25);
    v11 = v33;
    v21 = &a1->padding_0[168];
    v35 = &a1->padding_0[192];
    if (a1->field_143)
        v35 = &v18;
    v22 = core::iter::traits::iterator::Iterator::fold::h9922291a76037142((&v10)[1], &((&v10)[1])[v33]) * 7 + v33;
    if (a4 + 1 == a7)
        v35 = &v18;
    v23 = v35;
    v28 = &v17;
    v29 = &v22;
    v30 = &v10;
    if (!a5)
    {
        v3 = *((long long *)&v25);
        *((int128_t *)&v1) = *((int128_t *)&v24);
        goto LABEL_5c8434;
    }
    else
    {
        uu_pr::get_line_for_printing::_$u7b$$u7b$closure$u7d$$u7d$::h3e398a0d38c95d65(&v0, &v28, a6);
        *((int128_t *)&v12) = *((int128_t *)&v2);
        v3 = v11;
        v1 = v10;
        if (v7 == 0x8000000000000000)
        {
LABEL_5c8434:
            v9 = v3;
            *((int128_t *)&v7) = *((int128_t *)&v1);
        }
        else
        {
            *((int128_t *)&v7) = *((int128_t *)&v12);
            v7 = v0;
            ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v0);
        }
    }
    v0 = &v21;
    v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    v3 = &v8;
    v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v5 = &v23;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    v12 = &g_475660;
    v13 = 3;
    v16 = 0;
    v14 = &v0;
    v15 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&v26, &v12);
    ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v8);
    a0->field_10 = *((long long *)&v27);
    a0->field_0 = *((int128_t *)&v26);
    ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v31);
    return ::0x5bfce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&v18);
}
