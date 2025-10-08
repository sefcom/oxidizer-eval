long long uu_ls::dired::print_positions(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char *v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    char *v4;  // [bp-0x68], Other Possible Types: unsigned long long
    int v5;  // [bp-0x60], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    unsigned long v13;  // rbx

    v8 = a0;
    v9 = a1;
    v0 = &v8;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &g_4cf290;
    v3 = 1;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_print(&v2);
    if (a3)
    {
        v11 = a3 * 16;
        do
        {
            v12 = v11;
            v7 = a2;
            a2 += 16;
            v0 = &v7;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_6866f0;
            v3 = 1;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_print(&v2);
            v13 = v12 - 16;
            v11 = v13;
        } while (v12 != 16);
    }
    v2 = &g_6866e0;
    v3 = 1;
    v4 = 8;
    *((uint128_t *)&v5) = 0;
    return std::io::stdio::_print(&v2);
}
