long long starship_battery::platform::linux::sysfs::source::DataBuilder::cycle_count(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int v3;  // [bp-0x44]
    int v4;  // [bp-0x40]
    char v5;  // [bp-0x30]
    unsigned long long v7;  // rax
    unsigned long v8;  // rax
    unsigned int v10;  // edx
    int v11;  // xmm0

    v5.join(a1, a2, "cycle_countenergyenergy_fullenergy_full_designenergy_ratevoltagetime_to_fulltime_to_emptyUnknownEmptyDischargingli-ionpblipli-polyramLithiumIonLithiumPolymerNickelMetalHydrideNickelCadmiumNickelZincLithiumIronPhosphateRechargeableAlkalineManganesescopeLinu", 11);
    v7 = starship_battery::platform::linux::sysfs::fs::get(&v0, &v5);
    if (v0 != 9223372036854775810)
    {
        v11 = *((int128_t *)&v0);
        a0[16] = v4;
        *(a0) = v11;
        return v7;
    }
    v8 = v1;
    if (!v2)
        v3 = v2;
    else
        v3 = v8;
    v10 = v3;
    if (!(unsigned int)v8)
        v10 = v8;
    *((unsigned int *)&a0[8]) = v10;
    *((unsigned int *)&a0[12]) = v2;
    *((unsigned long long *)a0) = 9223372036854775810;
    return v8;
}
