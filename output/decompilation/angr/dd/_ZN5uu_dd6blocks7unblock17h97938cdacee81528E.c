long long uu_dd::blocks::unblock(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38], Other Possible Types: unsigned long long
    uint128_t v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]

    if (!a3)
    {
        v0 = &g_53d1a0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_53d710); /* do not return */
    }
    v4 = a1;
    v5 = a2;
    v6 = a3;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    return a0.fold(&v4, &v0);
}
