long long uu_stty::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x348], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x340]
    int v2;  // [bp-0x338]
    int v3;  // [bp-0x328]
    unsigned long long v4;  // [bp-0x318]
    unsigned long long v5;  // [bp-0x310]
    unsigned long long v6;  // [bp-0x308]
    int v7;  // [bp-0x300]
    int v8;  // [bp-0x2f0]
    char v9;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x2d8]
    int v11;  // [bp-0x2d0]
    int v12;  // [bp-0x2c0]
    unsigned long long v13;  // [bp-0x2b0]
    unsigned long long v15;  // rdi
    unsigned long long v16;  // rax

    uu_stty::uu_app(&v9);
    v0.try_get_matches_from(&v9, a0, a1);
    v15 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v10.from();
    v13 = v4;
    v12 = v3;
    v11 = v2;
    v9 = v0;
    v10 = v1;
    v0.from(&v9);
    if (v0 == 9223372036854775809)
    {
        v16 = v6.from();
    }
    else
    {
        v8 = v3;
        v7 = v2;
        v5 = v0;
        v6 = v1;
        v16 = uu_stty::stty(&v5);
        core::ptr::drop_in_place<uu_stty::Options>(&v5);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
    return v16;
}
