long long fish::read_init(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xf8], Other Possible Types: void*, char
    unsigned long long v1;  // [bp-0xf0]
    void* v2;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xd8], Other Possible Types: void*, char
    void* v4;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v5;  // [bp-0xd8]
    int v6;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v7;  // [bp-0xc8], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    char v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x78]
    char v13;  // [bp-0x70], Other Possible Types: unsigned long
    int v14;  // [bp-0x68]
    int v15;  // [bp-0x58], Other Possible Types: char
    unsigned long long v16;  // [bp-0x48]
    char v17;  // [bp-0x40]
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    v3.get();
    if (*((int *)&v3) == 2)
        core::option::expect_failed("Embedded file not found%lsconfig.fish", 23, &g_149ab30); /* do not return */
    v12 = v9;
    fish::common::str2wcstring(&v15, v10, *((long long *)&v11));
    *((char *)(a0.libdata_mut() + 124)) = 1;
    core::ptr::drop_in_place<core::cell::RefMut<fish::parser::LibraryData>>(v19);
    (char)v0.to_vec("e", 20);
    v8 = v2;
    memcpy(&v7, &v0, 16);
    v4 = 1;
    v6 = 1;
    v20 = v4.new();
    v2 = v16;
    v0 = v15;
    v4 = 0;
    v6 = 8;
    v7 = 0;
    v13.eval_file_wstr(a0, &(char)v0, v20, &v4, 0);
    core::ptr::drop_in_place<fish::io::IoChain>(&v4);
    *((char *)(a0.libdata_mut() + 124)) = 0;
    core::ptr::drop_in_place<core::cell::RefMut<fish::parser::LibraryData>>(v19);
    v4 = v4;
    if (v13 != 0x8000000000000000)
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v5 = 1;
        v6 = v14;
        fish_printf::printf_impl::sprintf_locale(&v17, &v0, "%lsconfig.fish", 3, &v5, 1);
        v17.unwrap(&g_149ab48);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v5);
        v7 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
        fish::wutil::wwrite_to_fd(8, v2, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
        v4 = v3;
    }
    core::ptr::drop_in_place<rust_embed_utils::EmbeddedFile>(v12, v10);
    fish::common::str2wcstring(&v3, a1, a2);
    fish::source_config_in_directory(a0, 8, v7);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    v21 = fish::path::path_get_config(&v3);
    if (v4 == 0x8000000000000000)
        return v21;
    fish::source_config_in_directory(a0, 8, v7);
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
}
