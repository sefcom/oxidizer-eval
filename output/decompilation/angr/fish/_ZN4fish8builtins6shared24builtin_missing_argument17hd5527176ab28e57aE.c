void fish::builtins::shared::builtin_missing_argument(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    char v0;  // [bp-0x100]
    void* v1;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v2;  // [bp-0xf0]
    void* v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v5;  // [bp-0xd0]
    int v6;  // [bp-0xc8], Other Possible Types: void*, unsigned long long
    char v7;  // [bp-0xb8]
    int v8;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xa8]
    void* v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    void* v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x70]
    char v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x58]
    char v16;  // [bp-0x48]
    char v17;  // [bp-0x40]
    unsigned long v18;  // r12
    int v19;  // xmm0
    int v20;  // xmm2
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx

    if ((int)a4.char_at(a5, 0) != 45 || (int)a4.char_at(a5, 1) == 45)
    {
        v18 = a1->field_10;
        v1 = 0;
        v2 = 4;
        v3 = 0;
        v22 = g_14c6010[0].localize();
        v4 = 1;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v8 = a4;
        v9 = a5;
        fish_printf::printf_impl::sprintf_locale(&v14, &v1, v22, v23, ".", &v4, 2, *((long long *)&v0));
        v14.unwrap(&g_14c6040);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v4);
        *((int128_t *)&v4) = *((int128_t *)&v1);
    }
    else if (a5)
    {
        v18 = a1->field_10;
        v10 = 0;
        v11 = 4;
        v12 = 0;
        v13 = g_14c6010[0].localize();
        v2 = a2;
        v3 = a3;
        v1 = 1;
        v4.to_vec("-", 1);
        v15 = v6;
        memcpy(&v14, &v4, 16);
        v16.add(&v14, a5 * 4 - 4 + a4, 1);
        v19 = *((int128_t *)&v17);
        v20 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v6 = v20;
        v7 = 1;
        v8 = v19;
        fish_printf::printf_impl::sprintf_locale(&v1, &v10, v13, v21, ".", &v4, 2, *((long long *)&v0));
        v1.unwrap(&g_14c6028);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v16);
        *((int128_t *)&v4) = *((int128_t *)&v10);
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14c5ff8); /* do not return */
    }
    v6 = 0;
    v18.append(&v4);
    if (!a6)
        return;
    fish::builtins::shared::builtin_print_error_trailer(a0, v18, a2, a3);
    return;
}
