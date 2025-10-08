long long fish::builtins::abbr::abbr_add(struct_2 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x1a8], Other Possible Types: char
    char v1;  // [bp-0x1a8]
    int v2;  // [bp-0x1a8], Other Possible Types: char
    unsigned long v3;  // [bp-0x1a8]
    int v4;  // [bp-0x1a8]
    unsigned long long v5;  // [bp-0x1a0]
    int v6;  // [bp-0x198], Other Possible Types: void*, unsigned long long
    unsigned long v7;  // [bp-0x190]
    unsigned long v8;  // [bp-0x188], Other Possible Types: char
    int v9;  // [bp-0x180], Other Possible Types: unsigned long, unsigned long long
    struct_2 *v10;  // [bp-0x178], Other Possible Types: unsigned long, unsigned long long
    void* v11;  // [bp-0x170]
    char v12;  // [bp-0x168]
    int v13;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x158]
    void* v15;  // [bp-0x140], Other Possible Types: char, unsigned long long
    unsigned long long v16;  // [bp-0x138]
    void* v17;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v18;  // [bp-0x108], Other Possible Types: char, unsigned long long
    unsigned long long v19;  // [bp-0x100]
    void* v20;  // [bp-0xf8], Other Possible Types: unsigned long long
    void* v21;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0xe8]
    void* v23;  // [sp-0xe0]
    char v24;  // [bp-0xd8]
    void* v25;  // [bp-0xb8], Other Possible Types: char
    int v26;  // [bp-0xb8]
    void* v27;  // [sp-0xa8]
    char v28;  // [bp-0xa8]
    void* v29;  // [bp-0xa8], Other Possible Types: unsigned long
    char v30;  // [bp-0xa1]
    char v31;  // [bp-0xa0]
    void* v32;  // [bp-0x90]
    unsigned long v33;  // [bp-0x88]
    unsigned long v34;  // [bp-0x80]
    unsigned long long v35[3];  // [bp-0x78]
    unsigned long long v36;  // [bp-0x70]
    unsigned long long v37;  // [bp-0x68]
    void* v38;  // [bp-0x60]
    unsigned long long v39;  // [bp-0x58]
    void* v40;  // [bp-0x50]
    int v41;  // [bp-0x48]
    unsigned long long v42;  // [bp-0x40]
    unsigned long long v43;  // [bp-0x38]
    unsigned long v45;  // r14
    unsigned long v46;  // rbp
    unsigned long long v48;  // rdx
    unsigned long v49;  // r12
    unsigned long long v50;  // rax
    unsigned long long v51;  // rdx
    unsigned long v52;  // rbx
    unsigned long v53;  // r15
    unsigned long long v56;  // rsi
    unsigned long v57;  // r14
    unsigned long v58;  // r14
    unsigned long v59;  // rbp
    char v60;  // al
    unsigned long long v62;  // rdx
    unsigned long long v64;  // rdx
    unsigned long long v66;  // rdx
    unsigned long long v68;  // rax
    int v69;  // xmm0
    unsigned long long v70;  // rdx
    unsigned long long v73;  // rdx

    v45 = a0->field_28;
    v46 = a0->field_30;
    if (((char)(((0 ^ v46) & (0 ^ -(v46))) >> 63) & v45 < 2))
    {
        v21 = 0;
        v22 = 4;
        v23 = 0;
        v16 = "%";
        v17 = 41;
        v15 = 0x8000000000000000;
        v0 = 1;
        v5 = "a";
        v6 = 4;
        v8 = 1;
        v9 = "-";
        v10 = 5;
        fish_printf::printf_impl::sprintf_locale(&v25, &v21, v15.localize(), v48, ".", &v0, 2);
        v25.unwrap(&g_14c6588);
        goto LABEL_13357e4;
    }
    else
    {
        if (v45)
        {
            v49 = a0->field_20;
            if (!*((long long *)(v49 + 16)))
                goto LABEL_133570e;
            v3 = *((long long *)(v49 + 8));
            v5 = *((long long *)(v49 + 8)) + *((long long *)(v49 + 16)) * 4;
            if (v3.try_fold().eq(1))
            {
                v21 = 0;
                v22 = 4;
                v23 = 0;
                v16 = "%";
                v17 = 59;
                v15 = 0x8000000000000000;
                v50 = v15.localize();
                v1 = 1;
                v5 = "a";
                v6 = 4;
                v8 = 1;
                v9 = "-";
                v10 = 5;
                v12 = 1;
                *((int128_t *)&v13) = *((int128_t *)(v49 + 8));
                fish_printf::printf_impl::sprintf_locale(&v25, &v21, v50, v51, ".", &v1, 3);
                v25.unwrap(&g_14c6570);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v1);
            }
            else
            {
                if (a0->field_48 == 0x8000000000000000)
                {
                    v34 = *((long long *)(v49 + 8));
                    v33 = *((long long *)(v49 + 16));
                    v32 = 0;
                }
                else
                {
                    v25 = 0;
                    v27 = 0;
                    v31 = 0;
                    v28 = 0;
                    v30 = 1;
                    v52 = a0->field_50;
                    v53 = a0->field_58;
                    (char)v21.build(&v25, fish::re::to_boxed_chars(v52, v53));
                    if (v21)
                    {
                        v34 = v52;
                        v33 = v53;
                        fish::re::regex_make_anchored(&v18, v52, v53);
                        v3.build(&v25, fish::re::to_boxed_chars(v19, v20));
                        (char)v15.expect(&v3);
                        *((double *)&v32) = (char)v15.new();
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
                        core::ptr::drop_in_place<core::result::Result<pcre2::regex_impl::Regex<pcre2::ffi::CodeUnitWidth32>,pcre2::error::Error>>(&(char)v21);
                    }
                    else
                    {
                        v43 = *((long long *)&v24);
                        *((int128_t *)&v41) = *((int128_t *)&v22);
                        v38 = 0;
                        v39 = 4;
                        v40 = 0;
                        v36 = "%";
                        v37 = 43;
                        *(v35) = 0x8000000000000000;
                        v68 = v35.localize();
                        v16 = "a";
                        v17 = 4;
                        v15 = 1;
                        v18.error_message(&(char)v41);
                        v69 = *((int128_t *)&v19);
                        memcpy(&v3, &v15, 16);
                        *((int128_t *)&v6) = *((int128_t *)&v17);
                        v8 = 0;
                        v9 = v69;
                        fish_printf::printf_impl::sprintf_locale(&v15, &v38, v68, v70, ".", &v3, 2);
                        v15.unwrap(&g_14c64b0);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v3);
                        core::ptr::drop_in_place<alloc::string::String>(&v18);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v35);
                        *((int128_t *)&v0) = *((int128_t *)&v38);
                        v6 = 0;
                        a1.append(&v3);
                        if ((int)v41 == 1)
                        {
                            v18 = 0;
                            v19 = 4;
                            v20 = 0;
                            v16 = "%";
                            v17 = 9;
                            v15 = 0x8000000000000000;
                            v1 = 1;
                            v5 = "a";
                            v6 = 4;
                            v8 = 1;
                            v9 = v52;
                            v10 = v53;
                            fish_printf::printf_impl::sprintf_locale(&v35, &v18, v15.localize(), v70, ".", &(unsigned long long)v2, 2);
                            v35.unwrap(&g_14c64c8);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v2);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v15);
                            *((int128_t *)&v2) = *((int128_t *)&v18);
                            v6 = 0;
                            a1.append(&(unsigned long long)v2);
                            v15 = 0;
                            v16 = 4;
                            v17 = 0;
                            v2 = 1;
                            v5 = "a";
                            v6 = 4;
                            v8 = 4;
                            v9 = v42;
                            v12 = 0;
                            v13 = "^%ls: %*ls\n";
                            v14 = 1;
                            fish_printf::printf_impl::sprintf_locale(&v18, &v15, "%ls: %*ls\n", 10, &(unsigned long long)v4, 3);
                            v18.unwrap(&g_14c64e0);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(unsigned long long)v4);
                            *((int128_t *)&v4) = *((int128_t *)&v15);
                            v6 = 0;
                            a1.append(&(unsigned long long)v4);
                        }
                        core::ptr::drop_in_place<core::result::Result<pcre2::regex_impl::Regex<pcre2::ffi::CodeUnitWidth32>,pcre2::error::Error>>(&(char)v21);
                        return 8589934593;
                    }
                }
                if (v46 == 0x8000000000000000)
                {
                    v15 = 0;
                    v16 = 4;
                    v17 = 0;
                    v3 = v49;
                    v5 = v49 + v45 * 24;
                    v6 = 1;
                    v56 = 1;
                    v6 = 0;
                    v57 = v3.nth(v56);
                    memcpy(&v25, &v15, 16);
                    v29 = v17;
                    goto LABEL_1335a79;
                }
                else
                {
                    if (v45 == 1)
                    {
                        v58 = a0->field_38;
                        v59 = a0->field_40;
                        if (!(char)fish::common::valid_func_name(v58, v59) || fish::builtins::abbr::contains_whitespace(v58, v59))
                        {
                            v21 = 0;
                            v22 = 4;
                            v23 = 0;
                            v16 = "%";
                            v17 = 32;
                            v15 = 0x8000000000000000;
                            v1 = 1;
                            v5 = "a";
                            v6 = 4;
                            v8 = 1;
                            v9 = v58;
                            v10 = v59;
                            fish_printf::printf_impl::sprintf_locale(&v18, &v21, v15.localize(), v64, ".", &(unsigned long long)v2, 2);
                            v18.unwrap(&g_14c6540);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v2);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v15);
                            *((int128_t *)&v2) = *((int128_t *)&v21);
                            v6 = 0;
                            a1.append(&(unsigned long long)v2);
                        }
                        else
                        {
                            fish::builtins::fish_indent::fish_indent::{{closure}}(&v3, v58, v59);
                            v29 = v6;
                            memcpy(&v25, &v3, 16);
LABEL_1335a79:
                            v60 = (a0->field_7e != 2 ? a0->field_7e : a0->field_10);
                            if (((!a0->field_10 | v60) & 1))
                            {
                                v7 = v49;
                                v8 = v34;
                                v9 = v33;
                                v11 = v32;
                                memcpy(&v3, &v26, 16);
                                v6 = v29;
                                v10 = a0;
                                v12 = v60 & 1;
                                fish::abbrs::with_abbrs_mut(&v3);
                                return 0x200000000;
                            }
                            v21 = 0;
                            v22 = 4;
                            v23 = 0;
                            v16 = "%";
                            v17 = 57;
                            v15 = 0x8000000000000000;
                            v1 = 1;
                            v5 = "a";
                            v6 = 4;
                            fish_printf::printf_impl::sprintf_locale(&v18, &v21, v15.localize(), v62, ".", &(unsigned long long)v2, 1);
                            v18.unwrap(&g_14c6558);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v2);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v15);
                            *((int128_t *)&v2) = *((int128_t *)&v21);
                            v6 = 0;
                            a1.appendln(&(unsigned long long)v2);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v26);
                        }
                    }
                    else
                    {
                        v15 = 0;
                        v16 = 4;
                        v17 = 0;
                        v1 = 1;
                        v5 = "a";
                        v6 = 4;
                        fish_printf::printf_impl::sprintf_locale(&v21, &v15, g_14c6510[0].localize(), v66, ".", &(unsigned long long)v2, 1);
                        v21.unwrap(&g_14c6528);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v2);
                        *((int128_t *)&v2) = *((int128_t *)&v15);
                        v6 = 0;
                        a1.append(&(unsigned long long)v2);
                    }
                    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<pcre2::regex_impl::Regex<pcre2::ffi::CodeUnitWidth32>>>>(v32);
                    return 8589934593;
                }
            }
        }
        else
        {
LABEL_133570e:
            v21 = 0;
            v22 = 4;
            v23 = 0;
            v16 = "%";
            v17 = 30;
            v15 = 0x8000000000000000;
            v0 = 1;
            v5 = "a";
            v6 = 4;
            v8 = 1;
            v9 = "-";
            v10 = 5;
            fish_printf::printf_impl::sprintf_locale(&v25, &v21, v15.localize(), v73, ".", &v0, 2);
            v25.unwrap(&g_14c6498);
LABEL_13357e4:
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v0);
        }
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v15);
        memcpy(&v0, &v21, 16);
        v6 = 0;
        a1.append(&v0);
        return 8589934593;
    }
}
