void flea::print_usage(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    char *v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    void* v4;  // [bp-0x90]
    char *v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    char v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    char *v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x30]
    char v14;  // [bp-0x28]
    char v15;  // [bp-0x18]

    v10 = a0;
    v11 = a1;
    v5 = &v10;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_af5918;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    v14.map_or_else(&v0);
    memcpy(&v7, &v14, 16);
    v9 = *((long long *)&v15);
    v5.usage(a2, v8, *((long long *)&v15));
    v12 = &v5;
    v13 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_af5938;
    v1 = 2;
    v4 = 0;
    v2 = &v12;
    v3 = 1;
    std::io::stdio::_print(&v0);
    ::0x679550::core::ptr::drop_in_place<alloc::string::String>(&v5);
    ::0x679550::core::ptr::drop_in_place<alloc::string::String>(&v7);
    core::ptr::drop_in_place<getopts::Options>(a2);
    return;
}
