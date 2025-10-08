long long fish::ast::keywords_user_presentable_description(struct_0 *a0, char *a1, unsigned long a2)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    int v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x98], Other Possible Types: unsigned long long
    uint128_t v7;  // [bp-0x90]
    struct_0 *v8;  // [bp-0x78]
    char *v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    void* v11;  // [bp-0x60]
    int v12;  // [bp-0x58], Other Possible Types: char
    void* v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    struct_0 *v16;  // r12
    unsigned long long v17;  // rax
    char *v18;  // rdx
    unsigned long long v19;  // rax
    int v20;  // xmm0

    v16 = a0;
    if (a2 == 1)
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        (char)v3.to_arg(*(a1));
        fish_printf::printf_impl::sprintf_locale(&(char)v9, &v0, "keyword '%ls''%ls'", 13, &(char)v3, 1);
        (char)v9.unwrap(&g_14c5228);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v3);
        a0->field_10 = 0;
        v20 = *((int128_t *)&v0);
    }
    else if (a2)
    {
        v8 = a0;
        v12.to_vec("k", 9);
        v9 = a1;
        v10 = &a1[a2];
        v11 = 0;
        while (true)
        {
            v17 = v9.next();
            if (!v18)
                break;
            if (v17)
                v12.spec_extend(" ", "p");
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v4.to_arg(*(v18));
            fish_printf::printf_impl::sprintf_locale(&v14, &v0, "'%ls'", 5, &v4, 1);
            v14.unwrap(&g_14c5240);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
            v6 = v2;
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v19 = v5.index(v2, &g_14c5258);
            v12.spec_extend(v19, v19 + v18 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        }
        v16 = v8;
        v8->field_10 = v13;
        v20 = v12;
    }
    else
    {
        v3 = &g_14c5200;
        v5 = 1;
        v6 = 8;
        v7 = 0;
        core::panicking::panic_fmt(&v3, &g_14c5210); /* do not return */
    }
    *((void*)&v16->field_0) = v20;
    return v16;
}
