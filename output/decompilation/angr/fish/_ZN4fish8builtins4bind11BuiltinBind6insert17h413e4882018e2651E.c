long long fish::builtins::bind::BuiltinBind::insert(struct_1 *a0, unsigned long long a1, void* a2, unsigned long long a3, unsigned long long a4, struct_0 *a5)
{
    int v0;  // [bp-0x168], Other Possible Types: void*, unsigned long long
    unsigned long long v1;  // [bp-0x160]
    void* v2;  // [bp-0x158], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x140], Other Possible Types: char
    unsigned long v4;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x130], Other Possible Types: unsigned long
    unsigned long v6;  // [bp-0x120], Other Possible Types: unsigned long long
    int v7;  // [bp-0x118], Other Possible Types: char
    int v8;  // [bp-0x118]
    unsigned long v9;  // [bp-0x110]
    void* v10;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [bp-0xf8], Other Possible Types: char
    int v12;  // [bp-0xf0], Other Possible Types: unsigned long long
    int v13;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v14;  // [bp-0xd8]
    unsigned long long v15;  // [bp-0xd0]
    unsigned long long v16;  // [bp-0xc8]
    unsigned long v17;  // [bp-0xb0]
    unsigned long v18;  // [bp-0xa8]
    unsigned long v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x98]
    unsigned long long v21;  // [bp-0x90]
    unsigned long long v22;  // [bp-0x88]
    void* v23;  // [bp-0x80]
    unsigned long long v24;  // [bp-0x78]
    void* v25;  // [bp-0x70]
    int v26;  // [bp-0x68]
    unsigned long long *v27;  // [bp-0x60]
    unsigned long long v28;  // [bp-0x58]
    char v29;  // [bp-0x48]
    char v30;  // [bp-0x40]
    unsigned long long v32;  // rax
    unsigned long v33;  // rdi
    unsigned long v34;  // rdx
    unsigned long long v36;  // rdx
    void* v38;  // rsi
    unsigned long v39;  // r13
    unsigned long v40;  // rbp
    unsigned long long v42;  // rax
    int v43;  // xmm1
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rdx
    void* v49;  // rax
    unsigned long v50;  // rbp
    void* v51;  // rbx
    unsigned long v52;  // r12

    v32 = a3 - a1;
    if (a3 < a1)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14c7758); /* do not return */
    v33 = *((long long *)a2);
    v34 = (long long)a2[8];
    if (v32 < 2)
    {
        if (!a0->field_3b && !a0->field_39)
        {
            a0->field_3c = 1;
            a0->field_3a = 1;
        }
    }
    else
    {
        if (a0->field_3b && a0->field_39 == 1)
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v7 = 1;
            v9 = v33;
            v10 = v34;
            v11 = 0;
            v12 = "--presetFunctionterminalkey_stabBorg cowDeadlockcontinuet";
            v13 = 8;
            v14 = 0;
            v15 = "--user";
            v16 = 6;
            fish_printf::printf_impl::sprintf_locale(&v3, &v0, g_14c6cd0[0].localize(), v36, ".", &v7, 3);
            v3.unwrap(&g_14c7770);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v7);
            memcpy(&v7, &v0, 16);
            v10 = 0;
            return (unsigned long long)a5->field_10.append(&v7) & 0xffffffffffffff00 | 1;
        }
    }
    if (!v32)
    {
        if (a0->field_35)
        {
            v51 = a0->field_8;
            v52 = a0->field_10;
            if (a0->field_3c)
                goto LABEL_133e28f;
        }
        else
        {
            v51 = 0;
            v52 = a0->field_10;
            if (a0->field_3c)
            {
LABEL_133e28f:
                *((long long *)&a0->field_40).list(v51, v52, 0, a4, a5->field_8, a5->field_27);
            }
        }
        if (a0->field_3a)
            *((long long *)&a0->field_40).list(v51, v52, 1, a4, a5->field_8, a5->field_27);
    }
    else if (v32 == 1)
    {
        v18 = v33;
        v19 = v34;
        v6 = a4;
        if (a1 >= a3)
            core::panicking::panic_bounds_check(a1, a3, &g_14c7788); /* do not return */
        v38 = a1 * 16;
        v39 = *((long long *)(a2 + v38));
        v40 = *((long long *)(a2 + v38 + 8));
        (char)v7.compute_seq(a5->field_10, v39, v40);
        if ((char)(((0 ^ *((long long *)&v7)) & (0 ^ -(*((long long *)&v7)))) >> 63))
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<fish::key::Key>>>(&(char)v7) & 0xffffffffffffff00 | 1;
        v17 = a5->field_10;
        v28 = v10;
        *((int128_t *)&v26) = *((int128_t *)&v7);
        if ((char)*((long long *)&a0->field_40).list_one_user_andor_preset(v27, v28, a0->field_8, a0->field_10, a0->field_3a, a0->field_3c, v6, a5->field_8, a5->field_27))
        {
            core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(&(char)v26);
        }
        else
        {
            fish::common::escape_string(&v29, v39, v40, 0);
            if (!a0->field_38)
            {
                if (v28 == 1)
                {
                    v23 = 0;
                    v24 = 4;
                    v25 = 0;
                    v21 = "%";
                    v22 = 36;
                    v20 = 0x8000000000000000;
                    v42 = v20.localize();
                    v4 = v18;
                    v5 = v19;
                    v3 = 1;
                    (char)v0.to_arg(*(v27));
                    memcpy(&v10, &v5, 16);
                    *((int128_t *)&v7) = *((int128_t *)&v3);
                    v43 = *((int128_t *)&v2);
                    *((int128_t *)&v11) = *((int128_t *)&v0);
                    v13 = v43;
                    fish_printf::printf_impl::sprintf_locale(&(char)v0, &v23, v42, v44, ".", &(char)v7, 2);
                    (char)v0.unwrap(&g_14c77a0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v7);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v20);
                    *((int128_t *)&v7) = *((int128_t *)&v23);
                    v10 = 0;
                    v17.append(&(char)v7);
                }
                else
                {
                    v3 = 0;
                    v4 = 4;
                    v5 = 0;
                    v1 = "%";
                    v2 = 45;
                    v0 = 0x8000000000000000;
                    v45 = v0.localize();
                    *((char *)&v8) = 1;
                    v9 = v18;
                    v10 = v19;
                    v11 = 1;
                    *((int128_t *)&v12) = *((int128_t *)&v30);
                    fish_printf::printf_impl::sprintf_locale(&(char)v20, &v3, v45, v46, ".", &(char)v8, 2);
                    (char)v20.unwrap(&g_14c77b8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v8);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v8) = *((int128_t *)&v3);
                    v10 = 0;
                    v17.append(&(char)v8);
                }
            }
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v29);
            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(&(char)v26) & 0xffffffffffffff00 | 1;
        }
    }
    else if (a1 < a3)
    {
        v49 = a1 * 16;
        v6 = *((long long *)(a2 + v49));
        v50 = *((long long *)(a2 + v49 + 8));
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v3, a0->field_8, a0->field_10);
        if ((char)(((0 ^ a0->field_18) & (0 ^ -(a0->field_18))) >> 63))
        {
            v0 = 0x8000000000000000;
        }
        else
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v8, a0->field_20, a0->field_28);
            v2 = v10;
            *((int128_t *)&v0) = (int128_t)v8;
        }
        return *((long long *)&a0->field_40).add(v6, v50, a2 + (a1 + 1) * 16, a3 - (a1 + 1), &v3, &v0, a0->field_3a, a5->field_10);
    }
    else
    {
        core::panicking::panic_bounds_check(a1, a3, &g_14c77d0); /* do not return */
    }
    return 0;
}
