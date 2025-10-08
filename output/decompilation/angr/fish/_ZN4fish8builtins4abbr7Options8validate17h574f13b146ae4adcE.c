long long fish::builtins::abbr::Options::validate(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    void* v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    int v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    void* v9;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x70]
    void* v15;  // [bp-0x58]
    unsigned long long v16;  // [bp-0x50]
    void* v17;  // [bp-0x48]
    unsigned long v22;  // rbp
    unsigned long long v27;  // 4098
    char v28;  // bpl
    unsigned long long v30;  // rdx
    unsigned long long v32;  // rdx
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rcx
    unsigned int v36;  // ebp
    unsigned long long v38;  // rdx
    unsigned long long v40;  // rdx

    v15 = 0;
    v16 = 8;
    v17 = 0;
    v22 = a0->field_78;
    if ((char)v22)
        v15.push("a", 3, &g_14c62e8);
    if (a0->field_79)
        v15.push("r", 6, &g_14c6300);
    if (a0->field_7a)
        v15.push("s", 4, &g_14c6318);
    if (a0->field_7b)
        v15.push("l", 4, &g_14c6330);
    if (a0->field_7c)
        v15.push("e", 5, &g_14c6348);
    if (a0->field_7d)
        v15.push("q", 5, &g_14c6360);
    v27 = a0->field_28;
    a0->field_7a = !v27;
    v28 = v27;
    v22 = v28;
    a0->field_78 = v27;
    if (!v27 && a0->field_7e != 2)
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 38;
        v3 = 0x8000000000000000;
        *((char *)&v7) = 1;
        v8 = "a";
        v9 = 4;
        fish_printf::printf_impl::sprintf_locale(&(char)v12, &v0, v3.localize(), v30, ".", &(char)v7, 1);
        (char)v12.unwrap(&g_14c6378);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v7);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
        *((int128_t *)&v7) = *((int128_t *)&v0);
        v9 = 0;
        a1.append(&(char)v7);
    }
    else
    {
        if (!v28 && a0->field_48 != 0x8000000000000000)
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v4 = "%";
            v5 = 35;
            v3 = 0x8000000000000000;
            *((char *)&v7) = 1;
            v8 = "a";
            v9 = 4;
            fish_printf::printf_impl::sprintf_locale(&(char)v12, &v0, v3.localize(), v32, ".", &(char)v7, 1);
            (char)v12.unwrap(&g_14c6390);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v7);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
            *((int128_t *)&v7) = *((int128_t *)&v0);
            v9 = 0;
            a1.append(&(char)v7);
        }
        else if (!v28 && a0->field_30 != 0x8000000000000000)
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v4 = "%";
            v5 = 38;
            v3 = 0x8000000000000000;
            *((char *)&v7) = 1;
            v8 = "a";
            v9 = 4;
            fish_printf::printf_impl::sprintf_locale(&(char)v12, &v0, v3.localize(), v34, ".", &(char)v7, 1);
            (char)v12.unwrap(&g_14c63a8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v7);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
            *((int128_t *)&v7) = *((int128_t *)&v0);
            v9 = 0;
            a1.append(&(char)v7);
        }
        else
        {
            v35 = a0->field_60;
            if (v28 || v35 == 0x8000000000000000)
            {
                v36 = ((unsigned int)v22 & 0xffffff00 | v28 | v35 == 0x8000000000000000) & 0xffffff00 | 1;
                if (v35 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v15, v16);
                    return v36;
                }
                else if (!a0->field_70)
                {
                    v0 = 0;
                    v1 = 4;
                    v2 = 0;
                    v4 = "%";
                    v5 = 43;
                    v3 = 0x8000000000000000;
                    *((char *)&v7) = 1;
                    v8 = "a";
                    v9 = 4;
                    fish_printf::printf_impl::sprintf_locale(&(char)v12, &v0, v3.localize(), v38, ".", &(char)v7, 1);
                    (char)v12.unwrap(&g_14c63d8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v7);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                    *((int128_t *)&v7) = *((int128_t *)&v0);
                    v9 = 0;
                    a1.append(&(char)v7);
                }
                else
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v15, v16);
                    return v36;
                }
            }
            else
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v4 = "%";
                v5 = 40;
                v3 = 0x8000000000000000;
                *((char *)&v7) = 1;
                v8 = "a";
                v9 = 4;
                fish_printf::printf_impl::sprintf_locale(&(char)v12, &v0, v3.localize(), v40, ".", &(char)v7, 1);
                (char)v12.unwrap(&g_14c63c0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v7);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                *((int128_t *)&v7) = *((int128_t *)&v0);
                v9 = 0;
                a1.append(&(char)v7);
            }
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v15, v16);
    return 0;
}
