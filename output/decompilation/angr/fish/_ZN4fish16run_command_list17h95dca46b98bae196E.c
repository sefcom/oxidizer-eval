long long fish::run_command_list(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char *v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x1f8]
    int v2;  // [bp-0x1f0]
    unsigned long long v3;  // [bp-0x1e0]
    unsigned long long v4;  // [bp-0x1d8]
    unsigned long long v5;  // [bp-0x1d0]
    unsigned long long v6;  // [bp-0x1c8]
    void* v7;  // [bp-0x1c0]
    unsigned long long v8;  // [bp-0x1b8]
    void* v9;  // [bp-0x1b0]
    int v10;  // [bp-0x1a8], Other Possible Types: char
    void* v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x1a0]
    void* v13;  // [bp-0x198], Other Possible Types: unsigned long long
    int v14;  // [bp-0x190]
    int v15;  // [bp-0x180]
    int v16;  // [bp-0x170]
    int v17;  // [bp-0x160]
    int v18;  // [bp-0x150]
    int v19;  // [bp-0x148]
    int v20;  // [bp-0x138]
    int v21;  // [bp-0x128]
    int v22;  // [bp-0x118]
    int v23;  // [bp-0x108]
    int v24;  // [bp-0xf8]
    int v25;  // [bp-0xe8]
    unsigned long long v26;  // [bp-0xd8]
    unsigned long long v27;  // [bp-0xd0]
    void* v28;  // [bp-0xc8], Other Possible Types: unsigned long long
    char v29;  // [bp-0xc8]
    int v30;  // [bp-0xc8]
    unsigned long long v31;  // [bp-0xc0]
    int v32;  // [bp-0xc0]
    void* v33;  // [bp-0xb8], Other Possible Types: char
    char v34;  // [bp-0xa8]
    char v35;  // [bp-0x98]
    char v36;  // [bp-0x88]
    char v37;  // [bp-0x78]
    char v38;  // [bp-0x68]
    int v39;  // [bp-0x58]
    unsigned long long v40;  // [bp-0x48]
    char v41;  // [bp-0x40]
    void* v43;  // r13
    unsigned long long v44;  // [bp-0x158]

    if (!a2)
        return 0;
    v6 = a2 * 24;
    v43 = 0;
    v0 = &v10;
    while (true)
    {
        fish::common::str2wcstring(&v3, *((long long *)(8 + a1 + (char *)v43)), *((long long *)(16 + a1 + (char *)v43)));
        v7 = 0;
        v8 = 8;
        v9 = 0;
        fish::ast::parse(&v21, v4, v5, 0, &v7);
        if ((char)v27 || ((char)fish::parse_util::parse_util_detect_errors_in_ast(&v21, v4, v5, &v7) & 1))
        {
            v1.get_backtrace(a0, v4, v5, &v7);
            v11 = 0;
            v12 = 4;
            v13 = 0;
            v29 = 1;
            v32 = v2;
            fish_printf::printf_impl::sprintf_locale(&v41, &v11, "%s", 2, &v29, 1);
            v41.unwrap(&g_149ab60);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v29);
            v33 = v13;
            *((int128_t *)&v30) = *((int128_t *)&v11);
            fish::wutil::wwrite_to_fd(v31, v13, 2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v29);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
            core::ptr::drop_in_place<fish::ast::Ast>(&v21);
            core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v7);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
            v43 += 24;
            if (v6 == v43)
                return 1;
        }
        else
        {
            v13 = v5;
            *((int128_t *)&v10) = *((int128_t *)&v3);
            memcpy(&(char)v19, &v26, 16);
            v18 = v25;
            v17 = v24;
            v16 = v23;
            v15 = v22;
            v14 = v21;
            v28 = 1;
            v31 = 1;
            v40 = (long long)v20;
            v39 = v19;
            memcpy(&v38, &v44, 16);
            memcpy(&v37, &v16, 16);
            memcpy(&v36, &v15, 16);
            memcpy(&v35, &v14, 16);
            memcpy(&v34, &v13, 16);
            memcpy(&v33, &v10, 16);
            v1 = v28.new();
            v28 = 0;
            v31 = 8;
            v33 = 0;
            v10.eval_parsed_source(a0, &v1, &v28, 0, 8);
            core::ptr::drop_in_place<fish::io::IoChain>(&v28);
            core::ptr::drop_in_place<alloc::sync::Arc<fish::parse_tree::ParsedSource>>(&v1);
            core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v7);
            v43 += 24;
            if (v6 == v43)
                return 0;
        }
    }
}
