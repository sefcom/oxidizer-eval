long long uu_ls::dired::print_positions(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    char *v4;  // [bp-0x78], Other Possible Types: unsigned long long
    int v5;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax

    v10 = a0;
    v11 = a1;
    v0 = &v10;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &g_4259a0;
    v3 = 1;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_print(&v2);
    v7 = a2.into_iter();
    v8 = v13;
    if (v7.next())
    {
        do
        {
            v9 = v14;
            v0 = &v9;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_6a1768;
            v3 = 1;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_print(&v2);
            v14 = v7.next();
        } while (v14);
    }
    v2 = &g_6a1758;
    v3 = 1;
    v4 = 8;
    *((uint128_t *)&v5) = 0;
    return std::io::stdio::_print(&v2);
}
