long long starship::configure::print_configuration(struct_0 *a0, unsigned long a1, unsigned int a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x67f8], Other Possible Types: unsigned long long
    int v1;  // [bp-0x67f8]
    unsigned long long v2;  // [bp-0x67f0]
    int v3;  // [bp-0x67e8], Other Possible Types: char *, unsigned long long
    int v4;  // [bp-0x67e0], Other Possible Types: unsigned long long
    int v5;  // [bp-0x67d8], Other Possible Types: void*
    int v6;  // [bp-0x67c8]
    int v7;  // [bp-0x67b8]
    char *v8;  // [bp-0x67a0]
    unsigned long long v9;  // [bp-0x6798]
    unsigned long v10;  // [bp-0x6790]
    int v11;  // [bp-0x6788], Other Possible Types: char
    int v12;  // [bp-0x6778]
    int v13;  // [bp-0x6768]
    int v14;  // [bp-0x6758]
    int v15;  // [bp-0x6748]
    void* v16;  // [bp-0x6738]
    unsigned long long v17;  // [bp-0x6730]
    void* v18;  // [bp-0x6728]
    char *v19;  // [bp-0x6720]
    unsigned long long v20;  // [bp-0x6718]
    int v21;  // [bp-0x6710]
    char v22;  // [bp-0x6710]
    int v23;  // [bp-0x6700]
    int v24;  // [bp-0x66f0]
    int v25;  // [bp-0x66e0]
    int v26;  // [bp-0x66d0]
    char v27;  // [bp-0x66c0]
    void* v28;  // [bp-0x6030]
    void* v29;  // [bp-0x5030]
    void* v30;  // [bp-0x4030]
    char v31;  // [bp-0x3378]
    void* v32;  // [bp-0x3030]
    void* v33;  // [bp-0x2030]
    void* v34;  // [bp-0x1030]
    unsigned long long v36[7];  // rax
    unsigned long long v37;  // rdi

    v34 = 0;
    v33 = 0;
    v32 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    if (a2)
    {
        v31.default();
        v0.try_from(&v31);
        v22.unwrap(&v0, &g_11f2bf8);
    }
    else
    {
        starship::configure::get_configuration(&v11);
        v27.load(&v11);
        v0.try_from(&v27);
        v22.unwrap(&v0, &g_11f2be0);
        core::ptr::drop_in_place<toml::map::Map<alloc::string::String,toml::value::Value>>(&v11);
    }
    v0 = &g_11f2b90;
    v2 = 1;
    v3 = 8;
    *((uint128_t *)&v4) = 0;
    std::io::stdio::_print(&v0);
    if (a4)
    {
        v0 = a3;
        v2 = a3 + a4 * 24;
        if (!v0.any())
            goto LABEL_b6b8c7;
    }
    v16 = 0;
    v17 = 1;
    v18 = 0;
    v11.fold(&v16);
    v8 = &v11;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_11f2ba0;
    v2 = 2;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    std::io::stdio::_print(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
    v36 = v22.get("customenv_varfg:bg:underlineitalicdimmedblinkhiddenstrikethroughprev_fgprev_bgParsing color_string: Attempting to read hexadecimal color string: Could not parse hexadecimal string: Read RGB color string: Read ANSI color string:  defined as ", 6);
    if (v36)
    {
        if (v36[0] >= 9223372036854775814)
        {
            if (!(char)a2 && v36[6])
            {
                v11.fold(v36[1], v36[2] * 112 + v36[1], &v16);
                v8 = &v11;
                v9 = <alloc::string::String as core::fmt::Display>::fmt;
                v0 = &g_11f2bc0;
                v2 = 2;
                v5 = 0;
                v3 = &v8;
                v4 = 1;
                std::io::stdio::_print(&v0);
                core::ptr::drop_in_place<alloc::string::String>(&v11);
            }
            if (a4)
            {
LABEL_b6b8c7:
                v7 = v26;
                v6 = v25;
                v5 = v24;
                v3 = v23;
                v1 = v21;
                starship::configure::extract_toml_paths(&v11, &(unsigned long long)v1, a3, a4);
            }
            else
            {
                v15 = v26;
                v14 = v25;
                v13 = v24;
                v12 = v23;
                v11 = v21;
            }
            toml::ser::to_string_pretty(&v0, &v11);
            v8.unwrap(&v0);
            v19 = &v8;
            v20 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_11f29a8;
            v2 = 2;
            v5 = 0;
            v3 = &v19;
            v4 = 1;
            std::io::stdio::_print(&v0);
            a0->field_10 = v10;
            a0->field_0 = *((int128_t *)&v8);
            core::ptr::drop_in_place<toml::value::Value>(&v11);
            return a0;
        }
        v37 = &g_11f3258;
    }
    else
    {
        v37 = &g_11f3240;
    }
    core::option::unwrap_failed(v37); /* do not return */
}
