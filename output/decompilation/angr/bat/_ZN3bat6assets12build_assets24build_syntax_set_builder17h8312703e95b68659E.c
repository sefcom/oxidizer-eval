long long bat::assets::build_assets::build_syntax_set_builder(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x188]
    char v1;  // [bp-0x188]
    int v2;  // [bp-0x178], Other Possible Types: char
    int v3;  // [bp-0x168], Other Possible Types: char
    char v4;  // [bp-0x150]
    unsigned long long v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x140]
    void* v7;  // [bp-0x138], Other Possible Types: char, unsigned long
    int v8;  // [bp-0x131]
    unsigned long long v9;  // [bp-0x130]
    int v10;  // [bp-0x128], Other Possible Types: char *
    int v11;  // [bp-0x121]
    unsigned long long v12;  // [bp-0x120]
    void* v13;  // [bp-0x118], Other Possible Types: unsigned long long
    int v14;  // [bp-0x111]
    void* v15;  // [bp-0x110]
    char v16;  // [bp-0x108]
    int v17;  // [bp-0x101]
    char v18;  // [bp-0xf8]
    unsigned long long v19;  // [bp-0xf1]
    char *v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x80]
    int v22;  // [bp-0x78], Other Possible Types: char
    int v23;  // [bp-0x68], Other Possible Types: char
    int v24;  // [bp-0x58], Other Possible Types: char
    char v25;  // [bp-0x48]
    unsigned long long v26;  // [bp-0x38]
    int v28;  // xmm1
    int v29;  // xmm2
    int v30;  // xmm3

    if (a3)
    {
        bat::assets::asset_from_contents(&v7, &g_4a0048, 989809, "n/adata integrated in binary is never faulty, but make sure `compressed` is in sync!src/assets.rsSome referenced contexts could not be found!\n- ", 3);
        v22.expect(&v7);
        (char)v0.into_builder(&v22);
    }
    else
    {
        v7 = 0;
        v9 = 8;
        *((uint128_t *)&v10) = 0;
        v13 = 8;
        v15 = 0;
        (char)v7.add_plain_text_syntax(a1, a2, a3, a4, a5);
        memcpy(&v3, &v13, 16);
        memcpy(&v2, &v10, 16);
        memcpy(&v1, &v7, 16);
    }
    v4.join(a1, a2, "syntaxesREADABLE", 8);
    std::fs::metadata(&v7, v5, v6);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v7);
    if ((unsigned int)v7 == 2)
    {
        v22.from_utf8_lossy(v5, v6);
        v20 = &v22;
        v21 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v7 = &g_ace070;
        v9 = 2;
        v13 = 0;
        v10 = &v20;
        v12 = 1;
        std::io::stdio::_print(&v7);
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v22);
        *((void*)&a0->field_8[16]) = v3;
        *((void*)&a0->field_8[0]) = v2;
        *((void*)&a0->field_1[7]) = v0;
        a0->field_0 = 13;
        return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v4);
    }
    v7.add_from_folder(&(char)v0, &v4);
    if (v7 != 9223372036854775814)
    {
        v26 = *((long long *)&v18);
        memcpy(&v25, &v16, 16);
        memcpy(&v24, &v13, 16);
        memcpy(&v23, &v10, 16);
        memcpy(&v22, &v7, 16);
        v19 = *((long long *)&v18);
        *((int128_t *)&v17) = *((int128_t *)&v16);
        v14 = v24;
        v11 = v23;
        v8 = v22;
        a0->field_0 = 3;
        v28 = (int128_t)(&v8)[9];
        v29 = (int128_t)(&v11)[9];
        v30 = (int128_t)(&v14)[9];
        *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v7);
        *((void*)&a0->field_1[16]) = v28;
        *((void*)&a0->field_8[9]) = v29;
        *((void*)&a0->field_11[0]) = v30;
        *((long long *)&a0->field_11[15]) = (long long)(&v17)[8];
        *((unsigned long long *)&a0->field_18[0]) = v19;
        return (unsigned long long)core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxSetBuilder>(&(char)v0);
    }
    *((void*)&a0->field_8[16]) = v3;
    *((void*)&a0->field_8[0]) = v2;
    *((void*)&a0->field_1[7]) = v0;
    a0->field_0 = 13;
    return 9223372036854775814;
}
