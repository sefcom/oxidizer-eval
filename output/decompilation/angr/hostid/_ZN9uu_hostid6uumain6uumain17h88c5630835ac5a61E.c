long long uu_hostid::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x350]
    unsigned long long v1;  // [bp-0x348]
    int v2;  // [bp-0x340]
    char v3;  // [bp-0x330]
    unsigned long long v4;  // [bp-0x320]
    char v5;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x310]
    int v7;  // [bp-0x308]
    char v8;  // [bp-0x2f8]
    unsigned long long v9;  // [bp-0x2e8]
    char v10;  // [bp-0x2e0]

    uu_hostid::uu_app(&v10);
    v5.try_get_matches_from(&v10, a0, a1);
    if (!((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63)))
    {
        v4 = v9;
        memcpy(&v3, &v8, 16);
        v2 = v7;
        v0 = v5;
        v1 = v6;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
        uu_hostid::hostid();
        return 0;
    }
    return v1.from();
}
