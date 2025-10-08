long long bat::assets::build_assets::build_theme_set(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    void* v0;  // [bp-0x1c8], Other Possible Types: char
    int v1;  // [bp-0x1c8]
    void* v2;  // [bp-0x1b8]
    char v3;  // [bp-0x1b0]
    unsigned long long v4;  // [bp-0x1a8]
    unsigned long long v5;  // [bp-0x1a0]
    char *v6;  // [bp-0x198], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [bp-0x190]
    char *v8;  // [bp-0x188]
    unsigned long long v9;  // [bp-0x180]
    void* v10;  // [bp-0x178]
    int v11;  // [bp-0x168]
    char v12;  // [bp-0x159]
    int v13;  // [bp-0x158]
    int v14;  // [bp-0x148]
    int v15;  // [bp-0x138]
    char v16;  // [bp-0x128]
    int v17;  // [bp-0x118], Other Possible Types: char, unsigned long
    char v18;  // [bp-0x117]
    char v19;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v20;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v21;  // [bp-0xf8], Other Possible Types: int
    int v22;  // [bp-0xe8]
    char v23;  // [bp-0xd8], Other Possible Types: unsigned long long
    char *v24;  // [bp-0x60]
    unsigned long long v25;  // [bp-0x58]
    char *v26;  // [bp-0x50]
    unsigned long long v27;  // [bp-0x48]
    char v28;  // [bp-0x40]
    unsigned long v30;  // rax
    int v31;  // xmm0
    int v32;  // [bp-0x108], Other Possible Types: void*, char *, char

    if (a3)
    {
        bat::assets::get_integrated_themeset(&v6);
        v17.try_from(&v6);
        v30 = v17;
        if ((char)v30 != 13)
        {
            memcpy(&v12, &v32, 16);
            *((int128_t *)&v11) = *((int128_t *)&v18);
            a0->field_30 = *((int128_t *)&v23);
            *((void*)&a0->field_20) = v22;
            *((void*)&a0->field_10) = v21;
            *((int128_t *)&a0->field_1[15]) = *((int128_t *)&v12);
            *((int128_t *)&a0->field_1[0]) = (int128_t)v11;
            a0->field_0 = v30;
            return v30;
        }
        memcpy(&v0, &v19, 16);
        v2 = v20;
    }
    else
    {
        v0 = 0;
        v2 = 0;
    }
    v3.join(a1, a2, "themesNo syntaxes were found in '', using the default set.\n", 6);
    std::fs::metadata(&v17, v4, v5);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v17);
    if ((int)*((long long *)&v17) == 2)
    {
        (char)v11.from_utf8_lossy(v4, v5);
        v6 = &(char)v11;
        v7 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v17 = &g_ace050;
        v19 = 2;
        v21 = 0;
        v32 = &v6;
        v20 = 1;
        std::io::stdio::_print(&v17);
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&(char)v11);
    }
    else
    {
        (char)v11.add_from_folder(&v1, &v3);
        if ((long long)v11 != 9223372036854775814)
        {
            v23 = *((long long *)&v16);
            v31 = (int128_t)v11;
            v22 = v15;
            v21 = v14;
            v32 = v13;
            v17 = v31;
            v28.from_utf8_lossy(v4, v5);
            v24 = &v28;
            v25 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v26 = &v17;
            v27 = <syntect::LoadingError as core::fmt::Display>::fmt;
            v6 = &g_ace020;
            v7 = 3;
            v10 = 0;
            v8 = &v24;
            v9 = 2;
            std::io::stdio::_print(&v6);
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v28);
            core::ptr::drop_in_place<syntect::LoadingError>(&v17);
        }
    }
    v32 = v2;
    memcpy(&v17, &v1, 16);
    a0.try_from(&v17);
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v3);
}
