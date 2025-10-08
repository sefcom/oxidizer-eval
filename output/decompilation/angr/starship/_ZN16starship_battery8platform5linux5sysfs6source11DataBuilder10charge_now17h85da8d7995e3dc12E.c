long long starship_battery::platform::linux::sysfs::source::DataBuilder::charge_now(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]

    v0 = &g_11f9fa0;
    v1 = &g_11f9fc0;
    v2 = a0;
    v3 = a1;
    return v0.find_map(&v2);
}
