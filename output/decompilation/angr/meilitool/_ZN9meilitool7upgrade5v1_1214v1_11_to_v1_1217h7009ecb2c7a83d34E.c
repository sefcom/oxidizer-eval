long long meilitool::upgrade::v1_12::v1_11_to_v1_12(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]

    v0 = &g_926308;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    std::io::stdio::_print(&v0);
    return meilitool::upgrade::v1_12::convert_update_files(a0, a1);
}
