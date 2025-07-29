long long uu_head::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x368], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x360]
    unsigned long long v2;  // [bp-0x358]
    unsigned long long v3;  // [bp-0x350]
    int v4;  // [bp-0x348], Other Possible Types: char
    unsigned long long v5;  // [bp-0x340]
    int v6;  // [bp-0x338]
    char v7;  // [bp-0x328]
    unsigned long long v8;  // [bp-0x318]
    unsigned long long v9;  // [bp-0x310]
    unsigned long long v10;  // [bp-0x308]
    int v11;  // [bp-0x300]
    char v12;  // [bp-0x2f0]
    unsigned long long v13;  // [bp-0x2e0]
    char v14;  // [bp-0x2d8]
    char v15;  // [bp-0x2d0]
    char v16;  // [bp-0x2c8]
    unsigned long long v17;  // [bp-0x2c0]
    char v18;  // [bp-0x2b8]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    uu_head::uu_app(&v14);
    uu_head::arg_iterate(&v0, a0, a1);
    if (v0 == 9223372036854775813)
    {
        (char)v4.try_get_matches_from(&v14, v1, v2);
        if (*((long long *)&v4) == 0x8000000000000000)
            return v10.from();
        v13 = v8;
        memcpy(&v12, &v7, 16);
        v11 = v6;
        v9 = *((long long *)&v4);
        v10 = v5;
        v14.get_from(&v9);
        if (*((int *)&v14) != 4)
        {
            memcpy(&v7, &v18, 16);
            memcpy(&v6, &v16, 16);
            *((int128_t *)&v4) = *((int128_t *)&v14);
            v21 = uu_head::uu_head(&(char)v4);
            core::ptr::drop_in_place<uu_head::HeadOptions>(&(char)v4);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
            return v21;
        }
        v3 = v17;
        memcpy(&v1, &v15, 16);
        v0 = 9223372036854775812;
        v20 = v0.new();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
    }
    else
    {
        v20 = v0.new();
        ::0x4a32a0::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v14);
    }
    return v20;
}
