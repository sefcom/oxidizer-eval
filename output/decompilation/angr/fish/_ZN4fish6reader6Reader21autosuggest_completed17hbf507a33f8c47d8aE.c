void fish::reader::Reader::autosuggest_completed(struct_1 *a0, unsigned long long a1, struct_0 *a2)
{
    struct_0 *v0;  // [bp-0xd0]
    void* v1;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v2;  // [bp-0xb8]
    void* v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    unsigned long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x98], Other Possible Types: char
    unsigned long long v7;  // [bp-0x90]
    void* v8;  // [bp-0x88]
    struct_1 *v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    int v12;  // [bp-0x68]
    int v13;  // [bp-0x68]
    int v14;  // [bp-0x68]
    void* v15;  // [bp-0x58]
    char v16;  // [bp-0x50]
    char v17;  // [bp-0x50]
    int v18;  // [bp-0x48]
    struct_0 *v20;  // r14
    struct_1 *v21;  // r12
    unsigned long v22;  // rbx
    unsigned long v23;  // r15
    unsigned long v24;  // r12
    unsigned long long v25;  // r13
    void* v26;  // r14
    char *v27;  // rbp
    char *v28;  // r15
    unsigned long v29;  // rcx
    char *v30;  // r13
    char *v31;  // r15
    unsigned long long v32;  // rax
    int v33;  // xmm0
    int v34;  // xmm1

    v20 = a2;
    v21 = a0;
    fish::threads::assert_is_main_thread();
    v22 = *((long long *)&a2->field_28);
    v23 = *((long long *)&a2->padding_29[7]);
    if ((char)v22.eq(v23, a0->field_7a8, a0->field_7b0))
        a0->field_7b0 = 0;
    if (!(char)v22.equal(v23, a0->field_28, a0->field_30))
    {
        core::ptr::drop_in_place<fish::reader::AutosuggestionResult>(a2);
        return;
    }
    if (a2->padding_48)
    {
        v9 = a0;
        v0 = a2;
        v24 = a2->field_40;
        v25 = a2->padding_48 * 24;
        v26 = 0;
        v11 = &g_15a9a10;
        v10 = &g_15a9a00;
        v27 = &v6;
        v28 = &v1;
        v4 = 0;
        v5 = a2->field_40;
        do
        {
            v16 = v16;
            v13 = v12;
            if ((char)fish::complete::complete_load(*((long long *)(8 + v24 + (char *)v26)), *((long long *)(16 + v24 + (char *)v26)), a1))
            {
                v4 = v29 & 0xffffffffffffff00 | 1;
                if ((char)core::sync::atomic::atomic_load(&g_15a9a10, 0))
                {
                    v1 = 0;
                    v2 = 1;
                    v3 = 0;
                    v27.to_flog_str(&g_15a9a00);
                    v16.into_iter(v27);
                    v28.spec_extend(&v16);
                    v28.push(58, &g_14e0aa0);
                    v28.push(32, &g_14e0aa0);
                    v30 = v28;
                    v6 = 0;
                    v7 = 4;
                    v8 = 0;
                    v17 = 1;
                    *((int128_t *)&v18) = *((int128_t *)(8 + v5 + (char *)v26));
                    v31 = v27;
                    fish_printf::printf_impl::sprintf_locale(&v12, v27, "Autosuggest found new completions for %ls, restartinga", 53, &v16, 1);
                    v12.unwrap(&g_14e0aa0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v17);
                    memcpy(&v13, &v6, 16);
                    v15 = 0;
                    v27 = v31;
                    v31.to_flog_str(&v13);
                    v28 = v30;
                    v17.into_iter(v27);
                    v30.spec_extend(&v17);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
                    v28.push(10, &g_14e0aa0);
                    fish::flog::flog_impl(v2, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, v2);
                    v24 = v5;
                    v16 = v17;
                    v13 = v14;
                }
            }
            v26 += 24;
        } while (v25 != v26);
        v20 = v0;
        v21 = v9;
        if (!((char)v4 & 1))
            goto LABEL_1404424;
        v9.update_autosuggestion(a1);
    }
    else
    {
LABEL_1404424:
        if (v20->field_8 && (char)v21.can_autosuggest())
        {
            v32 = v20.search_string();
            if ((char)fish::wcstringutil::string_prefixes_string_maybe_case_insensitive(v20->field_20[0], v32, a2, v20->field_0[1], v20->field_8))
            {
                core::ptr::drop_in_place<fish::parser::ProfileItem>(&v21->field_500);
                v33 = v20->field_0;
                v34 = *((int128_t *)&v20->field_8);
                v21->field_520 = *((int128_t *)&v20->field_10[1]);
                *((void*)&v21->field_510) = v34;
                *((void*)&v21->field_500) = v33;
                if (!(char)v21.is_repaint_needed(0, a2))
                {
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v20->field_20[8]);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v20->field_38);
                    return;
                }
                v21.layout_and_repaint(a1, "a", 11);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v20->field_20[8]);
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v20->field_38);
                return;
            }
        }
    }
    core::ptr::drop_in_place<fish::parser::ProfileItem>(v20);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v20->field_20[8]);
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v20->field_38);
    return;
}
