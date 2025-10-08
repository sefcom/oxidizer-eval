long long just::subcommand::Subcommand::completions(char a0)
{
    char *v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    char *v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    void* v8;  // [bp-0x10]
    unsigned long v10;  // rcx

    v10 = a0;
    v2 = g_49fa30[v10] + (char *)&g_49fa30[0];
    v3 = g_49fa48[v10];
    v0 = &v2;
    v1 = <&T as core::fmt::Display>::fmt;
    v4 = &g_465db0;
    v5 = 1;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    return std::io::stdio::_print(&v4);
}
