long long uu_split::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x478]
    unsigned long long v1;  // [bp-0x470]
    int v2;  // [bp-0x468]
    unsigned long v3;  // [bp-0x460]
    unsigned long long v4;  // [bp-0x458]
    int v5;  // [bp-0x448]
    unsigned long long v6;  // [bp-0x438]
    unsigned long long v7;  // [bp-0x428]
    int v8;  // [bp-0x418], Other Possible Types: char
    unsigned long long v9;  // [bp-0x408]
    unsigned long long v10;  // [bp-0x3f8]
    unsigned long long v11;  // [bp-0x3f0]
    char v12;  // [bp-0x3e8]
    char v13;  // [bp-0x3d8]
    unsigned long long v14;  // [bp-0x3c8]
    int v15;  // [bp-0x3c0], Other Possible Types: char
    unsigned long long v16;  // [bp-0x3b0]
    int v17;  // [bp-0x3a8], Other Possible Types: char
    unsigned long long v18;  // [bp-0x398]
    char v19;  // [bp-0x390], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x388]
    char v21;  // [bp-0x380]
    char v22;  // [bp-0x378]
    char v23;  // [bp-0x370]
    unsigned long long v24;  // [bp-0x368]
    char v25;  // [bp-0x360]
    char v26;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v27;  // [bp-0x2e8]
    unsigned long long v28;  // [bp-0x2e0]
    char *v29;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v30;  // [bp-0x2d0], Other Possible Types: unsigned int, unsigned long long
    void* v31;  // [bp-0x2c8]
    char v32;  // [bp-0x2c0]
    unsigned long long v34;  // rbx
    unsigned long v35;  // rdx

    uu_split::handle_obsolete(&v26, a0, a1);
    v9 = v29;
    memcpy(&v8, &v26, 16);
    v4 = *((long long *)&v32);
    *((int128_t *)&v2) = *((int128_t *)&v30);
    uu_split::uu_app(&v26);
    v6 = v9;
    v5 = v8;
    v19.try_get_matches_from(&v26, &v5);
    if ((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63))
    {
        v34 = v11.from();
    }
    else
    {
        v14 = *((long long *)&v25);
        memcpy(&v13, &v23, 16);
        memcpy(&v12, &v21, 16);
        v10 = v19;
        v11 = v20;
        v19.from(&v10, ((long long)v2 == 0x8000000000000000 ? 0 : v3));
        if ((int)v19 == 2)
        {
            v35 = (v20 - 4 < 5 ? v20 - 3 : 0);
            if (v35)
            {
                if (v35 != 1 || *((int *)&v21) != 1)
                    goto LABEL_4a9f0d;
LABEL_4a9df7:
                v7 = v24;
                memcpy(&v6, &v22, 16);
                memcpy(&v5, &v20, 16);
                v0 = &v5;
                v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                v26 = &g_4331a0;
                v28 = 1;
                v31 = 0;
                v29 = &v0;
                v30 = 1;
                v15.map_or_else(&v26);
                v30 = 1;
                v27 = v15;
                v29 = v16;
                v34 = v26.new();
                core::ptr::drop_in_place<uu_split::SettingsError>(&v5);
            }
            else
            {
                if ((unsigned int)v20 == 3)
                    goto LABEL_4a9df7;
LABEL_4a9f0d:
                v7 = v24;
                memcpy(&v6, &v22, 16);
                memcpy(&v5, &v20, 16);
                v0 = &v5;
                v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                v26 = &g_4331a0;
                v28 = 1;
                v31 = 0;
                v29 = &v0;
                v30 = 1;
                v17.map_or_else(&v26);
                v30 = 1;
                v27 = v17;
                v29 = v18;
                v34 = v26.new();
                core::ptr::drop_in_place<uu_split::SettingsError>(&v5);
            }
        }
        else
        {
            memcpy(&v26, &v19, 168);
            v34 = uu_split::split(&v26);
            core::ptr::drop_in_place<uu_split::Settings>(&v26);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v10);
    }
    ::0x4a8cf0::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v2);
    return v34;
}
