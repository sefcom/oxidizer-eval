long long starship_battery::platform::linux::sysfs::source::DataBuilder::temperature(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long
    char v1;  // [bp-0x48]
    int v2;  // [bp-0x40]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned int v6;  // ymm0
    int v7;  // xmm0

    v3.join(a1, a2, "tempUnitbindKey ", 4);
    v5 = starship_battery::platform::linux::sysfs::fs::get(&v0, &v3);
    if (v0 != 9223372036854775810)
    {
        v7 = *((int128_t *)&v0);
        a0[16] = v2;
        *(a0) = v7;
        return v5;
    }
    if (*((int *)&v1) == 1)
    {
        v5 = <uom::si::thermodynamic_temperature::degree_celsius as starship_battery::units::IntoQuantity<T>>::from_primitive();
        *((unsigned int *)&a0[8]) = 1;
        *((unsigned int *)&a0[12]) = DivV(v6, 0x41200000);
    }
    else
    {
        *((unsigned int *)&a0[8]) = 0;
    }
    *((unsigned long long *)a0) = 9223372036854775810;
    return v5;
}
