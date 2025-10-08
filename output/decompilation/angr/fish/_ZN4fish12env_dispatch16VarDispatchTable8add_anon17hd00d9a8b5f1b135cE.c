long long fish::env_dispatch::VarDispatchTable::add_anon(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    char *v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    char *v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    void* v8;  // [bp-0x10]

    v0 = a1;
    v1 = a2;
    if (a0.insert(a1, a2, 1, a3) != 2)
    {
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &g_14d6f08;
        v5 = 1;
        v8 = 0;
        v6 = &v2;
        v7 = 1;
        core::panicking::panic_fmt(&v4, &g_14d6f30); /* do not return */
    }
    return 2;
}
