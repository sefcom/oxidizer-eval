long long fuel_core_version::verify_version_from_file(unsigned long long a0)
{
    int v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa0]
    int v2;  // [bp-0x98], Other Possible Types: char *
    unsigned long long v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    int v5;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x70]
    uint128_t v7;  // [bp-0x68]
    void* v8;  // [bp-0x58]
    char *v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    char v13;  // [bp-0x28]
    void* v15;  // r14

    *((uint128_t *)&v2) = 0x2e0000000000000000;
    *((uint128_t *)&v0) = 340282366920938463463374607431768211455;
    v4 = 0;
    if ((char)a0.eq(&(char)v0))
    {
        core::ptr::drop_in_place<semver::Version>(&(char)v0);
        v5 = a0;
        v6 = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
        v0 = &g_52fc08;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_print(&v0);
        v15 = 0;
    }
    else
    {
        core::ptr::drop_in_place<semver::Version>(&(char)v0);
        v7 = 0x2e0000000000000000;
        *((uint128_t *)&v5) = 340282366920938463463374607431768211455;
        v8 = 0;
        v9 = &(char)v5;
        v10 = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
        v11 = a0;
        v12 = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
        v0 = &g_52fbd8;
        v1 = 3;
        v4 = 0;
        v2 = &v9;
        v3 = 2;
        v13.map_or_else(&v0);
        core::ptr::drop_in_place<semver::Version>(&(char)v5);
        v15 = v13.from_adhoc();
    }
    core::ptr::drop_in_place<semver::Version>(a0);
    return v15;
}
