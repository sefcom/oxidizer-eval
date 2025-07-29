long long flealib::fileserver::FileServer::list_content(struct_0 *a0, unsigned long long a1)
{
    char *v0;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v1;  // [bp-0x1a8]
    char v2;  // [bp-0x1a8]
    unsigned long long v3;  // [bp-0x1a0]
    void* v4;  // [bp-0x198], Other Possible Types: char *, unsigned long long
    unsigned long long v5;  // [bp-0x190]
    void* v6;  // [bp-0x188], Other Possible Types: char *
    unsigned long long v7;  // [bp-0x180]
    char v8;  // [bp-0x178], Other Possible Types: unsigned int, unsigned long long
    char *v9;  // [bp-0x178]
    unsigned long v10;  // [bp-0x170], Other Possible Types: unsigned long long
    char v11;  // [bp-0x170]
    char *v12;  // [bp-0x168]
    unsigned long long v13;  // [bp-0x160]
    void* v14;  // [bp-0x158]
    void* v15;  // [bp-0x148]
    unsigned long long v16;  // [bp-0x140]
    void* v17;  // [bp-0x138]
    unsigned long long v18;  // [bp-0x130]
    char v19;  // [bp-0x128]
    int v20;  // [bp-0x120]
    unsigned long long v21;  // [bp-0x110]
    char *v22;  // [bp-0x108]
    int v23;  // [bp-0x108]
    int v24;  // [bp-0x100]
    unsigned long long v25;  // [bp-0xf8]
    unsigned long long v26;  // [bp-0xf0]
    char v27;  // [bp-0xe8]
    unsigned long long v28;  // [bp-0xd8]
    unsigned long long v29;  // [bp-0xc0]
    unsigned long long v30;  // [bp-0xb8]
    char v31;  // [bp-0xb0]
    unsigned long long v32;  // [bp-0xa8]
    int v33;  // [bp-0xa0]
    int v34;  // [bp-0x78]
    unsigned long long v35;  // [bp-0x68]
    int v36;  // [bp-0x60]
    char v37;  // [bp-0x48]
    char v39;  // bl
    unsigned long long v41;  // rdx
    struct_0 *v42;  // rbx

    v15 = 0;
    v16 = 8;
    v17 = 0;
    std::fs::read_dir(&v8, a1);
    v39 = v11;
    if (v39 == 2)
    {
        v32 = v8;
        v2.spec_to_string(&v32);
        *((void* *)((char *)&a0->field_8 + 8)) = v4;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
        a0->field_0 = 1;
        ::0x7789c0::core::ptr::drop_in_place<std::io::error::Error>(&v32);
        ::0x778b20::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v15);
        return a0;
    }
    v30 = v8;
    v31 = v39;
    v8 = 0;
    v2.to_vec(::0x7796f0::core::char::methods::encode_utf8_raw(47, &v8), v41);
    v28 = v4;
    memcpy(&v27, &v2, 16);
    v18 = v30;
    v19 = v39;
    while (true)
    {
        v32.next(&v18);
        if (!((char)v32 & 1))
            break;
        v2.unwrap(&v33);
        v37.file_name(&v2);
        v9.into_string(&v37);
        v26 = v13;
        *((int128_t *)&v24) = *((int128_t *)&v10);
        v22 = v9;
        v20.unwrap(&v22);
        v42 = a0;
        core::ptr::drop_in_place<std::fs::DirEntry>(&v2);
        v29 = a1;
        v0 = &v29;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v27;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v20;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = &g_46b258;
        v10 = 3;
        v14 = 0;
        v12 = &v0;
        v13 = 3;
        v34.map_or_else(&v9);
        v23 = v34;
        v25 = v35;
        if ((char)(long long)(&v23)[8].is_dir(v35))
        {
            v9 = &v27;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v12 = &v20;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_450610;
            v3 = 2;
            v6 = 0;
            v4 = &v9;
            v5 = 2;
            v36.map_or_else(&v0);
            v15.push(&v36, &g_b098f8);
        }
        else if ((char)(long long)(&v23)[8].is_file(v35))
        {
            v4 = v21;
            v1 = v20;
            v15.push(&v0, &g_b098e0);
            ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v22);
            a0 = v42;
            continue;
        }
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v22);
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v20);
        a0 = v42;
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v18);
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = 0;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v15);
    a0->field_0 = 0;
    ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v27);
    return a0;
}
