long long uu_wc::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x358], Other Possible Types: unsigned long long
    char v1;  // [bp-0x350]
    unsigned long long v2;  // [bp-0x338]
    unsigned long long v3;  // [bp-0x330]
    unsigned long long v4;  // [bp-0x328]
    unsigned long long v5;  // [bp-0x320]
    char v6;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x310]
    char v8;  // [bp-0x308], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x300]
    char v10;  // [bp-0x2f8]
    unsigned long long v11;  // [bp-0x2e8]
    char v12;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x2d8]
    char v14;  // [bp-0x2d0]
    char v15;  // [bp-0x2c0]
    unsigned long long v16;  // [bp-0x2b0]
    unsigned long long v18;  // rdi

    uu_wc::uu_app(&v12);
    v6.try_get_matches_from(&v12, a0, a1);
    v18 = v7;
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
        return v13.from();
    v16 = v11;
    memcpy(&v15, &v10, 16);
    memcpy(&v14, &v8, 16);
    v12 = v6;
    v13 = v7;
    v0.new(&v12);
    v6.new(&v12);
    if (v6 != 3)
    {
        v2 = v6;
        v3 = v7;
        v4 = v8;
        v5 = v9;
        v3 = uu_wc::wc(&v2, &v0);
        core::ptr::drop_in_place<uu_wc::Inputs>(&v2);
    }
    core::ptr::drop_in_place<uu_wc::Settings>(v0, *((long long *)&v1));
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v12);
    return v3;
}
