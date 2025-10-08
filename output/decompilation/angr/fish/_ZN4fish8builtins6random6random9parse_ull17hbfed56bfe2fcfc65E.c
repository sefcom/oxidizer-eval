double fish::builtins::random::random::parse_ull(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    void* v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    void* v2;  // [bp-0xb8]
    unsigned long long v3[3];  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    char v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    void* v8;  // [bp-0x88], Other Possible Types: unsigned long long
    char v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    int v12;  // [bp-0x50], Other Possible Types: char
    char v13;  // [bp-0x40]
    unsigned long long v16;  // rdx

    fish::wutil::wcstoi::fish_wcstoul(&v12, a4, a5);
    if (v12)
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 26;
        *(v3) = 0x8000000000000000;
        v6 = 1;
        v7 = a2;
        v8 = a3;
        v9 = 1;
        v10 = a4;
        v11 = a5;
        fish_printf::printf_impl::sprintf_locale(&v13, &v0, v3.localize(), v16, ".", &v6, 2);
        v13.unwrap(&g_14cbac0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
        memcpy(&v6, &v0, 16);
        v8 = 0;
        a1.append(&v6);
    }
    *((void*)a0) = v12;
    return (unsigned long long)v12;
}
