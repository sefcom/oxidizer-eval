long long uu_df::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x468], Other Possible Types: int, unsigned long long
    unsigned long long v1;  // [bp-0x460]
    int v2;  // [bp-0x458], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x458]
    unsigned long long v4;  // [bp-0x448]
    unsigned long long v5;  // [bp-0x440]
    unsigned long long v6;  // [bp-0x438]
    char v7;  // [bp-0x428], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [bp-0x420]
    char *v9;  // [bp-0x418], Other Possible Types: char, unsigned long long
    unsigned long long v10;  // [bp-0x410]
    void* v11;  // [bp-0x408], Other Possible Types: char
    int v12;  // [bp-0x3f8]
    char v13;  // [bp-0x3e8]
    unsigned long long v14;  // [bp-0x3e0]
    unsigned int v15;  // [bp-0x3d8]
    char v16;  // [bp-0x3d0], Other Possible Types: unsigned long long
    int v17;  // [bp-0x3c8], Other Possible Types: char
    char v18;  // [bp-0x3c0]
    int v19;  // [bp-0x3b8]
    char v20;  // [bp-0x3b0]
    int v21;  // [bp-0x3a8]
    unsigned long long v22;  // [bp-0x3a0]
    int v23;  // [bp-0x398]
    int v24;  // [bp-0x388]
    unsigned long long v25;  // [bp-0x378]
    unsigned long long v26;  // [bp-0x370]
    char v27;  // [bp-0x368]
    char v28;  // [bp-0x358]
    unsigned long long v29;  // [bp-0x348]
    int v30;  // [bp-0x340], Other Possible Types: char
    unsigned long long v31;  // [bp-0x330]
    char v32;  // [bp-0x328]
    char v33;  // [bp-0x318]
    char v34;  // [bp-0x308]
    int v35;  // [bp-0x2f8]
    int v36;  // [bp-0x2e8], Other Possible Types: char
    char v37;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v38;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v39;  // [bp-0x2d0], Other Possible Types: unsigned int
    int v40;  // [bp-0x2c0]
    int v41;  // [bp-0x2b0]
    char v42;  // [bp-0x2a0]
    unsigned long long v44;  // rax
    int v45;  // xmm0
    int v46;  // xmm1
    void* v47;  // rbx
    int v48;  // xmm0
    int v49;  // xmm1
    int v50;  // xmm4

    uu_df::uu_app(&v36);
    v16.try_get_matches_from(&v36, a0, a1);
    if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
        return *((long long *)&v17).from();
    v29 = v22;
    memcpy(&v28, &v20, 16);
    memcpy(&v27, &v18, 16);
    v25 = v16;
    v26 = *((long long *)&v17);
    v36.from(&v25);
    v44 = *((long long *)&v36);
    if (v44 == 0x8000000000000000)
    {
        v7.call_once(&v37);
        v45 = *((int128_t *)&v7);
        v46 = *((int128_t *)&v9);
        v0 = v45;
        v2 = v46;
        v38 = v2;
        v36 = v45;
        v47 = v36.new();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
        return v47;
    }
    v48 = *((int128_t *)&v37);
    v49 = *((int128_t *)&v39);
    v50 = *((int128_t *)&v42);
    v21 = v40;
    v23 = v41;
    v24 = v50;
    v0 = v48;
    v17 = v48;
    v19 = v49;
    v16 = v44;
    v36.try_get_many(&v25, _ZN5uu_df9OPT_PATHS17hee251a5292a96bb9E, g_59cb08);
    v7.unwrap(_ZN5uu_df9OPT_PATHS17hee251a5292a96bb9E, g_59cb08, &v36);
    if (v7)
    {
        v35 = v12;
        memcpy(&v34, &v11, 16);
        memcpy(&v33, &v9, 16);
        memcpy(&v32, &v7, 16);
        v13.from_iter(&v32, &g_59c4e8);
        uu_df::get_named_filesystems(&v36, v14, v15);
        if (*((long long *)&v36) == 0x8000000000000000)
        {
            uu_df::uumain::uumain::{{closure}}(v1, v2);
        }
        else
        {
            v0 = *((long long *)&v36);
            v1 = v37;
            v2 = v38;
            if (v2)
            {
                v6 = v3;
                v4 = v0;
                v5 = v1;
                ::0x4a6c00::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v13);
LABEL_4a82dd:
                v9 = v6;
                v7 = v4;
                v8 = v5;
                v36.new(&v16, &v7);
                v0 = &v36;
                v1 = <uu_df::table::Table as core::fmt::Display>::fmt;
                v7 = &g_59c490;
                v8 = 2;
                v11 = 0;
                v9 = &v0;
                v10 = 1;
                std::io::stdio::_print(&v7);
                core::ptr::drop_in_place<uu_df::table::Table>(&v36);
                core::ptr::drop_in_place<uu_df::Options>(&v16);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
                return 0;
            }
            core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v0);
        }
        ::0x4a6c00::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v13);
        core::ptr::drop_in_place<uu_df::Options>(&v16);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
        return v47;
    }
    uu_df::get_all_filesystems(&v36, &v16);
    if (*((long long *)&v36) == 0x8000000000000000)
    {
        uu_df::uumain::uumain::{{closure}}(v1, v2);
        core::ptr::drop_in_place<uu_df::Options>(&v16);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
        return v47;
    }
    v0 = *((long long *)&v36);
    v1 = v37;
    v2 = v38;
    if (!v2)
    {
        uucore::mods::locale::get_message(&v30, "df-error-no-file-systems-processed/mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/df/src/df.rs", 34);
        v39 = 1;
        v36 = v30;
        v38 = v31;
        v47 = v36.new();
        core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v0);
        core::ptr::drop_in_place<uu_df::Options>(&v16);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
        return v47;
    }
    v6 = v3;
    v4 = v0;
    v5 = v1;
    goto LABEL_4a82dd;
    goto LABEL_4a82dd;
}
