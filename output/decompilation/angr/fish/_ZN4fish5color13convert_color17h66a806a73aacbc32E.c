long long fish::color::convert_color(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    unsigned short v0;  // [bp-0x4c]
    char v1;  // [bp-0x4a]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    void* v4;  // [bp-0x38]
    char *v5;  // [bp-0x30]
    char *v6;  // [bp-0x28]
    char *v7;  // [bp-0x20]
    char v8;  // [bp-0x18]
    unsigned long v9;  // [bp-0x10]
    char v10;  // [bp-0x8]

    v0 = a0;
    v1 = (a0 & 4294967295) >> 16;
    v2 = a1;
    v3 = a1 + a2 * 4;
    v4 = 0;
    v5 = &(char)v0;
    v6 = &(char)v0;
    v7 = &v1;
    v8.reduce(&v2);
    if (!*((long long *)&v10))
        core::option::expect_failed("convert_color() called with empty color list", 44, &g_14d59f0); /* do not return */
    return v9;
}
