long long fish::env_universal_common::EnvUniversal::initialize_at_path(unsigned long long *a0, struct_1 *a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    uint128_t v3;  // [bp-0x30]

    if (!a2->field_10)
    {
        *(a0) = 0x8000000000000000;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a2);
        return a0;
    }
    else if (!a1->field_10)
    {
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
        a1->field_10 = a2->field_10;
        a1->field_0 = a2->field_0;
        a0.load_from_path(a1);
        return a0;
    }
    else
    {
        v0 = &g_14d72c0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d72d0); /* do not return */
    }
}
