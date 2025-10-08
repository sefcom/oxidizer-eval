long long uu_vdir::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x598]
    unsigned long long v1;  // [bp-0x560]
    int v2;  // [bp-0x558]
    unsigned long long v3;  // [bp-0x550]
    char v4;  // [bp-0x548], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x540]
    unsigned long long v6;  // [bp-0x538]
    char v7;  // [bp-0x530]
    char v8;  // [bp-0x438]
    unsigned long long v9;  // [bp-0x3f8]
    unsigned long long v10;  // [bp-0x3f0]
    unsigned long long v11;  // [bp-0x3e8]
    char v12;  // [bp-0x3e0]
    unsigned short v13;  // [bp-0x2fc]
    char v14;  // [bp-0x2f8]
    char v15;  // [bp-0x2f0]
    char v17;  // bl
    char v18;  // bpl
    unsigned long long v19;  // r14

    uu_vdir::uu_app(&v15);
    v0.get_matches_from(&v15, a0, a1);
    if (!(char)v0.contains_id(_ZN5uu_ls7options13QUOTING_STYLE17h16f26274bec2219cE, g_682d50) && !(char)v0.get_flag(_ZN5uu_ls7options7quoting1C17hd587cbb08c1af7d0E, g_682d40) && !(char)v0.get_flag(_ZN5uu_ls7options7quoting6ESCAPE17he30ec2e55b9bdfacE, g_682d20))
        v17 = (char)v0.get_flag(_ZN5uu_ls7options7quoting7LITERAL17h567c390bbb33a38fE, g_682d30) ^ 1;
    if (!(char)v0.contains_id(_ZN5uu_ls7options6FORMAT17h41818ba09e12d5b4E, g_682d60) && !(char)v0.get_flag(_ZN5uu_ls7options6format6ACROSS17h570ef376038bfa19E, g_682cd0) && !(char)v0.get_flag(_ZN5uu_ls7options6format7COLUMNS17hbf207e8365dce655E, g_682cc0) && !(char)v0.get_flag(_ZN5uu_ls7options6format6COMMAS17h4a9843686f3e3fe2E, g_682ce0) && !(char)v0.get_flag(_ZN5uu_ls7options6format4LONG17hb0ee7ed3f258c1fcE, g_682cb0) && !(char)v0.get_flag(_ZN5uu_ls7options6format13LONG_NO_GROUP17h5b339f6fa29a5d21E, g_682d00) && !(char)v0.get_flag(_ZN5uu_ls7options6format13LONG_NO_OWNER17ha86266a3188cca4cE, g_682cf0) && !(char)v0.get_flag(_ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h28a041cb006d8268E, g_682d10))
        v18 = (char)v0.get_flag(_ZN5uu_ls7options6format8ONE_LINE17h3ac9917a7db01231E, g_682ca0) ^ 1;
    v4.from(&v0);
    v19 = v5;
    if (!((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63)))
    {
        memcpy(&v12, &v7, 240);
        v9 = v4;
        v10 = v19;
        v11 = v6;
        if (v17)
            v13 = 2;
        if (v18)
            v14 = 1;
        v4.try_get_many(&v0, _ZN5uu_ls7options5PATHS17h978caca964396fddE, g_682d70);
        v8.unwrap(_ZN5uu_ls7options5PATHS17h978caca964396fddE, g_682d70, &v4);
        if (*((long long *)&v8))
        {
            v4.collect(&v8);
            *((int128_t *)&v2) = *((int128_t *)&v5);
            v1 = v4;
        }
        else
        {
            uu_vdir::uumain::uumain::{{closure}}(&(char)v1);
        }
        v6 = v3;
        v4 = v1;
        v5 = (long long)v2;
        v19 = uu_ls::list(&v4, &v9);
        core::ptr::drop_in_place<uu_ls::Config>(&v9);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v19;
}
