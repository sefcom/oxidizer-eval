void bat::printer::InteractivePrinter::print_horizontal_line(void* a0, struct_1 *a1, void* a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x144]
    char *v1;  // [bp-0x140], Other Possible Types: char
    unsigned long long v2;  // [bp-0x138]
    char *v3;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x128]
    char *v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x118]
    int v7;  // [bp-0x110]
    int v8;  // [bp-0x100]
    char v9;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xe0]
    char *v11;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xd0]
    void* v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    char *v16;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0xa0]
    void* v18;  // [bp-0x98]
    int v19;  // [bp-0x88]
    char v20;  // [bp-0x78]
    char *v21;  // [bp-0x70]
    unsigned long long v22;  // [bp-0x68]
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x48]
    char v25;  // [bp-0x38]
    unsigned long long v27;  // rbp
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm2
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2

    v0 = a3;
    v27 = a1->field_210;
    if (v27)
    {
        alloc::slice::<impl [T]>::repeat(&v23, &g_5a2c43, 3, ~(v27) + a1->field_200->field_100);
        alloc::slice::<impl [T]>::repeat(&v1, &g_5a2c43, 3, v27);
        v11 = v3;
        memcpy(&v9, &v1, 16);
        v1 = &v9;
        v2 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &v0;
        v4 = <char as core::fmt::Display>::fmt;
        v5 = &v23;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v14 = &g_5a2cd0;
        v15 = 3;
        v18 = 0;
        v16 = &v1;
        v17 = 3;
        v24.map_or_else(0, a2, &v14);
        core::ptr::drop_in_place<alloc::string::String>(&v9);
        v20 = a1->field_230;
        *((uint128_t *)&v19) = a1->field_220;
        memcpy(&v14, &v24, 16);
        v16 = *((long long *)&v25);
        v17 = 9223372036854775810;
        v21 = &v14;
        v22 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
        v9 = &g_acea80;
        v10 = 2;
        v13 = 0;
        v11 = &v21;
        v12 = 1;
        v1.write_fmt(a2, &v9);
        if ((char)v1 != 13)
        {
            a0[64] = v8;
            v28 = *((int128_t *)&v1);
            v29 = *((int128_t *)&v3);
            v30 = *((int128_t *)&v5);
            a0[48] = v7;
            a0[32] = v30;
            a0[16] = v29;
            *(a0) = v28;
            core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v14);
            core::ptr::drop_in_place<alloc::string::String>(&v23);
            return;
        }
        core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v14);
        core::ptr::drop_in_place<alloc::string::String>(&v23);
    }
    else
    {
        (char)v1.print_horizontal_line_term(a1->field_200, a2, &a1->field_220);
        if (v1 != 13)
        {
            a0[64] = v8;
            v31 = *((int128_t *)&v1);
            v32 = *((int128_t *)&v3);
            v33 = *((int128_t *)&v5);
            a0[48] = v7;
            a0[32] = v33;
            a0[16] = v32;
            *(a0) = v31;
            return;
        }
    }
    *((char *)a0) = 13;
    return;
}
