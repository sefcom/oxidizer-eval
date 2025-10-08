long long fish::builtins::history::check_for_unexpected_hist_args(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0[3];  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    void* v2;  // [bp-0xe8], Other Possible Types: unsigned long long
    void* v3;  // [bp-0xe0], Other Possible Types: char
    unsigned long long v4;  // [bp-0xd8]
    void* v5;  // [bp-0xd0]
    int v6;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v7;  // [bp-0xc0]
    void* v8;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    unsigned short v12;  // [bp-0x88]
    void* v13;  // [bp-0x80]
    char v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x60]
    char v16;  // [bp-0x40]
    unsigned long long v18;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v23;  // rdx

    if (a0->field_2c[1] != 8 || a0->field_10 != 0x8000000000000000 || a0->field_2a)
    {
        v21 = (unsigned long long)(char)a0->field_2c.to_wstr();
        v3 = 0;
        v4 = 4;
        v5 = 0;
        v1 = "%";
        v2 = 38;
        *(v0) = 0x8000000000000000;
        v6 = 1;
        v7 = a1;
        v8 = a2;
        v9 = 1;
        v10 = v21;
        v11 = v23;
        fish_printf::printf_impl::sprintf_locale(&v16, &v3, v0.localize(), v23, ".", &v6, 2);
        v16.unwrap(&g_14ca510);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
        *((int128_t *)&v6) = *((int128_t *)&v3);
    }
    else if (a3)
    {
        v18 = (unsigned long long)(char)a0->field_2c.to_wstr();
        *(v0) = 0;
        v1 = 4;
        v2 = 0;
        v6 = 1;
        v7 = a1;
        v8 = a2;
        v9 = 1;
        v10 = v18;
        v11 = v20;
        v12 = 8197;
        v13 = 0;
        v14 = 4;
        v15 = a3;
        fish_printf::printf_impl::sprintf_locale(&v3, &v0, g_14ca450[0].localize(), v20, ".", &v6, 4);
        v3.unwrap(&g_14ca4f8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 4]>(&v6);
        *((int128_t *)&v6) = *((int128_t *)&v0[0]);
    }
    else
    {
        return 0;
    }
    v8 = 0;
    return (unsigned long long)a4.append(&v6) & 0xffffffffffffff00 | 1;
}
