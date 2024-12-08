long long uu_sort::KeyPosition::new::h1edf244c5b2ae5f2(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [sp-0x11d]
    void* v1;  // [sp-0x118], Other Possible Types: char, unsigned long
    unsigned long v2;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x108], Other Possible Types: unsigned long long
    char v4;  // [sp-0x100]
    char v5;  // [bp-0xf8]
    char v6;  // [bp-0xf7]
    char v7;  // [bp-0xf0]
    char v8;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xe0]
    unsigned long long v10;  // [sp-0xd8]
    unsigned long long v11;  // [sp-0xd0]
    void* v12;  // [sp-0xc8]
    unsigned long v13;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0xb0]
    unsigned long long v15;  // [sp-0xa8]
    unsigned long long v16;  // [sp-0xa0]
    char v17;  // [bp-0x98]
    char v18;  // [bp-0x88]
    void* v19;  // [sp-0x78]
    unsigned long long v20;  // [sp-0x70]
    char v21;  // [bp-0x68]
    unsigned short v22;  // [sp-0x38]
    unsigned long long v24;  // rax
    unsigned long long v25;  // r15
    unsigned long long v27;  // rdx
    int v28;  // xmm0
    unsigned long long v29;  // r15
    unsigned long long v30;  // rax
    unsigned long long v31;  // rcx

    ::0x51bc00::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v21, 46, a1, a2);
    v19 = 0;
    v20 = a2;
    v22 = 1;
    v24 = ::0x51ac50::core::str::iter::SplitInternal$LT$P$GT$::next::h1cd3b2b5c95036c8(&v19);
    if (!v24)
    {
        uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h8772203f09cf8425(&v8, a1, a2);
        v28 = *((int128_t *)&v8);
        goto LABEL_51ff75;
    }
    else
    {
        v25 = v24;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v5, v25, v27);
        if (!v5)
        {
            v29 = *((long long *)&v7);
            if (!v29)
            {
                v30 = ::0x51bb90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3ba68681839953e5(&a0->field_8, "field index can not be 0failed to parse field index invalid key /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/mod.rsinvalid option: ''", 24);
            }
            else
            {
                v9 = a3;
                v8 = 0x8000000000000000;
                core::option::Option$LT$T$GT$::map_or::he8246f05139e20ba(&v1, ::0x51ac50::core::str::iter::SplitInternal$LT$P$GT$::next::h1cd3b2b5c95036c8(&v19), v27, &v8);
                v31 = v1;
                v30 = v2;
                if (v31 == 0x8000000000000000)
                {
                    a0->field_8 = v29;
                    *((unsigned long long *)&a0->padding_10[0]) = v30;
                    v30 = a4;
                    a0->field_18 = v30;
                    a0->field_0 = 0;
                    return v30;
                }
                a0->field_8 = v31;
                *((unsigned long long *)&a0->padding_10[0]) = v30;
                *((unsigned long *)&a0->field_18) = v3;
            }
        }
        else
        {
            v0 = v6;
            v1 = 0;
            v2 = v25;
            v3 = v27;
            v4 = 1;
            v13 = &v1;
            v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v15 = &v0;
            v16 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            v8 = &g_5fef18;
            v9 = 2;
            v12 = 0;
            v10 = &v13;
            v11 = 2;
            ::0x51b950::core::option::Option$LT$T$GT$::map_or_else::hf7c47f284adcb320(&v17, &v8);
            v30 = *((long long *)&v18);
LABEL_51ff75:
            *((void*)&a0->field_8) = v28;
            *((unsigned long long *)&a0->field_18) = v30;
        }
        a0->field_0 = 1;
        return v30;
    }
}
