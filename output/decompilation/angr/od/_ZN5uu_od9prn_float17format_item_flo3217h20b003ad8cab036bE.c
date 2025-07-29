long long uu_od::prn_float::format_item_flo32(struct_1 *a0)
{
    char *v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    int v2;  // [bp-0x70], Other Possible Types: char
    unsigned long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char *v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    void* v8;  // [bp-0x38]
    char v9;  // [bp-0x28]

    uu_od::prn_float::format_flo32(&v9);
    v0 = &v9;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_595f68;
    v5 = 1;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    v2.map_or_else(&v4);
    ::0x4b9740::core::ptr::drop_in_place<alloc::string::String>(&v9);
    a0->field_10 = v3;
    *((void*)&a0->field_0) = v2;
    return a0;
}
