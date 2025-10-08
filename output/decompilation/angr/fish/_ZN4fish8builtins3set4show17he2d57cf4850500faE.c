long long fish::builtins::set::show(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long *a5, unsigned long a6)
{
    char v0;  // [bp-0x180]
    void* v1;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x170]
    void* v3;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x160]
    void* v5;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x150]
    void* v7;  // [bp-0x148], Other Possible Types: unsigned long long
    char v8;  // [bp-0x138]
    int v9;  // [bp-0x138], Other Possible Types: char
    unsigned int v10;  // [bp-0x138]
    unsigned long v11;  // [bp-0x130], Other Possible Types: unsigned long long
    int v12;  // [bp-0x130]
    void* v13;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    char v14;  // [bp-0x118]
    int v15;  // [bp-0x110]
    unsigned long v16;  // [bp-0x108]
    void* v17;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0xe8]
    void* v19;  // [bp-0xe0]
    int v20;  // [bp-0xd8]
    unsigned long long v21;  // [bp-0xd0]
    unsigned long long v22;  // [bp-0xc8]
    unsigned long long v23;  // [bp-0xb8]
    unsigned long long v24;  // [bp-0xb0]
    unsigned long long v25;  // [bp-0xa8]
    unsigned long long v26;  // [bp-0xa0]
    unsigned long v27;  // [bp-0x98]
    char v28;  // [bp-0x88]
    int v29;  // [bp-0x88]
    unsigned long long v30;  // [bp-0x78]
    char v31;  // [bp-0x70]
    unsigned long long v32;  // [bp-0x68]
    unsigned long long v33;  // [bp-0x60]
    unsigned long long v34;  // [bp-0x58]
    int v35;  // [bp-0x50]
    int v36;  // [bp-0x40]
    char *v37;  // r12
    unsigned long long *v38;  // r14
    unsigned long v39;  // rbp
    unsigned long v40;  // r15
    unsigned long long v41;  // rax
    unsigned int v42[11];  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned int v48[11];  // rax
    unsigned long long v49;  // rax
    unsigned long long v50;  // rdx
    int v52;  // [bp-0x110]

    if (a6)
    {
        v27 = a2 + 472;
        v37 = &v8;
        v38 = 0;
        v26 = a6 * 16;
        do
        {
            v39 = *((long long *)(a5 + v38));
            v40 = *((long long *)(a5 + v38 + 8));
            if (!(char)fish::common::valid_var_name(v39, v40))
            {
                v5 = 0;
                v6 = 4;
                v7 = 0;
                v45 = g_14c9d98[0].localize();
                v9 = 1;
                v11 = v24;
                v13 = v25;
                v14 = 1;
                v16 = v40;
                fish_printf::printf_impl::sprintf_locale(&v1, &v5, v45, v44, ".", &v9, 2, *((long long *)&v0));
                v1.unwrap(&g_14ccbe0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v9);
                memcpy(&v9, &v5, 16);
                v13 = 0;
                v23.append(&v9);
                fish::builtins::shared::builtin_print_error_trailer(a2, v23, v24, v25);
                return 8589934593;
            }
            v10 = 91;
            if (v37.slice_contains(v39, v40))
            {
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v6 = "%";
                v7 = 59;
                v5 = 0x8000000000000000;
                v46 = v5.localize();
                v9 = 1;
                v11 = v24;
                v13 = v25;
                fish_printf::printf_impl::sprintf_locale(&v17, &v1, v46, v44, ".", &v9, 1, *((long long *)&v0));
                v17.unwrap(&g_14ccc28);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
                memcpy(&v9, &v1, 16);
                v13 = 0;
                v23.append(&v9);
                fish::builtins::shared::builtin_print_error_trailer(a2, v23, v24, v25);
                return 4294967297;
            }
            fish::builtins::set::show_scope(v39, v40, 1, v4, v27);
            fish::builtins::set::show_scope(v39, v40, 4, v4, v27);
            fish::builtins::set::show_scope(v39, v40, 8, v4, v27);
            v41 = once_cell::sync::OnceCell<T>::get();
            if (!v41)
                core::option::unwrap_failed(&g_14ccbf8); /* do not return */
            v42 = v41.get_inner(v39, v40);
            v37 = v37;
            if (v42)
            {
                fish::common::escape_string(&v17, *((long long *)&v42[8]), *((long long *)&v42[10]), 0);
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v6 = "$";
                v7 = 36;
                v5 = 0x8000000000000000;
                v43 = v5.localize();
                v8 = 1;
                v11 = v39;
                v13 = v40;
                v14 = 1;
                *((int128_t *)&v15) = *((int128_t *)&v18);
                fish_printf::printf_impl::sprintf_locale(&v34, &v1, v43, v44, ".", v37, 2, *((long long *)&v0));
                v34.unwrap(&g_14ccc10);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(v37);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
                *((int128_t *)&v9) = *((int128_t *)&v1);
                v13 = 0;
                a3.append(v37);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
            }
            v38 += 2;
        } while (v26 != v38);
    }
    else
    {
        v31.get_names(v27, 0x100);
        alloc::slice::stable_sort(v32, v33);
        (char)v5.into_iter(&v31);
        (char)v29.next(&(char)v5);
        if (!((char)(((0 ^ *((long long *)&v28)) & (0 ^ -(*((long long *)&v28)))) >> 63)))
        {
            do
            {
                v20 = v29;
                v22 = v30;
                if (!v21.eq(v30, "historyifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", 7))
                {
                    fish::builtins::set::show_scope(v21, v22, 1, a3, v27);
                    fish::builtins::set::show_scope(v21, v22, 4, a3, v27);
                    fish::builtins::set::show_scope(v21, v22, 8, a3, v27);
                    v47 = once_cell::sync::OnceCell<T>::get();
                    if (!v47)
                        core::option::unwrap_failed(&g_14ccbb0); /* do not return */
                    v48 = v47.get_inner(&(char)v20);
                    if (v48)
                    {
                        fish::common::escape_string(&v34, *((long long *)&v48[8]), *((long long *)&v48[10]), 0);
                        v17 = 0;
                        v18 = 4;
                        v19 = 0;
                        v2 = "$";
                        v3 = 36;
                        v1 = 0x8000000000000000;
                        v49 = v1.localize();
                        v8 = 1;
                        *((int128_t *)&v12) = *((int128_t *)&v21);
                        v14 = 1;
                        v52 = v35;
                        fish_printf::printf_impl::sprintf_locale(&v36, &v17, v49, v50, ".", &(unsigned int)v9, 2, *((long long *)&v0));
                        v36.unwrap(&g_14ccbc8);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned int)v9);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                        *((int128_t *)&v9) = *((int128_t *)&v17);
                        v13 = 0;
                        a3.append(&(unsigned int)v9);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v34);
                    }
                }
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v20);
                (char)v29.next(&(char)v5);
            } while ((long long)v29 != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&(char)v5);
    }
    return 0;
}
