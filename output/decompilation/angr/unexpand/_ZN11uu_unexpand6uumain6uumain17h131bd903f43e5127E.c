long long uu_unexpand::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x378], Other Possible Types: char
    unsigned long long v1;  // [bp-0x368]
    char v2;  // [bp-0x360]
    unsigned long long v3;  // [bp-0x358]
    unsigned long long v4;  // [bp-0x350]
    char v5;  // [bp-0x348], Other Possible Types: unsigned long long
    int v6;  // [bp-0x340], Other Possible Types: char
    char v7;  // [bp-0x338]
    unsigned long long v8;  // [bp-0x330]
    int v9;  // [bp-0x328]
    unsigned long long v10;  // [bp-0x318]
    unsigned long long v11;  // [bp-0x310]
    unsigned long long v12;  // [bp-0x308]
    char v13;  // [bp-0x300]
    int v14;  // [bp-0x2f0]
    unsigned long long v15;  // [bp-0x2e0]
    int v16;  // [bp-0x2d8], Other Possible Types: char
    char v17;  // [bp-0x2d0]
    unsigned long long v18;  // [bp-0x2c8]
    unsigned long long v19;  // [bp-0x2c0]
    int v20;  // [bp-0x2b8]
    char v21;  // [bp-0x2a8]
    unsigned long long v23;  // rbx
    unsigned long long v24;  // rax

    v2.collect_ignore(a0, a1);
    uu_unexpand::uu_app(&v16);
    uu_unexpand::expand_shortcuts(&v0, v3, v4);
    v5.try_get_matches_from(&v16, &v0);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
    {
        v23 = *((long long *)&v6).from();
    }
    else
    {
        v15 = v10;
        v14 = v9;
        memcpy(&v13, &v7, 16);
        v11 = v5;
        v12 = *((long long *)&v6);
        v16.new(&v11);
        v24 = *((long long *)&v16);
        memcpy(&v0, &v17, 16);
        v1 = v19;
        if (v24 == 0x8000000000000000)
        {
            v18 = v1;
            v16 = v0;
            v23 = v16.new();
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
        }
        else
        {
            v10 = *((long long *)&v21);
            v9 = v20;
            v6 = v0;
            v8 = v1;
            v5 = v24;
            v23 = uu_unexpand::unexpand(&v5);
            core::ptr::drop_in_place<uu_unexpand::Options>(&v5);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
    return v23;
}
