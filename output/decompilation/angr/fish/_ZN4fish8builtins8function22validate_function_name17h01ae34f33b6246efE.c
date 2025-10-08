long long fish::builtins::function::validate_function_name(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa8]
    unsigned long long v3[3];  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    void* v8;  // [bp-0x78], Other Possible Types: unsigned long long
    char v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x40]
    unsigned long long v15;  // rdx
    unsigned long long v17;  // rdx

    if (!(char)fish::common::valid_func_name(a0, a1))
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 31;
        *(v3) = 0x8000000000000000;
        v6 = 1;
        v7 = a2;
        v8 = a3;
        v9 = 1;
        v10 = a0;
        v11 = a1;
        fish_printf::printf_impl::sprintf_locale(&v12, &v0, v3.localize(), v17, ".", &v6, 2);
        v12.unwrap(&g_14c9fd8);
    }
    else if ((char)fish::parser_keywords::parser_keywords_is_reserved(a0, a1))
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 54;
        *(v3) = 0x8000000000000000;
        v6 = 1;
        v7 = a2;
        v8 = a3;
        v9 = 1;
        v10 = a0;
        v11 = a1;
        fish_printf::printf_impl::sprintf_locale(&v12, &v0, v3.localize(), v15, ".", &v6, 2);
        v12.unwrap(&g_14c9ff0);
    }
    else
    {
        return 0;
    }
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
    memcpy(&v6, &v0, 16);
    v8 = 0;
    a4.append(&v6);
    return 2;
}
