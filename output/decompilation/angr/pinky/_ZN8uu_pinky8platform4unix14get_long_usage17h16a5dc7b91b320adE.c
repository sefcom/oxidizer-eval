long long uu_pinky::platform::unix::get_long_usage(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    char *v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    void* v6;  // [bp-0x18]

    v0 = &_ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &g_4f8ed0;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    a0.map_or_else(&v2);
    return a0;
}
