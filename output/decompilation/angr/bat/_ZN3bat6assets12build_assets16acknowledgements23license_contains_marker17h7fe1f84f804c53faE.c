long long bat::assets::build_assets::acknowledgements::license_contains_marker(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned int v4;  // eax

    bat::assets::build_assets::acknowledgements::normalize_license_text(&v2, a0, a1);
    v0 = a2;
    v1 = a3 * 16 + a2;
    v4 = v0.any(&v2);
    core::ptr::drop_in_place<alloc::string::String>(&v2);
    return v4;
}
