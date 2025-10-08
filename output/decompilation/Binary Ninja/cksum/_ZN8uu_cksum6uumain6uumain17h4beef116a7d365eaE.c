
  uint64_t uu_cksum::uumain::uumain::h4beef116a7d365ea(int64_t arg1)

{
    char var_338;
    uu_cksum::uu_app::hd53996ddfe35d34b(&var_338);
    uint64_t result_1;
    clap_builder::builder::command::Command::try_get_matches_from::h2db5322af81e6fb7(&result_1, 
        &var_338, arg1);
    uint64_t result_8 = result_1;
    uint64_t result;
    void** var_370;
    
    if (-(result_8) != -0x8000000000000000)
    {
        int64_t var_348;
        int64_t var_388_1 = var_348;
        int128_t var_358;
        int128_t var_398_1 = var_358;
        int128_t var_368;
        int128_t var_3a8_1 = var_368;
        uint64_t result_9 = result_8;
        void** var_3b0_1 = var_370;
        char rax_1 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &result_9, "checkalgorithmlengthrawbase64bin…", 5);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h00790a4881c98ffc(
            &var_338, &result_9);
        void* rax_2 =
            clap_builder::parser::error::MatchesError::unwrap::h97a1c4246d79d57d(&var_338);
        int128_t var_3e0;
        
        if (rax_2)
            var_3e0 = *(rax_2 + 8);
        else if (!rax_1)
        {
            var_3e0 = "crcbsdcrc32bblake2b  (BLAKE2b (";
            *var_3e0[8] = 3;
        }
        else
        {
            var_3e0 = 1;
            *var_3e0[8] = 0;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hed8e5fa650f4927b(
            &var_338, &result_9);
        int64_t* rax_3 =
            clap_builder::parser::error::MatchesError::unwrap::h7b7ce5a1149fe295(&var_338);
        void** const var_3d0;
        uint64_t result_2;
        void** var_328;
        uint64_t result_7;
        
        if (!rax_3)
        {
            result_7 = 0;
            label_4832a4:
            
            if (rax_1 & _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2a9a381f3dd8b716(&var_3e0))
                result = alloc::boxed::Box$LT$T$GT$::new::hd32763c273953b02(0xc);
            else if (!rax_1)
            {
                std::env::args_os::h5ff0cf6a45e392f2(&var_338);
                uu_cksum::handle_tag_text_binary_flags::h483042924fc20423(&result_1, &var_338);
                result = result_1;
                
                if (!result)
                {
                    char rax_20 = var_370;
                    char rax_21 = *var_370[1];
                    uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_338, var_3e0, 
                        *var_3e0[8], result_7, var_3d0);
                    int64_t r14_3 = var_338;
                    result = result_2;
                    
                    if (r14_3)
                    {
                        char var_3e8;
                        int64_t var_320;
                        var_3e8 = var_320;
                        char r13_2 = 0xa;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "zeroAnsi -- \x1b[8mhelpNonesha1s…", 4))
                            r13_2 = 0;
                        
                        char rbp_1 = 1;
                        
                        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "rawbase64binarystrictstatusignor…", 3))
                            rbp_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "base64binarystrictstatusignore-m…", 6) * 2;
                        
                        int64_t rax_28;
                        int64_t rdx_9;
                        rax_28 = (*(var_3e8 + 0x28))(var_328);
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd122a2a33cab93c1(&var_338, &result_9);
                        int64_t var_70;
                        clap_builder::parser::error::MatchesError::unwrap::hf2a0b203744d8944(
                            &var_70, &var_338);
                        uint64_t result_6;
                        int64_t var_318;
                        void** rdx_10;
                        
                        if (!var_70)
                        {
                            var_338 = result_7;
                            void** const var_330_1 = var_3d0;
                            int64_t var_328_2 = r14_3;
                            uint64_t result_4 = result;
                            int64_t var_318_2 = rax_28;
                            int64_t var_310_2 = rdx_9;
                            int64_t var_308_2 = var_318;
                            char var_300_2 = rax_20;
                            char var_2ff_2 = rax_21;
                            char var_2fe_2 = rbp_1;
                            char var_2fd_2 = r13_2;
                            result_6 = uu_cksum::cksum::h728c7b2291f86d06(&var_338);
                        }
                        else
                        {
                            var_338 = result_7;
                            void** const var_330 = var_3d0;
                            int64_t var_328_1 = r14_3;
                            uint64_t result_3 = result;
                            int64_t var_318_1 = rax_28;
                            int64_t var_310_1 = rdx_9;
                            int64_t var_308_1 = var_318;
                            char var_300_1 = rax_20;
                            char var_2ff_1 = rax_21;
                            char var_2fe_1 = rbp_1;
                            char var_2fd_1 = r13_2;
                            result_6 = uu_cksum::cksum::h336d46a627bb511a(&var_338, &var_70);
                        }
                        result = result_6;
                        
                        if (!result_6)
                        {
                            core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::hb9d3c08ed2eee8cb(
                                var_328, var_3e8);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h87286edc2ae69f70(&result_9);
                            return 0;
                        }
                        
                        core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::hb9d3c08ed2eee8cb(
                            var_328, var_3e8);
                    }
                }
            }
            else
            {
                char rax_8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "textdumb\x1b[5m\x1b[9m <= trueTE…", 4);
                char rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "binarystrictstatusignore-missing…", 6);
                char rax_10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "strictstatusignore-missingquiett…", 6);
                char rax_11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "statusignore-missingquiettag/hom…", 6);
                char rax_12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "warn\x1b[7mBool", 4);
                char rax_13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "ignore-missingquiettag/home/34r7…", 0xe);
                char rax_14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "quiettag/home/34r7hm4n/.rustup/t…", 5);
                
                if (rax_9 | rax_8 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "tag/home/34r7hm4n/.rustup/toolch…", 3))
                    result = alloc::boxed::Box$LT$T$GT$::new::hd32763c273953b02(0xb);
                else
                {
                    uint64_t r15_3 = *var_3e0[8];
                    uint64_t r12_2 = r15_3;
                    
                    if (r15_3)
                        r12_2 = var_3e0;
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd122a2a33cab93c1(&var_338, &result_9);
                    clap_builder::parser::error::MatchesError::unwrap::hf2a0b203744d8944(&result_1, 
                        &var_338);
                    core::option::Option$LT$T$GT$::map_or_else::ha3d3531d4b6cb51e(&var_338, 
                        &result_1);
                    int32_t rcx_4 = 0x1000000;
                    
                    if (!rax_14)
                        rcx_4 = (rax_12 | 2) << 0x18;
                    
                    int32_t rax_19 = 0;
                    
                    if (!rax_11)
                        rax_19 = rcx_4;
                    
                    uint64_t result_5;
                    void** rdx_7;
                    result_5 =
                        uucore::features::checksum::perform_checksum_validation::hd49b76021f528c16(
                        result_2, (var_328 << 4) + result_2, r12_2, r15_3, result_7, var_3d0, 
                        rax_13 << 8 | rax_10 << 0x10 | rax_19);
                    result = result_5;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h85ec7d2cdaf9b289(var_338, result_2);
                }
            }
        }
        else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(var_3e0, *var_3e0[8], "blake2b  (BLAKE2b (", 7))
            result = alloc::boxed::Box$LT$T$GT$::new::hd32763c273953b02(0xa);
        else
        {
            uucore::features::checksum::calculate_blake2b_length::hd9514fcefba150b6(&var_338, 
                *rax_3);
            result_7 = result_2;
            
            if (!(var_338 & 1))
            {
                var_3d0 = var_328;
                goto label_4832a4;
            }
            
            result = result_7;
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h87286edc2ae69f70(&result_9);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_370);
    return result;
}
