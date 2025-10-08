long long fish::builtins::abbr::abbr_list(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
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
    char v12;  // [bp-0x48]
    int v13;  // [bp-0x40]
    char v14;  // [bp-0x20]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx

    if (!a1)
    {
        fish::abbrs::with_abbrs(a2);
        return 0x200000000;
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v4 = "%";
    v5 = 38;
    *(v3) = 0x8000000000000000;
    v16 = v3.localize();
    v6 = 1;
    v7 = "a";
    v8 = 4;
    v9 = 1;
    v10 = "-";
    v11 = 6;
    v12 = 1;
    *((int128_t *)&v13) = *((int128_t *)&(&a0->padding_0)[1]);
    fish_printf::printf_impl::sprintf_locale(&v14, &v0, v16, v17, ".", &v6, 3);
    v14.unwrap(&g_14c6408);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v6);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
    memcpy(&v6, &v0, 16);
    v8 = 0;
    a3.append(&v6);
    return 8589934593;
}
