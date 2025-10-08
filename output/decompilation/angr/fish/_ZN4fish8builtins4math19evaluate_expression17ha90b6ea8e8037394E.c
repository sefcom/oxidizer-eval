long long fish::builtins::math::evaluate_expression(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, void* a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x110]
    void* v1;  // [bp-0x108], Other Possible Types: char
    char v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    void* v4;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v5;  // [bp-0xe8], Other Possible Types: char
    int v6;  // [bp-0xe8]
    int v7;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v9;  // [bp-0xc8]
    int v10;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xb8]
    void* v12;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v13;  // [bp-0x98]
    void* v14;  // [bp-0x90]
    char v15;  // [bp-0x88]
    int v16;  // [bp-0x78]
    unsigned long v17;  // [bp-0x70]
    unsigned long long v18;  // [bp-0x68]
    int v19;  // [bp-0x60], Other Possible Types: char
    char v20;  // [bp-0x50], Other Possible Types: unsigned long long
    char v21;  // [bp-0x48]
    char v22;  // [bp-0x40]
    char v23;  // cc_dep1
    unsigned long long v24;  // xmm0lq
    unsigned long long v25;  // rax
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    int v29;  // xmm0

    fish::tinyexpr::te_interp(&v19, a5, a6);
    v23 = v20;
    if (v20 == 10)
    {
        v24 = *((long long *)&v19);
        if ((9223372036854775807 & v24) == 0x7ff0000000000000)
        {
            v25 = "R";
            v26 = 18;
        }
        else if (!((char)((CmpF(v24, v24) & 69) >> 2) & 1))
        {
            if ((CmpF(9223372036854775807 & v24, 0x4340000000000000) & 1))
            {
                fish::builtins::math::format_double(&v1, a4);
                v1.push(10);
                v8 = v4;
                memcpy(&v5, &v1, 16);
                a2.append(&v5);
                return 0x100000000;
            }
            v25 = "R";
            v26 = 29;
        }
        else
        {
            v25 = "R";
            v26 = 22;
        }
        v1 = 0;
        v3 = 4;
        v4 = 0;
        *((char *)&v6) = 1;
        v7 = a0;
        v8 = a1;
        v9 = 1;
        v10 = v25;
        v11 = v26;
        fish_printf::printf_impl::sprintf_locale(&v12, &v1, &g_548c10, 16, &(char)v6, 2);
        v12.unwrap(&g_14cad20);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v6);
        *((int128_t *)&v6) = *((int128_t *)&v1);
        v8 = 0;
        a3.append(&(char)v6);
        v1 = 0;
        v3 = 4;
        v4 = 0;
        v5 = 1;
        v7 = a5;
        v8 = a6;
        fish_printf::printf_impl::sprintf_locale(&v12, &v1, "'%ls'\n%ls^%ls^\n%ls^\n", 6, &v5, 1);
        v12.unwrap(&g_14cad38);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v5);
        memcpy(&v5, &v1, 16);
        v8 = 0;
        a3.append(&v5);
        return 4294967297;
    }
    else
    {
        v18 = v20;
        v16 = v19;
        v12 = 0;
        v13 = 4;
        v14 = 0;
        v3 = a0;
        v4 = a1;
        v2 = 1;
        v27 = (unsigned long long)v18.describe_wstr();
        memcpy(&v8, &v4, 16);
        *((int128_t *)&v5) = *((int128_t *)&v1);
        v9 = 1;
        v10 = v27;
        v11 = v28;
        fish_printf::printf_impl::sprintf_locale(&v1, &v12, "%", 16, ".", &(char)v5, 2, *((long long *)&v0));
        v1.unwrap(&g_14cad50);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v5);
        *((int128_t *)&v5) = *((int128_t *)&v12);
        v8 = 0;
        a3.append(&(char)v5);
        v1 = 0;
        v3 = 4;
        v4 = 0;
        v5 = 1;
        v7 = a5;
        v8 = a6;
        fish_printf::printf_impl::sprintf_locale(&v12, &v1, "'%ls'\n%ls^%ls^\n%ls^\n", 6, &v5, 1);
        v12.unwrap(&g_14cad68);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v5);
        memcpy(&v5, &v1, 16);
        v8 = 0;
        a3.append(&v5);
        if ((char)_ccall(4, 24, (long long)v16 + 1, 0, (unsigned long long)(char)(v23 < 10)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14cad80); /* do not return */
        v12.from_elem(32, (long long)v16 + 1, &g_14cad98);
        if (v17 > 1)
        {
            v21.from_elem(126, v17 - 2, &g_14cadc8);
            v29 = *((int128_t *)&v22);
            v1 = 0;
            v3 = 4;
            v4 = 0;
            *((char *)&v6) = 1;
            *((int128_t *)&v7) = *((int128_t *)&v13);
            v9 = 1;
            v10 = v29;
            fish_printf::printf_impl::sprintf_locale(&v15, &v1, "%ls^%ls^\n%ls^\n", 9, &(char)v6, 2);
            v15.unwrap(&g_14cade0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v6);
            *((int128_t *)&v6) = *((int128_t *)&v1);
            v8 = 0;
            a3.append(&(char)v6);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v21);
        }
        else
        {
            v1 = 0;
            v3 = 4;
            v4 = 0;
            *((char *)&v6) = 1;
            *((int128_t *)&v7) = *((int128_t *)&v13);
            fish_printf::printf_impl::sprintf_locale(&v15, &v1, "%ls^\n", 5, &(char)v6, 1);
            v15.unwrap(&g_14cadb0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v6);
            *((int128_t *)&v6) = *((int128_t *)&v1);
            v8 = 0;
            a3.append(&(char)v6);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
        return 4294967297;
    }
}
