void bat::theme::color_scheme_from_system()
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    char *v2;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x98]
    char *v5;  // [bp-0x88], Other Possible Types: char
    unsigned long long v6;  // [bp-0x80]
    char *v7;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x38]
    void* v15;  // [bp-0x20]
    char v16;  // [bp-0x18]
    unsigned long long v17;  // [bp-0x17]

    v16 = 0;
    v15 = 0;
    v17 = 90194313222;
    v11 = 0x8000000000000000;
    v12 = "[bat warning]Theme '' is deprecated, using 'ansi' instead.: Unknown theme '', using default.";
    v13 = 13;
    v14 = 9223372036854775810;
    v0 = &g_acecf0;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    v5.map_or_else("Theme 'auto:system' is only supported on macOS, using default.src/vscreen.rs", 62, &v0);
    memcpy(&v9, &v5, 16);
    v10 = v7;
    v5 = &v11;
    v6 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v7 = &v9;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_ace198;
    v1 = 3;
    v4 = 0;
    v2 = &v5;
    v3 = 2;
    std::io::stdio::_eprint(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v11);
    return;
}
