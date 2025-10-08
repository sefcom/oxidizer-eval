void fish::builtins::shared::builtin_print_error_trailer(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    void* v5;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    unsigned long v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    char v13;  // bpl
    unsigned long long v15;  // rdx

    a1.push(10);
    v9.current_line(a0);
    if (v10)
    {
        a1.append(&v9);
        a1.push(10);
    }
    else
    {
        v13 = 1;
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v7 = "(";
    v8 = 44;
    v6 = 0x8000000000000000;
    v3 = 1;
    v4 = a2;
    v5 = a3;
    fish_printf::printf_impl::sprintf_locale(&v11, &v0, v6.localize(), v15, ".", &v3, 1);
    v11.unwrap(&g_14c6088);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
    memcpy(&v3, &v0, 16);
    v5 = 0;
    a1.append(&v3);
    if (!v13)
        return;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
    return;
}
