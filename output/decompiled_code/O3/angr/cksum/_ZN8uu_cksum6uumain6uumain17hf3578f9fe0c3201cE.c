long long uu_cksum::uumain::uumain::hf3578f9fe0c3201c(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
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
    unsigned long v31;  // r8
    unsigned long v32;  // r9
    void* v33;  // rax
    char v34;  // bpl
    struct_0 *v35;  // rax
    unsigned long long *v36;  // rax
    unsigned long v37;  // rdx
    unsigned long long v38;  // r13
    char v41;  // r14b
    unsigned long long v43;  // r13
    unsigned long long v44;  // r13
    unsigned long long v46;  // r12
    unsigned int v47;  // rcx
    unsigned int v48;  // rsi
    unsigned int v49;  // rcx

    uu_cksum::uu_app::hbfb998c9a541210b(&v17, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hb83dbc2a0c900676(&v11, &v17, a0, a1, v31, v32);
    if (v6 == 0x8000000000000000)
    {
        v33 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v7);
        return v33;
    }
    v10 = *((long long *)&v16);
    *((int128_t *)&v9) = *((int128_t *)&v15);
    *((int128_t *)&v8) = *((int128_t *)&v13);
    v6 = v11;
    v7 = v12;
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "checkrawbase64binarystrictstatusignore-missingquiet", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2dbf6ab7fc702809(&v17, &v6, "algorithmlengthcheckrawbase64binarystrictstatusignore-missingquiet", 9);
    v35 = clap_builder::parser::error::MatchesError::unwrap::h7eb1f01738a0eeba("algorithmlengthcheckrawbase64binarystrictstatusignore-missingquiet", 9, &v17);
    if (v35)
    {
        *((int128_t *)&v2) = *((int128_t *)&(&v35->padding_0)[1]);
        if (!((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&v2, &g_752958, 3) & v34))
            goto LABEL_580869;
    }
    else if (!v34)
    {
        v2 = "crcbsdblake2b  (BLAKE2b (";
        v3 = 3;
        _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&v2, &g_752958, 3);
        goto LABEL_580869;
    }
    else
    {
        v2 = 1;
        v3 = 0;
        if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&v2, &g_752958, 3))
        {
LABEL_580869:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha144a8fbf7eefe4d(&v17, &v6, "lengthcheckrawbase64binarystrictstatusignore-missingquiet", 6);
            v36 = clap_builder::parser::error::MatchesError::unwrap::h0c465a2b7c337f9c("lengthcheckrawbase64binarystrictstatusignore-missingquiet", 6, &v17);
            if (!v36)
            {
                v33 = 0;
                goto LABEL_580903;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v2, v3, "blake2b  (BLAKE2b (", 7))
            {
                uucore::features::checksum::calculate_blake2b_length::h2a821e36733dba3a(&v17, *(v36), v37);
                if (v17)
                {
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b2259fb47b2f9be(&v6);
                    return v33;
                }
LABEL_580903:
                v4 = v20;
                if (!v34)
                {
                    uu_cksum::handle_tag_text_binary_flags::h54d38c67ed693625(&v17, &v6);
                    v33 = v17;
                    if (!v33)
                    {
                        v0 = v18;
                        v1 = v19;
                        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v17, v2, v3, v33, v4);
                        v38 = v17;
                        v33 = v18;
                        if (v38)
                        {
                            *((int128_t *)&v14) = *((int128_t *)&v21);
                            v11 = v38;
                            v12 = v33;
                            v13 = v20;
                            v41 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "zeroAnsib", 4) ? 0 : 10);
                            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "rawbase64binarystrictstatusignore-missingquiet", 3))
                                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "base64binarystrictstatusignore-missingquiet", 6);
                            v5 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::h265c500e1079a618(&v13);
                            v46 = (long long)(&v14)[8];
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h30811e089b0b91d0(&v17, &v6, "filemode{", 4);
                            clap_builder::parser::error::MatchesError::unwrap::h1d7ac479b1fc21b9(&v29, "filemode{", 4, &v17);
                            if (!*((long long *)&v29))
                            {
                                v17 = v33;
                                v18 = v4;
                                v20 = v38;
                                v21 = v33;
                                v22 = v5;
                                v23 = v37;
                                v24 = v46;
                                v25 = v0;
                                v26 = v1;
                                v27 = 1;
                                v28 = v41;
                                v33 = uu_cksum::cksum::h3bc15d2c96f4f009(&v17, v48, v37, v49, v31, v32);
                            }
                            else
                            {
                                v17 = v33;
                                v18 = v4;
                                v20 = v38;
                                v21 = v33;
                                v22 = v5;
                                v23 = v37;
                                v24 = v46;
                                v25 = v0;
                                v26 = v1;
                                v27 = 1;
                                v28 = v41;
                                v33 = uu_cksum::cksum::h968c8f5c05770fbe(&v17, &v29, v37, v47, v31, v32);
                            }
                            if (!v33)
                            {
                                core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::h97266c7ff74129ed(v13, (long long)v14);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b2259fb47b2f9be(&v6);
                                return 0;
                            }
                            core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::h97266c7ff74129ed(v13, (long long)v14);
                        }
                    }
                }
                else
                {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "strictstatusignore-missingquiet", 6);
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "statusignore-missingquiet", 6);
                    if (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "textSomee", 4) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "binarystrictstatusignore-missingquiet", 6)))
                    {
                        alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(12);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b2259fb47b2f9be(&v6);
                        return v33;
                    }
                    v43 = v3;
                    if (v43)
                        v44 = v2;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h30811e089b0b91d0(&v17, &v6, "filemode{", 4);
                    clap_builder::parser::error::MatchesError::unwrap::h1d7ac479b1fc21b9(&v11, "filemode{", 4, &v17);
                    core::option::Option$LT$T$GT$::map_or_else::h59c346ae679b8aac(&v17, &v11, v37);
                    v33 = uucore::features::checksum::perform_checksum_validation::hcc8fa46a2280a7ae(v18, v20 * 16 + v18, v44, v43, v33, v4, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "warnZeroV", 4) * 0x10000000000 | v1 * 0x100000000 | v0 * 0x1000000 & 4294967295 | (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "ignore-missingquiet", 14) * 0x100 & 4294967295 | (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v6, "quiet", 5) * 0x10000 & 4294967295);
                    ::0x57c780::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6eb853ba25e83800(&v17);
                }
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b2259fb47b2f9be(&v6);
                return v33;
            }
        }
    }
    alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(12);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b2259fb47b2f9be(&v6);
    return v33;
}
