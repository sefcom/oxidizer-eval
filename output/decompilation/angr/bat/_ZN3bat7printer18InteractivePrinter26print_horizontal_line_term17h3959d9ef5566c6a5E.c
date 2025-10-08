void bat::printer::InteractivePrinter::print_horizontal_line_term(void* a0, struct_1 *a1, void* a2, struct_0 *a3)
{
    char *v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    char *v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    void* v6;  // [bp-0xc8]
    char v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xa0]
    int v9;  // [bp-0x88]
    char v10;  // [bp-0x78]
    int v11;  // [bp-0x70], Other Possible Types: char
    int v12;  // [bp-0x60]
    int v13;  // [bp-0x50]
    int v14;  // [bp-0x40]
    char v15;  // [bp-0x30]

    alloc::slice::<impl [T]>::repeat(&v7, &g_5a2c43, 3, a1->field_100);
    v10 = a3->field_10;
    *((uint128_t *)&v9) = a3->field_0;
    v8 = 9223372036854775810;
    v0 = &v7;
    v1 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
    v2 = &g_acea80;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    v11.write_fmt(a2, &v2);
    if (v11 != 13)
    {
        *((int128_t *)&a0[64]) = *((int128_t *)&v15);
        a0[48] = v14;
        a0[32] = v13;
        a0[16] = v12;
        *(a0) = v11;
        core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v7);
        return;
    }
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v7);
    *((char *)a0) = 13;
    return;
}
