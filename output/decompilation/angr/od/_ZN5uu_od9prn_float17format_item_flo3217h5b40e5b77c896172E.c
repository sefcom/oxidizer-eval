long long uu_od::prn_float::format_item_flo32(unsigned long long a0)
{
    char *v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char *v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    void* v6;  // [bp-0x38]
    char v7;  // [bp-0x28]

    uu_od::prn_float::format_flo32(&v7);
    v0 = &v7;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &g_503838;
    v3 = 1;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    a0.map_or_else(&v2);
    core::ptr::drop_in_place<alloc::string::String>(&v7);
    return a0;
}
