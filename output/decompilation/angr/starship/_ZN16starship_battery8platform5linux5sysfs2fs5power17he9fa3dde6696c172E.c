long long starship_battery::platform::linux::sysfs::fs::power(void* a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    char v3;  // [bp-0x28]
    unsigned long long v6;  // rdx
    int v7;  // xmm0

    starship_battery::platform::linux::sysfs::fs::get(&v0, a1[1].as_ref(a1[2]), v6);
    if (v0 == 9223372036854775810)
    {
        if (v1 == 1 && ((CmpF(v2, 0x461c4000) & 69 | (char)((CmpF(v2, 0x461c4000) & 69) >> 6)) & 1) != 1)
        {
            <uom::si::power::microwatt as starship_battery::units::IntoQuantity<T>>::from_primitive();
            *((unsigned int *)&a0[8]) = 1;
            *((unsigned int *)&a0[12]) = v2;
        }
        else
        {
            *((unsigned int *)&a0[8]) = 0;
        }
        *((unsigned long long *)a0) = 9223372036854775810;
    }
    else
    {
        v7 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v3);
        *(a0) = v7;
    }
    return core::ptr::drop_in_place<std::path::PathBuf>(a1);
}
