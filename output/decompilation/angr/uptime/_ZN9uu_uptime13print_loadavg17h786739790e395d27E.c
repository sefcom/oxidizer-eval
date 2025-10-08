void uu_uptime::print_loadavg()
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x50]
    char *v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    char *v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    void* v10;  // [bp-0x18]

    uucore::features::uptime::get_formatted_loadavg(&v2);
    if ((char)(((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v2);
    }
    else
    {
        v1 = v3;
        memcpy(&v0, &v2, 16);
        v4 = &v0;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &g_508278;
        v7 = 2;
        v10 = 0;
        v8 = &v4;
        v9 = 1;
        std::io::stdio::_print(&v6);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    return;
}
