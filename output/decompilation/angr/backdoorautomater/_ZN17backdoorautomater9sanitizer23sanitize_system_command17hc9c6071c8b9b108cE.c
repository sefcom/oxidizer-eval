void backdoorautomater::sanitizer::sanitize_system_command(struct_0 *a0)
{
    struct_0 *v0;  // [bp-0x48]
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    void* v7;  // [bp-0x10]

    v0 = a0;
    if (a0->field_10)
    {
        v1 = &v0;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &g_62a678;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt(&v3, &g_62a698); /* do not return */
    }
    return;
}
