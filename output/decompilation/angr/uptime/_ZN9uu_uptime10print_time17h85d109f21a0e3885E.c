void uu_uptime::print_time()
{
    char *v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char *v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    void* v6;  // [bp-0x30]
    char v7;  // [bp-0x20]

    uucore::features::uptime::get_formatted_time(&v7);
    v0 = &v7;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &g_5082f0;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_print(&v2);
    core::ptr::drop_in_place<alloc::string::String>(&v7);
    return;
}
