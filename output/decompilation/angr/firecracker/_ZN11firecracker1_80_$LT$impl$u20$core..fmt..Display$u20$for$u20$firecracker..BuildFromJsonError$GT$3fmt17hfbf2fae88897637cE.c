long long firecracker::_::<impl core::fmt::Display for firecracker::BuildFromJsonError>::fmt(char *a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x48], Other Possible Types: unsigned long
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    void* v7;  // [bp-0x10]
    unsigned long long v9;  // rax

    if (*(a0) == 27)
    {
        v0 = a0 + 8;
        v1 = &v0;
        v2 = <&T as core::fmt::Display>::fmt;
        v9 = &g_7a4648;
    }
    else
    {
        v0 = a0;
        v1 = &v0;
        v2 = <&T as core::fmt::Display>::fmt;
        v9 = &g_7a4658;
    }
    v3 = v9;
    v4 = 1;
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    return a1.write_fmt(a2, &v3);
}
