long long uu_stat::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x620]
    unsigned long long v1;  // [bp-0x618]
    int v2;  // [bp-0x610]
    int v3;  // [bp-0x600]
    unsigned long long v4;  // [bp-0x5f0]
    char v5;  // [bp-0x5e8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x5e0]
    int v7;  // [bp-0x5d8]
    int v8;  // [bp-0x5c8]
    unsigned long long v9;  // [bp-0x5b8]
    char v10;  // [bp-0x5b0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x5a8]
    unsigned long long v12;  // [bp-0x5a0]
    int v13;  // [bp-0x598]
    int v14;  // [bp-0x588]
    int v15;  // [bp-0x578]
    int v16;  // [bp-0x568]
    char v17;  // [bp-0x558]
    char v18;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x2e0]
    unsigned long long v20;  // [bp-0x2d8]
    int v21;  // [bp-0x2d0]
    int v22;  // [bp-0x2c0]
    int v23;  // [bp-0x2b0]
    int v24;  // [bp-0x2a0]
    char v25;  // [bp-0x290]
    unsigned long long v27;  // rdi
    unsigned long long v28;  // rbx
    unsigned int v29;  // eax

    uu_stat::uu_app(&v18);
    v10.after_help(&v18);
    v5.try_get_matches_from(&v10, a0, a1);
    v27 = v6;
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v1.from();
    v4 = v9;
    v3 = v8;
    v2 = v7;
    v0 = v5;
    v1 = v6;
    v18.new(&v0);
    v28 = v19;
    if (v18 != 0x8000000000000000)
    {
        memcpy(&v17, &v25, 16);
        v16 = v24;
        v15 = v23;
        v14 = v22;
        v13 = v21;
        v10 = v18;
        v11 = v28;
        v12 = v20;
        v29 = v10.exec();
        v28 = (!v29 ? 0 : v29.from());
        core::ptr::drop_in_place<uu_stat::Stater>(&v10);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v28;
}
