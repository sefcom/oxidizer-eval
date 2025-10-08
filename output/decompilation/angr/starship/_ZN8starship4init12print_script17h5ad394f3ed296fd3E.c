void starship::init::print_script(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]

    alloc::str::<impl str>::replace(&v2, a0, a1, "::STARSHIP::STARSHIP_CACHE.cacheUnable to create log dir : !\n", 12, a2, a3);
    v0 = &v2;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = &g_525500;
    v4 = 1;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    std::io::stdio::_print(&v3);
    core::ptr::drop_in_place<alloc::string::String>(&v2);
    return;
}
