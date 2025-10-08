long long starship_battery::platform::linux::sysfs::source::DataBuilder::charge_full(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // rax

    v0 = &g_11f9fc0;
    v1 = &g_11f9fe0;
    v2 = a0;
    v3 = a1;
    v5 = v0.find_map(&v2);
    if (!((char)v5 & 1))
        return <uom::si::electric_charge::microampere_hour as starship_battery::units::IntoQuantity<T>>::from_primitive();
    return v5;
}
