long long uu_sort::FieldSelector::parse::hc80187f191ca59d9(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    int v0;  // [sp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x120]
    int v2;  // [sp-0x118], Other Possible Types: char *, unsigned long long
    char *v3;  // [sp-0x110]
    unsigned long v4;  // [sp-0xf8], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xf0], Other Possible Types: char, unsigned long
    char v6;  // [bp-0xe0]
    char v7;  // [bp-0xd8]
    unsigned long long v8[3];  // [bp-0xd0]
    char v9;  // [bp-0xc8]
    char v10;  // [bp-0xc0]
    char v11;  // [bp-0xb8]
    char v12;  // [bp-0xb0]
    char v13;  // [bp-0xa0]
    char v14;  // [bp-0x99]
    unsigned long v15;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x90]
    unsigned long long v17;  // [sp-0x88]
    unsigned long long v18;  // [sp-0x80]
    void* v19;  // [sp-0x78]
    unsigned long long v20;  // [sp-0x70]
    char v21;  // [bp-0x68]
    unsigned short v22;  // [sp-0x38]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // r13
    unsigned long long v27;  // r12
    unsigned long long v28;  // rbp
    unsigned long long v29;  // r15
    unsigned long long v30;  // rax
    int v31;  // xmm0
    int v32;  // xmm0
    int v33;  // xmm1

    v4 = a3;
    ::0x51cbc0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v21, 44, a1, a2);
    v19 = 0;
    v20 = a2;
    v22 = 1;
    v24 = ::0x51bc10::core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&v19);
    if (!v24)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    uu_sort::FieldSelector::split_key_options::h3befb314b865dbc5(v8, v24, v25);
    v26 = v8[0];
    v27 = *((long long *)&v9);
    v28 = *((long long *)&v10);
    v29 = *((long long *)&v11);
    v30 = ::0x51bc10::core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&v19);
    if (!v30)
    {
        v5 = 0;
        if (!(!v29))
            goto LABEL_52132b;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h0bf0484f61ddc553(&v5, v30, v25);
        if (!(!v29))
            goto LABEL_52132b;
    }
    if (!v5 || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb9af56cf5f49fd41(*((long long *)&v6), *((long long *)&v7), 1, 0))
    {
        v0 = v26;
        v1 = v27;
        v2 = &v4;
        v3 = &v5;
        uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::hbfab5933502ce6d9(v8, &v0);
        if (v14 == 2)
        {
            v2 = *((long long *)&v10);
            *((int128_t *)&v0) = *((int128_t *)&v8[0]);
            a0->field_0 = uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::h449a10a279cbece7(a1, a2, &v0);
            *((char **)&a0->padding_8[0]) = &g_5ff678;
            *((char *)&a0->field_30 + 7) = 2;
            return a0;
        }
    }
    else
    {
LABEL_52132b:
        v15 = v26;
        v16 = v27;
        v17 = v28;
        v18 = v29;
        v31 = *((int128_t *)&v5);
        *((int128_t *)&v2) = *((int128_t *)&v6);
        v0 = v31;
        uu_sort::FieldSelector::parse_with_options::hf97b85c869b37397(v8, &v15, &v0);
        if (v14 == 2)
        {
            vvar_263{stack -280} = *((long long *)&v10);
            *((int128_t *)&v0) = *((int128_t *)&v8[0]);
            a0->field_0 = uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::h449a10a279cbece7(a1, a2, &v0);
            *((char **)&a0->padding_8[0]) = &g_5ff678;
            *((char *)&a0->field_30 + 7) = 2;
            return a0;
        }
    }
    a0->field_30 = *((long long *)&v13);
    v32 = *((int128_t *)&v8[0]);
    v33 = *((int128_t *)&v10);
    a0->field_20 = *((int128_t *)&v12);
    *((void*)&a0->field_10) = v33;
    *((void*)&a0->field_0) = v32;
    return a0;
}
