
  int64_t* uu_cksum::uumain::uumain::hf3578f9fe0c3201c(int64_t arg1, void** const arg2 @ r12)

{
    void** const var_28 = arg2;
    char* result_2;
    uu_cksum::uu_app::hbfb998c9a541210b(&result_2);
    char* result_8;
    clap_builder::builder::command::Command::try_get_matches_from::hb83dbc2a0c900676(&result_8, 
        &result_2, arg1);
    char* result_11 = result_8;
    int64_t* result;
    int64_t var_370;
    
    if (result_11 != -0x8000000000000000)
    {
        int64_t var_348;
        int64_t var_380_1 = var_348;
        int128_t var_358;
        int128_t var_390_1 = var_358;
        int128_t var_368;
        int128_t var_3a0_1 = var_368;
        char* result_12 = result_11;
        int64_t var_3a8_1 = var_370;
        char rax_1 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &result_12, "checkrawbase64binarystrictstatus…", 5);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2dbf6ab7fc702809(
            &result_2, &result_12, "algorithmlengthcheckrawbase64bin…", 9);
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h7eb1f01738a0eeba(
            "algorithmlengthcheckrawbase64bin…", 9, &result_2);
        int128_t var_3d8;
        
        if (rax_2)
        {
            var_3d8 = *(rax_2 + 8);
            
            if (!(rax_1 & _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&var_3d8, &data_752958, 3)))
                goto label_580882;
            
            result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0xc);
        }
        else if (!rax_1)
        {
            var_3d8 = "crcbsdblake2b  (BLAKE2b (";
            *var_3d8[8] = 3;
            _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&var_3d8, &data_752958, 3);
            label_580882:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha144a8fbf7eefe4d(
                &result_2, &result_12, "lengthcheckrawbase64binarystrict…", 6);
            int64_t* rax_5 = clap_builder::parser::error::MatchesError::unwrap::h0c465a2b7c337f9c(
                "lengthcheckrawbase64binarystrict…", 6, &result_2);
            int64_t* result_3;
            void** var_328;
            int64_t* result_6;
            
            if (!rax_5)
            {
                result_6 = nullptr;
                label_580903:
                void** const var_3c8_1 = arg2;
                
                if (!rax_1)
                {
                    uu_cksum::handle_tag_text_binary_flags::h54d38c67ed693625(&result_2, 
                        &result_12);
                    result = result_2;
                    
                    if (!result)
                    {
                        char rax_18 = result_3;
                        char rax_19 = *result_3[1];
                        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&result_2, 
                            var_3d8, *var_3d8[8], result_6, var_3c8_1);
                        char* result_7 = result_2;
                        result = result_3;
                        
                        if (result_7)
                        {
                            int128_t var_320;
                            var_368 = var_320;
                            result_8 = result_7;
                            int64_t* result_1 = result;
                            var_368 = var_328;
                            char r14_3 = 0xa;
                            
                            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "zeroAnsib", 4))
                                r14_3 = 0;
                            
                            char rbp_1 = 1;
                            
                            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "rawbase64binarystrictstatusignor…", 3))
                                rbp_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "base64binarystrictstatusignore-m…", 6) * 2;
                            
                            int64_t rax_23;
                            int64_t rdx_14;
                            rax_23 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::h265c500e1079a618(&var_368);
                            arg2 = var_358;
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h30811e089b0b91d0(&result_2, &result_12, "filemode{", 4);
                            int64_t var_70;
                            clap_builder::parser::error::MatchesError::unwrap::h1d7ac479b1fc21b9(
                                &var_70, "filemode{", 4, &result_2);
                            char* result_5;
                            void** rdx_15;
                            
                            if (!var_70)
                            {
                                result_2 = result_6;
                                void** const var_330_1 = var_3c8_1;
                                char* result_10 = result_7;
                                var_320 = result;
                                *var_320[8] = rax_23;
                                int64_t var_310_2 = rdx_14;
                                void** const var_308_2 = arg2;
                                char var_300_2 = rax_18;
                                char var_2ff_2 = rax_19;
                                char var_2fe_2 = rbp_1;
                                char var_2fd_2 = r14_3;
                                result_5 = uu_cksum::cksum::h3bc15d2c96f4f009(&result_2);
                            }
                            else
                            {
                                result_2 = result_6;
                                void** const var_330 = var_3c8_1;
                                char* result_9 = result_7;
                                var_320 = result;
                                *var_320[8] = rax_23;
                                int64_t var_310_1 = rdx_14;
                                void** const var_308_1 = arg2;
                                char var_300_1 = rax_18;
                                char var_2ff_1 = rax_19;
                                char var_2fe_1 = rbp_1;
                                char var_2fd_1 = r14_3;
                                result_5 = uu_cksum::cksum::h968c8f5c05770fbe(&result_2);
                            }
                            result = result_5;
                            
                            if (!result_5)
                            {
                                core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::h97266c7ff74129ed(var_368, *var_368[8]);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b2259fb47b2f9be(&result_12);
                                return nullptr;
                            }
                            
                            core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::h97266c7ff74129ed(
                                var_368, *var_368[8]);
                        }
                    }
                }
                else
                {
                    char rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "textSomee", 4);
                    char rax_8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "binarystrictstatusignore-missing…", 6);
                    char rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "strictstatusignore-missingquiet", 6);
                    char rax_10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "statusignore-missingquiet", 6);
                    char rax_11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "warnZeroV", 4);
                    char rax_12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "ignore-missingquiet", 0xe);
                    char rax_13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "quiet", 5);
                    
                    if (!(rax_7 | rax_8))
                    {
                        uint64_t r13_2 = *var_3d8[8];
                        uint64_t r14_2 = r13_2;
                        
                        if (r13_2)
                            r14_2 = var_3d8;
                        
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h30811e089b0b91d0(&result_2, &result_12, "filemode{", 4);
                        clap_builder::parser::error::MatchesError::unwrap::h1d7ac479b1fc21b9(
                            &result_8, "filemode{", 4, &result_2);
                        core::option::Option$LT$T$GT$::map_or_else::h59c346ae679b8aac(&result_2, 
                            &result_8);
                        int64_t* result_4;
                        void** rdx_12;
                        result_4 = uucore::features::checksum::perform_checksum_validation::hcc8fa46a2280a7ae(result_3, &result_3[var_328 * 2], r14_2, r13_2, result_6, 
                            var_3c8_1, 
                            rax_11 << 0x28 | rax_9 << 0x20 | rax_10 << 0x18 | rax_12 << 8
                                | rax_13 << 0x10);
                        result = result_4;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6eb853ba25e83800(&result_2);
                    }
                    else
                        result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0xb);
                }
            }
            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(var_3d8, *var_3d8[8], "blake2b  (BLAKE2b (", 7))
                result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0xa);
            else
            {
                uucore::features::checksum::calculate_blake2b_length::h2a821e36733dba3a(&result_2, 
                    *rax_5);
                result_6 = result_3;
                arg2 = var_328;
                
                if (!result_2)
                    goto label_580903;
                
                result = result_6;
            }
        }
        else
        {
            var_3d8 = 1;
            *var_3d8[8] = 0;
            
            if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&var_3d8, &data_752958, 3))
                goto label_580882;
            
            result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0xc);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b2259fb47b2f9be(&result_12);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_370);
    return result;
}
