long long uu_ls::pad_left(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char *v2;  // [bp-0x50], Other Possible Types: unsigned long long
    int v3;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    char *v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    void* v10;  // [bp-0x10]
    unsigned short v11;  // [bp-0x8]

    v6 = a1;
    v7 = a2;
    if (a3 > 65535)
    {
        v0 = &g_6864a8;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        core::panicking::panic_fmt(&v0, &g_686be0); /* do not return */
    }
    v8 = &v6;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = 0;
    v11 = a3;
    v0 = &g_4cf290;
    v1 = 1;
    v4 = &g_4d41d0;
    v5 = 1;
    v2 = &v8;
    v3 = 2;
    return a0.map_or_else(&v0);
}
