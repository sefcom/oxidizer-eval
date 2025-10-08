long long uu_pinky::platform::unix::Pinky::print_heading(char a0[30])
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char *v2;  // [bp-0x50], Other Possible Types: unsigned long long
    int v3;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]

    v6 = &g_4f8fd0;
    v7 = <&T as core::fmt::Display>::fmt;
    v0 = &g_419240;
    v1 = 1;
    v4 = &g_41a7b0;
    v5 = 1;
    v2 = &v6;
    v3 = 1;
    std::io::stdio::_print(&v0);
    if (a0[26])
    {
        v6 = &g_4f8fe0;
        v7 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4f8f60;
        v1 = 1;
        v4 = &g_41a7e0;
        v5 = 1;
        v2 = &v6;
        v3 = 1;
        std::io::stdio::_print(&v0);
    }
    v6 = &g_4f8ff0;
    v7 = <&T as core::fmt::Display>::fmt;
    v0 = &g_4f8f60;
    v1 = 1;
    v4 = &g_41a810;
    v5 = 1;
    v2 = &v6;
    v3 = 1;
    std::io::stdio::_print(&v0);
    if (a0[24])
    {
        v6 = &g_4f9000;
        v7 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4f8f60;
        v1 = 1;
        v4 = &g_41a770;
        v5 = 1;
        v2 = &v6;
        v3 = 1;
        std::io::stdio::_print(&v0);
    }
    v6 = &g_4f9010;
    v7 = <&T as core::fmt::Display>::fmt;
    v0 = &g_4f8f60;
    v1 = 1;
    v4 = &g_41a840;
    v5 = 1;
    v2 = &v6;
    v3 = 1;
    std::io::stdio::_print(&v0);
    if (a0[29])
    {
        v0 = &g_4f8fc0;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        std::io::stdio::_print(&v0);
    }
    v0 = &g_4f8f70;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    return std::io::stdio::_print(&v0);
}
