long long uu_truncate::uumain::hafaa9e5ada94f9f2(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [sp-0x6c8], Other Possible Types: uint128_t [2], unsigned long long
    struct_5 *v1;  // [sp-0x6c0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x6b8]
    unsigned long long v3;  // [sp-0x6b0]
    int v4;  // [sp-0x6a8], Other Possible Types: void*, struct_0 *
    unsigned long long v5;  // [sp-0x6a0]
    void* v6;  // [sp-0x698], Other Possible Types: unsigned long long
    char v7;  // [bp-0x688], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [sp-0x680]
    struct_4 *v9;  // [sp-0x678], Other Possible Types: unsigned long
    int v10;  // [bp-0x668], Other Possible Types: char, unsigned long, unsigned long long
    struct_0 *v11;  // [sp-0x660], Other Possible Types: unsigned long long
    char v12;  // [bp-0x65c]
    unsigned long long v13;  // [sp-0x658]
    unsigned long long v14;  // [sp-0x650]
    char v15;  // [bp-0x64c]
    int v16;  // [bp-0x640]
    unsigned long long v17;  // [sp-0x628]
    unsigned long v18;  // [sp-0x620], Other Possible Types: unsigned long long
    unsigned int v19;  // [sp-0x618], Other Possible Types: unsigned long
    int v20;  // [sp-0x614]
    int v21;  // [bp-0x604]
    int v22;  // [sp-0x5f8]
    unsigned long v23;  // [sp-0x5e8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x5e0]
    char v25;  // [bp-0x5d8]
    char v26;  // [bp-0x5c8]
    void* v27;  // [bp-0x5c0], Other Possible Types: char, unsigned long, unsigned long long
    int v28;  // [sp-0x5b8], Other Possible Types: struct_4 *, unsigned long, unsigned long long
    void* v29;  // [sp-0x5b0], Other Possible Types: struct struct_3 **, struct_4 *, unsigned long long
    void* v30;  // [sp-0x5a8], Other Possible Types: char, unsigned int, unsigned long long
    char v31;  // [sp-0x5a7]
    void* v32;  // [sp-0x5a0], Other Possible Types: unsigned long long
    void* v33;  // [sp-0x598]
    unsigned long long v34;  // [sp-0x588]
    void* v35;  // [bp-0x2f8], Other Possible Types: struct struct_2 **, int, char, unsigned long long
    unsigned long long v36;  // [sp-0x2f0]
    struct_4 *v37;  // [sp-0x2e8], Other Possible Types: int, unsigned long, unsigned long long
    unsigned long long v38;  // [sp-0x2e0]
    unsigned long long v39;  // [sp-0x2d8]
    struct_0 *v41;  // rbx
    unsigned int v42;  // ecx
    unsigned long long v43;  // r12
    unsigned long long v44;  // r13
    unsigned long long v45[9];  // rbp
    char v46;  // al
    unsigned long long v48;  // rsi
    unsigned long long v49;  // rbx
    unsigned int v50;  // eax
    unsigned int v51;  // eax
    struct_4 *v54;  // rax
    uint128_t v55[2];  // rax
    int v57;  // xmm0
    int v58;  // xmm0
    int v62;  // xmm0
    unsigned long long v63;  // rdx
    unsigned int v64;  // eax
    uint128_t v65[2];  // r14
    struct_5 *v66;  // r15
    struct struct_1 **v67;  // rax

    uu_truncate::uu_app::h8655f6498a10cc68(&v27);
    clap_builder::builder::command::Command::after_help::hc4c8fcedee98dfaf(&v35, &v27, "SIZE is an integer with an optional prefix and optional unit.\nThe available units (K, M, G, T, P, E, Z, and Y) use the following format:\n    'KB' =>           1000 (kilobytes)\n    'K'  =>           1024 (kibibytes)\n    'MB' =>      1000*1000 (megabytes)\n    'M'  =>      1024*1024 (mebibytes)\n    'GB' => 1000*1000*1000 (gigabytes)\n    'G'  => 1024*1024*1024 (gibibytes)\nSIZE may also be prefixed by one of the following to adjust the size of each\nfile based on its current size:\n    '+'  => extend by\n    '-'  => reduce by\n    '<'  => at most\n    '>'  => at least\n    '/'  => round down to multiple of\n    '%'  => round up to multiple of", 638);
    clap_builder::builder::command::Command::try_get_matches_from::h0cbf3e2805317c24(&v10, &v35, a0, a1);
    if (v18 == 0x8000000000000000)
    {
        v41 = v11;
        v4 = v41;
        if (v41->field_0 != 2)
            clap_builder::error::Message::formatted::h9d2cf02318b7ec6a(&v7, v41, &v41->padding_4[108]);
        else
            _$LT$clap_builder..error..format..RichFormatter$u20$as$u20$clap_builder..error..format..ErrorFormatter$GT$::format_error::h78d59a95788e8a06(&v7, &v4);
        v46 = v41->field_d5;
        v30 = (v46 & 29) != 12;
        v31 = v41->padding_4[207 + (-0x100 | (v46 & 30) == 12)];
        v27 = 0;
        v28 = 1;
        v29 = 0;
        if (v7 != 0x8000000000000000)
        {
            v2 = v9;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v35, v8);
            v2 = v37;
        }
        *((int128_t *)&v0) = *((int128_t *)&v7);
        clap_builder::output::fmt::Colorizer::with_content::h2be7e5ad96218e04(&v35, &v27, &v0);
        v49 = clap_builder::output::fmt::Colorizer::print::hf52ef0bef511b09f(&v35, v48, v63);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b993d9315fbc587();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd019b417f32ed7c9(&v35);
        if (v49)
        {
            v27 = v49;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h8469e3672ab6ca3d(v4);
        v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h4184ee23da6eaec7((-0x100 | (v4->field_d5 & 29) != 12) & 4294967295 & 4294967295);
        if (!(!v55))
            goto LABEL_435da4;
    }
    else
    {
        v17 = 0x8000000000000000;
        v42 = (int)v11;
        *((int128_t *)&v20) = *((int128_t *)&v12);
        *((int128_t *)&v21) = *((int128_t *)&v15);
        *((int128_t *)&v22) = (int128_t)v16;
        v18 = v10;
        v19 = v42;
        v43 = _ZN11uu_truncate7options9ARG_FILES17h004069b0a13b7105E;
        v44 = g_4e0ae8;
        v45 = clap_builder::util::flat_map::FlatMap$LT$K$C$V$GT$::get::h44aec73e9f10f5fe(&v18, v43, v44);
        if (!v45)
        {
            v4 = 0;
            v5 = 8;
            v6 = 0;
            goto LABEL_436026;
        }
        v35 = 9479156756246622757;
        v36 = 15398537441398644645;
        v27 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id::h5ad55dcf3b057a0f(v45, 9479156756246622757);
        v28 = v63;
        if (!(char)_$LT$clap_builder..util..any_value..AnyValueId$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfe0cc99dda6b9026(&v35, &v27))
        {
            v0 = v43;
            v1 = v44;
            v35 = 0;
            v36 = v27;
            v37 = v63;
            v38 = 9479156756246622757;
            v39 = 15398537441398644645;
            v10 = &v0;
            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0a67fd98d15c94e4;
            v13 = &v35;
            v14 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            v27 = &g_4ddf38;
            v28 = 2;
            v32 = 0;
            v29 = &v10;
            v30 = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v27); /* do not return */
        }
        v27 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref$u7b$$u7b$reify.shim$u7d$$u7d$::he67132a04b8daa40;
        v28 = v45[7];
        v29 = v28 + v45[8] * 24;
        v30 = 0;
        v32 = 15398537441398644645;
        v33 = 0;
        v34 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals::hb3f091e72b19d47b(v45);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4ef631272739a50c(&v35, &v27);
        *((int128_t *)&v4) = *((int128_t *)&v35);
        v6 = v37;
        if (!v6)
        {
LABEL_436026:
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h7dab27cfb6e9f273(&v27, 20, 0);
            if (v27)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v54 = v29;
            v54->field_0 = 134835818736588657362413574869681924461;
            v54->field_10 = 1684955506;
            v30 = 1;
            v27 = v28;
            v28 = v54;
            v29 = 20;
            v55 = __rust_alloc(32, 8);
            if (!v55)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v58 = *((int128_t *)&v27);
            v55[1] = *((int128_t *)&v29);
            *((void*)&v55[0]) = v58;
        }
        else
        {
            v50 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v18, _ZN11uu_truncate7options9IO_BLOCKS17h35f0b1c4ff2cff72E, g_4e0aa8);
            v51 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v18, _ZN11uu_truncate7options9NO_CREATE17hff97eb4f486adda0E, g_4e0ab8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9d5c29ea6ed6d932(&v10, &v18, v7, v8);
            v7 = _ZN11uu_truncate7options9REFERENCE17h1fc3a147f1cc5323E;
            v8 = g_4e0ac8;
            if ((int)v10 != 2)
            {
                v39 = *((long long *)&(&v15)[4]);
                v57 = *((int128_t *)&v10);
                *((int128_t *)&v37) = *((int128_t *)&(&v12)[4]);
                v35 = v57;
                v0 = &v7;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0a67fd98d15c94e4;
                v2 = &v35;
                v3 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v27 = &g_4ddf38;
                v28 = 2;
                v32 = 0;
                v29 = &v0;
                v30 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v27); /* do not return */
            }
            if (!v11)
            {
                v7 = 0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v27, v11);
                v9 = v29;
                *((int128_t *)&v7) = *((int128_t *)&v27);
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9d5c29ea6ed6d932(&v10, &v18, v23, v24);
            v23 = _ZN11uu_truncate7options4SIZE17h3beb9389de3e98c8E;
            v24 = g_4e0ad8;
            if ((int)v10 != 2)
            {
                v39 = *((long long *)&(&v15)[4]);
                v62 = *((int128_t *)&v10);
                *((int128_t *)&v37) = *((int128_t *)&(&v12)[4]);
                v35 = v62;
                v0 = &v23;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0a67fd98d15c94e4;
                v2 = &v35;
                v3 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v27 = &g_4ddf38;
                v28 = 2;
                v32 = 0;
                v29 = &v0;
                v30 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v27); /* do not return */
            }
            if (v11)
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v27, v11);
                v17 = v27;
                *((int128_t *)&v10) = *((int128_t *)&v28);
            }
            v37 = v9;
            *((int128_t *)&v35) = *((int128_t *)&v7);
            v27 = v17;
            *((int128_t *)&v28) = (int128_t)v10;
            v55 = uu_truncate::truncate::h8d7d4c2b9f78c4f5(v51, v50, &v35, &v27, v5, v6);
        }
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6f841a2d15068c1d(&v4);
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hee4a52f856088ba9(&v4);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfcf525ab242bff15(&v18);
        if (v55)
        {
LABEL_435da4:
            *((uint128_t *[2])&v0[0]) = v55;
            v1 = &g_4ddeb0.field_0;
            v35 = &v0;
            v36 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7fd0470d1179a003;
            v27 = &g_410020;
            v28 = 1;
            v32 = 0;
            v29 = &v35;
            v30 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v25, &v27);
            *((int128_t *)&v35) = *((int128_t *)&v25);
            v37 = *((long long *)&v26);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf64f498621747744(v36, *((long long *)&v26), 1, 0))
            {
                v10 = uucore::util_name::h359eff083fe53467();
                v11 = v63;
                v18 = &v10;
                v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0a67fd98d15c94e4;
                v27 = &g_4dde18;
                v28 = 2;
                v32 = 0;
                v29 = &v18;
                v30 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v27, v48, v63);
                v10 = &v35;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v27 = &g_4dde38;
                v28 = 2;
                v32 = 0;
                v29 = &v10;
                v30 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v27, v48, v63);
            }
            if ((char)v1->field_68(v0))
            {
                v10 = uucore::execution_phrase::hded5ccd87df1fcab();
                v11 = v63;
                v18 = &v10;
                v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0a67fd98d15c94e4;
                v27 = &g_4dde58;
                v28 = 2;
                v32 = 0;
                v29 = &v18;
                v30 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v27, v48, v63);
            }
            v64 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b993d9315fbc587();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd019b417f32ed7c9(&v35);
            v65 = v0;
            v66 = v1;
            if (v66->field_0)
                v67(v65);
            if (v66->field_8)
            {
                __rust_dealloc(v65);
                return v64;
            }
            return v64;
        }
    }
    v64 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v64;
}
