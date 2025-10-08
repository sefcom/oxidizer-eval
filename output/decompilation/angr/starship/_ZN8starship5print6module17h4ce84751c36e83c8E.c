void starship::print::module(unsigned long long a0, unsigned long long a1, unsigned long long a2[17])
{
    int v0;  // [bp-0x748], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x740]
    void* v2;  // [bp-0x738], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x730]
    unsigned long long v4;  // [bp-0x728]
    char *v5;  // [bp-0x720], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x718]
    void* v7;  // [bp-0x710]
    char *v8;  // [bp-0x700]
    unsigned long long v9;  // [bp-0x6f8]
    char v10;  // [bp-0x6f0]

    v3 = 0x8000000000000000;
    v10.new(a2, &v3);
    starship::print::get_module(&v3, a0, a1, &v10);
    if (v3 == 0x8000000000000000)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
    }
    else
    {
        v2 = v5;
        *((int128_t *)&v0) = *((int128_t *)&v3);
    }
    v8 = &v0;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = &g_525500;
    v4 = 1;
    v7 = 0;
    v5 = &v8;
    v6 = 1;
    std::io::stdio::_print(&v3);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    core::ptr::drop_in_place<starship::context::Context>(&v10);
    return;
}
