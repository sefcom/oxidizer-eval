long long uu_uptime::print_uptime(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x58]
    char *v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    char *v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    void* v8;  // [bp-0x18]

    uucore::features::uptime::get_formatted_uptime(&v0, a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v1;
    v2 = &v0;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_508310;
    v5 = 2;
    v8 = 0;
    v6 = &v2;
    v7 = 1;
    std::io::stdio::_print(&v4);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return 0;
}
