long long flealib::fileserver::FileServer::change_directory(struct_0 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x188], Other Possible Types: unsigned long long
    int v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x180]
    char *v3;  // [bp-0x178]
    unsigned long long v4;  // [bp-0x170]
    int v5;  // [bp-0x168], Other Possible Types: char
    unsigned long long v6;  // [bp-0x160]
    char *v7;  // [bp-0x158], Other Possible Types: unsigned long long
    struct_0 *v8;  // [bp-0x148], Other Possible Types: unsigned int, unsigned long long
    unsigned int v9;  // [bp-0x148]
    unsigned int v10;  // [bp-0x148]
    char *v11;  // [bp-0x138]
    char v12;  // [bp-0x128]
    unsigned long long v13;  // [bp-0x120]
    unsigned long long v14;  // [bp-0x118]
    int v15;  // [bp-0x110], Other Possible Types: char
    unsigned long long v16;  // [bp-0x100]
    unsigned long long v17;  // [bp-0xf8]
    char v18;  // [bp-0xf8]
    unsigned long long v19;  // [bp-0xf0]
    char *v20;  // [bp-0xe8]
    unsigned long long v21;  // [bp-0xe0]
    void* v22;  // [bp-0xd8]
    char v23;  // [bp-0xc0]
    char v24;  // [bp-0x48]
    char v25;  // [bp-0x38]
    unsigned long v28;  // r13
    char *v29;  // rbp

    v5.to_vec(a2, a3);
    v8 = 0;
    v18.to_vec(::0x7796f0::core::char::methods::encode_utf8_raw(47, &v8), a2);
    v3 = v20;
    *((int128_t *)&v1) = *((int128_t *)&v18);
    if (v2.is_contained_in(v20, v6, v7))
    {
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
    }
    else
    {
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
        v0 = "/";
        v2 = <char as core::fmt::Display>::fmt;
        v3 = &v5;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v17 = &g_450610;
        v19 = 2;
        v22 = 0;
        v20 = &v0;
        v21 = 2;
        v15.map_or_else(&v17);
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v5);
        v7 = v16;
        v5 = v15;
    }
    v28 = *((long long *)&a1->padding_1[7]);
    v29 = a1->field_10;
    v9 = 0;
    v18.to_vec(::0x7796f0::core::char::methods::encode_utf8_raw(47, &v9), a2);
    v3 = v20;
    *((int128_t *)&v1) = *((int128_t *)&v17);
    if ((char)core::slice::<impl [T]>::ends_with(v28, v29, v2, v20))
    {
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
        v10 = 0;
        v18.to_vec(::0x7796f0::core::char::methods::encode_utf8_raw(47, &v10), a2);
        v3 = v20;
        *((int128_t *)&v1) = *((int128_t *)&v17);
        alloc::str::<impl str>::replace(&v18, v6, v7, v2, v20);
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v5);
        v7 = v20;
        *((int128_t *)&v5) = *((int128_t *)&v17);
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
    }
    else
    {
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
    }
    v8 = a1;
    v0 = &v8;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v5;
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v17 = &g_450610;
    v19 = 2;
    v22 = 0;
    v20 = &v0;
    v21 = 2;
    v24.map_or_else(&v17);
    memcpy(&v12, &v24, 16);
    v14 = *((long long *)&v25);
    std::fs::metadata(&v17, v13, v14);
    if ((int)v17 == 2)
    {
        v8 = 2;
        v0.spec_to_string(&v8);
        a0->field_10 = v3;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        ::0x7789c0::core::ptr::drop_in_place<std::io::error::Error>(&v8);
    }
    else if ((0xf000 & *((int *)&v23)) == 0x4000)
    {
        v0.try_from(v13, v14);
        if ((int)v0 == 1)
            core::option::unwrap_failed(&g_b09928); /* do not return */
        v0.to_vec(<&T as core::fmt::Display>::fmt, v3);
        v11 = v3;
        memcpy(&v8, &v0, 16);
        ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(a1);
        a1->field_10 = v11;
        *((int128_t *)&a1->field_0) = *((int128_t *)&v8);
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    }
    else
    {
        v0.to_vec("Not a directory/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 15);
        a0->field_10 = v3;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
    }
    ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v12);
    ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(&v5);
    return a0;
}
