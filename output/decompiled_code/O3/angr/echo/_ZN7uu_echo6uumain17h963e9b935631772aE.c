long long uu_echo::uumain::h963e9b935631772a(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x3d8], Other Possible Types: unsigned long long
    struct_1 *v1;  // [sp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x3c8]
    unsigned long long v3;  // [sp-0x3c0]
    int v4;  // [bp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x3b0]
    int v6;  // [bp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x3a0]
    int v8;  // [bp-0x398], Other Possible Types: void*
    unsigned long long v9;  // [sp-0x388]
    int v10;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x370]
    int v12;  // [sp-0x368]
    unsigned long long v13;  // [sp-0x358]
    char v14;  // [bp-0x350], Other Possible Types: unsigned long long
    struct_1 *v15;  // [sp-0x348], Other Possible Types: unsigned long long
    unsigned long v16;  // [sp-0x318], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x310]
    char v18;  // [bp-0x308]
    char v19;  // [bp-0x2f8]
    char v20;  // [bp-0x2f0], Other Possible Types: unsigned long, unsigned long long
    int v21;  // [bp-0x2e8], Other Possible Types: char, unsigned long, unsigned long long
    char v22;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v23;  // [bp-0x2d8], Other Possible Types: char, unsigned long long
    void* v24;  // [bp-0x2d0], Other Possible Types: char
    int v25;  // [bp-0x2c8], Other Possible Types: char
    char v26;  // [bp-0x2c0]
    unsigned long long v27;  // [sp-0x2b8]
    char v28;  // [bp-0x2b0]
    int v32;  // xmm0
    unsigned long long v33[3];  // rax
    unsigned long long v34;  // r15
    struct_1 *v35;  // rdx
    unsigned int v36;  // eax
    unsigned long long v37;  // rsi
    unsigned long long v38;  // r14
    struct_1 *v39;  // r15
    struct struct_0 **v40;  // rax

    uu_echo::uu_app::h69b61d03d06e4852(&v20);
    clap_builder::builder::command::Command::get_matches_from::h80b9b9820942b5c3(&v14, &v20, a0, a1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h44465b40124d2c3b(&v20, &v14, "STRINGFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs", 6);
    v16 = "STRINGFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs";
    v17 = 6;
    if (v20)
    {
        v13 = *((long long *)&v25);
        *((int128_t *)&v12) = *((int128_t *)&v23);
        *((int128_t *)&v10) = *((int128_t *)&v21);
        v0 = &v16;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h209d870a4ec6595b;
        v2 = &v10;
        v3 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v4 = &g_4d5658;
        v5 = 2;
        v8 = 0;
        v6 = &v0;
        v7 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v4); /* do not return */
    }
    *((int128_t *)&v4) = *((int128_t *)&v22);
    *((int128_t *)&v6) = *((int128_t *)&v24);
    *((int128_t *)&v8) = *((int128_t *)&v26);
    v9 = *((long long *)&v28);
    if (v20)
    {
        v27 = v9;
        v32 = (int128_t)v4;
        *((int128_t *)&v25) = (int128_t)v8;
        *((int128_t *)&v23) = (int128_t)v6;
        v21 = v32;
        v20 = v21;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h22bcec2e25a33bed(&v10, &v20);
    }
    else
    {
        v33 = __rust_alloc(24, 8);
        if (!v33)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v33[0] = 0;
        v33[1] = 1;
        v33[2] = 0;
        alloc::slice::hack::into_vec::hde665de152996488(&v10, v33, 1);
    }
    v34 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha0934009224a1cd9(uu_echo::execute::hdbc61a20046ebb92((unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v14, "no_newlineenable_backslash_escapeSTRINGFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.", 10), (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v14, "enable_backslash_escapeSTRINGFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs", 23), v11, (long long)v12));
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h924eb22784fbe53e(&v10);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd24d6c787c5406a4(&v10);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc03aa8c63a4aeea3(&v14);
    if (!v34)
    {
        v36 = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v36;
    }
    v0 = v34;
    v1 = v35;
    v4 = &v0;
    v5 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha8f053f93df62770;
    v20 = &g_40f510;
    v21 = 1;
    v24 = 0;
    v22 = &v4;
    v23 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v18, &v20);
    *((int128_t *)&v4) = *((int128_t *)&v18);
    v6 = *((long long *)&v19);
    if (v6)
    {
        v14 = uucore::util_name::h359eff083fe53467();
        v15 = v35;
        v10 = &v14;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h209d870a4ec6595b;
        v20 = &g_4d5690;
        v21 = 2;
        v24 = 0;
        v22 = &v10;
        v23 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v37, v35);
        v14 = &v4;
        v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v20 = &g_4d56b0;
        v21 = 2;
        v24 = 0;
        v22 = &v14;
        v23 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v37, v35);
    }
    if ((char)v1->field_68(v0))
    {
        v14 = uucore::execution_phrase::hded5ccd87df1fcab();
        v15 = v35;
        v10 = &v14;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h209d870a4ec6595b;
        v20 = &g_4d56d0;
        v21 = 2;
        v24 = 0;
        v22 = &v10;
        v23 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v37, v35);
    }
    v36 = v1->field_60(v0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h41c276269cb21610();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8374a913210c1432(&v4);
    v38 = v0;
    v39 = v1;
    if (v39->field_0)
        v40(v38);
    if (v39->field_8)
    {
        __rust_dealloc(v38);
        return v36;
    }
    return v36;
}
