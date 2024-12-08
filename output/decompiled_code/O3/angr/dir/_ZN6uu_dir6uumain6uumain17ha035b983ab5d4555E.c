long long uu_dir::uumain::uumain::ha035b983ab5d4555(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x5a0]
    int v1;  // [bp-0x568], Other Possible Types: char
    unsigned long long v2;  // [sp-0x558]
    char v3;  // [bp-0x550]
    char v4;  // [bp-0x540]
    char v5;  // [bp-0x538]
    char v6;  // [bp-0x528]
    char v7;  // [bp-0x518]
    char v8;  // [bp-0x508]
    int v9;  // [bp-0x4f8], Other Possible Types: char
    char v10;  // [bp-0x4f0]
    int v11;  // [bp-0x4e8], Other Possible Types: char, unsigned long
    char v12;  // [bp-0x4e0]
    int v13;  // [sp-0x4d8]
    int v14;  // [sp-0x4c8]
    unsigned long v15;  // [sp-0x3f0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x3e8]
    unsigned long long v17;  // [sp-0x3e0]
    char v18;  // [bp-0x3d8]
    char v19;  // [sp-0x2fb]
    char v20;  // [sp-0x2f9]
    char v21;  // [sp-0x2f8]
    char v22;  // [bp-0x2f0]
    char v24;  // bl
    unsigned long long v26;  // rdx
    char v27;  // bpl
    unsigned long long v29;  // rcx
    unsigned long long v30;  // r8
    unsigned long long v31;  // r9
    unsigned long long v32;  // r12
    unsigned long long v33;  // r14
    int v35;  // xmm0
    unsigned long long v36;  // rdx

    uu_dir::uu_app::ha8995035ce4cfba8(&v22, a1, a2);
    clap_builder::builder::command::Command::get_matches_from::h5a02c6313297e05d(&v0, &v22, a0, a1);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v0, _ZN5uu_ls7options13QUOTING_STYLE17hb6b989323f3b6c38E, g_60f380) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options7quoting1C17h30dd60700071886fE, g_60f2e0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options7quoting6ESCAPE17he806ea23b8b78507E, g_60f2c0))
        v24 = 0;
    else
        v24 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options7quoting7LITERAL17h4bc344de550bbb12E, g_60f2d0) | -0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options7quoting7LITERAL17h4bc344de550bbb12E, g_60f2d0) ^ 1;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v0, _ZN5uu_ls7options6FORMAT17h873e6cebb46e2ec9E, g_60f390) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format6ACROSS17h335400852ca7fdf7E, g_60f9b0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format7COLUMNS17hf9de4f37bf7a6a77E, g_60f9a0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format6COMMAS17h26195f8b78a1c86cE, g_60f9c0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format4LONG17h4091a6b7ae146537E, g_60f990) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format13LONG_NO_GROUP17h0ca58df41c65fc77E, g_60f9e0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format13LONG_NO_OWNER17ha3dede1339e309d9E, g_60f9d0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he07a8efb0fd46282E, g_60f9f0))
        v27 = 0;
    else
        v27 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format8ONE_LINE17hc9896163082aa4f5E, g_60f980) | -0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN5uu_ls7options6format8ONE_LINE17hc9896163082aa4f5E, g_60f980) ^ 1;
    uu_ls::Config::from::hda3725dde7c5cb29(&v9, &v0, v26, v29, v30, v31);
    v32 = *((long long *)&v9);
    v33 = *((long long *)&v10);
    if (v32 == 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h992bcdacf7f7244f(&v0);
        return v33;
    }
    memcpy(&v18, &v12, 232);
    v15 = v32;
    v16 = v33;
    v17 = *((long long *)&v11);
    if (v24)
    {
        v19 = 0;
        v20 = 2;
    }
    if (v27)
        v21 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h58f6021ee5ad3790(&v9, &v0, _ZN5uu_ls7options5PATHS17h89ad938e8f78055bE, g_60f3a0);
    clap_builder::parser::error::MatchesError::unwrap::h16bc2201caf82ffd(&v5, _ZN5uu_ls7options5PATHS17h89ad938e8f78055bE, g_60f3a0, &v9);
    if (!*((long long *)&v5))
    {
        uu_dir::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h64fe91e4a953c2e1(&v1);
    }
    else
    {
        v35 = *((int128_t *)&v5);
        *((int128_t *)&v14) = *((int128_t *)&v8);
        *((int128_t *)&v13) = *((int128_t *)&v7);
        *((int128_t *)&v11) = *((int128_t *)&v6);
        v9 = v35;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfcaf169f586e9d0b(&v3, &v9, v36);
        *((int128_t *)&v1) = *((int128_t *)&v3);
        v2 = *((long long *)&v4);
    }
    v11 = v2;
    v9 = v1;
    v33 = uu_ls::list::hdb3050900a46b0d8(&v9, &v15);
    core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h3bb7e842c35d66c6(&v15);
}
