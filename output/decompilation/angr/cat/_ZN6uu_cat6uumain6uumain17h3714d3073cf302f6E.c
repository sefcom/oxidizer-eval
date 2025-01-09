long long uu_cat::uumain::uumain::h3714d3073cf302f6(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x42a]
    char v1;  // [sp-0x429]
    int v2;  // [sp-0x428]
    unsigned long long v3;  // [sp-0x418]
    int v4;  // [sp-0x408]
    unsigned long long v5;  // [sp-0x3f8]
    char *v6;  // [bp-0x3e8]
    char v7;  // [sp-0x3e7]
    char v8;  // [sp-0x3e6]
    char v9;  // [sp-0x3e5]
    char v10;  // [sp-0x3e4]
    char *v11;  // [sp-0x3e0], Other Possible Types: unsigned long, unsigned long long
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
    char *v40;  // al
    struct_0 *v41;  // rax
    struct_0 *v42;  // r15

    uu_cat::uu_app::h297ec10995593580(&v23);
    clap_builder::builder::command::Command::try_get_matches_from::hafbe22770e67234c(&v6, &v23, a0, a1);
    if (v16 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v17);
    v20 = *((long long *)&v14);
    *((int128_t *)&v19) = *((int128_t *)&v13);
    *((int128_t *)&v18) = *((int128_t *)&v12);
    v16 = v6;
    v17 = v11;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v16, _ZN6uu_cat7options15NUMBER_NONBLANK17hcfd0ab18542bde86E, g_518a10))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v16, _ZN6uu_cat7options6NUMBER17h11e792a4c39cb9a9E, g_518a40);
    v1 = 1;
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v23, _ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v22 = v24;
    v21 = v23;
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v23, _ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE, g_518a20);
    v5 = v24;
    v4 = v23;
    v15 = _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h4cb7f8221e3b7d8eE;
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v23, _ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h4cb7f8221e3b7d8eE, g_518a60);
    v3 = v24;
    v2 = v23;
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v6, _ZN6uu_cat7options16SHOW_NONPRINTING17h64dc0b27cbc6a658E, g_518a80);
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
    v0 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4d38e22d3789febd(&v6, &v16);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$4$u5d$$GT$::h285049efda19b58d(&v23);
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v23, _ZN6uu_cat7options9SHOW_ENDS17h1e75941c054d73e2E, g_518a30);
    v5 = v24;
    v4 = v23;
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v23, _ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v3 = v24;
    v2 = v23;
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v6, _ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h95c71c636ef4e9daE, g_518a20);
    v28 = *((long long *)&v12);
    *((int128_t *)&v27) = *((int128_t *)&v6);
    v23 = v4;
    v24 = v5;
    v25 = v2;
    v26 = v3;
    v6 = &v23;
    v11 = &v29;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::hb11cd236e7793c22(&v23);
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v23, _ZN6uu_cat7options8SHOW_ALL17h50eb542d40b3f5b0E, g_518a00);
    v5 = v24;
    v4 = v23;
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v23, _ZN6uu_cat7options9SHOW_TABS17h38c44e0721b1c479E, g_518a70);
    v3 = v24;
    v2 = v23;
    ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v6, v15, g_518a60);
    v28 = *((long long *)&v12);
    *((int128_t *)&v27) = *((int128_t *)&v6);
    v23 = v4;
    v24 = v5;
    v25 = v2;
    v26 = v3;
    v6 = &v23;
    v11 = &v29;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::hb11cd236e7793c22(&v23);
    v40 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v16, _ZN6uu_cat7options13SQUEEZE_BLANK17ha18c24f819d67eebE, g_518a50);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hde9984c10c8b7a7c(&v23, &v16, _ZN6uu_cat7options4FILE17hd561a2c944603ee6E, g_5189f0);
    clap_builder::parser::error::MatchesError::unwrap::h166fa5812f149320(&v6, _ZN6uu_cat7options4FILE17hd561a2c944603ee6E, g_5189f0, &v23);
    if (v6)
    {
        *((int128_t *)&v35) = *((int128_t *)&v14);
        *((int128_t *)&v34) = *((int128_t *)&v13);
        *((int128_t *)&v33) = *((int128_t *)&v12);
        *((int128_t *)&v32) = *((int128_t *)&v6);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h02e9ff3463a0508c(&v23, &v32);
    }
    else
    {
        v41 = ::0x465dc0::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v41)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v42 = v41;
        ::0x465d20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&v23, "-Mismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 1);
        v3 = v24;
        v2 = v23;
        v42->field_10 = v3;
        *((void*)&v42->field_0) = v2;
        alloc::slice::hack::into_vec::hd0042bfcfa9cef1c(&v23, v42, 1);
    }
    v10 = v1;
    v6 = v40;
    v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4d38e22d3789febd(&v6, &v16);
    v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4d38e22d3789febd(&v6, &v16);
    v9 = v0;
    ::0x465b30::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hff841ab73154f8fc(&v23);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h46c2762526e71bd4(&v16);
    return uu_cat::cat_files::h6abdb7a5d8f0206f((long long)(&v23)[8], v24, &v6);
}
