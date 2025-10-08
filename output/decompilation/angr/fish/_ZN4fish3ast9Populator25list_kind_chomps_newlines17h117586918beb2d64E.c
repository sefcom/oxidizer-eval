long long fish::ast::Populator::list_kind_chomps_newlines(struct_0 *a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x1c8]
    int v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    void* v4;  // [bp-0x98]
    void* v5;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x88]
    void* v7;  // [bp-0x80]
    void* v8;  // [bp-0x78], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [bp-0x70]
    void* v10;  // [bp-0x68]
    char v11;  // [bp-0x60]
    int v12;  // [bp-0x58]
    char v13;  // [bp-0x40]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v15 = *(a1);
    if (v15 <= 37)
    {
        v0 = 4429185104;
        if ((*((char *)&v0 + ((v15 & 63) >> 3)) >> ((char)v15 & 63 & 7) & 1))
            return 0;
        v0 = 0x2440080000;
        if ((*((char *)&v0 + ((v15 & 63) >> 3)) >> ((char)v15 & 63 & 7) & 1))
            return v15 & 0xffffffffffffff00 | 1;
        v0 = 0x1080000000;
        if ((*((char *)&v0 + ((v15 & 63) >> 3)) >> ((char)v15 & 63 & 7) & 1))
            return a0->padding_b8[24];
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a93b0, 0))
    {
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v8.to_flog_str(&g_15a93a0);
        v11.into_iter(&v8);
        v2.spec_extend(&v11);
        v2.push(58, &g_14c52b8);
        v2.push(32, &g_14c52b8);
        v13.to_vec("Internal parse error from {$func} - this indicates a bug in fish.Type %ls not handledShould not be a commentCannot consume terminate token, caller should check status first", 85);
        v11.into_iter(&v13);
        v2.spec_extend(&v11);
        v2.push(32, &g_14c52b8);
        v5 = fish::ast::ast_kind_to_string(a1);
        v6 = v16;
        v8.to_flog_str(&v5);
        v11.into_iter(&v8);
        v2.spec_extend(&v11);
        v2.push(10, &g_14c52b8);
        fish::flog::flog_impl(v3, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v2, v3);
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a93b0, 0))
    {
        v5 = 0;
        v6 = 1;
        v7 = 0;
        v8.to_flog_str(&g_15a93a0);
        v11.into_iter(&v8);
        v5.spec_extend(&v11);
        v5.push(58, &g_14c52b8);
        v5.push(32, &g_14c52b8);
        v8 = 0;
        v9 = 4;
        v10 = 0;
        v11 = 1;
        *((int128_t *)&v12) = *((int128_t *)&(&a0->padding_0)[1]);
        fish_printf::printf_impl::sprintf_locale(&v2, &v8, "Encountered while parsing:<<<<\n%s\n>>>Internal parse error from {$func} - this indicates a bug in fish.Type %ls not handledShould not be a commentCannot consume terminate token, caller should check status first", 37, &v11, 1);
        v2.unwrap(&g_14c52b8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v11);
        *((int128_t *)&v1) = *((int128_t *)&v8);
        v4 = 0;
        v8.to_flog_str(&v2);
        v11.into_iter(&v8);
        v5.spec_extend(&v11);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
        v5.push(10, &g_14c52b8);
        fish::flog::flog_impl(v6, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
    }
    fish::ast::Populator::list_kind_chomps_newlines::panic_cold_explicit(); /* do not return */
}
