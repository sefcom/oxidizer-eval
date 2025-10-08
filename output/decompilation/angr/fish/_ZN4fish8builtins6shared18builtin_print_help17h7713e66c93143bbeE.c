char fish::builtins::shared::builtin_print_help(unsigned long long a0, unsigned long long a1[4], unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    void* v2;  // [bp-0xd0]
    char v3;  // [bp-0xc4], Other Possible Types: unsigned int
    char v4;  // [bp-0xc0]
    char v5;  // [bp-0xb8]
    int v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    void* v8;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    int v12;  // [bp-0x78], Other Possible Types: char
    unsigned long long v13;  // [bp-0x70]
    void* v14;  // [bp-0x68]
    char v15;  // [bp-0x58]
    unsigned long long v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    char v18;  // [bp-0x40]
    char v20;  // al
    unsigned long long v21;  // r13
    unsigned long long v22;  // rbp
    unsigned long long v23;  // r14
    unsigned long long v25;  // rdx

    v20 = fish::proc::no_exec();
    if (v20)
        return v20;
    fish::common::escape(&v15, a2, a3);
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v21 = v16;
    v22 = v17;
    v5 = 1;
    v7 = v21;
    fish_printf::printf_impl::sprintf_locale(&v12, &v0, "__fish_print_help %ls ", 22, &v5, 1);
    v12.unwrap(&g_14c5f80);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v5);
    *((int128_t *)&v12) = *((int128_t *)&v0);
    v14 = v2;
    v3.eval(a0, v13, v2, a1[3]);
    if ((v3 != 1 || !((char)*((int *)&v4) & 127)) && (char)v3.exit_code() == 2)
    {
        v23 = a1[2];
        v0 = 0;
        v1 = 4;
        v2 = 0;
        *((char *)&v6) = 1;
        v7 = v21;
        v8 = v22;
        v9 = 1;
        v10 = v21;
        v11 = v22;
        fish_printf::printf_impl::sprintf_locale(&v18, &v0, g_14c5f98[0].localize(), v25, ".", &(char)v6, 2);
        v18.unwrap(&g_14c5fb0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v6);
        *((int128_t *)&v6) = *((int128_t *)&v0);
        v8 = 0;
        v23.append(&(char)v6);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
    return (char)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v15);
}
