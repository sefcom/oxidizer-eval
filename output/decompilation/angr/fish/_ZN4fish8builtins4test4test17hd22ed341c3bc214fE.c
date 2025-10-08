long long fish::builtins::test::test(unsigned long long a0, struct_0 *a1, unsigned long long a2[2], unsigned long long a3)
{
    unsigned long long v0[3];  // [bp-0xc8]
    unsigned long long v1[3];  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    void* v3;  // [bp-0xb8], Other Possible Types: unsigned long long, unsigned long
    void* v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long v10;  // [bp-0x68]
    void* v11;  // [bp-0x60], Other Possible Types: char
    unsigned long long v12;  // [bp-0x58]
    void* v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    unsigned long long v15[3];  // [bp-0x40]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // r15
    unsigned long long v19;  // r14
    unsigned long long v20;  // r12
    unsigned long v21;  // r13
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    struct_2 *v24;  // rdx
    unsigned long long v25[3];  // rbp
    unsigned long long v26;  // rbx
    unsigned long long v28;  // rbx
    unsigned long long v30;  // rbx
    unsigned long long v32;  // r12
    char v33;  // al
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rbx

    v18 = 0x200000000;
    if (!a3)
        return 8589934593;
    v20 = a2[0];
    v10 = a2[1];
    v21 = a3 - 1;
    if (v20.eq_by(v20 + a2[1] * 4, "[andbeginbgblockbreakbreakpointbuiltincdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", "andbeginbgblockbreakbreakpointbuiltincdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP"))
    {
        if (!a2[v21].eq_by(a2[v21] + a2[v21 + 1] * 4, "]", &g_a13501))
        {
            v2 = "[";
            v3 = 32;
            *(v0) = 0x8000000000000000;
            v22 = v0.localize();
            a1->field_10.appendln(v22, a2);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
            fish::builtins::shared::builtin_print_error_trailer(a0, a1->field_10, v20, v10);
            return 8589934593;
        }
        else if (v21)
        {
            v21 = a3 - 2;
        }
        else
        {
            core::panicking::panic_const::panic_const_sub_overflow(&g_14d4c90); /* do not return */
        }
    }
    v23 = 1.index(v21 + 1, a2, a3, &g_14d4ca8);
    v14.collect(v23, v24 * 16 + v23);
    v25 = v15;
    v26 = *((long long *)&v16);
    if (fish::future_feature_flags::test(5))
    {
        if (v21)
        {
            if (v21 != 1)
                goto LABEL_13850b6;
            if (!v26)
                core::panicking::panic_bounds_check(0, 0, &g_14d4d38); /* do not return */
            if (v25[1].eq(v25[2], "-n", 2))
            {
                v19 = 1;
                v18 = 0x100000000;
            }
            else if (v25[1].eq(v25[2], "-z", 2))
            {
                v18 = 0;
                v19 = 0;
            }
            else
            {
LABEL_13850b6:
                v11 = 0;
                v12 = 4;
                v13 = 0;
                v32 = v25.parse_args(v26, &v11, v20, v10);
                if (v32)
                {
                    v4 = 0;
                    v5 = 8;
                    v6 = 0;
                    v33 = v24->field_18(v32, a1, &v4);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v4);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn fish::builtins::test::test_expressions::Expression>>(v32, v24);
                    v18 = 0x100000000;
                    v19 = v33 ^ 1;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
                }
                else
                {
                    v34 = a1->field_10;
                    v3 = 0;
                    *((int128_t *)&v0) = *((int128_t *)&v11);
                    v34.append(&(char)v0);
                    (char)v0.current_line(a0);
                    v34.append(&(char)v0);
                    v18 = 0x100000000;
                    v19 = 1;
                }
            }
        }
        else
        {
            v28 = a1->field_10;
            v4 = 0;
            v5 = 4;
            v6 = 0;
            v8 = "%";
            v9 = 35;
            v7 = 0x8000000000000000;
            *((char *)v0) = 1;
            v2 = v20;
            v3 = v10;
            fish_printf::printf_impl::sprintf_locale(&v11, &v4, v7.localize(), v24, ".", &(unsigned long long)v1, 1);
            v11.unwrap(&g_14d4d20);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v1);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
            *((int128_t *)&v1) = *((int128_t *)&v4);
            v3 = 0;
            v28.appendln(&(unsigned long long)v1);
            v19 = 1;
            fish::builtins::shared::builtin_print_error_trailer(a0, v28, v20, v10);
        }
    }
    else
    {
        if (v21)
        {
            if (v21 != 1)
                goto LABEL_13850b6;
            if ((char)core::sync::atomic::atomic_load(&g_15a9440, 0))
            {
                if (!v26)
                {
                    core::panicking::panic_bounds_check(0, 0, &g_14d4cd8); /* do not return */
                }
                else if (!v25[1].eq(v25[2], "-z", 2))
                {
                    v30 = a1->field_10;
                    v4 = 0;
                    v5 = 4;
                    v6 = 0;
                    v8 = "%";
                    v9 = 64;
                    v7 = 0x8000000000000000;
                    *((char *)v0) = 1;
                    v2 = v20;
                    v3 = v10;
                    fish_printf::printf_impl::sprintf_locale(&v11, &v4, v7.localize(), v24, ".", &(unsigned long long)v1, 1);
                    v11.unwrap(&g_14d4cf0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v1);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
                    *((int128_t *)&v1) = *((int128_t *)&v4);
                    v3 = 0;
                    v30.appendln(&(unsigned long long)v1);
                    (unsigned long long)v1.current_line(a0);
                    v30.append(&(unsigned long long)v1);
                }
            }
            else
            {
                if (!v26)
                    core::panicking::panic_bounds_check(0, 0, &g_14d4d08); /* do not return */
            }
            v19 = !v25[2];
            v18 = v19 * 0x100000000;
        }
        else
        {
            v19 = 1;
            if ((char)core::sync::atomic::atomic_load(&g_15a9440, 0))
            {
                v35 = a1->field_10;
                v4 = 0;
                v5 = 4;
                v6 = 0;
                v8 = "%";
                v9 = 63;
                v7 = 0x8000000000000000;
                *((char *)v0) = 1;
                v2 = v20;
                v3 = v10;
                fish_printf::printf_impl::sprintf_locale(&(char)v11, &v4, v7.localize(), v24, ".", &(unsigned long long)v1, 1);
                (char)v11.unwrap(&g_14d4cc0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v1);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
                *((int128_t *)&v1) = *((int128_t *)&v4);
                v3 = 0;
                v35.appendln(&(unsigned long long)v1);
                (unsigned long long)v1.current_line(a0);
                v35.append(&(unsigned long long)v1);
            }
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v14);
    return v18 | v19;
}
