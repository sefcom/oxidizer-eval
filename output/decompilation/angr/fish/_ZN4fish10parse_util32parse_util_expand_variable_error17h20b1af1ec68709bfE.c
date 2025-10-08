long long fish::parse_util::parse_util_expand_variable_error(unsigned int *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, struct_0 *a4)
{
    unsigned int *v0;  // [bp-0x1d8], Other Possible Types: void*
    char v1;  // [bp-0x1d8]
    int v2;  // [bp-0x1d0], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x1c8], Other Possible Types: unsigned long, unsigned long long
    void* v4;  // [bp-0x1b8], Other Possible Types: char, unsigned int
    char v5;  // [bp-0x1b0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x1a8]
    char v7;  // [bp-0x194], Other Possible Types: unsigned int
    void* v8;  // [bp-0x190]
    unsigned long long v9;  // [bp-0x188]
    void* v10;  // [bp-0x180]
    char v11;  // [bp-0x168]
    int v12;  // [bp-0x158], Other Possible Types: void*
    unsigned long long v13;  // [bp-0x150]
    void* v14;  // [bp-0x148]
    unsigned long v15;  // [bp-0x140]
    unsigned long long v16;  // [bp-0x138]
    char v17;  // [bp-0x130]
    int v18;  // [bp-0x128], Other Possible Types: void*
    unsigned long long v19;  // [bp-0x120]
    void* v20;  // [bp-0x118]
    unsigned long v21;  // [bp-0x110]
    unsigned long long v22;  // [bp-0x108]
    char v23;  // [bp-0x100]
    int v24;  // [bp-0xf8], Other Possible Types: void*
    unsigned long long v25;  // [bp-0xf0]
    void* v26;  // [bp-0xe8]
    unsigned long v27;  // [bp-0xe0]
    unsigned long long v28;  // [bp-0xd8]
    char v29;  // [bp-0xd0]
    int v30;  // [bp-0xc8], Other Possible Types: void*
    unsigned long long v31;  // [bp-0xc0]
    void* v32;  // [bp-0xb8]
    unsigned long long v33;  // [bp-0xb0]
    unsigned long long v34;  // [bp-0xa8]
    char v35;  // [bp-0xa0]
    int v36;  // [bp-0x98], Other Possible Types: void*
    unsigned long long v37;  // [bp-0x90]
    void* v38;  // [bp-0x88]
    unsigned long long v39;  // [bp-0x80]
    unsigned long long v40;  // [bp-0x78]
    char v41;  // [bp-0x70]
    int v42;  // [bp-0x68], Other Possible Types: void*
    unsigned long long v43;  // [bp-0x60]
    void* v44;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long v45;  // [bp-0x50]
    unsigned long long v46;  // [bp-0x48]
    char v47;  // [bp-0x40]
    unsigned long long v49;  // rdx
    unsigned long long v50;  // r14
    unsigned long v51;  // r14
    unsigned long long v52;  // r13
    unsigned int v53;  // ebp
    unsigned long long v55;  // rdx
    char *v56;  // r14
    unsigned long long v57;  // rdx
    unsigned long v58;  // rdx
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rbp
    unsigned long long v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v65;  // rdx
    unsigned long long v67;  // rax

    if (a3 >= a1)
        core::panicking::panic_bounds_check(a3, a1, &g_14de380); /* do not return */
    v49 = a2 + a3;
    if ((char)__CFADD__(a2, a3))
        core::panicking::panic_const::panic_const_add_overflow(&g_14de398); /* do not return */
    v50 = v49;
    v51 = v50 + 1;
    if ((char)_ccall(4, 24, v50 + 1, 0, (a2 + a3 <= a2 ? 1 : 0)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14de3b0); /* do not return */
    v52 = a4->field_10;
    if (a3 + 1 < a1)
    {
        v53 = a0[1 + a3];
        if (v53 <= 64979)
        {
            if (!v53)
                goto LABEL_13e8c01;
            if (v53 == 123)
                goto LABEL_13e8e18;
LABEL_13e90f2:
            v4 = v53;
            v53 = 63;
            if (v53 != 64992)
            {
                v53 = 42;
                if (!v4.slice_contains(&g_54a298, 2))
                    goto LABEL_13e9128;
            }
            v4 = v53;
LABEL_13e9128:
            v42 = 0;
            v43 = 4;
            v44 = 0;
            v45 = v51;
            v46 = 1;
            v47 = 1;
            fish::parse_util::error_for_character(&(char)v0, v53);
            v56 = &v42;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v42);
            v44 = v3;
            *((int128_t *)&v42) = *((int128_t *)&v0);
            v57 = &g_14de4a0;
        }
        else if (v53 != 64980)
        {
            if (v53 != 64984)
                goto LABEL_13e90f2;
            v30 = 0;
            v31 = 4;
            v32 = 0;
            v33 = v49;
            v34 = 1;
            v35 = 1;
            v0 = 0;
            v2 = 4;
            v3 = 0;
            fish_printf::printf_impl::sprintf_locale(&v4, &v0, g_14ddac8[0].localize(), v55, ".", 8, 0);
            v4.unwrap(&g_14de470);
            memcpy(&v4, &v0, 16);
            v6 = 0;
            v56 = &v30;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v30);
            v32 = 0;
            *((int128_t *)&v30) = *((int128_t *)&v4);
            v57 = &g_14de470;
        }
        else
        {
LABEL_13e8e18:
            v0 = a0;
            v2 = &a0[a1];
            v3 = a3 + 2;
            v4 = 0;
            if (((char)v0.try_fold(&v7, &v4) & 1))
            {
                v59 = v58 + a3;
                if ((char)__CFADD__(v58, a3) || (char)__CFADD__(v59, 2))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14de3c8); /* do not return */
                v60 = v3.index(v59 + 2, a0, a1, &g_14de3e0);
                if (!(char)fish::common::valid_var_name(v60, v58))
                    goto LABEL_13e8fee;
                if (a0[a3] == 64979)
                {
                    v12 = 0;
                    v13 = 4;
                    v14 = 0;
                    v15 = v51;
                    v16 = 1;
                    v17 = 1;
                    v8 = 0;
                    v9 = 4;
                    v10 = 0;
                    v61 = g_14de440[0].localize();
                    fish::wcstringutil::truncate(&v4, v60, v58, 16, 3);
                    v1 = 1;
                    *((int128_t *)&v2) = *((int128_t *)&v5);
                    fish_printf::printf_impl::sprintf_locale(&v11, &v8, v61, v58, ".", &v1, 1);
                    v11.unwrap(&g_14de458);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                    memcpy(&v1, &v8, 16);
                    v3 = 0;
                    v56 = &v12;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
                    v14 = 0;
                    *((int128_t *)&v12) = *((int128_t *)&v0);
                    v57 = &g_14de458;
                }
                else
                {
                    v18 = 0;
                    v19 = 4;
                    v20 = 0;
                    v21 = v51;
                    v22 = 1;
                    v23 = 1;
                    v8 = 0;
                    v9 = 4;
                    v10 = 0;
                    v62 = g_14de410[0].localize();
                    fish::wcstringutil::truncate(&v4, v60, v58, 16, 3);
                    v1 = 1;
                    *((int128_t *)&v2) = *((int128_t *)&v5);
                    fish_printf::printf_impl::sprintf_locale(&v11, &v8, v62, v58, ".", &v1, 1);
                    v11.unwrap(&g_14de428);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                    memcpy(&v1, &v8, 16);
                    v3 = 0;
                    v56 = &v18;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
                    v20 = 0;
                    *((int128_t *)&v18) = *((int128_t *)&v0);
                    v57 = &g_14de428;
                }
            }
            else
            {
LABEL_13e8fee:
                v24 = 0;
                v25 = 4;
                v26 = 0;
                v27 = v51;
                v28 = 1;
                v29 = 1;
                v4 = 0;
                v5 = 4;
                v6 = 0;
                v1 = 4;
                v2 = 123;
                fish_printf::printf_impl::sprintf_locale(&(char)v8, &v4, g_14dda98[0].localize(), v58, ".", &v1, 1);
                (char)v8.unwrap(&g_14de3f8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
                memcpy(&v1, &v4, 16);
                v3 = 0;
                v56 = &v24;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v24);
                v26 = 0;
                *((int128_t *)&v24) = *((int128_t *)&v0);
                v57 = &g_14de3f8;
            }
        }
    }
    else
    {
        v7 = 0;
LABEL_13e8c01:
        v36 = 0;
        v37 = 4;
        v38 = 0;
        v39 = v49;
        v40 = 1;
        v41 = 1;
        v0 = 0;
        v2 = 4;
        v3 = 0;
        fish_printf::printf_impl::sprintf_locale(&v4, &v0, g_14ddac8[0].localize(), v65, ".", 8, 0);
        v4.unwrap(&g_14de488);
        memcpy(&v4, &v0, 16);
        v6 = 0;
        v56 = &v36;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v36);
        v38 = 0;
        *((int128_t *)&v36) = *((int128_t *)&v4);
        v57 = &g_14de488;
    }
    v67 = a4.push(v56, v57);
    if (a4->field_10 != v52 + 1)
        core::panicking::panic("assertion failed: errors.as_ref().unwrap().len() == start_error_count + 1", 73, &g_14de4b8); /* do not return */
    return v67;
}
