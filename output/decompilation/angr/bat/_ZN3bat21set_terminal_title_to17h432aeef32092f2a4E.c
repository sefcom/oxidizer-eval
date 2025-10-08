void bat::set_terminal_title_to(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char *v4;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    char *v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x28]
    void* v14;  // [bp-0x20]

    v0 = &g_48159c;
    v1 = 4;
    v2 = &g_489078;
    v3 = 1;
    v4 = &v0;
    v5 = <&T as core::fmt::Display>::fmt;
    v6 = a0;
    v7 = <alloc::string::String as core::fmt::Display>::fmt;
    v8 = &v2;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &g_489048;
    v11 = 3;
    v14 = 0;
    v12 = &v4;
    v13 = 3;
    std::io::stdio::_print(&v10);
    v4 = std::io::stdio::stdout();
    v4.flush().unwrap();
    core::ptr::drop_in_place<alloc::string::String>(a0);
    return;
}
