long long uu_stat::pad_and_print(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long a3, char a4)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char *v2;  // [bp-0x50], Other Possible Types: unsigned long long
    int v3;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    char *v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    void* v8;  // [bp-0x20]
    unsigned short v9;  // [bp-0x18]
    unsigned long long v10;  // [bp-0x10]
    unsigned long long v11;  // [bp-0x8]
    unsigned long long v13;  // rax

    v10 = a0;
    v11 = a1;
    if (a2)
    {
        if (a4)
        {
            if (a3 <= 65535)
            {
                v6 = &v10;
                v7 = <&T as core::fmt::Display>::fmt;
                v8 = 0;
                v9 = a3;
                v0 = &g_41ab40;
                v1 = 1;
                v13 = &g_41d418;
            }
            else
            {
                v0 = &g_519960;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                core::panicking::panic_fmt(&v0, &g_519ae8); /* do not return */
            }
        }
        else
        {
            if (a3 <= 65535)
            {
                v6 = &v10;
                v7 = <&T as core::fmt::Display>::fmt;
                v8 = 0;
                v9 = a3;
                v0 = &g_41ab40;
                v1 = 1;
                v13 = &g_41d3e8;
            }
            else
            {
                v0 = &g_519960;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                core::panicking::panic_fmt(&v0, &g_519ad0); /* do not return */
            }
        }
    }
    else
    {
        if (a4)
        {
            if (a3 <= 65535)
            {
                v6 = &v10;
                v7 = <&T as core::fmt::Display>::fmt;
                v8 = 0;
                v9 = a3;
                v0 = &g_41ab40;
                v1 = 1;
                v13 = &g_41d3b8;
            }
            else
            {
                v0 = &g_519960;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                core::panicking::panic_fmt(&v0, &g_519ab8); /* do not return */
            }
        }
        else
        {
            if (a3 <= 65535)
            {
                v6 = &v10;
                v7 = <&T as core::fmt::Display>::fmt;
                v8 = 0;
                v9 = a3;
                v0 = &g_41ab40;
                v1 = 1;
                v13 = &g_41d388;
            }
            else
            {
                v0 = &g_519960;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                core::panicking::panic_fmt(&v0, &g_519aa0); /* do not return */
            }
        }
    }
    v4 = v13;
    v5 = 1;
    v2 = &v6;
    v3 = 2;
    return std::io::stdio::_print(&v0);
}
