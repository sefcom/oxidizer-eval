long long uu_kill::parse_signal_value(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char *v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    void* v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned int v12;  // [bp-0x20]
    void* v14;  // rax
    unsigned long long v15;  // rdx

    if (((char)uucore::features::signals::signal_by_name_or_value(a1, a2) & 1))
    {
        v14 = 0;
    }
    else
    {
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v6 = &g_4e7670;
        v7 = 2;
        v10 = 0;
        v8 = &v0;
        v9 = 1;
        v11.map_or_else(&v6);
        v12 = 1;
        v14 = v11.new();
        v15 = &g_4e76b0;
    }
    a0[1] = v15;
    a0[0] = v14;
    return a0;
}
