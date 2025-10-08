long long uu_timeout::report_if_verbose(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    char *v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    void* v4;  // [bp-0x90]
    char *v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    char *v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    void* v9;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    char v12;  // [bp-0x48]
    int v13;  // [bp-0x40]
    unsigned long long v15;  // rdx
    unsigned long v16;  // rax

    if (!a3)
    {
        return v16;
    }
    else if (a0 < 32)
    {
        *((uint128_t *)&v13) = _ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E[a0];
        v9 = uucore::util_name();
        v10 = v15;
        v5 = &v9;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = &g_5127c8;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v9 = 0;
        v10 = a1;
        v11 = a2;
        v12 = 1;
        v5 = &v13;
        v6 = <&T as core::fmt::Display>::fmt;
        v7 = &v9;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = &g_5127e8;
        v1 = 3;
        v4 = 0;
        v2 = &v5;
        v3 = 2;
        return std::io::stdio::_eprint(&v0);
    }
    else
    {
        core::option::unwrap_failed(&g_512818); /* do not return */
    }
}
