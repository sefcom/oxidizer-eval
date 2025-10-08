void uu_cp::print_paths(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char *v0;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x100]
    unsigned long long v2;  // [bp-0xf8]
    int v3;  // [bp-0xf0]
    char v4;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xd8]
    char *v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    void* v8;  // [bp-0xc0]
    char *v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    char *v11;  // [bp-0x80]
    unsigned long long v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    char v15;  // [bp-0x60]
    int v16;  // [bp-0x40]

    if (a0)
    {
        uu_cp::aligned_ancestors(&v4, a1, a2, a3, a4);
        v15.into_iter(&v4);
        (char)v1.next(&v15);
        if (v0)
        {
            v1 = v0;
            do
            {
                v13 = v1;
                v14 = v2;
                v16 = v3;
                v9 = &v13;
                v10 = <std::path::Display as core::fmt::Display>::fmt;
                v11 = &v16;
                v12 = <std::path::Display as core::fmt::Display>::fmt;
                v4 = &g_55e6c0;
                v5 = 3;
                v8 = 0;
                v6 = &v9;
                v7 = 2;
                std::io::stdio::_print(&v4);
                (char)v1.next(&v15);
                v1 = v0;
            } while (v1);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v15);
    }
    uu_cp::context_for(&v9, a1, a2, a3, a4);
    v0 = &v9;
    v2 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_55e620;
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    std::io::stdio::_print(&v4);
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    return;
}
