long long uu_whoami::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x368]
    unsigned long long v1;  // [bp-0x360]
    unsigned long long v2;  // [bp-0x358]
    unsigned long long v3;  // [bp-0x350]
    unsigned long long v4;  // [bp-0x348]
    int v5;  // [bp-0x340]
    char v6;  // [bp-0x330]
    unsigned long long v7;  // [bp-0x320]
    char v8;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x310]
    int v10;  // [bp-0x308]
    char v11;  // [bp-0x2f8]
    unsigned long long v12;  // [bp-0x2e8]
    char v13;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x2d8]
    char v15;  // [bp-0x2d0]

    uu_whoami::uu_app(&v13);
    v8.try_get_matches_from(&v13, a0, a1);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        return v4.from();
    v7 = v12;
    memcpy(&v6, &v11, 16);
    v5 = v10;
    v3 = v8;
    v4 = v9;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
    uu_whoami::whoami(&v13);
    if (v13 == 0x8000000000000000)
        return v14;
    v0 = v13;
    v1 = v14;
    v2 = *((long long *)&v15);
    return uucore::mods::display::println_verbatim(&v0).map_err_context();
}
