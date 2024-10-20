long long uu_cksum::uumain::h806b52aa8fb5b51c(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x448]
    char v1;  // [bp-0x440]
    char v2;  // [sp-0x412]
    char v3;  // [sp-0x411]
    int v4;  // [bp-0x410], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x408]
    struct_2 *v6;  // [bp-0x400], Other Possible Types: char
    struct_1 *v7;  // [sp-0x3f8], Other Possible Types: unsigned long long
    char v8;  // [bp-0x3f0]
    char v9;  // [bp-0x3e8], Other Possible Types: unsigned long
    struct_1 *v10;  // [bp-0x3e0], Other Possible Types: char
    struct_1 *v11;  // [sp-0x3d8]
    unsigned long v12;  // [sp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x3c8]
    int v14;  // [sp-0x3c0]
    int v15;  // [sp-0x3b0]
    unsigned long long v16;  // [sp-0x3a0]
    char v17;  // [bp-0x398], Other Possible Types: unsigned long, unsigned long long
    struct_2 *v18;  // [sp-0x390], Other Possible Types: struct_1 *, unsigned long, unsigned long long
    struct_1 *v19;  // [bp-0x388], Other Possible Types: char
    int v20;  // [sp-0x380]
    char v21;  // [bp-0x378]
    char v22;  // [bp-0x368]
    int v23;  // [bp-0x358], Other Possible Types: struct struct_0*[7], struct struct_2 **, unsigned long
    unsigned long long v24;  // [sp-0x350]
    unsigned long long v25;  // [sp-0x348]
    char v26;  // [bp-0x310]
    char v27;  // [bp-0x300]
    int v28;  // [bp-0x2f8], Other Possible Types: struct_2 *, char, unsigned long, unsigned long long
    struct_2 *v29;  // [sp-0x2f0], Other Possible Types: struct_1 *, char, unsigned long long
    char v30;  // [bp-0x2ef]
    int v31;  // [sp-0x2e8], Other Possible Types: struct struct_4 **, struct_1 *, unsigned long, unsigned long long
    struct_2 *v32;  // [bp-0x2e0], Other Possible Types: char, unsigned long long
    int v33;  // [sp-0x2d8], Other Possible Types: void*, unsigned long long
    struct_1 *v34;  // [sp-0x2d0]
    int v35;  // [sp-0x2c8], Other Possible Types: unsigned long long
    char v36;  // [sp-0x2c0]
    char v37;  // [sp-0x2bf]
    char v38;  // [sp-0x2be]
    struct_2 *v40;  // r12
    char v41;  // bpl
    struct_3 *v42;  // rax
    struct_2 *v43;  // rax
    struct_1 *v44;  // rax
    struct_1 *v45;  // rdx
    struct_1 *v46;  // rax
    unsigned long long v47;  // r15
    struct_1 *v48;  // r13
    unsigned long long v49;  // r15
    unsigned long long v50;  // r15
    unsigned long long v51;  // r13
    unsigned int v53;  // rcx
    unsigned int v54;  // r8
    unsigned int v55;  // r9
    unsigned long v56;  // rsi
    unsigned int v57;  // rcx
    unsigned int v58;  // r8
    unsigned int v59;  // r9
    int v60;  // xmm0
    int v61;  // xmm1
    int v62;  // xmm2
    unsigned int v63;  // eax
    struct_2 *v64;  // r14
    struct_1 *v65;  // r15
    struct struct_0 **v66;  // rax

    uu_cksum::uu_app::hcb7429ece272dff4(&v28);
    clap_builder::builder::command::Command::try_get_matches_from::hdb50ca7bd42f02d8(&v17, &v28, a0, a1);
    if (v12 == 0x8000000000000000)
    {
        v40 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v13);
        if (!v40)
        {
            vvar_1049{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v63;
        }
        goto LABEL_4fa2a1;
    }
    else
    {
        v16 = *((long long *)&v22);
        *((int128_t *)&v15) = *((int128_t *)&v21);
        *((int128_t *)&v14) = *((int128_t *)&v19);
        v12 = v17;
        v13 = v18;
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "checkalgorithmlengthrawbase64binarystrictstatusignore-missingquiet", 5);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h911b2d90ff8f6eac(&v28, &v12, "algorithmlengthrawbase64binarystrictstatusignore-missingquiet", 9);
        v42 = clap_builder::parser::error::MatchesError::unwrap::h87c6f93cd69d58b7("algorithmlengthrawbase64binarystrictstatusignore-missingquiet", 9, &v28);
        if (v42)
        {
            *((int128_t *)&v4) = *((int128_t *)&(&v42->padding_0)[1]);
            if (!((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h39fe3fc3accc4170(&v4, &g_6c7a18, 3) & v41))
                goto LABEL_4fa08d;
        }
        else
        {
            if (!v41)
            {
                v4 = "crcbsd";
                v5 = 3;
                _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h39fe3fc3accc4170(&v4, &g_6c7a18, 3);
                goto LABEL_4fa08d;
            }
            v4 = 1;
            v5 = 0;
            if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h39fe3fc3accc4170(&v4, &g_6c7a18, 3))
            {
LABEL_4fa08d:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb1615db8031fbf5f(&v28, &v12, "lengthrawbase64binarystrictstatusignore-missingquiet", 6);
                v44 = clap_builder::parser::error::MatchesError::unwrap::h66f8fa85b8f6b40d("lengthrawbase64binarystrictstatusignore-missingquiet", 6, &v28);
                if (!v44)
                {
                    v40 = 0;
                    goto LABEL_4fa129;
                }
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(v4, v5, "blake2b * (Try ' --help' for more information.\n", 7))
                {
                    v28 = 9223372036854775818;
                    v43 = __rust_alloc(24, 8);
                    if (!v43)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    goto LABEL_4fa26a;
                }
                uucore::features::checksum::calculate_blake2b_length::h70763ca3a5c6b53a(&v28, v44->field_0, v45);
                v40 = v29;
                v44 = v31;
                if (v28)
                    goto LABEL_4fa28e;
LABEL_4fa129:
                v11 = v44;
                if (!v41)
                {
                    uu_cksum::handle_tag_text_binary_flags::h11fb4f080ebf8025(&v28, &v12);
                    v40 = v28;
                    if (v40)
                    {
                        v46 = v29;
                    }
                    else
                    {
                        v2 = v29;
                        v3 = v30;
                        uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v28, v4, v5, v40, v11);
                        v47 = v28;
                        v40 = v29;
                        v48 = v31;
                        if (v47)
                        {
                            *((int128_t *)&v20) = *((int128_t *)&v32);
                            v17 = v47;
                            v18 = v40;
                            v19 = v48;
                            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "rawbase64binarystrictstatusignore-missingquiet", 3))
                                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "base64binarystrictstatusignore-missingquiet", 6);
                            v9 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::h493785ebbfd36630(&v19);
                            v10 = v45;
                            v51 = (long long)(&v20)[8];
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc2b1f5be1545f3c5(&v28, &v12, "filemode{", 4);
                            clap_builder::parser::error::MatchesError::unwrap::ha6d4b9ea4d8058d2(v23, "filemode{", 4, &v28);
                            if (!v23)
                            {
                                v28 = v40;
                                v29 = v11;
                                v31 = v47;
                                v32 = v40;
                                v33 = v9;
                                v34 = v10;
                                v35 = v51;
                                v36 = v2;
                                v37 = v3;
                                v38 = 1;
                                v40 = uu_cksum::cksum::h270f0d3ee6f4e986(&v28, v56, v45, v57, v58, v59);
                            }
                            else
                            {
                                v28 = v40;
                                v29 = v11;
                                v31 = v47;
                                v32 = v40;
                                v33 = v9;
                                v34 = v10;
                                v35 = v51;
                                v36 = v2;
                                v37 = v3;
                                v38 = 1;
                                v40 = uu_cksum::cksum::hb6ce13f943bb3d18(&v28, v23, v45, v53, v54, v55);
                            }
                            if (!v40)
                            {
                                core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::hfe6a57266322c9e7(v19, (long long)v20);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he40ea8929eef1d45(&v12);
                                vvar_1044{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
                                return v63;
                            }
                            core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::hfe6a57266322c9e7(v19, (long long)v20);
                        }
                    }
LABEL_4fa28e:
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he40ea8929eef1d45(&v12);
                    if (!v40)
                    {
                        v63 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                        return v63;
                    }
                }
                else
                {
                    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "strictstatusignore-missingquiet", 6);
                    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "statusignore-missingquiet", 6);
                    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "warnZeroV", 4);
                    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "ignore-missingquiet", 14);
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "quiet", 5);
                    if (((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "textSomee", 4) | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, "binarystrictstatusignore-missingquiet", 6)) != 1)
                    {
                        v49 = v5;
                        if (v49)
                            v50 = v4;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc2b1f5be1545f3c5(&v28, &v12, "filemode{", 4);
                        clap_builder::parser::error::MatchesError::unwrap::ha6d4b9ea4d8058d2(&v17, "filemode{", 4, &v28);
                        if (!v17)
                        {
                            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1c0f65d929d869ec(&v6, "-: \ncrcbsd", 1);
                        }
                        else
                        {
                            v60 = *((int128_t *)&v17);
                            v61 = *((int128_t *)&v19);
                            v62 = *((int128_t *)&v21);
                            *((int128_t *)&v35) = *((int128_t *)&v22);
                            v33 = v62;
                            v31 = v61;
                            v28 = v60;
                            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1a8ec3febed40c9a(&v6, &v28, v45);
                        }
                        v40 = uucore::features::checksum::perform_checksum_validation::hcc20295ed017b58a(v7, *((long long *)&v8) * 16 + v7, v3, v2, v10, 0, v0, v1, v50, v49, v40, v11);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9278caf5fe72a763(&v6);
                        goto LABEL_4fa28e;
                    }
                    else
                    {
                        v28 = 9223372036854775819;
                        v43 = __rust_alloc(24, 8);
                        if (!v43)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    }
LABEL_4fa26a:
                    v40 = v43;
                    v40->field_10 = v31;
                    v40->field_0 = *((int128_t *)&v28);
                    goto LABEL_4fa28e;
                }
LABEL_4fa2a1:
                v6 = v40;
                v7 = &g_6c7600.field_0;
                v23 = &v6;
                v24 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcc4aa3174c86439f;
                v28 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v29 = 1;
                v33 = 0;
                *((struct struct_0 *[7])&v31) = v23;
                v32 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v26, &v28);
                *((int128_t *)&v23) = *((int128_t *)&v26);
                v25 = *((long long *)&v27);
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b34d8993ad0add6(v24, *((long long *)&v27), 1, 0))
                {
                    v17 = uucore::util_name::h359eff083fe53467();
                    v18 = v45;
                    v12 = &v17;
                    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                    v28 = &g_6c79d8;
                    v29 = 2;
                    v33 = 0;
                    v31 = &v12;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v28, v56, v45);
                    *((struct struct_0 *[7])&v17) = v23;
                    v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v28 = &g_6c78f0;
                    v29 = 2;
                    v33 = 0;
                    v31 = &v17;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v28, v56, v45);
                }
                if ((char)v7->field_68(v6))
                {
                    v17 = uucore::execution_phrase::hded5ccd87df1fcab();
                    v18 = v45;
                    v12 = &v17;
                    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he27513d365b32725;
                    v28 = &g_6c79f8;
                    v29 = 2;
                    v33 = 0;
                    v31 = &v12;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v28, v56, v45);
                }
                v63 = v7->field_60(v6);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6cb72440aee0566();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd7acbc74dd17aa1a(v23);
                v64 = v6;
                v65 = v7;
                if (v65->field_0)
                    v66(v64);
                if (v65->field_8)
                {
                    __rust_dealloc(v64);
                    return v63;
                }
                return v63;
            }
        }
        v28 = 9223372036854775820;
        v43 = __rust_alloc(24, 8);
        if (!v43)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        goto LABEL_4fa26a;
    }
}
