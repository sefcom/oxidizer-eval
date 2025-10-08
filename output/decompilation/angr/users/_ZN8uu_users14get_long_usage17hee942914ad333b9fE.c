long long uu_users::get_long_usage(unsigned long long a0)
{
    char *v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    int v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]

    *((uint128_t *)&v2) = _ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E;
    v0 = &v2;
    v1 = <&T as core::fmt::Display>::fmt;
    v3 = &g_4dc430;
    v4 = 2;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    a0.map_or_else(&v3);
    return a0;
}
