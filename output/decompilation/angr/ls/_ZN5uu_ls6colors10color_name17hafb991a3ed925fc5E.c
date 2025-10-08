long long uu_ls::colors::color_name(unsigned int a0, unsigned long long a1, struct_0 *a2, unsigned long long *a3, unsigned long long a4, unsigned long long a5[6], char a6)
{
    char v0;  // [bp-0x240], Other Possible Types: unsigned long long
    char v1;  // [bp-0x190], Other Possible Types: unsigned long long, unsigned long
    char v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    unsigned long long v4;  // rax
    char *v5;  // rcx
    char *v6;  // r13
    char *v7;  // rcx

    v4 = *(a3).style_for_indicator(17);
    if (v4)
    {
        xattr::list(&v0, a2->field_20, a2->field_28);
        if ((char)v0.is_ok_and())
            return a0.apply_style(a3, v4, a1, a6);
    }
    if (!a2->field_128 && a2->field_100)
        return a0.apply_style_based_on_dir_entry(a3, &a2->field_100, a1, a6);
    if (a5)
    {
        uu_ls::get_metadata_with_deref_opt(&v2, a5[4], a5[5], a2->field_128);
        if (*((int *)&v2) == 2)
        {
            uu_ls::colors::color_name::{{closure}}(&v1, a2->field_20, a2->field_28, *((long long *)&v3));
            if (v1 != 2)
                goto LABEL_590a46;
LABEL_5909be:
            v0 = 2;
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v1);
            v5 = 0;
        }
        else
        {
            memcpy(&(char)v1, &v2, 176);
            if (v1 == 2)
                goto LABEL_5909be;
LABEL_590a46:
            memcpy(&v0, &v1, 176);
            if (v0 != 2)
                v5 = &v0;
            else
                v5 = 0;
        }
    }
    else
    {
        v6 = a2.get_metadata(a4);
        std::fs::symlink_metadata(&v0, a2->field_20, a2->field_28);
        if ((int)v0 == 2)
        {
            v1 = 2;
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
            v7 = 0;
        }
        else
        {
            memcpy(&(char)v1, &v0, 176);
            v7 = (v1 != 2 ? &(char)v1 : 0);
        }
        if (v6)
            v5 = v6;
        else
            v5 = v7;
    }
    return a0.apply_style_based_on_metadata(a3, a2, v5, a1, a6);
}
