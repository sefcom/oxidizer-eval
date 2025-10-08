long long uu_split::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x458]
    unsigned long long v1;  // [bp-0x450]
    char v2;  // [bp-0x448]
    char v3;  // [bp-0x438]
    unsigned long long v4;  // [bp-0x428]
    char v5;  // [bp-0x418]
    unsigned long long v6;  // [bp-0x408]
    unsigned long long v7;  // [bp-0x3f8]
    unsigned long long v8;  // [bp-0x3f0]
    char v9;  // [bp-0x3e8]
    char v10;  // [bp-0x3d8]
    unsigned long long v11;  // [bp-0x3c8]
    int v12;  // [bp-0x3c0], Other Possible Types: char
    unsigned long long v13;  // [bp-0x3b0]
    int v14;  // [bp-0x3a8], Other Possible Types: char
    unsigned long long v15;  // [bp-0x398]
    unsigned long long v16;  // [bp-0x390]
    unsigned long long v17;  // [bp-0x388]
    char v18;  // [bp-0x380]
    char v19;  // [bp-0x378]
    char v20;  // [bp-0x370]
    unsigned long long v21;  // [bp-0x368]
    char v22;  // [bp-0x360]
    char v23;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v24;  // [bp-0x2e8]
    unsigned long long v25;  // [bp-0x2e0]
    char *v26;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x2d0]
    unsigned int v28;  // [bp-0x2d0], Other Possible Types: unsigned long long
    void* v29;  // [bp-0x2c8]
    void* v30;  // [bp-0x2c8]
    unsigned long long v32;  // r15
    unsigned long v34;  // rdx

    uu_split::handle_obsolete(&v23, a0, a1);
    v6 = v26;
    memcpy(&v5, &v23, 16);
    uu_split::uu_app(&v23);
    (char)v16.try_get_matches_from(&v23, &v5);
    if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
    {
        v32 = v8.from();
    }
    else
    {
        v11 = *((long long *)&v22);
        memcpy(&v10, &v20, 16);
        memcpy(&v9, &v18, 16);
        v7 = v16;
        v8 = v17;
        if (v27 != 0x8000000000000000)
            v30 = v29;
        else
            v30 = 0;
        (char)v16.from(&v7, v30);
        if ((int)v16 == 2)
        {
            v34 = (v17 - 4 < 5 ? v17 - 3 : 0);
            if (v34)
            {
                if (v34 != 1 || *((int *)&v18) != 1)
                    goto LABEL_461090;
LABEL_460f75:
                v4 = v21;
                memcpy(&v3, &v19, 16);
                memcpy(&v2, &v17, 16);
                v0 = &v2;
                v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                v23 = &g_41adf0;
                v25 = 1;
                v30 = 0;
                v26 = &v0;
                v28 = 1;
                v12.map_or_else(&v23);
                v28 = 1;
                v24 = v12;
                v26 = v13;
                v32 = v23.new();
                core::ptr::drop_in_place<uu_split::SettingsError>(&v2);
            }
            else
            {
                if ((unsigned int)v17 == 3)
                    goto LABEL_460f75;
LABEL_461090:
                v4 = v21;
                memcpy(&v3, &v19, 16);
                memcpy(&v2, &v17, 16);
                v0 = &v2;
                v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                v23 = &g_41adf0;
                v25 = 1;
                v30 = 0;
                v26 = &v0;
                v28 = 1;
                v14.map_or_else(&v23);
                v28 = 1;
                v24 = v14;
                v26 = v15;
                v32 = v23.new();
                core::ptr::drop_in_place<uu_split::SettingsError>(&v2);
            }
        }
        else
        {
            memcpy(&v23, &(char)v16, 168);
            v32 = uu_split::split(&v23);
            core::ptr::drop_in_place<uu_split::Settings>(&(char)v16);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v7);
    }
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v27, v29);
    return v32;
}
