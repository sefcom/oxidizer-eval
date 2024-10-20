long long uu_pr::uumain::hc25e21a60206edb0(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x708], Other Possible Types: char, unsigned long, unsigned long long
    struct_1 *v1;  // [bp-0x700], Other Possible Types: unsigned long long [2], char
    int v2;  // [bp-0x6f8], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x6d8], Other Possible Types: unsigned long long
    int v4;  // [sp-0x6d0]
    char v5;  // [bp-0x6c0]
    char v6;  // [bp-0x6b8]
    char v7;  // [bp-0x6b0]
    char v8;  // [bp-0x6a8]
    char v9;  // [bp-0x6a0]
    char v10;  // [bp-0x698]
    unsigned long v11;  // [sp-0x690], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x688]
    int v13;  // [sp-0x680]
    int v14;  // [sp-0x670]
    unsigned long long v15;  // [sp-0x660]
    struct_3 *v16;  // [sp-0x658]
    struct_3 *v17;  // [sp-0x650]
    unsigned long long v18;  // [sp-0x648]
    unsigned long long v19;  // [sp-0x640]
    int v20;  // [sp-0x638]
    char v21;  // [bp-0x628]
    char v22;  // [bp-0x618]
    char v23;  // [bp-0x610]
    char v24;  // [bp-0x608]
    char v25;  // [bp-0x600]
    char v26;  // [bp-0x5f0]
    unsigned long v27;  // [sp-0x5e8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x5e0]
    unsigned long long v29;  // [sp-0x5d8]
    unsigned long long v30;  // [sp-0x5d0]
    int v31;  // [sp-0x5c8]
    char v32;  // [bp-0x5b0]
    char v33;  // [bp-0x5a0]
    void* v34;  // [bp-0x598], Other Possible Types: int, char, unsigned long, unsigned long long
    int v35;  // [sp-0x590], Other Possible Types: unsigned long, unsigned long long
    int v36;  // [bp-0x588], Other Possible Types: void*, char, unsigned long long
    int v37;  // [sp-0x578]
    int v38;  // [bp-0x568], Other Possible Types: char
    int v39;  // [bp-0x448], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v40;  // [sp-0x440], Other Possible Types: unsigned long long
    unsigned long long v41;  // [sp-0x438]
    char v42;  // [bp-0x428]
    char v43;  // [bp-0x418]
    char v44;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v45;  // [sp-0x2f0]
    unsigned long long v46;  // [sp-0x2e8]
    unsigned long long v47;  // [sp-0x2e0]
    void* v48;  // [sp-0x2d8]
    int v50;  // xmm0
    unsigned long long v51;  // rax
    int v52;  // xmm0
    int v53;  // ymm0
    int v54;  // ymm0
    int v55;  // xmm0
    struct_1 *v56;  // rdx
    int v57;  // xmm0
    int v58;  // ymm0
    int v59;  // xmm0
    struct_2 *v60;  // rax
    unsigned long long v61;  // rcx
    int v62;  // xmm0
    struct_3 *v63;  // rax
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rcx
    int v66;  // xmm0
    int v67;  // xmm0
    unsigned long long v68;  // r14
    unsigned long long v69;  // rbp
    unsigned long long v70;  // r9
    int v71;  // xmm0
    int v72;  // xmm0
    struct_1 *v73;  // r15
    unsigned int v74;  // eax
    unsigned long long v75;  // rsi
    unsigned long long v76;  // rsi
    unsigned long long v77;  // r14
    struct_1 *v78;  // r15
    struct struct_0 **v79;  // rax

    uucore::Args::collect_ignore::h4903c62286031273(&v5, a0, a1);
    uu_pr::recreate_arguments::h077831d09ded967c(&v25, *((long long *)&v6), *((long long *)&v7));
    uu_pr::uu_app::hfc3eb9579f3c71c4(&v44);
    v41 = *((long long *)&v26);
    v50 = *((int128_t *)&v25);
    v39 = v50;
    clap_builder::builder::command::Command::try_get_matches_from_mut::h18ac5f3a9c376d86(&v34, &v44, &v39);
    if (v11 == 0x8000000000000000)
    {
        v51 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v12);
        goto LABEL_4efb40;
    }
    v15 = *((long long *)&v38);
    v52 = *((int128_t *)&v36);
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v14 = v37;
    v13 = v52;
    v11 = v34;
    v12 = v35;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa38c9527182b447(&v34, &v11, "files-merge Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rsError flushing stdout: \n", 5);
    clap_builder::parser::error::MatchesError::unwrap::h6d86186fe1c343b8(&v39, "files-merge Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rsError flushing stdout: \n", 5, &v34);
    if (!v39 || (v55 = (int128_t)v39, *((int128_t *)&v38) = *((int128_t *)&v43), *((int128_t *)&v37) = *((int128_t *)&v42), *((int128_t *)&v36) = *((int128_t *)&v41), v34 = v55, _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2383528d58d61dc5(&v0, &v34, v56), v57 = *((int128_t *)&v1), v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57, v20 = v57, v34 == 0x8000000000000000))
    {
        v34 = 0;
        v35 = 8;
        v36 = 0;
    }
    else
    {
        v59 = v20;
        v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v35 = v59;
        v34 = v0;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h567d4a8430c45f12(&v8, &v34);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfb3d35c324c28499();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he444476aa7164681(&v34);
    if (!*((long long *)&v10))
        alloc::vec::Vec$LT$T$C$A$GT$::insert::h77ab8e7b8645ba71(&v8, 0, "-merge Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rsError flushing stdout: \n", 1);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "merge Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rsError flushing stdout: \n", 5))
    {
        v61 = *((long long *)&v9);
        v27 = v61;
        v28 = v61;
        v29 = *((long long *)&v8);
        v30 = *((long long *)&v10) * 16 + v61;
        alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::hc5a418d27eb126f4(&v22, &v27);
    }
    else
    {
        v60 = __rust_alloc(24, 8);
        if (!v60)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v60->field_10 = *((long long *)&v10);
        v62 = *((int128_t *)&v8);
        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        *((void*)&v60->field_0) = v62;
        alloc::slice::hack::into_vec::hf038091c83c23829(&v22, v60, 1);
    }
    v63 = *((long long *)&v23);
    v64 = *((long long *)&v24);
    v16 = v63;
    v17 = v63;
    v18 = *((long long *)&v22);
    v19 = &(&v63->field_0)[3 * v64];
    if (!v64)
    {
LABEL_4efa29:
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9cc339e44e4de74c(&v16);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6c2ceafa464be8f6(&v11);
        ::0x4eeb70::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h4e75e9b9071ad03c(&v44);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he39462e712084d7e(&v5);
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hee35c3d57f3b2b78(&v5);
        vvar_886{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v74;
    }
    while (true)
    {
        v17 = (char *)&v63->field_8 + 8;
        v65 = v63->field_0;
        v66 = *((int128_t *)&(&v63->field_0)[1]);
        v31 = v66;
        if (v3 == 0x8000000000000000)
            goto LABEL_4efa29;
        v3 = v65;
        v67 = v31;
        v4 = v67;
        v68 = (long long)v4;
        v69 = (long long)(&v4)[8];
        alloc::str::join_generic_copy::hadae0703dda9b530(&v34, *((long long *)&v6), *((long long *)&v7), " Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rsError flushing stdout: \n", 1);
        v70 = (long long)(&v35)[8];
        v2 = (long long)(&v35)[8];
        v71 = *((int128_t *)&v34);
        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
        v0 = v71;
        uu_pr::build_options::h8c8a5a22f2079e14(&v39, &v11, v68, v69, v1, v70);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfb3d35c324c28499();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfce29479b4639f10(&v0);
        if (v39 == 2)
        {
            v72 = (int128_t)(&v39)[8];
            *((int128_t *)&v2) = *((int128_t *)&(&v41)[1]);
            v0 = v72;
            uu_pr::print_error::he394495153634a74(&v11, &v0);
            v51 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h4184ee23da6eaec7(1);
            core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::hd182c88c19801ec5(&v0);
            goto LABEL_4efb15;
        }
        memcpy(&v34, &v39, 328);
        itertools::Itertools::exactly_one::h7e9502dfc2fd67fa(&v0, (long long)v4, (long long)(&v4)[8] * 16 + (long long)v4);
        if ((int)v0 != 2)
            uu_pr::mpr::h6a35071e59ea841d(&v20, (long long)v4, (long long)(&v4)[8], &v34);
        else
            uu_pr::pr::hf8e617104592f468(&v20, v1[0], v1[1], &v34);
        if ((long long)v20 != 9223372036854775813)
        {
            *((int128_t *)&v2) = *((int128_t *)&v21);
            v0 = v20;
            uu_pr::print_error::he394495153634a74(&v11, &v0);
            core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::hd182c88c19801ec5(&v0);
            v51 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h4184ee23da6eaec7(1);
            core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h59ff8b41c45fcd4d(&v34);
LABEL_4efb15:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfb3d35c324c28499();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he444476aa7164681(&v3);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9cc339e44e4de74c(&v16);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6c2ceafa464be8f6(&v11);
LABEL_4efb40:
            ::0x4eeb70::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h4e75e9b9071ad03c(&v44);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he39462e712084d7e(&v5);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hee35c3d57f3b2b78(&v5);
            if (!v51)
            {
                v74 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v74;
            }
            v0 = v51;
            v1 = v73;
            v34 = &v0;
            v35 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h497feb45d0659e8f;
            v44 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v45 = 1;
            v48 = 0;
            v46 = &v34;
            v47 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v32, &v44);
            *((int128_t *)&v34) = *((int128_t *)&v32);
            v75 = *((long long *)&v33);
            v36 = *((long long *)&v33);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h729bbc1aca3fcea9(v35, v75, 1, 0))
            {
                v39 = uucore::util_name::h359eff083fe53467();
                v40 = v56;
                v11 = &v39;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbc6bcf14d68ad1c6;
                v44 = &g_68bef8;
                v45 = 2;
                v48 = 0;
                v46 = &v11;
                v47 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v44, v76, v56);
                v39 = &v34;
                v40 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v44 = &g_68bf18;
                v45 = 2;
                v48 = 0;
                v46 = &v39;
                v47 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v44, v76, v56);
            }
            if ((char)v1->field_68(v0))
            {
                v39 = uucore::execution_phrase::hded5ccd87df1fcab();
                v40 = v56;
                v11 = &v39;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbc6bcf14d68ad1c6;
                v44 = &g_68bf38;
                v45 = 2;
                v48 = 0;
                v46 = &v11;
                v47 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v44, v76, v56);
            }
            v74 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfb3d35c324c28499();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfce29479b4639f10(&v34);
            v77 = v0;
            v78 = v1;
            if (v78->field_0)
                v79(v77);
            if (v78->field_8)
            {
                __rust_dealloc(v77);
                return v74;
            }
            return v74;
        }
        core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h59ff8b41c45fcd4d(&v34);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfb3d35c324c28499();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he444476aa7164681(&v3);
        v63 = v17;
        goto LABEL_4efa29;
    }
}
