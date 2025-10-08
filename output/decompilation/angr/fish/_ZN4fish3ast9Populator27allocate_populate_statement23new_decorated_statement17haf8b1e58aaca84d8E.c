double fish::ast::Populator::allocate_populate_statement::new_decorated_statement(long long a0, long long a1)
{
    void* v0;  // [bp-0x160], Other Possible Types: char
    char v1;  // [bp-0x158], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x150]
    void* v3;  // [bp-0x148], Other Possible Types: char
    int v4;  // [bp-0x140], Other Possible Types: unsigned long long
    int v5;  // [bp-0x138], Other Possible Types: void*
    unsigned long long v6[3];  // [bp-0x128]
    unsigned long long v7;  // [bp-0x120]
    void* v8;  // [bp-0x118], Other Possible Types: unsigned long long
    int v9;  // [bp-0x108], Other Possible Types: char
    char v10;  // [bp-0x100]
    void* v11;  // [bp-0xf8]
    void* v12;  // [bp-0xf0]
    unsigned long long v13;  // [bp-0xe8]
    void* v14;  // [bp-0xe0]
    int v15;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v16;  // [bp-0xd0]
    int v17;  // [bp-0xc8]
    char v18;  // [bp-0xb8]
    int v19;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v20;  // [bp-0xa8]
    void* v21;  // [bp-0x90]
    unsigned long long v22;  // [bp-0x88]
    int v23;  // [bp-0x80]
    int v25;  // [bp-0x77]
    int v28;  // [bp-0x60], Other Possible Types: char
    int v29;  // [bp-0x50]
    char v30;  // [bp-0x40]
    unsigned int v32;  // r15d
    unsigned long long v33;  // rax
    int v35;  // xmm0
    int v36;  // xmm2
    unsigned long long v37;  // rdx

    v28.allocate_visit(a1);
    if (!a1->field_d9 && *((char *)(a1.peek_token(0) + 9)) == 4)
    {
        v32 = a1.peek_token(0).range();
        if (!a1->field_d0 || a1->field_d9)
        {
            *(v6) = 0x8000000000000000;
            a1->field_da = 1;
            if (!a1->field_d9)
                goto LABEL_132bd82;
        }
        else
        {
            v12 = 0;
            v13 = 4;
            v14 = 0;
            v7 = "E";
            v8 = 26;
            *(v6) = 0x8000000000000000;
            v33 = v6.localize();
            fish::parse_constants::token_type_user_presentable_description(&v0, 10, 0);
            *((int128_t *)&v4) = *((int128_t *)&v1);
            v3 = 1;
            v9.user_presentable_description(a1.peek_token(0));
            v35 = *((int128_t *)&v10);
            v36 = (int128_t)v5;
            *((int128_t *)&v15) = *((int128_t *)&v3);
            v17 = v36;
            v18 = 1;
            v19 = v35;
            fish_printf::printf_impl::sprintf_locale(&v3, &v12, v33, v37, ".", &(char)v15, 2);
            v3.unwrap(&g_14c56e0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v15);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
            *((int128_t *)&v6) = *((int128_t *)&v12);
            v8 = 0;
            a1->field_da = 1;
            if (!a1->field_d9)
            {
LABEL_132bd82:
                a1->field_d9 = 1;
                if ((char)core::sync::atomic::atomic_load(&g_15a95c0, 0))
                {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    v3.to_flog_str(&g_15a95b0);
                    v15.into_iter(&v3);
                    v0.spec_extend(&v15);
                    v0.push(58, &g_14c56e0);
                    v0.push(32, &g_14c56e0);
                    v3 = 0;
                    v4 = 4;
                    v5 = 0;
                    v15 = 4;
                    v16 = a1.spaces();
                    v18 = 0;
                    v19 = 1;
                    v20 = 0;
                    fish_printf::printf_impl::sprintf_locale(&v9, &v3, "%*sparse error - begin unwindingp", 32, &v15, 2);
                    v9.unwrap(&g_14c56e0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v15);
                    *((int128_t *)&v9) = *((int128_t *)&v3);
                    v11 = 0;
                    v3.to_flog_str(&v9);
                    v15.into_iter(&v3);
                    v0.spec_extend(&v15);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
                    v0.push(10, &g_14c56e0);
                    fish::flog::flog_impl(v1, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                }
                if ((int)v32.start() != -1)
                    a1->padding_0[24].push(v32, (unsigned int)v37, &g_14c56e0);
                if (a1->field_d0)
                {
                    v21 = 0;
                    v22 = 4;
                    *((uint128_t *)&v23) = 0;
                    *((uint128_t *)&v25) = 0;
                    core::option::unwrap_failed(&g_14c56e0); /* do not return */
                }
            }
        }
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v6);
    }
    a0[2] = *((int128_t *)&v30);
    *((void*)&a0[1]) = v29;
    *((void*)&a0[0]) = v28;
    return (unsigned long long)v28;
}
