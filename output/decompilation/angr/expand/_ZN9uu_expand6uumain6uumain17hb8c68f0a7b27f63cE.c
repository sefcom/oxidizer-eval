long long uu_expand::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x3a8]
    char v2;  // [bp-0x3a0]
    char v3;  // [bp-0x390]
    unsigned long long v4;  // [bp-0x380]
    char v5;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x370]
    char v7;  // [bp-0x368]
    int v8;  // [bp-0x360]
    char v9;  // [bp-0x358]
    int v10;  // [bp-0x350]
    unsigned long long v11;  // [bp-0x348]
    int v12;  // [bp-0x340]
    unsigned long long v13;  // [bp-0x330]
    char v14;  // [bp-0x328]
    int v15;  // [bp-0x318]
    char v16;  // [bp-0x308]
    char v17;  // [bp-0x2f0]
    char v18;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v19;  // [bp-0x2d0]
    int v20;  // [bp-0x2c0]
    char v21;  // [bp-0x2b0]
    int v22;  // [bp-0x2a0]
    char v23;  // [bp-0x290]
    unsigned long long v25;  // rdi
    unsigned long long v26;  // rbx
    int v27;  // xmm2
    unsigned long long v28;  // rax

    uu_expand::uu_app(&v18);
    v0.collect(a0, a1);
    uu_expand::expand_shortcuts(&v17, &v0);
    v5.try_get_matches_from(&v18, &v17);
    v25 = v6;
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v1.from();
    v4 = v11;
    memcpy(&v3, &v9, 16);
    memcpy(&v2, &v7, 16);
    v0 = v5;
    v1 = v6;
    v18.new(&v0);
    memcpy(&v14, &v19, 16);
    v15 = v20;
    memcpy(&v16, &v21, 16);
    if (v18 != 0x8000000000000000)
    {
        v13 = *((long long *)&v23);
        v12 = v22;
        v27 = *((int128_t *)&v16);
        memcpy(&v6, &v14, 16);
        v8 = v15;
        v10 = v27;
        v5 = v18;
        v28 = uu_expand::expand(&v5);
        core::ptr::drop_in_place<uu_expand::Options>(&v5);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
        return v28;
    }
    v26 = v14.new();
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v26;
}
