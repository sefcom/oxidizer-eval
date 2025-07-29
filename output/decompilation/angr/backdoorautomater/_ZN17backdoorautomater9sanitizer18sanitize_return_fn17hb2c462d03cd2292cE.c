void backdoorautomater::sanitizer::sanitize_return_fn(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x50]
    char *v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]

    if (a0)
    {
        v0 = a0;
        v1 = &v0;
        v2 = <std::io::error::Error as core::fmt::Display>::fmt;
        v3 = &g_62a6b0;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt(&v3, &g_62a6d0); /* do not return */
    }
    return;
}
