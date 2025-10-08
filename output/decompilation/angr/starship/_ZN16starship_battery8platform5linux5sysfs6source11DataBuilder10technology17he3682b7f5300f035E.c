long long starship_battery::platform::linux::sysfs::source::DataBuilder::technology(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long
    char v1;  // [bp-0x48]
    int v2;  // [bp-0x40]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned long v6;  // rax
    int v7;  // xmm0

    v3.join(a1, a2, "technologystatetemperaturepercentagecycle_countenergyenergy_fullenergy_full_designenergy_ratevoltagetime_to_fulltime_to_emptyUnknownEmptyDischargingli-ionpblipli-polyramLithiumIonLithiumPolymerNickelMetalHydrideNickelCadmiumNickelZincLithiumIronPhosphateRe", 10);
    v5 = starship_battery::platform::linux::sysfs::fs::get(&v0, &v3);
    if (v0 != 9223372036854775810)
    {
        v7 = *((int128_t *)&v0);
        a0[16] = v2;
        *(a0) = v7;
        return v5;
    }
    v6 = v1;
    if ((char)v6 == 9)
        *((char *)&a0[8]) = 0;
    else
        *((char *)&a0[8]) = v6;
    *((unsigned long long *)a0) = 9223372036854775810;
    return v6;
}
