long long uu_od::prn_float::format_item_flo16(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x70]
    char *v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    char *v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    void* v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    unsigned long long v10;  // xmm0lq

    v0 = v10;
    if (!(char)std_detect::detect::cache::test())
    {
        uu_od::prn_float::format_flo16(&v8, (unsigned int)half::binary16::arch::f64_to_f16_fallback());
        v1 = &v8;
        v2 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_503838;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        a0.map_or_else(&v3);
        core::ptr::drop_in_place<alloc::string::String>(&v8);
        return a0;
    }
    half::binary16::arch::x86::f32_to_f16_x86_f16c(); /* do not return */
}
