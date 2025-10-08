long long fd::output::print_trailing_slash(unsigned long long a0, unsigned long long *a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xa0], Other Possible Types: unsigned long
    char v2;  // [bp-0x9f]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x78]
    char v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x6f]
    char *v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char *v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    void* v14;  // [bp-0x30]
    unsigned int v16;  // edx
    char v17;  // al
    unsigned long long v18;  // xmm0lq
    unsigned long long v19;  // rax

    if (((v16 & 0xf000) == 0x4000 & (char)a1.file_type()) != 1)
        return 0;
    if (a4)
    {
        v0.to_nu_ansi_term_style(a4);
        v17 = v1;
        v18 = *((long long *)&v2);
    }
    else
    {
        v17 = 0;
    }
    v5 = v0;
    v6 = v17;
    v7 = v18;
    v0 = 0x8000000000000000;
    v1 = a2;
    v3 = a3;
    v4 = 9223372036854775810;
    v8 = &v0;
    v9 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v10 = &g_470810;
    v11 = 1;
    v14 = 0;
    v12 = &v8;
    v13 = 1;
    v19 = a0.write_fmt(&v10);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v0);
    return v19;
}
