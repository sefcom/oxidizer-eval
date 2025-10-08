long long uu_hostid::hostid()
{
    unsigned long v0;  // [bp-0x48]
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v8;  // [bp-0x8]

    v0 = (unsigned int)gethostid();
    v1 = &v0;
    v2 = core::fmt::num::<impl core::fmt::LowerHex for u64>::fmt;
    v3 = &g_4d5270;
    v4 = 2;
    v7 = &g_417828;
    v8 = 1;
    v5 = &v1;
    v6 = 1;
    return std::io::stdio::_print(&v3);
}
