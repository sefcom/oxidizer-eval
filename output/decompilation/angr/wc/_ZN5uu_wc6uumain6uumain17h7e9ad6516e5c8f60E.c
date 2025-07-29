long long uu_wc::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x370], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x368]
    char v2;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x358]
    char v4;  // [bp-0x350]
    unsigned long long v5;  // [bp-0x340]
    unsigned long long v6;  // [bp-0x338]
    unsigned long long v7;  // [bp-0x330]
    char v8;  // [bp-0x328]
    char v9;  // [bp-0x318]
    unsigned long long v10;  // [bp-0x308]
    char v11;  // [bp-0x300]
    char v12;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x2d8]
    unsigned long long v14;  // [bp-0x2d0]
    char v15;  // [bp-0x2c8]

    uu_wc::uu_app(&v12);
    v0.try_get_matches_from(&v12, a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v7.from();
    v10 = v5;
    memcpy(&v9, &v4, 16);
    memcpy(&v8, &v2, 16);
    v6 = v0;
    v7 = v1;
    v11.new(&v6);
    v12.new(&v6);
    if (v12 == 3)
    {
        core::ptr::drop_in_place<uu_wc::Settings>(&v11);
    }
    else
    {
        v0 = v12;
        v1 = v13;
        v2 = v14;
        v3 = *((long long *)&v15);
        v1 = uu_wc::wc(&v0, &v11);
        core::ptr::drop_in_place<uu_wc::Inputs>(&v0);
        core::ptr::drop_in_place<uu_wc::Settings>(&v11);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v6);
    return v1;
}
