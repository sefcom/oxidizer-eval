long long uu_cat::uumain::uumain::h5805468bd896a298(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x42a]
    char v1;  // [sp-0x429]
    int v2;  // [sp-0x428]
    unsigned long long v3;  // [sp-0x418]
    int v4;  // [sp-0x408]
    unsigned long long v5;  // [sp-0x3f8]
    char v6;  // [bp-0x3e8], Other Possible Types: unsigned long
    char v7;  // [sp-0x3e7]
    char v8;  // [sp-0x3e6]
    char v9;  // [sp-0x3e5]
    char v10;  // [sp-0x3e4]
    unsigned long v11;  // [sp-0x3e0], Other Possible Types: unsigned long long
    char v12;  // [bp-0x3d8]
    char v13;  // [bp-0x3c8]
    char v14;  // [bp-0x3b8]
    unsigned long long v15;  // [sp-0x3a8]
    unsigned long v16;  // [sp-0x3a0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x398]
    int v18;  // [sp-0x390]
    int v19;  // [sp-0x380]
    unsigned long long v20;  // [sp-0x370]
    int v21;  // [sp-0x368]
    unsigned long long v22;  // [sp-0x358]
    int v23;  // [bp-0x348], Other Possible Types: char
    unsigned long v24;  // [sp-0x338], Other Possible Types: unsigned long long
    int v25;  // [sp-0x330]
    unsigned long long v26;  // [sp-0x320]
    int v27;  // [sp-0x318]
    unsigned long long v28;  // [sp-0x308]
    int v29;  // [sp-0x300]
    unsigned long long v30;  // [sp-0x2f0]
    char v31;  // [bp-0x2e8]
    int v32;  // [sp-0x78]
    int v33;  // [sp-0x68]
    int v34;  // [sp-0x58]
    int v35;  // [sp-0x48]
    unsigned long long v37;  // rdx
    char v41;  // al
    struct_0 *v42;  // rax
    struct_0 *v43;  // r15

    uu_cat::uu_app::hb02992cbb2741593(&v23, a1, v37);
    clap_builder::builder::command::Command::try_get_matches_from::h03cbaf8192075798(&v6, &v23, a0, a1);
    if (v16 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v17);
    v20 = *((long long *)&v14);
    *((int128_t *)&v19) = *((int128_t *)&v13);
    *((int128_t *)&v18) = *((int128_t *)&v12);
    v16 = *((long long *)&v6);
    v17 = v11;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN6uu_cat7options15NUMBER_NONBLANK17hdaa53217bffb8cb8E, g_519428))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN6uu_cat7options6NUMBER17hb966f66a7281c27bE, g_519458);
    v1 = 1;
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v23, _ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v22 = v24;
    v21 = v23;
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v23, _ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h82d4931b66642f17E, g_519438);
    v5 = v24;
    v4 = v23;
    v15 = _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hdfb90e3611deae91E;
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v23, _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hdfb90e3611deae91E, g_519478);
    v3 = v24;
    v2 = v23;
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v6, _ZN6uu_cat7options16SHOW_NONPRINTING17h2c635465fd68793dE, g_519498);
    v30 = *((long long *)&v12);
    *((int128_t *)&v29) = *((int128_t *)&v6);
    v23 = v21;
    v24 = v22;
    v25 = v4;
    v26 = v5;
    v27 = v2;
    v28 = v3;
    v6 = &v23;
    v11 = &v31;
    v0 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h56f059f43711cb3b(&v6, &v16);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$4$u5d$$GT$::h714fe36c4f8371eb(&v23);
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v23, _ZN6uu_cat7options9SHOW_ENDS17h04653d90c0396f7aE, g_519448);
    v5 = v24;
    v4 = v23;
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v23, _ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v3 = v24;
    v2 = v23;
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v6, _ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h82d4931b66642f17E, g_519438);
    v28 = *((long long *)&v12);
    *((int128_t *)&v27) = *((int128_t *)&v6);
    v23 = v4;
    v24 = v5;
    v25 = v2;
    v26 = v3;
    v6 = &v23;
    v11 = &v29;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::h15059127607a6dca(&v23);
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v23, _ZN6uu_cat7options8SHOW_ALL17hf50dee31f68dc7a4E, g_519418);
    v5 = v24;
    v4 = v23;
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v23, _ZN6uu_cat7options9SHOW_TABS17h12ef283ebc177f54E, g_519488);
    v3 = v24;
    v2 = v23;
    ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v6, v15, g_519478);
    v28 = *((long long *)&v12);
    *((int128_t *)&v27) = *((int128_t *)&v6);
    v23 = v4;
    v24 = v5;
    v25 = v2;
    v26 = v3;
    v6 = &v23;
    v11 = &v29;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::h15059127607a6dca(&v23);
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN6uu_cat7options13SQUEEZE_BLANK17h5d48012ae426d7caE, g_519468);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1b7267d3df625c7e(&v23, &v16, _ZN6uu_cat7options4FILE17h81814bf651146a3bE, g_519408);
    clap_builder::parser::error::MatchesError::unwrap::h706e21efedd25920(&v6, _ZN6uu_cat7options4FILE17h81814bf651146a3bE, g_519408, &v23);
    if (v6)
    {
        *((int128_t *)&v35) = *((int128_t *)&v14);
        *((int128_t *)&v34) = *((int128_t *)&v13);
        *((int128_t *)&v33) = *((int128_t *)&v12);
        *((int128_t *)&v32) = *((int128_t *)&v6);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hfc5cf7c1a90dab29(&v23, &v32, v37);
    }
    else
    {
        v42 = ::0x465530::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v42)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v43 = v42;
        ::0x465490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7d18d824e503ffb0(&v23, "-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 1);
        v3 = v24;
        v2 = v23;
        v43->field_10 = v3;
        *((void*)&v43->field_0) = v2;
        alloc::slice::hack::into_vec::h447a645353b5600d(&v23, v43, 1);
    }
    v10 = v1;
    v6 = v41;
    v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h56f059f43711cb3b(&v6, &v16);
    v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h56f059f43711cb3b(&v6, &v16);
    v9 = v0;
    ::0x4652a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4865cd477ba03015(&v23);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1949848cb2ac9ba2(&v16);
    return uu_cat::cat_files::h4ddececc589175a4((long long)(&v23)[8], v24, &v6);
}
