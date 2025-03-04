long long uu_truncate::truncate_size_only::hdbbffa5e97261080(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    int v0;  // [bp-0x178], Other Possible Types: char, unsigned long
    unsigned long v1;  // [sp-0x170], Other Possible Types: unsigned long long
    struct struct_1 **v2;  // [sp-0x168], Other Possible Types: char, unsigned long, unsigned long long
    unsigned int v3;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x158]
    unsigned long v5;  // [sp-0x140]
    unsigned long long v6;  // [sp-0x138]
    char *v7;  // [sp-0x130]
    unsigned long long v8;  // [sp-0x128]
    char v9;  // [bp-0x120]
    char v10;  // [bp-0x110]
    void* v11;  // [sp-0x108]
    int v12;  // [sp-0x100]
    char v13;  // [sp-0xf0]
    int v14;  // [bp-0xe8], Other Possible Types: char
    char v15;  // [bp-0xe0]
    int v16;  // [bp-0xd8]
    unsigned int v17;  // [sp-0xd0]
    char v18;  // [bp-0xb0]
    unsigned long v20;  // rbx
    int v21;  // xmm0
    unsigned long long v22;  // rax
    struct_0 *v23;  // rax
    struct_0 *v24;  // r12
    unsigned long long v25;  // r13
    unsigned long long v26;  // rax
    void* v27;  // r12

    uu_truncate::parse_mode_and_size::hbf18cbb89603c372(&v0, a0, a1);
    if (*((int *)&v0) != 3)
    {
        v21 = *((int128_t *)&v0);
        *((int128_t *)&v16) = *((int128_t *)&v2);
        v14 = v21;
        v22 = uu_truncate::truncate_size_only::_$u7b$$u7b$closure$u7d$$u7d$::h73ee083b2ef723e0(&v14);
        goto LABEL_4ae057;
    }
    else
    {
        v20 = v1;
        if (v20 != 5 && (unsigned int)v20 != 6 || v2)
        {
            v5 = a2;
            v6 = a2 + a3 * 24;
            while (true)
            {
                v23 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&v5);
                if (!v23)
                    return 0;
                v24 = v23;
                std::fs::metadata::h1cc9ec6f7ac4b82e(&v14, v23);
                v25 = *((long long *)&v14);
                if (v25 == 2)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(2, *((long long *)&v15));
                }
                else if (((short)*((int *)&v18) & 0xf000) == 0x1000)
                {
                    v11 = 0;
                    *((int128_t *)&v12) = *((int128_t *)&v24->field_8);
                    v13 = 1;
                    v7 = &v11;
                    v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v0 = &g_5165a0;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v7;
                    v3 = 1;
                    ::0x4acf90::core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc(&v9, &v0);
                    v3 = 1;
                    *((int128_t *)&v0) = *((int128_t *)&v9);
                    v2 = *((long long *)&v10);
                    v27 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&v0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(v25, *((long long *)&v15));
                    break;
                }
                v26 = uu_truncate::file_truncate::h8689dfa8e5b80143(v24->field_8, v24[1].padding_0, a4, uu_truncate::TruncateMode::to_size::h56da67cab21ebb4e(v20));
                if (v26)
                {
                    v27 = v26;
                    return v27;
                }
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(&v14, "division by zero", 16);
            v17 = 1;
            v22 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&v14);
LABEL_4ae057:
            v27 = v22;
        }
    }
    return v27;
}
