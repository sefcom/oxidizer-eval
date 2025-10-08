void bat::printer::InteractivePrinter::print_header_component_indent(void* a0, struct_0 *a1, void* a2)
{
    char *v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    char *v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb8], Other Possible Types: unsigned long long
    char *v6;  // [bp-0xb0], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0xa8]
    void* v8;  // [bp-0xa0]
    int v9;  // [bp-0x90]
    char v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    char *v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x60]
    void* v15;  // [bp-0x58]
    char v16;  // [bp-0x48]
    unsigned long long v18;  // r13
    char *v19;  // rdi

    if (192 + a1->field_200.grid())
    {
        v18 = a1->field_210;
        alloc::slice::<impl [T]>::repeat(&v16, " \\s +Failed to load one or more themes from '' (reason: '')\nNo themes were found in '', using the default set\n", 1, v18);
        *((uint128_t *)&v9) = a1->field_220;
        v10 = a1->field_230;
        v4 = 0x8000000000000000;
        *((int *)&v5) = (!v18 ? 1 : &g_480ea4);
        v6 = (v18) * 4;
        v7 = 9223372036854775810;
        v0 = &v16;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
        v11 = &g_485820;
        v12 = 2;
        v15 = 0;
        v13 = &v0;
        v14 = 2;
        a0.write_fmt(a2, &v11);
        core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v4);
        v19 = &v16;
    }
    else
    {
        alloc::slice::<impl [T]>::repeat(&(char)v11, " \\s +Failed to load one or more themes from '' (reason: '')\nNo themes were found in '', using the default set\n", 1, a1->field_210);
        v0 = &(char)v11;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &g_47f780;
        v5 = 1;
        v8 = 0;
        v6 = &v0;
        v7 = 1;
        a0.write_fmt(a2, &v4);
        v19 = &(char)v11;
    }
    core::ptr::drop_in_place<alloc::string::String>(v19);
    return;
}
