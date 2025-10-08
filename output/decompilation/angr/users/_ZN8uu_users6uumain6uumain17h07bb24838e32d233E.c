long long uu_users::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x618]
    unsigned long long v1;  // [bp-0x610]
    unsigned long long v2;  // [bp-0x608]
    int v3;  // [bp-0x5f8], Other Possible Types: char
    unsigned long long v4;  // [bp-0x5f0]
    char v5;  // [bp-0x5e8], Other Possible Types: unsigned long long
    char v6;  // [bp-0x5d8]
    unsigned long long v7;  // [bp-0x5c8]
    char *v8;  // [bp-0x5c0]
    unsigned long long v9;  // [bp-0x5b8]
    char v10;  // [bp-0x5b0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x5a8]
    char *v12;  // [bp-0x5a0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x598]
    void* v14;  // [bp-0x590]
    char v15;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x2e0]
    char v17;  // [bp-0x2d8]
    char v18;  // [bp-0x2c8]
    unsigned long long v19;  // [bp-0x2b8]
    unsigned long long v21[3];  // rax
    unsigned long long v22;  // rdi
    unsigned long long v23;  // rsi
    unsigned int v25;  // edx

    uu_users::uu_app(&v15);
    uu_users::get_long_usage(&(char)v0);
    v10.after_help(&v15, &(char)v0);
    (char)v3.try_get_matches_from(&v10, a0, a1);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
        return v16.from();
    v19 = v7;
    memcpy(&v18, &v6, 16);
    memcpy(&v17, &v5, 16);
    v15 = *((long long *)&v3);
    v16 = v4;
    v10.try_get_one(&v15, _ZN8uu_users8ARG_FILE17h5581d6ea30a34740E, g_4dc428);
    v21 = _ZN8uu_users8ARG_FILE17h5581d6ea30a34740E.unwrap(g_4dc428, &v10);
    if (v21)
    {
        v22 = v21[1];
        v23 = v21[2];
    }
    else
    {
        v22 = _ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E;
        v23 = g_4dcc58;
    }
    v10.collect(v22.iter_all_records_from(v23), v25 & 1);
    v2 = v12;
    *((int128_t *)&v0) = *((int128_t *)&v10);
    if (v12)
    {
        alloc::slice::stable_sort(v1, v12);
        alloc::str::join_generic_copy(&v10, v1, v12);
        v5 = v12;
        *((int128_t *)&v3) = *((int128_t *)&v10);
        v8 = &(char)v3;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v10 = &g_4dbb40;
        v11 = 2;
        v14 = 0;
        v12 = &v8;
        v13 = 1;
        std::io::stdio::_print(&v10);
        core::ptr::drop_in_place<alloc::string::String>((long long)v3, v4);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v15);
    return 0;
}
