
  fn uu_cksum::uumain::uumain::hf3578f9fe0c3201c(arg1: i64, arg2: *mut *mut c_void @ r12) -> *mut i64

{
    let var_28: *mut *mut c_void = arg2;
    let mut result_2: *mut i8;
    uu_cksum::uu_app::hbfb998c9a541210b(&result_2);
    let mut result_8: *mut i8;
    clap_builder::builder::command::Command::try_get_matches_from::hb83dbc2a0c900676(&result_8, 
        &result_2, arg1);
    let result_11: *mut i8 = result_8;
    let mut result: *mut i64;
    let var_370: i64;
    
    if result_11 != -0x8000000000000000
    {
        let var_348: i64;
        let var_380_1: i64 = var_348;
        let var_358: i128;
        let var_390_1: i128 = var_358;
        let mut var_368: i128;
        let var_3a0_1: i128 = var_368;
        let mut result_12: *mut i8 = result_11;
        let var_3a8_1: i64 = var_370;
        let rax_1: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &result_12, "checkrawbase64binarystrictstatus…", 5);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2dbf6ab7fc702809(
            &result_2, &result_12, "algorithmlengthcheckrawbase64bin…", 9);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h7eb1f01738a0eeba(
            "algorithmlengthcheckrawbase64bin…", 9, &result_2);
        let mut var_3d8: i128;
        
        if rax_2 != 0
        {
            var_3d8 = *rax_2.byte_offset(8);
            
            if (rax_1 & _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&var_3d8, &data_752958, 3)) == 0
            {
                goto 'label_580882;
            }
            
            result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0xc);
        }
        else if rax_1 == 0
        {
            var_3d8 = "crcbsdblake2b  (BLAKE2b (";
            *var_3d8[8] = 3;
            _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&var_3d8, &data_752958, 3);
            'label_580882:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha144a8fbf7eefe4d(
                &result_2, &result_12, "lengthcheckrawbase64binarystrict…", 6);
            let rax_5: *mut i64 =
                clap_builder::parser::error::MatchesError::unwrap::h0c465a2b7c337f9c(
                "lengthcheckrawbase64binarystrict…", 6, &result_2);
            let result_3: *mut i64;
            let var_328: *mut *mut c_void;
            let mut result_6: *mut i64;
            
            if rax_5 == 0
            {
                result_6 = nullptr;
                'label_580903:
                let var_3c8_1: *mut *mut c_void = arg2;
                
                if rax_1 == 0
                {
                    uu_cksum::handle_tag_text_binary_flags::h54d38c67ed693625(&result_2, 
                        &result_12);
                    result = result_2;
                    
                    if result == 0
                    {
                        let rax_18: i8 = result_3;
                        let rax_19: i8 = *result_3[1];
                        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&result_2, 
                            var_3d8, *var_3d8[8], result_6, var_3c8_1);
                        let result_7: *mut i8 = result_2;
                        result = result_3;
                        
                        if result_7 != 0
                        {
                            let mut var_320: i128;
                            var_368 = var_320;
                            result_8 = result_7;
                            let result_1: *mut i64 = result;
                            var_368 = var_328;
                            let mut r14_3: i8 = 0xa;
                            
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "zeroAnsib", 4) != 0
                            {
                                r14_3 = 0;
                            }
                            
                            let mut rbp_1: i8 = 1;
                            
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "rawbase64binarystrictstatusignor…", 3) == 0
                            {
                                rbp_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "base64binarystrictstatusignore-m…", 6) * 2;
                            }
                            
                            let mut rax_23: i64;
                            let mut rdx_14: i64;
                            rax_23 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::h265c500e1079a618(&var_368);
                            arg2 = var_358;
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h30811e089b0b91d0(&result_2, &result_12, "filemode{", 4);
                            let mut var_70: i64;
                            clap_builder::parser::error::MatchesError::unwrap::h1d7ac479b1fc21b9(
                                &var_70, "filemode{", 4, &result_2);
                            let mut result_5: *mut i8;
                            let mut rdx_15: *mut *mut c_void;
                            
                            if var_70 == 0
                            {
                                result_2 = result_6;
                                let var_330_1: *mut *mut c_void = var_3c8_1;
                                let result_10: *mut i8 = result_7;
                                var_320 = result;
                                *var_320[8] = rax_23;
                                let var_310_2: i64 = rdx_14;
                                let var_308_2: *mut *mut c_void = arg2;
                                let var_300_2: i8 = rax_18;
                                let var_2ff_2: i8 = rax_19;
                                let var_2fe_2: i8 = rbp_1;
                                let var_2fd_2: i8 = r14_3;
                                result_5 = uu_cksum::cksum::h3bc15d2c96f4f009(&result_2);
                            }
                            else
                            {
                                result_2 = result_6;
                                let var_330: *mut *mut c_void = var_3c8_1;
                                let result_9: *mut i8 = result_7;
                                var_320 = result;
                                *var_320[8] = rax_23;
                                let var_310_1: i64 = rdx_14;
                                let var_308_1: *mut *mut c_void = arg2;
                                let var_300_1: i8 = rax_18;
                                let var_2ff_1: i8 = rax_19;
                                let var_2fe_1: i8 = rbp_1;
                                let var_2fd_1: i8 = r14_3;
                                result_5 = uu_cksum::cksum::h968c8f5c05770fbe(&result_2);
                            }
                            result = result_5;
                            
                            if result_5 == 0
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
                    let rax_7: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "textSomee", 4);
                    let rax_8: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "binarystrictstatusignore-missing…", 6);
                    let rax_9: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "strictstatusignore-missingquiet", 6);
                    let rax_10: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "statusignore-missingquiet", 6);
                    let rax_11: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "warnZeroV", 4);
                    let rax_12: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "ignore-missingquiet", 0xe);
                    let rax_13: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_12, "quiet", 5);
                    
                    if (rax_7 | rax_8) == 0
                    {
                        let r13_2: u64 = *var_3d8[8];
                        let mut r14_2: u64 = r13_2;
                        
                        if r13_2 != 0
                        {
                            r14_2 = var_3d8;
                        }
                        
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h30811e089b0b91d0(&result_2, &result_12, "filemode{", 4);
                        clap_builder::parser::error::MatchesError::unwrap::h1d7ac479b1fc21b9(
                            &result_8, "filemode{", 4, &result_2);
                        core::option::Option$LT$T$GT$::map_or_else::h59c346ae679b8aac(&result_2, 
                            &result_8);
                        let mut result_4: *mut i64;
                        let mut rdx_12: *mut *mut c_void;
                        result_4 = uucore::features::checksum::perform_checksum_validation::hcc8fa46a2280a7ae(result_3, &result_3[var_328 * 2], r14_2, r13_2, result_6, 
                            var_3c8_1, 
                            rax_11 << 0x28 | rax_9 << 0x20 | rax_10 << 0x18 | rax_12 << 8
                                | rax_13 << 0x10);
                        result = result_4;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6eb853ba25e83800(&result_2);
                    }
                    else
                    {
                        result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0xb);
                    }
                }
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(var_3d8, *var_3d8[8], "blake2b  (BLAKE2b (", 7) == 0
            {
                result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0xa);
            }
            else
            {
                uucore::features::checksum::calculate_blake2b_length::h2a821e36733dba3a(&result_2, 
                    *rax_5);
                result_6 = result_3;
                arg2 = var_328;
                
                if result_2 == 0
                {
                    goto 'label_580903;
                }
                
                result = result_6;
            }
        }
        else
        {
            var_3d8 = 1;
            *var_3d8[8] = 0;
            
            if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0d278d84f38de62(&var_3d8, &data_752958, 3) == 0
            {
                goto 'label_580882;
            }
            
            result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0xc);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b2259fb47b2f9be(&result_12);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_370);
    }
    result
}
