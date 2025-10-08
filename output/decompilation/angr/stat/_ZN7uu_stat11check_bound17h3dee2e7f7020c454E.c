long long uu_stat::check_bound(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    char *v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    char v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    char *v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    void* v10;  // [bp-0x50]
    char v11;  // [bp-0x40]
    unsigned int v12;  // [bp-0x28]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    if (a4 < a2)
        return 0;
    v14 = a3.get(a4, a0, a1);
    if (!v14)
        core::str::slice_error_fail(a0, a1, a3, a4, &g_519a00); /* do not return */
    v2 = 0;
    v3 = v14;
    v4 = v15;
    v5 = 1;
    v0 = &v2;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v6 = &g_5199e0;
    v7 = 2;
    v10 = 0;
    v8 = &v0;
    v9 = 1;
    v11.map_or_else(&v6);
    v12 = 1;
    return v11.new();
}
