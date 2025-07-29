long long uu_od::prn_float::format_item_flo16(struct_1 *a0)
{
    unsigned long long v0;  // [bp-0x88]
    char *v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    int v3;  // [bp-0x70], Other Possible Types: char
    unsigned long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    char *v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    void* v9;  // [bp-0x38]
    char v10;  // [bp-0x28]
    unsigned long long v12;  // xmm0lq

    v0 = v12;
    if (!(char)::0x4b96d0::std_detect::detect::cache::test())
    {
        uu_od::prn_float::format_flo16(&v10, (unsigned int)half::binary16::arch::f64_to_f16_fallback());
        v1 = &v10;
        v2 = <alloc::string::String as core::fmt::Display>::fmt;
        v5 = &g_595f68;
        v6 = 1;
        v9 = 0;
        v7 = &v1;
        v8 = 1;
        v3.map_or_else(&v5);
        ::0x4b9740::core::ptr::drop_in_place<alloc::string::String>(&v10);
        a0->field_10 = v4;
        *((void*)&a0->field_0) = v3;
        return a0;
    }
    half::binary16::arch::x86::f32_to_f16_x86_f16c(); /* do not return */
}
