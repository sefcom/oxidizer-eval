char backdoorautomater::sanitizer::sanitize_ex_stderr(unsigned long long a0[3])
{
    unsigned long long v0[3];  // [bp-0x48]
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    void* v7;  // [bp-0x10]
    char v9;  // al

    v0[0] = a0;
    v9 = a0[1].is_contained_in(a0[2]);
    if (v9)
    {
        v1 = &v0;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &g_62a700;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt(&v3, &g_62a710); /* do not return */
    }
    return v9;
}
