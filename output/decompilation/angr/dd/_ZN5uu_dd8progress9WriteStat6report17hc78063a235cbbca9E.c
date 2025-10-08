long long uu_dd::progress::WriteStat::report(unsigned long a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    char *v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    void* v8;  // [bp-0x10]

    v0 = a0 + 16;
    v1 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v2 = a0 + 24;
    v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v4 = &g_53dbb8;
    v5 = 3;
    v8 = 0;
    v6 = &v0;
    v7 = 2;
    return a1.write_fmt(&v4);
}
