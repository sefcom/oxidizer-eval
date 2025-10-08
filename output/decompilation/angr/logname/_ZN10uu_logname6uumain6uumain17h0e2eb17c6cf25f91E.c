long long uu_logname::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x368]
    unsigned long long v1;  // [bp-0x360]
    char v2;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x350]
    char v4;  // [bp-0x348], Other Possible Types: unsigned long long
    char v5;  // [bp-0x338]
    unsigned long long v6;  // [bp-0x328]
    unsigned long long v7;  // [bp-0x320]
    unsigned long long v8;  // [bp-0x318]
    char v9;  // [bp-0x310]
    char v10;  // [bp-0x300]
    unsigned long long v11;  // [bp-0x2f0]
    char v12;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x2e0]
    char *v14;  // [bp-0x2d8], Other Possible Types: unsigned long long
    int v15;  // [bp-0x2d0], Other Possible Types: unsigned long long
    void* v16;  // [bp-0x2c8]
    unsigned long long v18;  // rdx

    uu_logname::uu_app(&v12);
    v2.try_get_matches_from(&v12, a0, a1);
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
        return v8.from();
    v11 = v6;
    memcpy(&v10, &v5, 16);
    memcpy(&v9, &v4, 16);
    v7 = v2;
    v8 = v3;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v7);
    uu_logname::get_userlogin(&v7);
    if (v7 == 0x8000000000000000)
    {
        v2 = uucore::util_name();
        v3 = v18;
        v0 = &v2;
        v1 = <&T as core::fmt::Display>::fmt;
        v12 = &g_4d4e38;
        v13 = 2;
        v16 = 0;
        v14 = &v0;
        v15 = 1;
        std::io::stdio::_eprint(&v12);
        v12 = &g_4d4eb0;
        v13 = 1;
        v14 = 8;
        *((uint128_t *)&v15) = 0;
        std::io::stdio::_eprint(&v12);
    }
    else
    {
        v4 = *((long long *)&v9);
        memcpy(&v2, &v7, 16);
        v0 = &v2;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = &g_4d4e58;
        v13 = 2;
        v16 = 0;
        v14 = &v0;
        v15 = 1;
        std::io::stdio::_print(&v12);
        core::ptr::drop_in_place<alloc::string::String>(v2, v3);
    }
    return 0;
}
