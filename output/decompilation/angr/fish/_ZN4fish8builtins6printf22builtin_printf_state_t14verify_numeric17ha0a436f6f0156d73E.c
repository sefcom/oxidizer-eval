long long fish::builtins::printf::builtin_printf_state_t::verify_numeric(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    void* v0;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v3[3];  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    int v6;  // [bp-0x88], Other Possible Types: unsigned long long, char
    unsigned long long v7;  // [bp-0x80]
    void* v8;  // [bp-0x78], Other Possible Types: unsigned long long
    char v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    void* v12;  // [bp-0x48], Other Possible Types: char
    unsigned long long v13;  // [bp-0x40]
    void* v14;  // [bp-0x38]
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned int v19;  // eax
    unsigned long long v22;  // rdx
    unsigned long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx

    if (a5 - 1 > 2)
    {
        v12 = 0;
        v13 = 4;
        v14 = 0;
        v4 = a1;
        v5 = a2;
        *((char *)v3) = 1;
        v1 = "N";
        v2 = 19;
        v0 = 0x8000000000000000;
        v24 = v0.localize();
        memcpy(&v8, &v5, 16);
        *((int128_t *)&v6) = *((int128_t *)&v3[0]);
        v9 = 1;
        v10 = v24;
        v11 = v25;
        fish_printf::printf_impl::sprintf_locale(&(unsigned long long)v3, &v12, "%ls: %ls!", 8, &(char)v6, 2);
        (unsigned long long)v3.unwrap(&g_14cb2d8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v6);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
        *((int128_t *)&v6) = *((int128_t *)&v12);
    }
    else if (a4)
    {
        if (a1 != a3)
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v4 = "%";
            v5 = 57;
            *(v3) = 0x8000000000000000;
            v6 = 1;
            v7 = a1;
            v8 = a2;
            v9 = 1;
            v10 = a3;
            v11 = a4;
            fish_printf::printf_impl::sprintf_locale(&v12, &v0, v3.localize(), v17, ".", &v6, 2);
            v12.unwrap(&g_14cb2a8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
            memcpy(&v6, &v0, 16);
            v8 = 0;
            fish::builtins::printf::builtin_printf_state_t::nonfatal_error(a0, &v6);
            v18 = a1.char_at(a2, 0);
            if ((unsigned int)v18 != 48)
                return v18;
            v19 = a3.char_at(a4, 0);
            if (v19 - 48 >= 10 && (v19 & 4294967263) - 65 > 5)
                return (v19 & 4294967263) - 65;
            v7 = "H";
            v8 = 60;
            v6 = 0x8000000000000000;
            fish::builtins::printf::builtin_printf_state_t::nonfatal_error(a0, v6.localize(), a2);
            return (unsigned long long)core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
        }
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 29;
        *(v3) = 0x8000000000000000;
        v6 = 1;
        v7 = a1;
        v8 = a2;
        fish_printf::printf_impl::sprintf_locale(&v12, &v0, v3.localize(), v22, ".", &v6, 1);
        v12.unwrap(&g_14cb2c0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v6);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
        *((int128_t *)&v6) = *((int128_t *)&v0);
    }
    else
    {
        return v23;
    }
    v8 = 0;
    return (unsigned long long)fish::builtins::printf::builtin_printf_state_t::fatal_error(a0, &v6);
}
