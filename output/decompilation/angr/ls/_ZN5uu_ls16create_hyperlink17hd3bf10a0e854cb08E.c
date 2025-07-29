char uu_ls::create_hyperlink(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x108], Other Possible Types: unsigned long long
    int v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    char *v3;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xf0]
    void* v5;  // [bp-0xe8]
    int v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    unsigned long long v8;  // [bp-0xc8]
    char v9;  // [bp-0xc0]
    unsigned long long v10;  // [bp-0xb8]
    unsigned long long v11;  // [bp-0xb0]
    char v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0xa0]
    unsigned long v14;  // [bp-0x98]
    char *v15;  // [bp-0x90]
    unsigned long long v16;  // [bp-0x88]
    char *v17;  // [bp-0x80]
    unsigned long long v18;  // [bp-0x78]
    char v19;  // [bp-0x70]
    char v20;  // [bp-0x58]
    int v21;  // [bp-0x40], Other Possible Types: char
    char v22;  // [bp-0x30]

    hostname::get(&v0);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        uu_ls::create_hyperlink::{{closure}}(&(char)v6, v2);
    }
    else
    {
        v8 = v3;
        *((int128_t *)&v6) = *((int128_t *)&v0);
    }
    v19.to_string_lossy(v7, v8);
    std::fs::canonicalize(&v0, a3 + 24);
    v9.unwrap_or_default(&v0);
    v12.to_string_lossy(v10, v11);
    v0 = v13;
    v2 = v14 + v13;
    v3 = "_-.:~/";
    v4 = 6;
    v20.from_iter(&v0);
    v15 = &v19;
    v16 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v17 = &v20;
    v18 = <alloc::string::String as core::fmt::Display>::fmt;
    *((unsigned long long **)&v1) = &g_69f918;
    v2 = 3;
    v5 = 0;
    v3 = &v15;
    v4 = 2;
    v21.map_or_else(&(unsigned long long)v1);
    v1 = v21;
    v3 = *((long long *)&v22);
    (unsigned long long)v1.push(a1, a2);
    (unsigned long long)v1.push(&g_428e64, 6);
    a0->field_10 = v3;
    a0->field_0 = (int128_t)v1;
    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v20);
    ::0x51cbe0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v12);
    ::0x51c9a0::core::ptr::drop_in_place<std::path::PathBuf>(&v9);
    ::0x51cbe0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v19);
    return ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v6);
}
