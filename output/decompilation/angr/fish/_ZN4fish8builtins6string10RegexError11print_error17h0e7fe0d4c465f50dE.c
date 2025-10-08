void fish::builtins::string::RegexError::print_error(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    void* v2;  // [bp-0x108]
    char *v3;  // [bp-0x100]
    void* v4;  // [bp-0xf8], Other Possible Types: unsigned long long
    char v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    void* v7;  // [bp-0xe8], Other Possible Types: unsigned long long
    void* v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8]
    unsigned long long v11[3];  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    int v14;  // [bp-0xa8], Other Possible Types: char
    int v15;  // [bp-0xa8]
    int v16;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v17;  // [bp-0x98], Other Possible Types: void*, unsigned long long
    char v18;  // [bp-0x88]
    int v19;  // [sp-0x80], Other Possible Types: unsigned long
    char v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x60]
    unsigned long long v22;  // [bp-0x58]
    unsigned long long v23;  // [bp-0x40]
    unsigned long long v24;  // [bp-0x38]
    unsigned long long v26;  // rcx
    unsigned long v27;  // rcx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    char *v33;  // rsi
    unsigned long long v34;  // rdi
    unsigned long long v35;  // rax
    int v36;  // xmm0
    int v37;  // xmm2
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax

    v26 = a0->field_0;
    v27 = v26 - 1;
    if (1 > v26)
        v27 = 0;
    if (v27)
    {
        if (v27 == 1)
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v6 = "M";
            v7 = 56;
            v4 = 0x8000000000000000;
            v3 = &v4;
            v28 = v4.localize();
            v14 = 1;
            *((uint128_t *)&v16) = a0->field_10;
            fish_printf::printf_impl::sprintf_locale(&v11, &v0, v28, v29, ".", &v14, 1);
            v11.unwrap(&g_14d4340);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v14);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
            *((int128_t *)&v14) = *((int128_t *)&v0);
        }
        else
        {
            a3.append("s", 7);
            v8 = 0;
            v9 = 4;
            v10 = 0;
            v12 = "%";
            v13 = 3;
            v11 = 0x8000000000000000;
            v3 = &v11;
            v30 = v11.localize();
            v4 = 0;
            v6 = 4;
            v7 = 0;
            v14 = 1;
            v16 = a1;
            v17 = a2;
            v18 = 1;
            *((uint128_t *)&v19) = a0->field_10;
            fish_printf::printf_impl::sprintf_locale(&(char)v0, &v4, "%ls: Invalid escape sequence in pattern \"%ls\"\n", 46, &v14, 2);
            (char)v0.unwrap(&g_14d4358);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v14);
            v2 = 0;
            memcpy(&(char)v0, &v4, 16);
            v14 = 1;
            v16 = v1;
            v17 = 0;
            fish_printf::printf_impl::sprintf_locale(&v4, &v8, v30, v31, ".", &v14, 1);
            v4.unwrap(&g_14d4370);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v14);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v11);
            *((int128_t *)&v14) = *((int128_t *)&v8);
        }
        v17 = 0;
        v33 = &v14;
        v34 = a3;
    }
    else
    {
        v24 = a3;
        a3.append("s", 7);
        v8 = 0;
        v9 = 4;
        v10 = 0;
        v12 = "%";
        v13 = 43;
        v11 = 0x8000000000000000;
        v3 = &v11;
        v35 = v11.localize();
        v6 = a1;
        v23 = a2;
        v7 = a2;
        v5 = 1;
        (char)v14.error_message(a0);
        (char)v0.from(&(char)v14);
        v36 = *((int128_t *)&v1);
        v37 = *((int128_t *)&v7);
        *((int128_t *)&v14) = *((int128_t *)&v4);
        v17 = v37;
        v18 = 1;
        v19 = v36;
        fish_printf::printf_impl::sprintf_locale(&v4, &v8, v35, v38, ".", &(char)v14, 2);
        v4.unwrap(&g_14d42f8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v14);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v11);
        *((int128_t *)&v14) = *((int128_t *)&v8);
        v17 = 0;
        v24.append(&(char)v14);
        v24.append("s", 7);
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v6 = "%";
        v7 = 9;
        v4 = 0x8000000000000000;
        v39 = v4.localize();
        v14 = 1;
        v16 = a1;
        v17 = v23;
        v18 = 1;
        *((uint128_t *)&v19) = a0->field_20;
        fish_printf::printf_impl::sprintf_locale(&v11, &v0, v39, v38, ".", &v14, 2);
        v11.unwrap(&g_14d4310);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v14);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
        memcpy(&v14, &v0, 16);
        v17 = 0;
        v24.append(&v14);
        v24.append("s", 7);
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v6 = "%";
        v7 = 10;
        v4 = 0x8000000000000000;
        v40 = v4.localize();
        v14 = 1;
        v16 = a1;
        v17 = v23;
        v18 = 4;
        *((int *)&v19) = (!((char)v26 & 1) ? 0 : a0->field_8);
        v20 = 0;
        v21 = "^%ls: %*ls\n";
        v22 = 1;
        fish_printf::printf_impl::sprintf_locale(&v11, &v0, v40);
        v11.unwrap(&g_14d4328);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v14);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
        *((int128_t *)&v15) = *((int128_t *)&v0);
        v17 = 0;
        v33 = &v14;
        v34 = v24;
    }
    v34.append(v33);
    return;
}
