long long uu_install::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3e0]
    int v1;  // [bp-0x3d8], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x3d0]
    char v3;  // [bp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x3c0]
    char v5;  // [bp-0x3b8], Other Possible Types: unsigned long long
    int v6;  // [bp-0x3b0]
    char v7;  // [bp-0x3a8]
    int v8;  // [bp-0x3a0]
    unsigned long long v9;  // [bp-0x398]
    int v10;  // [bp-0x390]
    int v11;  // [bp-0x380]
    int v12;  // [bp-0x370]
    unsigned long long v13;  // [bp-0x360]
    unsigned long long v14;  // [bp-0x358]
    char v15;  // [bp-0x350]
    char v16;  // [bp-0x340]
    unsigned long long v17;  // [bp-0x330]
    char v18;  // [bp-0x328]
    int v19;  // [bp-0x2e8], Other Possible Types: char
    char v20;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x2d8], Other Possible Types: unsigned long long
    int v22;  // [bp-0x2d0]
    int v23;  // [bp-0x2c0]
    int v24;  // [bp-0x2b0]
    int v25;  // [bp-0x2a0]
    char v26;  // [bp-0x290]
    unsigned long long v28;  // rdi
    unsigned long long v29;  // rax
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rax

    uu_install::uu_app(&v19);
    v3.try_get_matches_from(&v19, a0, a1);
    v28 = v4;
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v14.from();
    v17 = v9;
    memcpy(&v16, &v7, 16);
    memcpy(&v15, &v5, 16);
    v13 = v3;
    v14 = v4;
    v19.try_get_many(&v13, _ZN10uu_install9ARG_FILES17h2be6c31939077ab6E, g_5021e0);
    v18.unwrap(_ZN10uu_install9ARG_FILES17h2be6c31939077ab6E, g_5021e0, &v19);
    if (*((long long *)&v18))
    {
        v19.collect(&v18);
        v29 = *((long long *)&v19);
        *((int128_t *)&v1) = *((int128_t *)&v20);
        v0 = v29;
    }
    else
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    }
    v30 = uu_install::check_unimplemented(&v13);
    if (!v30)
    {
        uu_install::behavior(&v19, &v13);
        v31 = *((long long *)&v19);
        v30 = v20;
        if (v31 != 0x8000000000000000)
        {
            *((int128_t *)&v12) = *((int128_t *)&v26);
            v11 = v25;
            v10 = v24;
            v8 = v23;
            v6 = v22;
            v3 = v31;
            v4 = v30;
            v5 = v21;
            if ((char)(&v12)[8] == 1)
            {
                v21 = v2;
                *((int128_t *)&v19) = *((int128_t *)&v0);
                v30 = uu_install::standard(&v19);
                core::ptr::drop_in_place<uu_install::Behavior>(&v3);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
                return v30;
            }
            v30 = uu_install::directory(v1, v2, &v3);
            core::ptr::drop_in_place<uu_install::Behavior>(&v3);
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
    return v30;
}
