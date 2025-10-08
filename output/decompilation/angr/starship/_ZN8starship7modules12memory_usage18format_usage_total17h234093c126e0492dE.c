void starship::modules::memory_usage::format_usage_total(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    char *v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    char *v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    void* v8;  // [bp-0x60]
    char v9;  // [bp-0x50]
    char v10;  // [bp-0x38]
    void* v12;  // rax

    v12 = a1 - a2;
    if (a2 > a1)
        v12 = 0;
    starship::modules::memory_usage::display_bs(&v9, v12);
    starship::modules::memory_usage::display_bs(&v10, a1);
    v0 = &v9;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &v10;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_11f4318;
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 2;
    a0.map_or_else(0, a2, &v4);
    core::ptr::drop_in_place<alloc::string::String>(&v10);
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    return;
}
