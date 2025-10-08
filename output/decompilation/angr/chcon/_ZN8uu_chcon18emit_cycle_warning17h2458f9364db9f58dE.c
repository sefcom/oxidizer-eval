long long uu_chcon::emit_cycle_warning(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    char *v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    void* v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    char v10;  // [bp-0x30]
    unsigned long long v12;  // rdx

    v7 = uucore::util_name();
    v8 = v12;
    v0 = &v7;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &g_4f04a0;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_eprint(&v2);
    v7 = 1;
    v8 = a0;
    v9 = a1;
    v10 = 1;
    v0 = &v7;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v2 = &g_4f0510;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    return std::io::stdio::_eprint(&v2);
}
