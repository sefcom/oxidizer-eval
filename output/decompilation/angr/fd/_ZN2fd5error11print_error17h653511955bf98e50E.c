long long fd::error::print_error(unsigned long long a0)
{
    char *v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char *v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    void* v6;  // [bp-0x30]
    char v7;  // [bp-0x20]

    v7.call_mut(a0);
    v0 = &v7;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &g_802140;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_eprint(&v2);
    return core::ptr::drop_in_place<alloc::string::String>(&v7);
}
