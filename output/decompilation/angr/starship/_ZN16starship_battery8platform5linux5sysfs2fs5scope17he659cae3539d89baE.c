long long starship_battery::platform::linux::sysfs::fs::scope(void* a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v5;  // rdx
    int v6;  // xmm0

    starship_battery::platform::linux::sysfs::fs::get(&v0, a1[1].as_ref(a1[2]), v5);
    if (v0 == 9223372036854775810)
    {
        if (v1 == 4)
            *((char *)&a0[8]) = 1;
        else
            *((char *)&a0[8]) = v1;
        *((unsigned long long *)a0) = 9223372036854775810;
    }
    else
    {
        v6 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v6;
    }
    return core::ptr::drop_in_place<std::path::PathBuf>(a1);
}
