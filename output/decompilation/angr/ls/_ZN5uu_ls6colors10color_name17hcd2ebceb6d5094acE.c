long long uu_ls::colors::color_name(unsigned long a0, struct_0 *a1, struct_1 *a2, unsigned long long *a3, unsigned long long a4, unsigned long long a5[6], char a6)
{
    unsigned int v0;  // [bp-0x270]
    int v1;  // [bp-0x268]
    unsigned long v2;  // [bp-0x258]
    int v3;  // [bp-0x248], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x248]
    int v5;  // [bp-0x248]
    unsigned long long v6;  // [bp-0x240]
    unsigned long v7;  // [bp-0x238]
    char v8;  // [bp-0x190], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [bp-0x188]
    char v10;  // [bp-0x180]
    char v11;  // [bp-0xe0]
    char v12;  // [bp-0xd8]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx
    char *v15;  // rcx
    char *v16;  // r8
    char *v17;  // r13
    char *v18;  // rcx

    v13 = *(a3).style_for_indicator(17);
    if (v13)
    {
        xattr::list_deref(&(char)v3, a2->field_20, a2->field_28);
        if ((char)(char)v3.is_ok_and())
        {
            v7 = a1->field_10;
            *((uint128_t *)&v3) = a1->field_0;
            v0.apply_style(a3, v13, &(char)v3, a6);
            return a0;
        }
    }
    if (!a2->field_128 && a2->field_100)
    {
        v7 = a1->field_10;
        *((uint128_t *)&v5) = a1->field_0;
        v0.apply_style_based_on_dir_entry(a3, &a2->field_100, &(unsigned long long)v5, a6);
        return a0;
    }
    if (a5)
    {
        uu_ls::get_metadata_with_deref_opt(&v11, a5[4], a5[5], a2->field_128);
        if (*((int *)&v11) == 2)
        {
            uu_ls::colors::color_name::{{closure}}(&v8, a2->field_20, a2->field_28, *((long long *)&v12));
            v14 = v9;
            if (!(v8 == 2))
                goto LABEL_54b9dd;
LABEL_54b93e:
            v3 = 2;
            ::0x54a1c0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v14);
            v15 = 0;
        }
        else
        {
            memcpy(&(char)v8, &v11, 176);
            v14 = v9;
            if (v8 == 2)
                goto LABEL_54b93e;
LABEL_54b9dd:
            memcpy(&(char)v7, &v10, 160);
            v3 = v8;
            v6 = v14;
            v15 = &v3;
        }
        v2 = a1->field_10;
        *((uint128_t *)&v1) = a1->field_0;
        v16 = &v1;
    }
    else
    {
        v17 = a2.get_metadata(a4);
        std::fs::symlink_metadata(&(unsigned long long)v5, a2->field_20, a2->field_28);
        if ((int)v4 == 2)
        {
            v8 = 2;
            ::0x54a1c0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v6);
            v18 = 0;
        }
        else
        {
            memcpy(&(char)v8, &(unsigned long long)v5, 176);
            v18 = (v8 != 2 ? &(char)v8 : 0);
        }
LABEL_54ba52:
        if (v17)
            v15 = v17;
        else
            v15 = v18;
        v7 = a1->field_10;
        *((uint128_t *)&v3) = a1->field_0;
        v16 = &(unsigned long long)v5;
        goto LABEL_54ba52;
    }
    v0.apply_style_based_on_metadata(a3, a2, v15, v16, a6);
    return a0;
}
