long long uu_df::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x470], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x468]
    unsigned long long v2;  // [bp-0x460]
    int v3;  // [bp-0x458], Other Possible Types: unsigned long long
    unsigned long long *v4;  // [bp-0x450], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x448], Other Possible Types: char, unsigned int, unsigned long long
    unsigned long long v6;  // [bp-0x440]
    void* v7;  // [bp-0x438]
    unsigned long long v8;  // [bp-0x428]
    unsigned long long v9;  // [bp-0x420]
    unsigned long long v10;  // [bp-0x418]
    char v11;  // [bp-0x408], Other Possible Types: unsigned long long
    int v12;  // [bp-0x400], Other Possible Types: char
    char v13;  // [bp-0x3f8]
    int v14;  // [bp-0x3f0]
    char v15;  // [bp-0x3e8]
    int v16;  // [bp-0x3e0]
    unsigned long long v17;  // [bp-0x3d8]
    int v18;  // [bp-0x3d0]
    char v19;  // [bp-0x3c0]
    unsigned long long v20;  // [bp-0x3b0]
    unsigned long long v21;  // [bp-0x3a8]
    char v22;  // [bp-0x3a0]
    char v23;  // [bp-0x390]
    unsigned long long v24;  // [bp-0x380]
    char v25;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x370]
    unsigned long long v27;  // [bp-0x368]
    char v28;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x358]
    unsigned long long v30;  // [bp-0x350]
    char v31;  // [bp-0x348]
    int v32;  // [bp-0x338], Other Possible Types: char
    char v33;  // [bp-0x328]
    int v34;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    char v35;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x2d8]
    char v37;  // [bp-0x2d0], Other Possible Types: unsigned int
    int v38;  // [bp-0x2c0]
    int v39;  // [bp-0x2b0]
    char v40;  // [bp-0x2a0]
    void* v42;  // r14

    uu_df::uu_app(&v34);
    v11.try_get_matches_from(&v34, a0, a1);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
        return *((long long *)&v12).from();
    v24 = v17;
    memcpy(&v23, &v15, 16);
    memcpy(&v22, &v13, 16);
    v20 = v11;
    v21 = *((long long *)&v12);
    v34.from(&v20);
    *((int128_t *)&v3) = *((int128_t *)&v35);
    memcpy(&v5, &v37, 16);
    if (v34 == 0x8000000000000000)
    {
        memcpy(&v31, &v3, 16);
        memcpy(&v32, &v5, 16);
        v42 = v31.new();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
        return v42;
    }
    memcpy(&v19, &v40, 16);
    v18 = v39;
    v16 = v38;
    memcpy(&v31, &v3, 16);
    memcpy(&v32, &v5, 16);
    *((int128_t *)&v12) = (int128_t)v3;
    v14 = v32;
    v11 = v34;
    v34.try_get_many(&v20, _ZN5uu_df9OPT_PATHS17hc6f4fee98f1fa4a8E, g_503030);
    v33.unwrap(_ZN5uu_df9OPT_PATHS17hc6f4fee98f1fa4a8E, g_503030, &v34);
    if (*((long long *)&v33))
    {
        (char)v3.collect(&v33);
        uu_df::get_named_filesystems(&v28, v4, v5, &v11);
        if (v28 == 0x8000000000000000)
        {
            v42 = uu_df::uumain::uumain::{{closure}}(v35, v36);
        }
        else
        {
            v34 = v28;
            v35 = v29;
            v36 = v30;
            if (v36)
            {
                v10 = v36;
                v8 = v34;
                v9 = v35;
                core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v3, v4);
                goto LABEL_460ea0;
            }
            else
            {
                core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v34);
                v42 = 0;
            }
        }
        core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v3, v4);
    }
    else
    {
        uu_df::get_all_filesystems(&v25, &v11);
        if (v25 == 0x8000000000000000)
        {
            v42 = uu_df::uumain::uumain::{{closure}}(v1, v2);
        }
        else
        {
            v0 = v25;
            v1 = v26;
            v2 = v27;
            if (v2)
            {
                v10 = v2;
                v8 = v0;
                v9 = v1;
LABEL_460ea0:
                v34.new(&v11, &v8);
                v0 = &v34;
                v1 = <uu_df::table::Table as core::fmt::Display>::fmt;
                v3 = &g_502118;
                v4 = 2;
                v7 = 0;
                v5 = &v0;
                v6 = 1;
                std::io::stdio::_print(&v3);
                core::ptr::drop_in_place<uu_df::table::Table>(&v34);
                core::ptr::drop_in_place<uu_df::Options>(&v11);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
                return 0;
            }
            (char)v3.to_vec("no file systems processed: No such file or directory: \ncannot access ", 25);
            v36 = v5;
            *((int128_t *)&v34) = (int128_t)v3;
            v37 = 1;
            v42 = v34.new();
            core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v0);
        }
    }
    core::ptr::drop_in_place<uu_df::Options>(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
    return v42;
}
