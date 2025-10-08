long long bat::app::App::style_components(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x168]
    char v1;  // [bp-0x159]
    unsigned long long v2;  // [bp-0x158]
    int v3;  // [bp-0x148], Other Possible Types: char
    int v4;  // [bp-0x138], Other Possible Types: char
    int v5;  // [bp-0x128]
    int v6;  // [bp-0x118]
    char *v7;  // [bp-0x108], Other Possible Types: char, unsigned long
    unsigned long long v8;  // [bp-0x100]
    char *v9;  // [bp-0xf8], Other Possible Types: char, unsigned long long
    unsigned long long v10;  // [bp-0xf0]
    int v11;  // [bp-0xe8]
    char v12;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v13;  // [bp-0xd7]
    char v14;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v15;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xc0]
    int v17;  // [bp-0xb8]
    void* v18;  // [bp-0xa8], Other Possible Types: char
    char v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x9f]
    int v21;  // [bp-0x98]
    int v22;  // [bp-0x88], Other Possible Types: char, unsigned long long
    unsigned long long v23;  // [bp-0x80]
    int v24;  // [bp-0x78], Other Possible Types: char *, unsigned long long
    int v25;  // [bp-0x68], Other Possible Types: void*
    int v26;  // [bp-0x58]
    char v27;  // [bp-0x38]
    unsigned long long v28;  // [bp-0x28]
    unsigned long v30;  // rax
    int v31;  // xmm3
    unsigned long long v32;  // rax
    unsigned long v33;  // rdx
    unsigned long long v34;  // rax
    int v35;  // [bp-0x70], Other Possible Types: unsigned long long

    v7.forced_style_components(a1);
    if (v7)
    {
        v5 = v11;
        memcpy(&v4, &v9, 16);
        memcpy(&v3, &v7, 16);
    }
    else if ((char)a1.contains_id("stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache ", 5))
    {
        v22.try_get_many(a1, "stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache ", 5);
        v3.unwrap("stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache ", 5, &v22);
        if (!*((long long *)&v3))
            core::option::expect_failed("styles present", 14, &g_ac8508); /* do not return */
        v26 = v6;
        v25 = v5;
        v24 = v4;
        v22 = v3;
        v12.collect(&v22);
        v30 = v12;
        if ((char)v30 != 13)
        {
            v31 = *((int128_t *)&v18);
            memcpy(&v1, &v15, 16);
            *((int128_t *)&v0) = *((int128_t *)&v13);
            *((void*)&a0->field_18[0]) = v21;
            *((void*)&a0->field_10[8]) = v31;
            *((void*)&a0->field_8) = v17;
            *((int128_t *)&a0->field_1[15]) = *((int128_t *)&v1);
            *((int128_t *)&a0->field_1[0]) = (int128_t)v0;
            a0->field_0 = v30;
            return v30;
        }
        memcpy(&v27, &v14, 16);
        v28 = v16;
        v3.to_components(&v27, a1->field_38);
    }
    else
    {
        v32 = (unsigned long long)10.components();
        v3.from_iter(v32, v33 + v32);
    }
    v34 = v3.grid();
    if ((char)v34)
    {
        v34 = v3.remove();
        if ((char)v34)
        {
            v19 = 0;
            v18 = 0;
            v20 = 90194313222;
            v12 = 0x8000000000000000;
            v14 = "[bat warning]Style 'rule' is a subset of style 'grid', 'rule' will not be visible.: stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not co";
            v15 = 13;
            v16 = 9223372036854775810;
            v22 = &g_ac84c8;
            v23 = 1;
            v24 = 8;
            *((uint128_t *)&v35) = 0;
            v7.map_or_else("Style 'rule' is a subset of style 'grid', 'rule' will not be visible.: stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with", &v22);
            memcpy(&(char)v0, &v7, 16);
            v2 = v9;
            v7 = &(char)v12;
            v8 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
            v9 = &(char)v0;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v22 = &g_ac84d8;
            v23 = 3;
            v25 = 0;
            v24 = &v7;
            v35 = 2;
            std::io::stdio::_eprint(&v22);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
            v34 = (unsigned long long)core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&(char)v12);
        }
    }
    *((void*)&a0->field_10[0]) = v5;
    *((void*)&a0->field_1[23]) = v4;
    *((void*)&a0->field_1[7]) = v3;
    a0->field_0 = 13;
    return v34;
}
