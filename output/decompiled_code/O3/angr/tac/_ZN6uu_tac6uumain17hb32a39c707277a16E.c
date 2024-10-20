long long uu_tac::uumain::hb32a39c707277a16(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0x3c0], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1[2];  // [sp-0x3b8], Other Possible Types: void*, unsigned long, unsigned long long
    unsigned long long v2[2];  // [sp-0x3b0], Other Possible Types: unsigned long long, unsigned long
    char v3;  // [bp-0x3a8], Other Possible Types: unsigned long long
    struct_1 *v4;  // [sp-0x3a0]
    void* v5;  // [sp-0x390]
    int v6;  // [bp-0x388], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long v7;  // [sp-0x380], Other Possible Types: unsigned long long
    char v8;  // [bp-0x378], Other Possible Types: unsigned long long
    char v9;  // [bp-0x368]
    char v10;  // [bp-0x358]
    unsigned long v11;  // [sp-0x348], Other Possible Types: unsigned long long
    struct_1 *v12;  // [sp-0x340], Other Possible Types: unsigned long long
    int v13;  // [sp-0x338]
    int v14;  // [sp-0x328]
    unsigned long long v15;  // [sp-0x318]
    char v16;  // [bp-0x310]
    char v17;  // [bp-0x300]
    int v18;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v19;  // [sp-0x2f0]
    int v20;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x2e0]
    int v22;  // [bp-0x2d8], Other Possible Types: void*
    int v23;  // [sp-0x2c8]
    char v24;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v25;  // [sp-0x1c8]
    unsigned long long v26;  // [sp-0x1c0]
    unsigned long long v27;  // [sp-0xc8]
    void* v28;  // [sp-0xc0]
    char v29;  // [bp-0x3b]
    char v30;  // [bp-0x39]
    unsigned long long v32;  // rax
    struct_1 *v33;  // rdx
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rax
    unsigned long v36;  // r15
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long v39;  // r15
    unsigned int v40;  // eax
    unsigned long long v41;  // r14
    unsigned int v42;  // eax
    unsigned long long v43;  // rbx
    unsigned long long v44;  // r15
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // r15
    unsigned long long v47;  // r12
    unsigned long long v48;  // r13
    unsigned long long v49;  // rbx
    int v50;  // xmm0
    int v51;  // xmm1
    unsigned long long v52[2];  // rax
    unsigned long long v53[2];  // rdi
    struct_1 *v54;  // r15
    unsigned int v55;  // eax
    unsigned long long v56;  // rsi
    unsigned long long v57;  // r14
    struct_1 *v58;  // r15
    struct struct_0 **v59;  // rax

    uu_tac::uu_app::h9ccfcbbff3a35f2d(&v18);
    clap_lex::RawArgs::new::h06ef469f72f4a931(&v3, a0, a1);
    v5 = 0;
    if ((v29 & 8) && (v32 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v3, &v5), v32))
    {
        v35 = std::path::Path::file_stem::h441d431a81936839(v32, v33, v33, v34);
        if (v35 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v35, v33), !v0))
        {
            v36 = v2;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf840f8cb0a1a0573(&v0, v36, 0);
            if (v0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v1, v1, v36);
            v0 = v1;
            v1[0] = v2;
            v2 = v36;
            clap_lex::RawArgs::insert::hc50ce7239d2f1199(&v3, &v5, &v0);
            v27 = 1;
            v28 = 0;
            if (v24 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8496e1465eba5bc();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h75996673e55b6ca6(&v24);
            }
            v24 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v6, &v18, &v3, v5);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8496e1465eba5bc();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h75996673e55b6ca6(&v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfb7893ed556afd15(&v3);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9a6d9ec9090c10f3(&v3);
            goto LABEL_4e1511;
            goto LABEL_4e1511;
        }
    }
    if (!(v30 & 2))
    {
        v37 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v3, &v5);
        if (v37)
        {
            v38 = std::path::Path::file_name::h79ecbb7850a9c7f3(v37, v33, v33, v34);
            if (v38)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v38, v33);
                if (!v0 && v24 == 0x8000000000000000)
                {
                    v39 = v2;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf840f8cb0a1a0573(&v0, v39, 0);
                    if (v0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v25, v1, v39);
                    v24 = v1;
                    v25 = v2;
                    v26 = v39;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v6, &v18, &v3, v5);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfb7893ed556afd15(&v3);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9a6d9ec9090c10f3(&v3);
LABEL_4e1511:
    ::0x4e0a00::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hae2089c066dda4ce(&v18);
    if (v11 == 0x8000000000000000)
    {
        v41 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v12);
        if (!(!v41))
            goto LABEL_4e1546;
    }
    else
    {
        v15 = *((long long *)&v10);
        *((int128_t *)&v14) = *((int128_t *)&v9);
        *((int128_t *)&v13) = *((int128_t *)&v8);
        v11 = v6;
        v12 = v7;
        v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, _ZN6uu_tac7options6BEFORE17h3f3bd6670ead6ddeE, g_65ff28);
        v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, _ZN6uu_tac7options5REGEX17hb6042f60831a57ddE, g_65ff38);
        v43 = _ZN6uu_tac7options9SEPARATOR17h591d53fb10a943bcE;
        v44 = g_65ff48;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he4ee7aff7970a8d8(&v18, &v11, v43, v44);
        v45 = clap_builder::parser::error::MatchesError::unwrap::hb088ef719cf2c8c0(v43, v44, &v18);
        if (!v45)
        {
            v47 = "\nTry ' --help' for more information.\n";
            v46 = 1;
        }
        else
        {
            v46 = v45[2];
            v47 = (!v46 ? v45[1] : &g_457847);
        }
        v48 = _ZN6uu_tac7options4FILE17h10913764e7cb87faE;
        v49 = g_65ff58;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4af4d7b37d1f6479(&v18, &v11, v48, v49);
        clap_builder::parser::error::MatchesError::unwrap::h1282202e03e8c5c4(&v6, v48, v49, &v18);
        if (v6)
        {
            v50 = *((int128_t *)&v6);
            v51 = *((int128_t *)&v8);
            *((int128_t *)&v23) = *((int128_t *)&v10);
            *((int128_t *)&v22) = *((int128_t *)&v9);
            v20 = v51;
            v18 = v50;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h26b2be6378755716(&v0, &v18, v33);
        }
        else
        {
            v52 = __rust_alloc(16, 8);
            if (!v52)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v53 = v52;
            v53[0] = "-";
            v53[1] = 1;
            v0 = 1;
            v1[0] = v53;
            v2 = 1;
        }
        v41 = uu_tac::tac::h98a0276331bd63ce(v1, 1, v40, v42, v47, v46 + (v46 < 1));
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8496e1465eba5bc();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7484569a49a1d0ff(&v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h74d485407c740bd2(&v11);
        if (v41)
        {
LABEL_4e1546:
            v3 = v41;
            v4 = v54;
            v6 = &v3;
            v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h2ca69041b48d66e5;
            v18 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v19 = 1;
            v22 = 0;
            v20 = &v6;
            v21 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v16, &v18);
            *((int128_t *)&v6) = *((int128_t *)&v16);
            v8 = *((long long *)&v17);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h80688d0848f8f345(v7, *((long long *)&v17), 1, 0))
            {
                v11 = uucore::util_name::h359eff083fe53467();
                v12 = v33;
                v0 = &v11;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb9edd6e4203da9d7;
                v18 = &g_65d350;
                v19 = 2;
                v22 = 0;
                v20 = &v0;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v56, v33);
                v11 = &v6;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v18 = &g_65d370;
                v19 = 2;
                v22 = 0;
                v20 = &v11;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v56, v33);
            }
            if ((char)v4->field_68(v3))
            {
                v11 = uucore::execution_phrase::hded5ccd87df1fcab();
                v12 = v33;
                v0 = &v11;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb9edd6e4203da9d7;
                v18 = &g_65d390;
                v19 = 2;
                v22 = 0;
                v20 = &v0;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v56, v33);
            }
            v55 = v4->field_60(v3);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8496e1465eba5bc();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h75996673e55b6ca6(&v6);
            v57 = v3;
            v58 = v4;
            if (v58->field_0)
                v59(v57);
            if (v58->field_8)
            {
                __rust_dealloc(v57);
                return v55;
            }
            return v55;
        }
    }
    v55 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v55;
}
