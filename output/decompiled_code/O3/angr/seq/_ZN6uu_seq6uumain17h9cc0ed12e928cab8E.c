long long uu_seq::uumain::h9cc0ed12e928cab8(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x588]
    unsigned long long v1;  // [sp-0x578]
    char v2;  // [bp-0x560]
    char v3;  // [bp-0x558]
    char v4;  // [bp-0x550]
    struct struct_1 **v5;  // [bp-0x548], Other Possible Types: int, char, unsigned long, unsigned long long
    int v6;  // [sp-0x540], Other Possible Types: void*, unsigned long, unsigned long long
    struct_3 *v7;  // [bp-0x538], Other Possible Types: char, unsigned long long
    int v8;  // [bp-0x530], Other Possible Types: char
    char v9;  // [bp-0x528]
    int v10;  // [sp-0x520]
    char v11;  // [bp-0x518]
    int v12;  // [sp-0x510]
    int v13;  // [sp-0x4f8], Other Possible Types: unsigned long, unsigned long long
    void* v14;  // [sp-0x4f0]
    int v15;  // [bp-0x4e8], Other Possible Types: struct_3 *
    int v16;  // [sp-0x4d8]
    unsigned long long v17;  // [sp-0x4c8]
    int v18;  // [bp-0x4b8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x4b0]
    struct_3 *v20;  // [sp-0x4a8]
    int v21;  // [sp-0x4a0]
    struct_3 *v22;  // [sp-0x490]
    unsigned long long v23;  // [sp-0x488]
    struct_3 *v24;  // [sp-0x480]
    char v25;  // [sp-0x478]
    int v26;  // [bp-0x468], Other Possible Types: char
    int v27;  // [sp-0x458]
    int v28;  // [sp-0x448]
    unsigned long long v29;  // [sp-0x438]
    int v30;  // [bp-0x428], Other Possible Types: char
    int v31;  // [bp-0x418], Other Possible Types: char
    int v32;  // [bp-0x408], Other Possible Types: char
    int v33;  // [sp-0x3f8]
    int v34;  // [sp-0x3e8]
    unsigned long long v35;  // [sp-0x3d8]
    uint128_t v36[2];  // [bp-0x3d0], Other Possible Types: char, unsigned long
    struct_4 *v37;  // [sp-0x3c8]
    char v38;  // [bp-0x3c0]
    char v39;  // [bp-0x3b0]
    char v40;  // [bp-0x3a0]
    unsigned long v41;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v42;  // [sp-0x388]
    int v43;  // [sp-0x380]
    int v44;  // [sp-0x370]
    unsigned long long v45;  // [sp-0x360]
    int v46;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned long long v47;  // [sp-0x350]
    int v48;  // [sp-0x348]
    int v49;  // [sp-0x338]
    int v50;  // [sp-0x328]
    int v51;  // [bp-0x318], Other Possible Types: char, unsigned long, unsigned long long
    int v52;  // [sp-0x310], Other Possible Types: char, unsigned long, unsigned long long
    struct struct_2 **v53;  // [bp-0x308], Other Possible Types: int, char, unsigned long, unsigned long long
    struct_3 *v54;  // [sp-0x300], Other Possible Types: unsigned long long
    void* v55;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    int v56;  // [sp-0x2f0]
    char v57;  // [bp-0x2e8]
    int v58;  // [sp-0x2e0]
    unsigned long long v59;  // [sp-0x2d0]
    int v60;  // [sp-0x2c8]
    int v61;  // [sp-0x2b8]
    unsigned long long v62;  // [sp-0x2a8]
    char v63;  // [bp-0x48]
    char v64;  // [bp-0x38]
    uint128_t v66[2];  // r14
    int v67;  // xmm1
    int v68;  // xmm2
    int v69;  // xmm3
    struct_3 *v70;  // rax
    int v71;  // xmm0
    struct_4 *v72;  // r15
    void* v73;  // r15
    struct_3 *v74;  // rax
    void* v75;  // rcx
    struct_3 *v77;  // rax
    void* v78;  // rcx
    unsigned long long v79[3];  // rax
    char v80;  // bl
    unsigned long long v81[3];  // rax
    uint128_t v82[2];  // rax
    int v83;  // xmm0
    char v84;  // bpl
    void* v86;  // rcx
    int v87;  // xmm0
    unsigned long long v88;  // r14
    struct struct_5 **v89;  // r14
    unsigned long long v90[3];  // rax
    int v91;  // xmm0
    int v96;  // xmm0
    int v97;  // xmm1
    char v98;  // bpl
    unsigned long long v101;  // rax
    unsigned long long v102;  // rcx
    unsigned long long v103;  // rax
    int v104;  // xmm0
    unsigned long long v105;  // r14
    unsigned int v106;  // eax
    unsigned long long v107;  // rdx
    unsigned long long v108;  // rsi
    uint128_t v109[2];  // r14
    struct_4 *v110;  // r15
    struct struct_0 **v111;  // rax

    uu_seq::uu_app::h98aebde8d888706f(&v51);
    clap_builder::builder::command::Command::try_get_matches_from::h782622335c792416(&v5, &v51, a0, a1);
    if (v41 == 0x8000000000000000)
    {
        v66 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v42);
        if (!v66)
        {
            uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v106;
        }
        goto LABEL_444c30;
    }
    v45 = *((long long *)&v11);
    *((int128_t *)&v44) = *((int128_t *)&v9);
    *((int128_t *)&v43) = *((int128_t *)&v7);
    v41 = v5;
    v42 = v6;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6fa91dbd580631fd(&v51, &v41, "numbersseparatorterminatorequal-widthformat/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 7);
    clap_builder::parser::error::MatchesError::unwrap::hac5599b9ed9425a0(&v36, "numbersseparatorterminatorequal-widthformat/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 7, &v51);
    if (!v36)
    {
        v51 = 9223372036854775809;
        v66 = __rust_alloc(32, 8);
        if (!v66)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v71 = *((int128_t *)&v51);
        v66[1] = *((int128_t *)&v53);
        *((void*)&v66[0]) = v71;
        v72 = &g_504630.field_0;
LABEL_445639:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7cbbb4bb9aa62acf(&v41);
        if (!v66)
        {
            uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v106;
        }
    }
    else
    {
        v67 = *((int128_t *)&v38);
        v68 = *((int128_t *)&v39);
        v69 = *((int128_t *)&v40);
        *((int128_t *)&v46) = *((int128_t *)&v36);
        v48 = v67;
        v49 = v68;
        v50 = v69;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1704d573229cb0a0(&v2, &v46);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb1293e31aaf4b961(&v51, &v41, "separatorterminatorequal-widthformat/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 9);
        v70 = clap_builder::parser::error::MatchesError::unwrap::h0c8c66e8c1b4a226("separatorterminatorequal-widthformat/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 9, &v51);
        if (v70)
        {
            v73 = v70->field_8;
            v70 = v70->field_10;
        }
        else
        {
            v73 = 0;
        }
        if (!v73)
            v70 = 1;
        if (!v73)
            v73 = "\nTry ' --help' for more information.\n";
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h5141cc0951311e9f(&v51, v70, 0);
        if (v51)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        memcpy(v14, v73, v70);
        v13 = v52;
        v14 = v53;
        v15 = v70;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb1293e31aaf4b961(&v51, &v41, "terminatorequal-widthformat/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 10);
        v74 = clap_builder::parser::error::MatchesError::unwrap::h0c8c66e8c1b4a226("terminatorequal-widthformat/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 10, &v51);
        if (v74)
        {
            v75 = v74->field_8;
            v74 = v74->field_10;
        }
        else
        {
            v75 = 0;
        }
        if (!v75)
            v74 = 1;
        if (!v75)
            v75 = "\nTry ' --help' for more information.\n";
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h5141cc0951311e9f(&v51, v74, 0);
        if (v51)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        memcpy(v6, v75, v74);
        v5 = v52;
        v6 = v53;
        v7 = v74;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb1293e31aaf4b961(&v51, &v41, "format/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 6);
        v77 = clap_builder::parser::error::MatchesError::unwrap::h0c8c66e8c1b4a226("format/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 6, &v51);
        if (v77)
        {
            v78 = v77->field_8;
            v77 = v77->field_10;
        }
        else
        {
            v78 = 0;
        }
        v20 = v15;
        *((int128_t *)&v18) = *((int128_t *)&v13);
        *((int128_t *)&v21) = *((int128_t *)&v5);
        v22 = v7;
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v41, "equal-widthformat/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/seq/src/seq.rs", 11);
        v23 = v78;
        v24 = v77;
        if (*((long long *)&v4) <= 1)
        {
            uu_seq::number::PreciseNumber::one::h07a637167474b901(&v32);
            if (*((long long *)&v4) <= 2)
                goto LABEL_4453f5;
LABEL_4452ee:
            v81 = *((long long *)(*((long long *)&v3) + 8));
            uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h0cf7f2582641e9ad(&v51, v81[1], v81[2]);
            if (v51 != 9223372036854775812)
            {
                v29 = *((long long *)&v57);
                *((int128_t *)&v28) = *((int128_t *)&v55);
                *((int128_t *)&v27) = *((int128_t *)&v53);
                *((int128_t *)&v26) = *((int128_t *)&v51);
                goto LABEL_445445;
            }
            else
            {
                if (*((long long *)&v4) <= 1)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v84 = (&v51)[1];
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v13, *((long long *)(*((long long *)&v3) + 8)));
                v7 = v15;
                *((int128_t *)&v5) = *((int128_t *)&v13);
                v8 = v84;
                v82 = __rust_alloc(32, 8);
                if (!v82)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v87 = (int128_t)v5;
                v82[1] = *((int128_t *)&v7);
                *((void*)&v82[0]) = v87;
                v72 = &g_504630.field_0;
                goto LABEL_4455f0;
            }
        }
        v79 = *((long long *)*((long long *)&v3));
        uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h0cf7f2582641e9ad(&v51, v79[1], v79[2]);
        if (v51 == 9223372036854775812)
        {
            if (!*((long long *)&v4))
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v80 = v52;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v13, *((long long *)*((long long *)&v3)));
            v7 = v15;
            *((int128_t *)&v5) = *((int128_t *)&v13);
            v8 = v80;
            v82 = __rust_alloc(32, 8);
            if (!v82)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v83 = (int128_t)v5;
            v82[1] = *((int128_t *)&v7);
            *((void*)&v82[0]) = v83;
            v72 = &g_504630.field_0;
LABEL_445618:
            core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h0190bb565c92313b(&v18);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he0af1bb8e8e7cd6c();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8873441532df0a87(&v2);
            goto LABEL_445639;
        }
        v35 = *((long long *)&v57);
        *((int128_t *)&v34) = *((int128_t *)&v55);
        *((int128_t *)&v33) = *((int128_t *)&v53);
        *((int128_t *)&v32) = *((int128_t *)&v51);
        if (!(*((long long *)&v4) <= 2))
            goto LABEL_4452ee;
LABEL_4453f5:
        uu_seq::number::PreciseNumber::one::h07a637167474b901(&v26);
LABEL_445445:
        switch (v86)
        {
        case 0:
            if ((char)(&v27)[8] == 1)
                goto LABEL_445472;
            goto LABEL_445500;
        case 3:
LABEL_445472:
            if (*((long long *)&v4) < 2)
            {
                break;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v5, *((long long *)(*((long long *)&v3) + 8)));
                v54 = v7;
                *((int128_t *)&v52) = *((int128_t *)&v5);
                v51 = 0x8000000000000000;
                v82 = __rust_alloc(32, 8);
                if (!v82)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v96 = *((int128_t *)&v51);
                v97 = (int128_t)(&v52)[8];
                goto LABEL_4455b8;
            }
        default:
LABEL_445500:
            v88 = *((long long *)&v4);
            v89 = v88 - 1;
            if (v88 < 1)
                break;
            v90 = *((long long *)(*((long long *)&v3) + v89 * 8));
            uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h0cf7f2582641e9ad(&v51, v90[1], v90[2]);
            if (v51 != 9223372036854775812)
            {
                v17 = *((long long *)&v57);
                v91 = *((int128_t *)&v51);
                *((int128_t *)&v16) = *((int128_t *)&v55);
                *((int128_t *)&v15) = *((int128_t *)&v53);
                v13 = v91;
                if (!v23)
                {
                    v103 = 0x8000000000000000;
                    goto LABEL_4457d8;
                }
                uucore::features::format::Format$LT$F$GT$::parse::hdaeef79b6e92e7e5(&v51, v23, v24);
                v103 = v51;
                *((int128_t *)&v30) = *((int128_t *)&(&v51)[1]);
                *((int128_t *)&v31) = *((int128_t *)&(&v53)[1]);
                if (v103 != 0x8000000000000000)
                {
                    v12 = v58;
                    v10 = v56;
                    v6 = v30;
                    v8 = v31;
LABEL_4457d8:
                    v5 = v103;
                    v55 = (long long)v34;
                    v53 = v33;
                    v51 = v32;
                    v56 = v26;
                    v58 = v27;
                    v59 = (long long)v28;
                    *((int128_t *)&v60) = (int128_t)v13;
                    *((int128_t *)&v61) = (int128_t)v15;
                    v62 = (long long)v16;
                    v1 = &v5;
                    v0 = v25;
                    v105 = uu_seq::print_seq::hfba71258b667ccdd(&v51, v102, v19, v20, (long long)(&v21)[8], v22, v0, v101);
                    if (!v105)
                    {
LABEL_4458cc:
                        v66 = 0;
                    }
                    else if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v105) != 11)
                    {
                        v66 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hcc29338c10e512db(v105);
                    }
                    else
                    {
                        ::0x444380::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h95f6caab9b90f06a(v105);
                        goto LABEL_4458cc;
                    }
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..Float$GT$$GT$$GT$::h94e5bb8feb8fb69c(&v5);
                    core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h0190bb565c92313b(&v18);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he0af1bb8e8e7cd6c();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8873441532df0a87(&v2);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7cbbb4bb9aa62acf(&v41);
                    v72 = &g_5046f0.field_0;
                    if (!v66)
                    {
                        v106 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                        return v106;
                    }
                }
                else
                {
                    v53 = v31;
                    v51 = v30;
                    v82 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                    v104 = (int128_t)v51;
                    v82[1] = (int128_t)v53;
                    *((void*)&v82[0]) = v104;
                    core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h54b6678718ea343c(&v13);
                    v72 = &g_504798.field_0;
                    if ((long long)v26 > 9223372036854775811)
                    {
LABEL_4455d6:
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he0af1bb8e8e7cd6c();
                        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8873441532df0a87(&v26);
                    }
                    goto LABEL_4455f0;
                }
            }
            else
            {
                if (v89 >= *((long long *)&v4))
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v98 = (&v51)[1];
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v30, *((long long *)(*((long long *)&v3) + v89 * 8)));
                v7 = *((long long *)&v31);
                v5 = v30;
                v8 = v98;
                v82 = __rust_alloc(32, 8);
                if (!v82)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_4455b8:
                *((void*)&v82[1]) = v97;
                *((void*)&v82[0]) = v96;
                v72 = &g_504630.field_0;
                if (!((long long)v26 <= 9223372036854775811))
                    goto LABEL_4455d6;
LABEL_4455f0:
                if ((long long)v32 > 9223372036854775811)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he0af1bb8e8e7cd6c();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8873441532df0a87(&v32);
                }
                goto LABEL_445618;
            }
        }
    }
LABEL_444c30:
    *((uint128_t *[2])&v36[0]) = v66;
    v37 = v72;
    v5 = &v36;
    v6 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hfa0f761aa0eab25c;
    v51 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v52 = 1;
    v55 = 0;
    v53 = &v5;
    v54 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v63, &v51);
    *((int128_t *)&v5) = *((int128_t *)&v63);
    v7 = *((long long *)&v64);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h90daea65fb1e2960(v6, *((long long *)&v64), 1, 0))
    {
        v18 = uucore::util_name::h359eff083fe53467();
        v19 = v107;
        v46 = &v18;
        v47 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2e87279f7991f426;
        v51 = &g_504580;
        v52 = 2;
        v55 = 0;
        v53 = &v46;
        v54 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v51, v108, v107);
        v18 = &v5;
        v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v51 = &g_5045a0;
        v52 = 2;
        v55 = 0;
        v53 = &v18;
        v54 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v51, v108, v107);
    }
    if ((char)v37->field_68(v36))
    {
        v18 = uucore::execution_phrase::hded5ccd87df1fcab();
        v19 = v107;
        v46 = &v18;
        v47 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2e87279f7991f426;
        v51 = &g_5045c0;
        v52 = 2;
        v55 = 0;
        v53 = &v46;
        v54 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v51, v108, v107);
    }
    v106 = v37->field_60(v36);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he0af1bb8e8e7cd6c();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha25497d839275a68(&v5);
    v109 = v36;
    v110 = v37;
    if (v110->field_0)
        v111(v109);
    if (v110->field_8)
    {
        __rust_dealloc(v109);
        return v106;
    }
    return v106;
}
