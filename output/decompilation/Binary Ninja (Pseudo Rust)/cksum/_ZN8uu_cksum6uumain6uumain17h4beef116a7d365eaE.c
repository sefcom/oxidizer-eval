
  fn uu_cksum::uumain::uumain::h4beef116a7d365ea(arg1: i64) -> u64

{
    let mut var_338: i8;
    uu_cksum::uu_app::hd53996ddfe35d34b(&var_338);
    let mut result_1: u64;
    clap_builder::builder::command::Command::try_get_matches_from::h2db5322af81e6fb7(&result_1, 
        &var_338, arg1);
    let result_8: u64 = result_1;
    let mut result: u64;
    let var_370: *mut *mut c_void;
    
    if -(result_8) != -0x8000000000000000
    {
        let var_348: i64;
        let var_388_1: i64 = var_348;
        let var_358: i128;
        let var_398_1: i128 = var_358;
        let var_368: i128;
        let var_3a8_1: i128 = var_368;
        let mut result_9: u64 = result_8;
        let var_3b0_1: *mut *mut c_void = var_370;
        let rax_1: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &result_9, "checkalgorithmlengthrawbase64bin…", 5);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h00790a4881c98ffc(
            &var_338, &result_9);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h97a1c4246d79d57d(&var_338);
        let mut var_3e0: i128;
        
        if rax_2 != 0
        {
            var_3e0 = *rax_2.byte_offset(8);
        }
        else if rax_1 == 0
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
        let rax_3: *mut i64 =
            clap_builder::parser::error::MatchesError::unwrap::h7b7ce5a1149fe295(&var_338);
        let mut var_3d0: *mut *mut c_void;
        let result_2: u64;
        let var_328: *mut *mut c_void;
        let mut result_7: u64;
        
        if rax_3 == 0
        {
            result_7 = 0;
            'label_4832a4:
            
            if (rax_1 & _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2a9a381f3dd8b716(&var_3e0)) != 0
            {
                result = alloc::boxed::Box$LT$T$GT$::new::hd32763c273953b02(0xc);
            }
            else if rax_1 == 0
            {
                std::env::args_os::h5ff0cf6a45e392f2(&var_338);
                uu_cksum::handle_tag_text_binary_flags::h483042924fc20423(&result_1, &var_338);
                result = result_1;
                
                if result == 0
                {
                    let rax_20: i8 = var_370;
                    let rax_21: i8 = *var_370[1];
                    uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_338, var_3e0, 
                        *var_3e0[8], result_7, var_3d0);
                    let r14_3: i64 = var_338;
                    result = result_2;
                    
                    if r14_3 != 0
                    {
                        let mut var_3e8: i8;
                        let var_320: i64;
                        var_3e8 = var_320;
                        let mut r13_2: i8 = 0xa;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "zeroAnsi -- \x1b[8mhelpNonesha1s…", 4) != 0
                        {
                            r13_2 = 0;
                        }
                        
                        let mut rbp_1: i8 = 1;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "rawbase64binarystrictstatusignor…", 3) == 0
                        {
                            rbp_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "base64binarystrictstatusignore-m…", 6) * 2;
                        }
                        
                        let mut rax_28: i64;
                        let mut rdx_9: i64;
                        rax_28 = (*(var_3e8 + 0x28))(var_328);
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd122a2a33cab93c1(&var_338, &result_9);
                        let mut var_70: i64;
                        clap_builder::parser::error::MatchesError::unwrap::hf2a0b203744d8944(
                            &var_70, &var_338);
                        let mut result_6: u64;
                        let var_318: i64;
                        let mut rdx_10: *mut *mut c_void;
                        
                        if var_70 == 0
                        {
                            var_338 = result_7;
                            let var_330_1: *mut *mut c_void = var_3d0;
                            let var_328_2: i64 = r14_3;
                            let result_4: u64 = result;
                            let var_318_2: i64 = rax_28;
                            let var_310_2: i64 = rdx_9;
                            let var_308_2: i64 = var_318;
                            let var_300_2: i8 = rax_20;
                            let var_2ff_2: i8 = rax_21;
                            let var_2fe_2: i8 = rbp_1;
                            let var_2fd_2: i8 = r13_2;
                            result_6 = uu_cksum::cksum::h728c7b2291f86d06(&var_338);
                        }
                        else
                        {
                            var_338 = result_7;
                            let var_330: *mut *mut c_void = var_3d0;
                            let var_328_1: i64 = r14_3;
                            let result_3: u64 = result;
                            let var_318_1: i64 = rax_28;
                            let var_310_1: i64 = rdx_9;
                            let var_308_1: i64 = var_318;
                            let var_300_1: i8 = rax_20;
                            let var_2ff_1: i8 = rax_21;
                            let var_2fe_1: i8 = rbp_1;
                            let var_2fd_1: i8 = r13_2;
                            result_6 = uu_cksum::cksum::h336d46a627bb511a(&var_338, &var_70);
                        }
                        result = result_6;
                        
                        if result_6 == 0
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
                let rax_8: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "textdumb\x1b[5m\x1b[9m <= trueTE…", 4);
                let rax_9: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "binarystrictstatusignore-missing…", 6);
                let rax_10: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "strictstatusignore-missingquiett…", 6);
                let rax_11: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "statusignore-missingquiettag/hom…", 6);
                let rax_12: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "warn\x1b[7mBool", 4);
                let rax_13: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "ignore-missingquiettag/home/34r7…", 0xe);
                let rax_14: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "quiettag/home/34r7hm4n/.rustup/t…", 5);
                
                if (rax_9 | rax_8 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_9, "tag/home/34r7hm4n/.rustup/toolch…", 3)) != 0
                {
                    result = alloc::boxed::Box$LT$T$GT$::new::hd32763c273953b02(0xb);
                }
                else
                {
                    let r15_3: u64 = *var_3e0[8];
                    let mut r12_2: u64 = r15_3;
                    
                    if r15_3 != 0
                    {
                        r12_2 = var_3e0;
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd122a2a33cab93c1(&var_338, &result_9);
                    clap_builder::parser::error::MatchesError::unwrap::hf2a0b203744d8944(&result_1, 
                        &var_338);
                    core::option::Option$LT$T$GT$::map_or_else::ha3d3531d4b6cb51e(&var_338, 
                        &result_1);
                    let mut rcx_4: i32 = 0x1000000;
                    
                    if rax_14 == 0
                    {
                        rcx_4 = (rax_12 | 2) << 0x18;
                    }
                    
                    let mut rax_19: i32 = 0;
                    
                    if rax_11 == 0
                    {
                        rax_19 = rcx_4;
                    }
                    
                    let mut result_5: u64;
                    let mut rdx_7: *mut *mut c_void;
                    result_5 =
                        uucore::features::checksum::perform_checksum_validation::hd49b76021f528c16(
                        result_2, (var_328 << 4) + result_2, r12_2, r15_3, result_7, var_3d0, 
                        rax_13 << 8 | rax_10 << 0x10 | rax_19);
                    result = result_5;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h85ec7d2cdaf9b289(var_338, result_2);
                }
            }
        }
        else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(var_3e0, *var_3e0[8], "blake2b  (BLAKE2b (", 7) == 0
        {
            result = alloc::boxed::Box$LT$T$GT$::new::hd32763c273953b02(0xa);
        }
        else
        {
            uucore::features::checksum::calculate_blake2b_length::hd9514fcefba150b6(&var_338, 
                *rax_3);
            result_7 = result_2;
            
            if (var_338 & 1) == 0
            {
                var_3d0 = var_328;
                goto 'label_4832a4;
            }
            
            result = result_7;
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h87286edc2ae69f70(&result_9);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_370);
    }
    result
}
