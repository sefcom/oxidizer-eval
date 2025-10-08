void fish::autoload::Autoload::perform_autoload(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x138], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x130]
    void* v2;  // [bp-0x128], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x118]
    int v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x110]
    void* v6;  // [bp-0x108], Other Possible Types: unsigned long long
    int v7;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v8;  // [bp-0xf0]
    void* v9;  // [bp-0xe8], Other Possible Types: unsigned long long
    void* v10;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    char v11;  // [bp-0xd8]
    char v13;  // [bp-0xd8]
    int v14;  // [bp-0xd8]
    int v15;  // [bp-0xd0], Other Possible Types: unsigned long, unsigned long long
    void* v16;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [bp-0xb8]
    unsigned long long v18;  // [bp-0x98]
    char *v19;  // [bp-0x90]
    char v20;  // [bp-0x88]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x60]
    char v23;  // [bp-0x50]
    unsigned long long v24;  // [bp-0x30]
    unsigned long long v27;  // rdx
    unsigned long v28;  // r12
    unsigned long v29;  // r13

    v23.get_last_statuses(a1);
    v24 = a1;
    if (a0->field_0 == 1)
    {
        v10.to_vec("s", 7);
        v2 = v16;
        *((int128_t *)&v0) = *((int128_t *)&v10);
        fish::common::escape(&v10, a0->field_10, a0->field_18);
        v7.add(&(char)v0, v15.index(v16, &g_14c5830), v27);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
        v10 = 0;
        v15 = 8;
        v16 = 0;
        (char)v0.eval(a1, v8, v9, &v10);
        core::ptr::drop_in_place<fish::io::IoChain>(&v10);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
    }
    else
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a9b00, 0))
        {
            v3 = 0;
            v5 = 1;
            v6 = 0;
            (char)v0.to_flog_str(&g_15a9af0);
            v10.into_iter(&(char)v0);
            v3.spec_extend(&v10);
            v3.push(58, &g_14c57e8);
            v3.push(32, &g_14c57e8);
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v28 = a0->field_10;
            v29 = a0->field_18;
            v11 = 0;
            v15 = v28;
            v16 = v29;
            fish_printf::printf_impl::sprintf_locale(&(char)v7, &v0, "Loading embedded: %lsEmbedded file not found%ls", 21, &v11, 1);
            (char)v7.unwrap(&g_14c57e8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v11);
            *((int128_t *)&v7) = *((int128_t *)&v0);
            v9 = 0;
            v0.to_flog_str(&(char)v7);
            v11.into_iter(&v0);
            v3.spec_extend(&v11);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
            v3.push(10, &g_14c57e8);
            fish::flog::flog_impl(v5, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v5);
        }
        else
        {
            v28 = a0->field_10;
            v29 = a0->field_18;
        }
        (char)v10.get(v28, v29);
        if ((int)v10 == 2)
            core::option::expect_failed("Embedded file not found%ls", 23, &g_14c5800); /* do not return */
        fish::common::str2wcstring(&v21, v19, *((long long *)&v20));
        (char)v10.to_vec("e", 9);
        v6 = v16;
        *((int128_t *)&v4) = *((int128_t *)&v10);
        (unsigned long long)v4.extend(v28, v29 + v28);
        v17 = v6;
        memcpy(&v16, &v4, 16);
        v10 = 1;
        v15 = 1;
        v10 = 0;
        v15 = 8;
        v16 = 0;
        (char)v7.eval_file_wstr(a1, &v21, v10.new(), &v10, 0);
        core::ptr::drop_in_place<fish::io::IoChain>(&v10);
        if (!((char)(((0 ^ (long long)v7) & (0 ^ -((long long)v7))) >> 63)))
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v13 = 1;
            *((int128_t *)&v15) = *((int128_t *)&v8);
            fish_printf::printf_impl::sprintf_locale(&v22, &v0, "%ls", 3, &v13, 1);
            v22.unwrap(&g_14c5818);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v13);
            v16 = v2;
            *((int128_t *)&v14) = *((int128_t *)&v0);
            fish::wutil::wwrite_to_fd(v15, v2, 2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
        }
        core::ptr::drop_in_place<rust_embed_utils::EmbeddedFile>(v18, v19);
    }
    core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::event::fire_internal::{{closure}}>>(&v23);
    return;
}
