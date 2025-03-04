long long uu_ls::colors::color_name::hd87a58ac50dac0ef(void* a0, unsigned int a1, unsigned int a2, struct_0 *a3, unsigned long long *a4, unsigned long long a5, unsigned long long a6[6], char a7)
{
    char v0;  // [bp-0x258]
    unsigned long long v1;  // [sp-0x248]
    char v2;  // [sp-0x240], Other Possible Types: unsigned long long, unsigned long
    char v3;  // [bp-0x238]
    char v4;  // [bp-0x230]
    char v5;  // [sp-0x190], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0x188]
    char v7;  // [bp-0x180]
    char v8;  // [bp-0xe0]
    char v9;  // [bp-0xd8]
    unsigned long long v10;  // rax
    char *v11;  // rbp
    unsigned long long v12;  // r15
    unsigned long long v13;  // r14
    unsigned long long v14;  // rbp
    char *v15;  // rcx
    void* v16;  // rdi
    unsigned long long *v17;  // rsi
    struct_0 *v18;  // rdx
    unsigned long v19;  // r8
    unsigned long v20;  // r9

    v10 = a3->field_128;
    if (!(char)v10 && a3->field_100)
    {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry::h5ac81938a1ae285d(a0, a4, &a3->field_100, a1, a2, a7);
        return a0;
    }
    if (!a6)
    {
        v11 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(a3, a5);
        std::fs::symlink_metadata::haff3ff196e1dc22b(&v5, a3->field_20, a3->field_28);
        if (*((int *)&v5) == 2)
        {
            v2 = 2;
            ::0x538a70::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(v6);
            v15 = 0;
        }
        else
        {
            memcpy(&v2, &v5, 176);
            v15 = (v2 != 2 ? &v2 : 0);
        }
LABEL_539fc9:
        if (v11)
            v15 = v11;
        v16 = a0;
        v17 = a4;
        v18 = a3;
        v19 = a1;
        v20 = a2;
        goto LABEL_539fc9;
    }
    else
    {
        *((unsigned int *)&v1) = a1;
        uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&v8, a6[4], a6[5], v10 & 4294967295);
        if (*((int *)&v8) != 2)
        {
            v12 = a2;
            memcpy(&v2, &v8, 176);
        }
        else
        {
            v12 = a2;
            uu_ls::colors::color_name::_$u7b$$u7b$closure$u7d$$u7d$::h930039d09c033de8(&v2, a3->field_20, a3->field_28, *((long long *)&v9));
        }
        v13 = v2;
        v14 = *((long long *)&v3);
        if (v13 != 2)
        {
            memcpy(&v7, &v4, 160);
            v5 = v13;
            v6 = v14;
            v15 = &v5;
        }
        else
        {
            v5 = 2;
            ::0x538a70::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(v14);
            v15 = 0;
        }
        v16 = a0;
        v17 = a4;
        v18 = a3;
        v19 = v1;
        v20 = v12;
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata::hd1ec1399cd3d8441(v16, v17, v18, v15, v19, v20, v0);
    return a0;
}
