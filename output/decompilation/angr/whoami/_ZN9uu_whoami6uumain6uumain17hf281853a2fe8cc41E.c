long long uu_whoami::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x330]
    unsigned long long v1;  // [bp-0x328]
    unsigned long long v2;  // [bp-0x320]
    char v3;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x310]
    int v5;  // [bp-0x308]
    char v6;  // [bp-0x2f8]
    unsigned long long v7;  // [bp-0x2e8]
    char v8;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x2d8]
    int v10;  // [bp-0x2d0]
    char v11;  // [bp-0x2c0]
    unsigned long long v12;  // [bp-0x2b0]
    unsigned long long v14;  // rdi

    uu_whoami::uu_app(&v8);
    v3.try_get_matches_from(&v8, a0, a1);
    v14 = v4;
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v9.from();
    v12 = v7;
    memcpy(&v11, &v6, 16);
    v10 = v5;
    v8 = v3;
    v9 = v4;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
    uu_whoami::whoami(&v8);
    if (v8 == 0x8000000000000000)
        return v9;
    v0 = v8;
    v1 = v9;
    v2 = (long long)v10;
    return uucore::mods::display::println_verbatim(&v0).map_err_context();
}
