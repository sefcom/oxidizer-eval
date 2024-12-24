long long uu_truncate::truncate_size_only::hb466d6b679166158(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    int v0;  // [bp-0x178], Other Possible Types: char, unsigned long long
    unsigned long v1;  // [sp-0x170], Other Possible Types: unsigned long long
    char v2;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    unsigned int v3;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x158]
    unsigned long v5;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x138]
    unsigned long v7;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x128]
    char v9;  // [bp-0x120]
    char v10;  // [bp-0x110]
    void* v11;  // [sp-0x108]
    int v12;  // [sp-0x100]
    char v13;  // [sp-0xf0]
    int v14;  // [sp-0xe8]
    char v15;  // [bp-0xe0]
    int v16;  // [bp-0xd8]
    unsigned int v17;  // [sp-0xd0]
    char v18;  // [bp-0xb0]
    unsigned long v20;  // rbx
    int v21;  // xmm0
    void* v22;  // rax
    struct_0 *v23;  // rax
    struct_0 *v24;  // r12
    unsigned long long v25;  // rdx
    unsigned long long v26;  // r13

    uu_truncate::parse_mode_and_size::hb3b8a09604b7c20d(&v0, a0, a1);
    if (*((int *)&v0) != 3)
    {
        v21 = *((int128_t *)&v0);
        *((int128_t *)&v16) = *((int128_t *)&v2);
        v14 = v21;
        v22 = uu_truncate::truncate_size_only::_$u7b$$u7b$closure$u7d$$u7d$::h1f9184a16e84a410(&v14);
        goto LABEL_4ae097;
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
                v23 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hea895bcb80317b5e(&v5);
                if (!v23)
                    return 0;
                v24 = v23;
                std::fs::metadata::habf8a0f1b71ce014(&v14, v23, v25);
                v26 = (long long)v14;
                if (v26 == 2)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h724919249d643b75(2, *((long long *)&v15));
                }
                else if (((short)*((int *)&v18) & 0xf000) == 0x1000)
                {
                    v11 = 0;
                    *((int128_t *)&v12) = *((int128_t *)&v24->field_8);
                    v13 = 1;
                    v7 = &v11;
                    v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v0 = &g_516bd0;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v7;
                    v3 = 1;
                    ::0x4acfd0::core::option::Option$LT$T$GT$::map_or_else::h0274d7e1f61abfd4(&v9, &v0);
                    v3 = 1;
                    *((int128_t *)&v0) = *((int128_t *)&v9);
                    v2 = *((long long *)&v10);
                    v22 = alloc::boxed::Box$LT$T$GT$::new::h0b66135e4e932c08(&v0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h724919249d643b75(v26, (long long)(&v14)[8]);
                    break;
                }
                v22 = uu_truncate::file_truncate::h24ff7cd587e75e47(v24->field_8, v24[1].padding_0, a4, uu_truncate::TruncateMode::to_size::h6ebc2c321bac3a07(v20));
                if (v22)
                    return v22;
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d40d22c4f0f04ac(&v14, "division by zero", 16);
            v17 = 1;
            v22 = alloc::boxed::Box$LT$T$GT$::new::h0b66135e4e932c08(&v14);
LABEL_4ae097:
        }
    }
    return v22;
}
