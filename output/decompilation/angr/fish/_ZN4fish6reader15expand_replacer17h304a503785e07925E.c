long long fish::reader::expand_replacer(void* a0, unsigned int a1, unsigned int a2, unsigned long long a3, unsigned long long a4, struct_0 *a5, unsigned long long a6)
{
    int v0;  // [bp-0x148], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x140]
    void* v2;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x128], Other Possible Types: char
    int v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    void* v6;  // [bp-0x118], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf8]
    void* v9;  // [bp-0xf0]
    char v10;  // [bp-0xe8]
    char v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xe0]
    unsigned long long v13;  // [bp-0xd8]
    char v14;  // [bp-0xc8]
    int v15;  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned long v16;  // [bp-0xb8]
    int v17;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    unsigned long long v18;  // [bp-0xa0]
    void* v19;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v20;  // [bp-0x78]
    unsigned long long v21;  // [bp-0x70]
    void* v22;  // [bp-0x68]
    char v23;  // [bp-0x60]
    unsigned long long v24;  // [bp-0x58]
    unsigned long long v25;  // [bp-0x50]
    char v26;  // [bp-0x48]
    char v27;  // [bp-0x40]
    int v28;  // [bp-0x38]
    int v29;  // xmm0
    int v30;  // xmm1
    unsigned long v31;  // rbp
    unsigned long v32;  // r14

    if (a5->field_30)
    {
        fish::common::escape(&v23, a5->field_8, a5->field_10);
        v23.push(32);
        fish::common::escape(&v11, a3, a4);
        v23.spec_extend(v12, v12 + v13 * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
        v17.scoped_mod(a6 + 64);
        v20 = 0;
        v21 = 8;
        v22 = 0;
        if ((int)fish::exec::exec_subshell(v24, v25, a6, &v20, 0))
        {
            *((unsigned long long *)a0) = 2;
        }
        else
        {
            fish::wcstringutil::join_strings(&v26, 8, 0, 10);
            if ((char)core::sync::atomic::atomic_load(&g_15a9aa0, 0))
            {
                v7 = 0;
                v8 = 1;
                v9 = 0;
                v0.to_flog_str(&g_15a9a90);
                v11.into_iter(&v0);
                v7.spec_extend(&v11);
                v7.push(58, &g_14e0d10);
                v7.push(32, &g_14e0d10);
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v10 = 1;
                v12 = a3;
                v13 = a4;
                v14 = 1;
                *((int128_t *)&v15) = *((int128_t *)&v27);
                fish_printf::printf_impl::sprintf_locale(&v3, &v0, "Expanded function abbreviation <%ls> -> <%ls>ctermidTTY protocols should not be active", 45, &v10, 2);
                v3.unwrap(&g_14e0d10);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v10);
                memcpy(&v3, &v0, 16);
                v6 = 0;
                v0.to_flog_str(&v3);
                v10.into_iter(&v0);
                v7.spec_extend(&v10);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                v7.push(10, &g_14e0d10);
                fish::flog::flog_impl(v8, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v7, v8);
            }
            v6 = (long long)v28;
            *((int128_t *)&v4) = *((int128_t *)&v26);
            if ((char)(((0 ^ a5->field_18) & (0 ^ -(a5->field_18))) >> 63))
            {
                v0 = 0x8000000000000000;
            }
            else
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v10, a5->field_20, a5->field_28);
                v2 = v13;
                *((int128_t *)&v0) = *((int128_t *)&v10);
            }
            v10.new(a1, a2, &(unsigned long long)v4, &v0);
            v29 = *((int128_t *)&v10);
            v30 = *((int128_t *)&v13);
            *((int128_t *)&a0[32]) = *((int128_t *)&v14);
            a0[16] = v30;
            *(a0) = v29;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v20);
        core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v17);
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v23);
    }
    else
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a9aa0, 0))
        {
            v3 = 0;
            v5 = 1;
            v6 = 0;
            v17.to_flog_str(&g_15a9a90);
            v10.into_iter(&v17);
            v3.spec_extend(&v10);
            v3.push(58, &g_14e0cf8);
            v3.push(32, &g_14e0cf8);
            v17 = 0;
            v18 = 4;
            v19 = 0;
            v31 = a5->field_8;
            v32 = a5->field_10;
            v11 = 1;
            v12 = a3;
            v13 = a4;
            v14 = 1;
            v15 = v31;
            v16 = v32;
            fish_printf::printf_impl::sprintf_locale(&(char)v0, &v17, "Expanded literal abbreviation <%ls> -> <%ls>Expanded function abbreviation <%ls> -> <%ls>ctermidTTY protocols should not be active", 44, &v11, 2);
            (char)v0.unwrap(&g_14e0cf8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v11);
            *((int128_t *)&v0) = *((int128_t *)&v17);
            v2 = 0;
            v17.to_flog_str(&(char)v0);
            v11.into_iter(&v17);
            v3.spec_extend(&v11);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
            v3.push(10, &g_14e0cf8);
            fish::flog::flog_impl(v5, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v5);
        }
        else
        {
            v31 = a5->field_8;
            v32 = a5->field_10;
        }
        fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v0, v31, v32);
        if ((char)(((0 ^ a5->field_18) & (0 ^ -(a5->field_18))) >> 63))
        {
            v17 = 0x8000000000000000;
        }
        else
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v11, a5->field_20, a5->field_28);
            v19 = v13;
            *((int128_t *)&v17) = *((int128_t *)&v11);
        }
        return a0.new(a1, a2, &(char)v0, &v17);
    }
}
