long long uu_dir::uumain::uumain::hd52e6a15825b1263(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x5a0]
    char v1;  // [bp-0x568], Other Possible Types: unsigned long long
    int v2;  // [sp-0x560]
    char v3;  // [bp-0x550]
    char v4;  // [bp-0x548]
    char v5;  // [bp-0x538]
    char v6;  // [bp-0x528]
    char v7;  // [bp-0x518]
    char v8;  // [bp-0x508]
    int v9;  // [bp-0x4f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v10;  // [sp-0x4f0], Other Possible Types: unsigned long long
    int v11;  // [bp-0x4e8], Other Possible Types: char, unsigned long long
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
    char v26;  // bpl
    unsigned long long v28;  // r12
    unsigned long long v29;  // r14
    int v31;  // xmm0

    uu_dir::uu_app::he3101ebc7bd9a2bd(&v22);
    clap_builder::builder::command::Command::get_matches_from::h6782c68bc326c5e5(&v0, &v22, a0, a1);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v0, _ZN5uu_ls7options13QUOTING_STYLE17h9bdc8a31bb79b8cdE, g_60f408) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options7quoting1C17hc109e26eb7f151f2E, g_60f9a0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options7quoting6ESCAPE17h368215d4cb9bc296E, g_60f980))
        v24 = 0;
    else
        v24 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E, g_60f990) | -0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E, g_60f990) ^ 1;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v0, _ZN5uu_ls7options6FORMAT17h7274b106b2ba33e5E, g_60f418) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format6ACROSS17h671846789e2112eaE, g_60f2f0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format7COLUMNS17h4dccf0756e3b7d4fE, g_60f2e0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format6COMMAS17h7feeca4e639ca720E, g_60f300) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format4LONG17h88813a22b172323aE, g_60f2d0) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format13LONG_NO_GROUP17h2e687fcc136dc471E, g_60f320) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format13LONG_NO_OWNER17h5cdbd26e40a124d6E, g_60f310) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he1e52fd646432ed3E, g_60f330))
        v26 = 0;
    else
        v26 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE, g_60f2c0) | -0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE, g_60f2c0) ^ 1;
    uu_ls::Config::from::h304081f9da8d7174(&v9, &v0);
    v28 = v9;
    v29 = v10;
    if (v28 == 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h88cc932e0be994ae(&v0);
        return v29;
    }
    memcpy(&v18, &v12, 232);
    v15 = v28;
    v16 = v29;
    v17 = *((long long *)&v11);
    if (v24)
    {
        v19 = 0;
        v20 = 2;
    }
    if (v26)
        v21 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha6c1a7eac38a6eab(&v9, &v0, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_60f428);
    clap_builder::parser::error::MatchesError::unwrap::h1ab6576cc5f5749a(&v5, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_60f428, &v9);
    if (!*((long long *)&v5))
    {
        uu_dir::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h8478ec9724f4b289(&v1);
    }
    else
    {
        v31 = *((int128_t *)&v5);
        *((int128_t *)&v14) = *((int128_t *)&v8);
        *((int128_t *)&v13) = *((int128_t *)&v7);
        *((int128_t *)&v11) = *((int128_t *)&v6);
        v9 = v31;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h80e25043356daf1c(&v3, &v9);
        *((int128_t *)&v2) = *((int128_t *)&v4);
        v1 = *((long long *)&v3);
    }
    v11 = (long long)(&v2)[8];
    v9 = v1;
    v10 = (long long)v2;
    v29 = uu_ls::list::h6ddc1ea5566af8cc(&v9, &v15);
    core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h037aaa778408e670(&v15);
}
