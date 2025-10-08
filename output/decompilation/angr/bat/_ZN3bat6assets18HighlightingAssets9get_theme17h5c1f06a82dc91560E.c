long long bat::assets::HighlightingAssets::get_theme(unsigned long long a0[18], unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0xe8]
    int v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    char *v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    void* v8;  // [bp-0xb0]
    char *v9;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v10;  // [bp-0x98]
    char *v11;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    unsigned long long v16;  // [bp-0x68]
    void* v17;  // [bp-0x50]
    char v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x47]
    unsigned long long v20;  // [bp-0x38]
    unsigned long long v21;  // [bp-0x30]
    unsigned long v23;  // r14
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx

    v20 = a1;
    v21 = a2;
    v23 = &a0[13];
    v24 = v23.get(a1, a2);
    if (v24)
        return v24;
    if (!(char)a1.equal(a2, "ansi-lightansi-dark[unknown]", 10) && !(char)a1.equal(a2, "ansi-dark[unknown]", 9))
    {
        if (a2)
        {
            v18 = 0;
            v17 = 0;
            v19 = 90194313222;
            v13 = 0x8000000000000000;
            v14 = "[bat warning]Theme '' is deprecated, using 'ansi' instead.: Unknown theme '', using default.";
            v15 = 13;
            v16 = 9223372036854775810;
            *((unsigned long long **)&v1) = &v20;
            v2 = <&T as core::fmt::Display>::fmt;
            v4 = &g_ace1c8;
            v5 = 2;
            v8 = 0;
            v6 = &(unsigned long long)v1;
            v7 = 1;
            v9.map_or_else(0, a2, &v4);
            *((int128_t *)&v1) = *((int128_t *)&v9);
            v3 = v11;
            v9 = &v13;
            v10 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
            v11 = &(unsigned long long)v1;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = &g_ace198;
            v5 = 3;
            v8 = 0;
            v6 = &v9;
            v7 = 2;
            std::io::stdio::_eprint(&v4);
            core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v1);
            core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v13);
        }
        if (a0[16])
        {
            v25 = v23.get(a0[16], a0[17]);
            if (v25)
                return v25;
        }
        else
        {
            v26 = v23.get("Monokai Extended", 16);
            if (v26)
                return v26;
        }
        core::option::expect_failed("something is very wrong if the default theme is missingansi-lightansi-dark[unknown]", 55, &g_ace1e8); /* do not return */
    }
    v18 = 0;
    v17 = 0;
    v19 = 90194313222;
    v13 = 0x8000000000000000;
    v14 = "[bat warning]Theme '' is deprecated, using 'ansi' instead.: Unknown theme '', using default.";
    v15 = 13;
    v16 = 9223372036854775810;
    v0 = &v20;
    v2 = <&T as core::fmt::Display>::fmt;
    v4 = &g_ace178;
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    v9.map_or_else(0, v27, &v4);
    memcpy(&v0, &v9, 16);
    v3 = v11;
    v9 = &v13;
    v10 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v11 = &v0;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_ace198;
    v5 = 3;
    v8 = 0;
    v6 = &v9;
    v7 = 2;
    std::io::stdio::_eprint(&v4);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v13);
    return a0.get_theme("ansibool[", 4);
}
