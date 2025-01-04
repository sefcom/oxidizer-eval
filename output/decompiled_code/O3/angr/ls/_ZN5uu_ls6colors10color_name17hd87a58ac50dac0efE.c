long long uu_ls::colors::color_name::hd87a58ac50dac0ef(void* a0, unsigned long a1, unsigned long a2, struct_0 *a3, unsigned long long *a4, unsigned int a5)
{
    unsigned int v0;  // [sp-0x258]
    char v1;  // [bp-0x240], Other Possible Types: unsigned long long, unsigned long
    char v2;  // [bp-0x238]
    char v3;  // [bp-0x230]
    char v4;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x188]
    char v6;  // [bp-0x180]
    char v7;  // [bp-0xe0]
    char v8;  // [bp-0xd8]
    unsigned long long v9[6];  // [bp+0x8]
    char v10;  // [bp+0x10]
    unsigned long long v11;  // rax
    unsigned long long v12[6];  // rcx
    unsigned long long v14;  // r14
    unsigned long long v15;  // rbp
    char *v16;  // rcx
    char *v17;  // rcx
    void* v18;  // 4096
    char *v21;  // rcx

    v11 = a3->field_128;
    if (!(char)v11 && a3->field_100)
    {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry::h5ac81938a1ae285d(a0, a4, &a3->field_100, a1, a2, v10);
        return a0;
    }
    v12 = v9;
    if (!v12)
    {
        std::fs::symlink_metadata::haff3ff196e1dc22b(&v4, a3->field_20, a3->field_28);
        if (*((int *)&v4) == 2)
        {
            v1 = 2;
            ::0x538a70::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(v5);
            v16 = 0;
        }
        else
        {
            memcpy(&v1, &v4, 176);
            v16 = &v1;
            if (v1 == 2)
                v16 = 0;
        }
LABEL_539fc9:
        v0 = v10;
        goto LABEL_539fc9;
    }
    else
    {
        uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&v7, v12[4], v12[5], v11 & 4294967295);
        if (*((int *)&v7) != 2)
            memcpy(&v1, &v7, 176);
        else
            uu_ls::colors::color_name::_$u7b$$u7b$closure$u7d$$u7d$::h930039d09c033de8(&v1, a3->field_20, a3->field_28, *((long long *)&v8));
        v14 = v1;
        v15 = *((long long *)&v2);
        if (v14 != 2)
        {
            memcpy(&v6, &v3, 160);
            v4 = v14;
            v5 = v15;
            v17 = &v4;
        }
        else
        {
            v4 = 2;
            ::0x538a70::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(v15);
            v17 = 0;
        }
        v0 = v10;
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata::hd1ec1399cd3d8441(v18, a4, a3, v21, a1, a2);
    return a0;
}
