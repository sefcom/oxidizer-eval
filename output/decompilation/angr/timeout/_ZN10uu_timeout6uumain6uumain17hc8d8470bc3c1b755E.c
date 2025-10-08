long long uu_timeout::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x358]
    char v2;  // [bp-0x350], Other Possible Types: unsigned long long
    char v3;  // [bp-0x34c]
    int v4;  // [bp-0x348]
    unsigned int v5;  // [bp-0x340]
    char v6;  // [bp-0x33c]
    int v7;  // [bp-0x338]
    unsigned int v8;  // [bp-0x330]
    unsigned int v9;  // [bp-0x32c]
    int v10;  // [bp-0x328]
    char v11;  // [bp-0x320]
    char v12;  // [bp-0x31f]
    unsigned long long v13;  // [bp-0x318]
    unsigned long long v14;  // [bp-0x310]
    unsigned int v15;  // [bp-0x308]
    char v16;  // [bp-0x304]
    char v17;  // [bp-0x2f4]
    unsigned int v18;  // [bp-0x2e4]
    char v19;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x2d8]
    unsigned long long v21;  // [bp-0x2d0]
    int v22;  // [bp-0x2c8]
    int v23;  // [bp-0x2b8]
    char v24;  // [bp-0x2a8]
    unsigned long long v26;  // rax
    char *v27;  // rdi
    unsigned long long v28;  // r14

    uu_timeout::uu_app(&v19);
    v0.try_get_matches_from(&v19, a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v14.new();
    memcpy(&v16, &v3, 16);
    memcpy(&v17, &v6, 16);
    v18 = v9;
    v13 = v0;
    v14 = v1;
    v15 = *((int *)&v2);
    v19.from(&v13);
    v26 = v20;
    if (v19 == 0x8000000000000000)
    {
        v27 = &v13;
        v28 = v26;
    }
    else
    {
        *((int128_t *)&v10) = *((int128_t *)&v24);
        v7 = v23;
        v4 = v22;
        v0 = v19;
        v1 = v26;
        v2 = v21;
        v28 = uu_timeout::timeout(v26, v21, (long long)v4, v5, (long long)v10, (long long)v7, v8, v11, v12, (char)(&v10)[10]);
        core::ptr::drop_in_place<uu_timeout::Config>(&v0);
        v27 = &v13;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v27);
    return v28;
}
