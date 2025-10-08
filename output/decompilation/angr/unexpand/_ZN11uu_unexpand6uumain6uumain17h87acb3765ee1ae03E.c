long long uu_unexpand::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x398]
    unsigned long long v1;  // [bp-0x390]
    unsigned long long v2;  // [bp-0x388]
    char v3;  // [bp-0x380], Other Possible Types: unsigned long long
    int v4;  // [bp-0x378], Other Possible Types: char
    char v5;  // [bp-0x370]
    unsigned long long v6;  // [bp-0x368]
    int v7;  // [bp-0x360]
    unsigned long long v8;  // [bp-0x350]
    int v9;  // [bp-0x348]
    unsigned long long v10;  // [bp-0x338]
    unsigned long long v11;  // [bp-0x328]
    unsigned long long v12;  // [bp-0x320]
    char v13;  // [bp-0x318]
    int v14;  // [bp-0x308]
    unsigned long long v15;  // [bp-0x2f8]
    char v16;  // [bp-0x2f0]
    char v17;  // [bp-0x2d8], Other Possible Types: unsigned long long
    int v18;  // [bp-0x2d0]
    unsigned long long v19;  // [bp-0x2c0]
    int v20;  // [bp-0x2b8]
    char v21;  // [bp-0x2a8]
    unsigned long long v23;  // rbx

    v0.collect_ignore(a0, a1);
    uu_unexpand::uu_app(&v17);
    uu_unexpand::expand_shortcuts(&v16, v1, v2);
    v3.try_get_matches_from(&v17, &v16);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        v23 = *((long long *)&v4).from();
    }
    else
    {
        v15 = v8;
        v14 = v7;
        memcpy(&v13, &v5, 16);
        v11 = v3;
        v12 = *((long long *)&v4);
        v17.new(&v11);
        v9 = v18;
        v10 = v19;
        if (v17 == 0x8000000000000000)
        {
            v23 = v9.new();
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
        }
        else
        {
            v8 = *((long long *)&v21);
            v7 = v20;
            v4 = v9;
            v6 = v10;
            v3 = v17;
            v23 = uu_unexpand::unexpand(&v3);
            core::ptr::drop_in_place<uu_unexpand::Options>(&v3);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    return v23;
}
