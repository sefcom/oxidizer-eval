long long fish::wutil::wwrite_to_fd(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    void* v0;  // [bp-0x278]
    unsigned int v1;  // [bp-0x26c]
    void* v2;  // [bp-0x268]
    char *v3;  // [bp-0x260]
    unsigned long long v4;  // [bp-0x258]
    char *v5;  // [bp-0x250]
    char *v6;  // [bp-0x248]
    char *v7;  // [bp-0x240]
    char *v8;  // [bp-0x238]
    char *v9;  // [bp-0x230]
    char *v10;  // [bp-0x228]
    char v11;  // [bp-0x220]
    unsigned long long v13;  // rdx

    v1 = a2;
    memset(&v11, 0, 0x200);
    v2 = 0;
    v4 = 0x200;
    v0 = 0;
    v3 = &v1;
    v5 = &v2;
    v6 = &v4;
    v7 = &v3;
    v8 = &v0;
    v9 = &v11;
    v10 = &v1;
    if (!(char)fish::wcstringutil::wcs2string_callback(a0, a1, &v5))
        return 0;
    return (unsigned int)fish::wutil::wwrite_to_fd::do_write(v1, &v0, 0.index(0, &v11, 0x200, &g_14c1708), v13);
}
