long long uu_shred::do_remove(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned int a5)
{
    unsigned long long v0;  // [bp-0x148]
    unsigned long long v1;  // [bp-0x140]
    char *v2;  // [bp-0x138], Other Possible Types: unsigned long long
    int v3;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    char *v6;  // [bp-0x110], Other Possible Types: char
    unsigned long long v7;  // [bp-0x108]
    unsigned long long v8;  // [bp-0x100]
    void* v9;  // [bp-0xf8], Other Possible Types: char *
    unsigned long long v10;  // [bp-0xf0]
    char *v11;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v12;  // [bp-0xe0]
    void* v13;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v14;  // [bp-0xd8]
    unsigned long long v15;  // [bp-0xd0]
    unsigned long long v16;  // [bp-0xc8]
    char v17;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v18;  // [bp-0xb8]
    unsigned long long v19;  // [bp-0xb0]
    unsigned long long v20;  // [bp-0xa0]
    char *v21;  // [bp-0x98]
    unsigned long long v22;  // [bp-0x90]
    char v23;  // [bp-0x88]
    unsigned long long v24;  // [bp-0x78]
    char v25;  // [bp-0x68]
    char *v26;  // [bp-0x58]
    char v27;  // [bp-0x50]
    char *v28;  // [bp-0x40]
    unsigned long v30;  // r13
    unsigned long v31;  // rbp
    unsigned long long v32;  // 4096
    unsigned long long v33;  // 4096
    unsigned long long v34;  // rdx
    int v35;  // xmm0
    unsigned long long v36;  // r14
    unsigned long long v37;  // rax

    v30 = a5;
    v31 = a4;
    v32 = a2;
    v33 = a3;
    if (a4)
    {
        v13 = uucore::util_name();
        v15 = v34;
        v9 = &v13;
        v10 = <&T as core::fmt::Display>::fmt;
        v0 = &g_5950b8;
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v6.to_vec("filesizei128", 4);
        v9 = 0;
        v10 = a2;
        v20 = a3;
        v11 = a3;
        v12 = 0;
        v13.spec_to_string(&v9);
        v2 = v8;
        v35 = *((int128_t *)&v6);
        *((int128_t *)&v3) = *((int128_t *)&v13);
        v5 = v16;
        v14 = v35;
        v16 = v2;
        v17 = v3;
        v18 = 0;
        v19 = v5;
        v0.from_iter(&v13);
        uucore::mods::locale::get_message_with_args(&v13, "shred-removingshred-removed", 14, &v0);
        v6 = &v13;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_5950d8;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v13);
        v32 = a2;
        v33 = v20;
    }
    v36 = v32;
    if ((char)v30 == 1)
        v6.with_file_name(a0, a1, v36, v33);
    else
        uu_shred::wipe_name(&v6, a0, a1, v31, v30);
    if (!((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63)))
    {
        v24 = v8;
        memcpy(&v23, &v6, 16);
        v37 = std::fs::remove_file(&v23);
        if (v37)
            return v37;
    }
    if ((char)v31)
    {
        v13 = uucore::util_name();
        v15 = v34;
        v9 = &v13;
        v10 = <&T as core::fmt::Display>::fmt;
        v0 = &g_5950b8;
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v0.to_vec("filesizei128", 4);
        v11 = v2;
        memcpy(&v9, &v0, 16);
        v13 = 0;
        v15 = a2;
        v16 = v33;
        v17 = 0;
        v0.spec_to_string(&v13);
        v26 = v11;
        memcpy(&v25, &v9, 16);
        memcpy(&v27, &v0, 16);
        v28 = v2;
        v0.from_iter(&v25);
        uucore::mods::locale::get_message_with_args(&v9, "shred-removed", 13, &v0);
        v21 = &v9;
        v22 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_5950d8;
        v1 = 2;
        v4 = 0;
        v2 = &v21;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v9);
    }
    if (v6 != 0x8000000000000000)
        ::0x4aa170::core::ptr::drop_in_place<std::path::PathBuf>(&v6);
    return 0;
}
