long long uu_expand::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x3a8], Other Possible Types: char
    int v1;  // [bp-0x398]
    int v2;  // [bp-0x388], Other Possible Types: char
    char v3;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x370]
    char v5;  // [bp-0x368]
    int v6;  // [bp-0x360]
    char v7;  // [bp-0x358]
    int v8;  // [bp-0x350]
    unsigned long long v9;  // [bp-0x348]
    int v10;  // [bp-0x340]
    unsigned long long v11;  // [bp-0x330]
    unsigned long long v12;  // [bp-0x328]
    unsigned long long v13;  // [bp-0x320]
    char v14;  // [bp-0x318]
    char v15;  // [bp-0x308]
    unsigned long long v16;  // [bp-0x2f8]
    char v17;  // [bp-0x2f0]
    int v18;  // [bp-0x2d8], Other Possible Types: char
    char v19;  // [bp-0x2d0]
    int v20;  // [bp-0x2c8]
    int v21;  // [bp-0x2c0]
    char v22;  // [bp-0x2b0]
    int v23;  // [bp-0x2a0]
    char v24;  // [bp-0x290]
    unsigned long long v26;  // rax
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rbx

    uu_expand::uu_app(&v18);
    v0.collect(a0, a1);
    uu_expand::expand_shortcuts(&v17, &v0);
    v3.try_get_matches_from(&v18, &v17);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v13.from();
    v16 = v9;
    memcpy(&v15, &v7, 16);
    memcpy(&v14, &v5, 16);
    v12 = v3;
    v13 = v4;
    v18.new(&v12);
    v26 = *((long long *)&v18);
    memcpy(&v0, &v19, 16);
    v1 = v21;
    memcpy(&v2, &v22, 16);
    if (v26 != 0x8000000000000000)
    {
        v11 = *((long long *)&v24);
        v10 = v23;
        memcpy(&v4, &v0, 16);
        v6 = v1;
        v8 = v2;
        v3 = v26;
        v28 = uu_expand::expand(&v3);
        core::ptr::drop_in_place<uu_expand::Options>(&v3);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v12);
        return v28;
    }
    memcpy(&(char)v21, &v2, 16);
    v20 = v1;
    v18 = v0;
    v27 = v18.new();
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v12);
    return v27;
}
