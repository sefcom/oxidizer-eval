void uu_cp::show_debug(unsigned long long a0)
{
    int v0;  // [bp-0x158], Other Possible Types: char *, char
    unsigned long long v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x148]
    int v3;  // [bp-0x140]
    unsigned long long v4;  // [bp-0x138]
    unsigned long long v5;  // [bp-0x130]
    int v6;  // [bp-0x128], Other Possible Types: char
    unsigned long long v7;  // [bp-0x118]
    int v8;  // [bp-0x110]
    unsigned long long v9;  // [bp-0x100]
    char v10;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xf0]
    int v12;  // [bp-0xe8], Other Possible Types: char *, unsigned long long
    unsigned long long v13;  // [bp-0xe0]
    int v14;  // [bp-0xd8], Other Possible Types: void*
    int v15;  // [bp-0xc8]
    char v16;  // [bp-0xb8]
    char v17;  // [bp-0xa8]
    char v18;  // [bp-0x98]
    char v19;  // [bp-0x88]
    unsigned long long v20;  // [bp-0x78]
    unsigned long long v21;  // [bp-0x70]
    char v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x58]
    char v24;  // [bp-0x48]
    unsigned long long v25;  // [bp-0x38]
    int v26;  // [bp-0x30]
    unsigned long long v27;  // [bp-0x20]
    int v29;  // xmm2

    (char)v0.to_vec("offloadreflinksparse\ncp-debug-copy-offload", 7);
    v10.spec_to_string(a0);
    v25 = v2;
    memcpy(&v24, &v0, 16);
    *((int128_t *)&v26) = *((int128_t *)&v10);
    v27 = v12;
    v10.to_vec("reflinksparse\ncp-debug-copy-offload", 7);
    v2 = v12;
    *((int128_t *)&v0) = *((int128_t *)&v10);
    v10.spec_to_string(a0 + 1);
    v7 = v2;
    memcpy(&v6, &v0, 16);
    *((int128_t *)&v8) = *((int128_t *)&v10);
    v9 = v12;
    v10.to_vec("sparse\ncp-debug-copy-offload", 6);
    v23 = v12;
    memcpy(&v22, &v10, 16);
    v10.spec_to_string(a0 + 2);
    v2 = v23;
    memcpy(&(char)v0, &v22, 16);
    *((int128_t *)&v3) = *((int128_t *)&v10);
    v5 = v12;
    v29 = (int128_t)(&v26)[8];
    memcpy(&v10, &v24, 16);
    *((int128_t *)&v12) = *((int128_t *)&v25);
    v14 = v29;
    memcpy(&v17, &(char)v8, 16);
    memcpy(&v16, &v7, 16);
    v15 = v6;
    v20 = v4;
    v21 = v5;
    memcpy(&v19, &v2, 16);
    memcpy(&v18, &v0, 16);
    (char)v0.from_iter(&v10);
    uucore::mods::locale::get_message_with_args(&v6, "cp-debug-copy-offload", 21, &(char)v0);
    v0 = &v6;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v10 = &g_5fb580;
    v11 = 2;
    v14 = 0;
    v12 = &v0;
    v13 = 1;
    std::io::stdio::_print(&v10);
    ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v6);
    return;
}
