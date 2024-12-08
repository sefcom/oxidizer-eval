long long uu_cksum::uumain::uumain::h39f1ce5cedfc227c(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x3da]
    char v1;  // [sp-0x3d9]
    int v2;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x3d0]
    unsigned long long v4;  // [sp-0x3c8]
    unsigned long long v5;  // [sp-0x3c0]
    unsigned long v6;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x3a8]
    int v8;  // [sp-0x3a0]
    int v9;  // [sp-0x390]
    unsigned long long v10;  // [sp-0x380]
    char v11;  // [bp-0x378], Other Possible Types: unsigned long, unsigned long long
    unsigned long v12;  // [sp-0x370], Other Possible Types: unsigned long long
    char v13;  // [bp-0x368], Other Possible Types: unsigned long, unsigned long long
    int v14;  // [sp-0x360]
    char v15;  // [bp-0x358]
    char v16;  // [bp-0x348]
    char v17;  // [bp-0x338], Other Possible Types: unsigned long long, unsigned long
    char v18;  // [sp-0x330], Other Possible Types: unsigned long, unsigned long long
    char v19;  // [bp-0x32f]
    unsigned long v20;  // [sp-0x328], Other Possible Types: unsigned long long
    char v21;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x318]
    unsigned long long v23;  // [sp-0x310]
    unsigned long long v24;  // [sp-0x308]
    char v25;  // [sp-0x300]
    char v26;  // [sp-0x2ff]
    char v27;  // [sp-0x2fe]
    char v28;  // [sp-0x2fd]
    char v29;  // [bp-0x70]
    void* v31;  // rax
    char v32;  // bpl
    struct_0 *v33;  // rax
    unsigned long long *v34;  // rax
    unsigned long v35;  // rdx
    unsigned long long v36;  // r13
    char v39;  // r14b
    unsigned long long v41;  // r13
    unsigned long long v42;  // r13
    unsigned long long v44;  // r12
    unsigned int v45;  // rcx
    unsigned int v46;  // r8
    unsigned int v47;  // r9
    unsigned int v48;  // rsi
    unsigned int v49;  // rcx
    unsigned int v50;  // r8
    unsigned int v51;  // r9

    uu_cksum::uu_app::h2eabcc503c542a75(&v17, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h9ae03f9711af1574(&v11, &v17, a0, a1);
    if (v6 == 0x8000000000000000)
    {
        v31 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v7);
        return v31;
    }
    v10 = *((long long *)&v16);
    *((int128_t *)&v9) = *((int128_t *)&v15);
    *((int128_t *)&v8) = *((int128_t *)&v13);
    v6 = v11;
    v7 = v12;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "checkalgorithmlengthrawbase64binarystrictstatusignore-missingquiet", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha19a73f36b154c64(&v17, &v6, "algorithmlengthrawbase64binarystrictstatusignore-missingquiet", 9);
    v33 = clap_builder::parser::error::MatchesError::unwrap::h10a521b06caaa119("algorithmlengthrawbase64binarystrictstatusignore-missingquiet", 9, &v17);
    if (v33)
    {
        *((int128_t *)&v2) = *((int128_t *)&(&v33->padding_0)[1]);
        if (!((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h03670d75930ab904(&v2, &g_753608, 3) & v32))
            goto LABEL_5807a9;
    }
    else if (!v32)
    {
        v2 = "crcbsd";
        v3 = 3;
        _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h03670d75930ab904(&v2, &g_753608, 3);
        goto LABEL_5807a9;
    }
    else
    {
        v2 = 1;
        v3 = 0;
        if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h03670d75930ab904(&v2, &g_753608, 3))
        {
LABEL_5807a9:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hd49b9c14956a2e83(&v17, &v6, "lengthrawbase64binarystrictstatusignore-missingquiet", 6);
            v34 = clap_builder::parser::error::MatchesError::unwrap::h3ed3d1f419fff693("lengthrawbase64binarystrictstatusignore-missingquiet", 6, &v17);
            if (!v34)
            {
                v31 = 0;
                goto LABEL_580843;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd4d454806cea8b4a(v2, v3, "blake2b * (BLAKE2b (", 7))
            {
                uucore::features::checksum::calculate_blake2b_length::h78298dc6c9f22978(&v17, *(v34), v35);
                if (v17)
                {
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0eea99783dc8e538(&v6);
                    return v31;
                }
LABEL_580843:
                v4 = v20;
                if (!v32)
                {
                    uu_cksum::handle_tag_text_binary_flags::hdee42a5f41454efa(&v17, &v6);
                    v31 = v17;
                    if (!v31)
                    {
                        v0 = v18;
                        v1 = v19;
                        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v17, v2, v3, v31, v4);
                        v36 = v17;
                        v31 = v18;
                        if (v36)
                        {
                            *((int128_t *)&v14) = *((int128_t *)&v21);
                            v11 = v36;
                            v12 = v31;
                            v13 = v20;
                            v39 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "zeroAnsib", 4) ? 0 : 10);
                            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "rawbase64binarystrictstatusignore-missingquiet", 3))
                                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "base64binarystrictstatusignore-missingquiet", 6);
                            v5 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::hf5d65005833dd382(&v13);
                            v44 = (long long)(&v14)[8];
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7bff6ce4c2873676(&v17, &v6, "filemode{", 4);
                            clap_builder::parser::error::MatchesError::unwrap::h3a656f9955713201(&v29, "filemode{", 4, &v17);
                            if (!*((long long *)&v29))
                            {
                                v17 = v31;
                                v18 = v4;
                                v20 = v36;
                                v21 = v31;
                                v22 = v5;
                                v23 = v35;
                                v24 = v44;
                                v25 = v0;
                                v26 = v1;
                                v27 = 1;
                                v28 = v39;
                                v31 = uu_cksum::cksum::hbbb168f1d4a64beb(&v17, v48, v35, v49, v50, v51);
                            }
                            else
                            {
                                v17 = v31;
                                v18 = v4;
                                v20 = v36;
                                v21 = v31;
                                v22 = v5;
                                v23 = v35;
                                v24 = v44;
                                v25 = v0;
                                v26 = v1;
                                v27 = 1;
                                v28 = v39;
                                v31 = uu_cksum::cksum::h84c52c623dfbfeaf(&v17, &v29, v35, v45, v46, v47);
                            }
                            if (!v31)
                            {
                                core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::he521967f215a0a6d(v13, (long long)v14);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0eea99783dc8e538(&v6);
                                return 0;
                            }
                            core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::he521967f215a0a6d(v13, (long long)v14);
                        }
                    }
                }
                else
                {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "strictstatusignore-missingquiet", 6);
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "statusignore-missingquiet", 6);
                    if (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "textSomee", 4) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "binarystrictstatusignore-missingquiet", 6)))
                    {
                        alloc::boxed::Box$LT$T$GT$::new::hee21ddfa6f69c7e8(12);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0eea99783dc8e538(&v6);
                        return v31;
                    }
                    v41 = v3;
                    if (v41)
                        v42 = v2;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7bff6ce4c2873676(&v17, &v6, "filemode{", 4);
                    clap_builder::parser::error::MatchesError::unwrap::h3a656f9955713201(&v11, "filemode{", 4, &v17);
                    core::option::Option$LT$T$GT$::map_or_else::h018273e75243f856(&v17, &v11, v35);
                    v31 = uucore::features::checksum::perform_checksum_validation::h0abcb9e0ac3f59b7(v18, v20 * 16 + v18, v42, v41, v31, v4, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "warnZeroV", 4) * 0x10000000000 | v1 * 0x100000000 | v0 * 0x1000000 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "ignore-missingquiet", 14) * 0x100 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v6, "quiet", 5) * 0x10000);
                    ::0x57c6c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h28e081b26be00f17(&v17);
                }
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0eea99783dc8e538(&v6);
                return v31;
            }
        }
    }
    alloc::boxed::Box$LT$T$GT$::new::hee21ddfa6f69c7e8(12);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0eea99783dc8e538(&v6);
    return v31;
}
