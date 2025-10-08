long long fish::builtins::argparse::parse_option_spec(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4)
{
    void* v0;  // [bp-0x140]
    unsigned long long v1;  // [bp-0x138]
    void* v2;  // [bp-0x130]
    int v3;  // [bp-0x128], Other Possible Types: char, unsigned long long
    int v4;  // [bp-0x128], Other Possible Types: char
    int v5;  // [bp-0x128]
    int v6;  // [bp-0x120], Other Possible Types: unsigned long long
    int v7;  // [bp-0x118], Other Possible Types: void*, char, unsigned long long
    unsigned long long v8;  // [bp-0x118]
    int v9;  // [bp-0x110]
    int v10;  // [bp-0x108], Other Possible Types: char
    int v11;  // [bp-0x100], Other Possible Types: unsigned long
    char v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xe8]
    void* v14;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0xd8]
    void* v16;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0xc8]
    void* v19;  // [bp-0xc0]
    unsigned long long v21;  // [bp-0xb8]
    uint128_t v22;  // [bp-0xb0]
    unsigned int v23;  // [bp-0xa0]
    unsigned int v24;  // [bp-0x9c]
    unsigned long long v25;  // [bp-0x98]
    void* v26;  // [bp-0x90], Other Possible Types: unsigned long long
    char v27;  // [bp-0x88], Other Possible Types: unsigned long long
    int v28;  // [bp-0x80], Other Possible Types: unsigned long long
    int v29;  // [bp-0x78], Other Possible Types: unsigned long long
    char v30;  // [bp-0x40]
    unsigned long long v33;  // rax
    unsigned int v34;  // eax
    int v35;  // xmm0
    unsigned long long v36;  // rdx
    unsigned long long v38;  // rbp
    unsigned long long v40;  // r13
    unsigned long long v41;  // rbx
    void* v42;  // rdx
    unsigned long long v43;  // rax
    int v44;  // xmm1
    int v46;  // xmm0
    int v47;  // xmm1
    unsigned long long v50;  // rax
    unsigned long long v51;  // rdx

    if (a2)
    {
        v25 = a1;
        v26 = a2;
        if (!(char)fish::wutil::fish_iswalnum(a1.char_at(a2, 0)) && (int)a1.char_at(a2, 0) != 35)
        {
            if (a2 != 1 && (int)a1.char_at(a2, 0) == 47)
                goto LABEL_1338ee6;
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v15 = "%";
            v16 = 55;
            v14 = 0x8000000000000000;
            v33 = v14.localize();
            *((int128_t *)&v28) = *((int128_t *)&(&a0->padding_0)[1]);
            v27 = 1;
            v34 = a1.char_at(a2, 0);
            v35 = *((int128_t *)&v27);
            *((int128_t *)&v7) = (int128_t)v29;
            v3 = v35;
            v10 = 4;
            v11 = v34;
            fish_printf::printf_impl::sprintf_locale(&v27, &v0, v33, v36, ".", &(char)v3, 2);
            v27.unwrap(&g_14c6b10);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v3);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v14);
            *((int128_t *)&v3) = *((int128_t *)&v0);
        }
        else
        {
LABEL_1338ee6:
            v23 = a1.char_at(a2, 0);
            v17 = 4;
            v19 = 0;
            v21 = 4;
            v22 = 0;
            v14 = 0;
            v15 = 8;
            v16 = 0;
            v24 = 65537;
            v38 = 1;
            if (a2 != 1)
            {
                if (!(char)fish::builtins::argparse::parse_option_spec_sep(a0, &v14, a1, a2, &v25, a3, a4))
                {
                    core::ptr::drop_in_place<fish::builtins::argparse::OptionSpec>(&v14);
                    return 0;
                }
                v38 = v26;
                if (!v38)
                    goto LABEL_1339209;
            }
            v40 = v25;
            v3 = v40;
            v6 = v38 * 4 + v40;
            v7 = 0;
            v41 = v3.fold();
            if (v41)
            {
                v17 = v40.slice_to(v38, v41);
                v19 = v42;
                if ((&a0[5].padding_0)[1].get_inner(v17, a2))
                {
                    v0 = 0;
                    v1 = 4;
                    v2 = 0;
                    v28 = "%";
                    v29 = 37;
                    v27 = 0x8000000000000000;
                    v43 = v27.localize();
                    v44 = *((int128_t *)&v17);
                    v4 = 1;
                    *((int128_t *)&v6) = *((int128_t *)&(&a0->padding_0)[1]);
                    v10 = 1;
                    v11 = v44;
                    fish_printf::printf_impl::sprintf_locale(&v30, &v0, v43, v42, ".", &(unsigned long long)v5, 2);
                    v30.unwrap(&g_14c6b28);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v5);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v27);
                    *((int128_t *)&v5) = *((int128_t *)&v0);
                    v7 = 0;
                    a4.append(&(unsigned long long)v5);
                    core::ptr::drop_in_place<fish::builtins::argparse::OptionSpec>(&v14);
                    return 0;
                }
            }
            v25 = v40.slice_from(v38, v41);
            v26 = v42;
LABEL_1339209:
            if (!(char)fish::builtins::argparse::parse_flag_modifiers(a0, &v14, a1, a2, &v25, a4))
            {
                core::ptr::drop_in_place<fish::builtins::argparse::OptionSpec>(&v14);
                return 0;
            }
            if (v19)
            {
                v3.to_vec(v17, v19);
                v29 = v8;
                memcpy(&(char)v27, &v3, 16);
                if ((int)(&a0[5].padding_0)[1].insert(&(char)v27, v23) != 0x110000)
                {
                    v3 = &g_14c6ae8;
                    v6 = 1;
                    v7 = 8;
                    *((uint128_t *)&v9) = 0;
                    core::panicking::panic_fmt(&v3, &g_14c6b40); /* do not return */
                }
            }
            v13 = *((long long *)&v23);
            v46 = *((int128_t *)&v14);
            v47 = *((int128_t *)&v16);
            memcpy(&v12, &v22, 16);
            *((int128_t *)&v10) = *((int128_t *)&v19);
            v7 = v47;
            v4 = v46;
            v27.insert((char *)&a0[3].field_8 + 8, v23, &(unsigned long long)v4);
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<fish::builtins::argparse::OptionSpec>>(&v27) & 0xffffffffffffff00 | 1;
        }
    }
    else
    {
        v14 = 0;
        v15 = 4;
        v16 = 0;
        v28 = "%";
        v29 = 62;
        v27 = 0x8000000000000000;
        v50 = v27.localize();
        v3 = 1;
        *((int128_t *)&v6) = *((int128_t *)&(&a0->padding_0)[1]);
        fish_printf::printf_impl::sprintf_locale(&(char)v0, &v14, v50, v51, ".", &v3, 1);
        (char)v0.unwrap(&g_14c6af8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v27);
        *((int128_t *)&v3) = *((int128_t *)&v14);
    }
    v7 = 0;
    a4.append(&v3);
    return 0;
}
