long long uu_vdir::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x590]
    char v1;  // [bp-0x558]
    unsigned long long v2;  // [bp-0x540]
    unsigned long long v3;  // [bp-0x538]
    unsigned long long v4;  // [bp-0x530]
    char v5;  // [bp-0x528]
    unsigned short v6;  // [bp-0x444]
    char v7;  // [bp-0x442]
    char v8;  // [bp-0x440]
    char v9;  // [bp-0x438]
    char v10;  // [bp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x3f0]
    unsigned long long v12;  // [bp-0x3e8]
    char v13;  // [bp-0x3e0]
    char v14;  // [bp-0x2f0]
    char v16;  // bl
    char v17;  // bpl
    unsigned long long v18;  // r14

    uu_vdir::uu_app(&v14);
    v0.get_matches_from(&v14, a0, a1);
    if (!((char)v0.contains_id(_ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE, g_69c248) || (char)v0.get_flag(_ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E, g_69ccc0) || (char)v0.get_flag(_ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E, g_69cca0)))
        v16 = (char)v0.get_flag(_ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E, g_69ccb0) ^ 1;
    if (!((char)v0.contains_id(_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE, g_69c2a8) || (char)v0.get_flag(_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E, g_69c900) || (char)v0.get_flag(_ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E, g_69c8f0) || (char)v0.get_flag(_ZN5uu_ls7options6format6COMMAS17h2c5349b856a55a83E, g_69c920) || (char)v0.get_flag(_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E, g_69c8e0) || (char)v0.get_flag(_ZN5uu_ls7options6format13LONG_NO_GROUP17h3a95b096fda62ebbE, g_69c940) || (char)v0.get_flag(_ZN5uu_ls7options6format13LONG_NO_OWNER17he953e6f73aa3471eE, g_69c930) || (char)v0.get_flag(_ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h4b2cb569f0d33d1fE, g_69c950)))
        v17 = (char)v0.get_flag(_ZN5uu_ls7options6format8ONE_LINE17hbf96991fc6132402E, g_69c8d0) ^ 1;
    v10.from(&v0);
    v18 = v11;
    if (!((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63)))
    {
        memcpy(&v5, &v13, 240);
        v2 = v10;
        v3 = v18;
        v4 = v12;
        if (v16)
        {
            v7 = 0;
            v6 = 2;
        }
        if (v17)
            v8 = 1;
        v10.try_get_many(&v0, _ZN5uu_ls7options5PATHS17hfa32a56119ad4e17E, g_69c338);
        v9.unwrap(_ZN5uu_ls7options5PATHS17hfa32a56119ad4e17E, g_69c338, &v10);
        v1.map_or_else(&v9);
        v18 = uu_ls::list(&v1, &v2);
        core::ptr::drop_in_place<uu_ls::Config>(&v2);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v18;
}
