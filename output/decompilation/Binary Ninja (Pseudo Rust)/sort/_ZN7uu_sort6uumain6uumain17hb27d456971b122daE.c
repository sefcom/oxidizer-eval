
  fn uu_sort::uumain::uumain::hb27d456971b122da(arg1: *mut i64) -> *mut c_void

{
    let mut var_4c0: i16 = 0xa06;
    let mut var_4dc: i56 = 0;
    let mut var_4d4: i32 = 0;
    let mut var_558: i64 = 0;
    let var_550: i64 = 8;
    let mut var_548: i128 = {0};
    let mut var_538: i64 = 1;
    let var_530: i64 = 0;
    let mut var_4f0_1: i64;
    __builtin_memcpy(&var_4f0_1, 
        "\x00\xca\x9a\x3b\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x11\x00", 0x14);
    let mut result_26: *mut i32 = -0x8000000000000000;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x19);
    let mut result_9: *mut i32;
    uu_sort::uu_app::h8011682cb601ab69(&result_9);
    let mut result_1: *mut *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h3bf18f550a547249(&result_1, 
        &result_9, arg1);
    let mut result: *mut c_void;
    let result_2: *mut i64;
    
    if result_1 != -0x8000000000000000
    {
        let var_628: i64;
        let var_5e8_1: i64 = var_628;
        let var_638: i128;
        let var_5f8_1: i128 = var_638;
        let mut var_648: i128;
        let var_608_1: i128 = var_648;
        let mut var_618: i128 = result_1;
        var_4dc =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_618, "debugfiles0-fromfileshuman-numer…", 5);
        let mut result_24: *mut *mut i64;
        let mut var_5d0: *mut i128;
        let mut var_5c8: i64;
        let mut var_470: i128;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &var_618, "files0-fromfileshuman-numeric-so…", 0xb) == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h62fd15325c6d6a3c(
                &result_9, &var_618, "fileshuman-numeric-sorthuman-num…", 5);
            let mut var_70: i64;
            clap_builder::parser::error::MatchesError::unwrap::h4937b28c9175a5d9(&var_70, 
                "fileshuman-numeric-sorthuman-num…", 5, &result_9);
            
            if var_70 == 0
            {
                'label_4979ad:
                result_24 = nullptr;
                var_5d0 = 8;
                var_5c8 = 0;
            }
            else
            {
                core::iter::traits::iterator::Iterator::collect::h3507019a2bba96f1(&result_9, 
                    &var_70);
                let result_17: *mut *mut i64 = result_9;
                result_1 = var_470;
                
                if result_17 == -0x8000000000000000
                {
                    goto 'label_4979ad;
                }
                
                var_5d0 = result_1;
                result_24 = result_17;
            }
            
            goto 'label_497c00;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h62fd15325c6d6a3c(
            &result_9, &var_618, "files0-fromfileshuman-numeric-so…", 0xb);
        let mut var_b0: i64;
        clap_builder::parser::error::MatchesError::unwrap::h4937b28c9175a5d9(&var_b0, 
            "files0-fromfileshuman-numeric-so…", 0xb, &result_9);
        let mut result_29: *mut *mut i64;
        let mut var_5b8_1: *mut i128;
        let mut var_5b0_1: i64;
        let mut result_3: *mut *mut c_void;
        let var_5a0: *mut i8;
        let mut var_598: i64;
        let mut result_25: *mut *mut i64;
        let mut var_568: *mut c_void;
        let mut var_1a8: i128;
        
        if var_b0 == 0
        {
            'label_49789d:
            result_25 = nullptr;
            var_568 = 8;
            let var_560_1: i64 = 0;
            result_29 = nullptr;
            var_5b8_1 = 8;
            var_5b0_1 = 0;
            'label_4978ed:
            var_5c8 = var_5b0_1;
            result_24 = result_29;
            var_5d0 = var_5b8_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha72760c71435eed5(&result_25);
            'label_497c00:
            let mut rbx: *mut *mut i32;
            rbx = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_618, "human-numeric-sorthuman-numericm…", 0x12) == 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                let rax_18: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                    &data_426bd0[0x14], 4, &result_9);
                let mut rax_19: i8;
                
                if rax_18 != 0
                {
                    rax_19 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*rax_18.byte_offset(8), *rax_18.byte_offset(0x10), 
                        "human-numericmonth-sortmonthgene…", 0xd);
                }
                
                if rax_18 == 0 || rax_19 == 0
                {
                    rbx = 3;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "month-sortmonthgeneral-numeric-s…", 0xa) == 0
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                        let rax_21: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                            &data_426bd0[0x14], 4, &result_9);
                        let mut rax_22: i8;
                        
                        if rax_21 != 0
                        {
                            rax_22 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*rax_21.byte_offset(8), *rax_21.byte_offset(0x10), 
                                "monthgeneral-numeric-sortgeneral…", 5);
                        }
                        
                        if rax_21 == 0 || rax_22 == 0
                        {
                            rbx = 2;
                            
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "general-numeric-sortgeneral-nume…", 0x14) == 0
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                                let rax_24: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(&data_426bd0[0x14], 4, &result_9);
                                let mut rax_25: i8;
                                
                                if rax_24 != 0
                                {
                                    rax_25 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*rax_24.byte_offset(8), *rax_24.byte_offset(0x10), 
                                        "general-numericnumeric-sortnumer…", 0xf);
                                }
                                
                                if rax_24 == 0 || rax_25 == 0
                                {
                                    let rax_26: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "numeric-sortnumericversion-sortv…", 
                                        0xc);
                                    let mut rax_27: *mut c_void;
                                    let mut rax_28: i8;
                                    
                                    if rax_26 == 0
                                    {
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                                        rax_27 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(&data_426bd0[0x14], 4, &result_9);
                                        
                                        if rax_27 != 0
                                        {
                                            rax_28 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*rax_27.byte_offset(8), 
                                                *rax_27.byte_offset(0x10), 
                                                "numericversion-sortversionrandom…", 7);
                                        }
                                    }
                                    
                                    if rax_26 == 0 && (rax_27 == 0 || rax_28 == 0)
                                    {
                                        rbx = 4;
                                        
                                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "version-sortversionrandom-sortra…", 0xc) == 0
                                        {
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                                            let rax_30: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(&data_426bd0[0x14], 4, 
                                                &result_9);
                                            let mut rax_31: i8;
                                            
                                            if rax_30 != 0
                                            {
                                                rax_31 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*rax_30.byte_offset(8), 
                                                    *rax_30.byte_offset(0x10), 
                                                    "versionrandom-sortrandomignore-n…", 7);
                                            }
                                            
                                            if rax_30 == 0 || rax_31 == 0
                                            {
                                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "random-sortrandomignore-nonprint…", 
                                                    0xb) != 0
                                                {
                                                    'label_497f02:
                                                    uu_sort::get_rand_string::hfc771f269e2134eb(
                                                        &result_9);
                                                    let var_4d0_1: i128 = result_9;
                                                    *var_4d4[3] = 1;
                                                    rbx = 5;
                                                }
                                                else
                                                {
                                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                                                    let rax_33: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(&data_426bd0[0x14], 
                                                        4, &result_9);
                                                    rbx = 6;
                                                    
                                                    if rax_33 != 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*rax_33.byte_offset(8), 
                                                        *rax_33.byte_offset(0x10), 
                                                        "randomignore-nonprintingRAYON_NU…", 6) != 0
                                                    {
                                                        goto 'label_497f02;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        rbx = nullptr;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            
            var_4c0 = rbx;
            *var_4dc[3] =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_618, "dictionary-order[short aliases: ", 0x10);
            *var_4dc[4] =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_618, "ignore-nonprintingRAYON_NUM_THRE…", 0x12);
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_618, "parallel' existsDeadlock", 8) != 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, "parallel' existsDeadlock", 8);
                let rax_38: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                    "parallel' existsDeadlock", 8, &result_9);
                let mut result_21: *mut i32;
                
                if rax_38 != 0
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&result_9, rax_38);
                    result_21 = result_9;
                    result_1 = var_470;
                }
                
                let mut zmm0_7: i128;
                
                if rax_38 != 0 && result_21 != -0x8000000000000000
                {
                    zmm0_7 = result_1;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&result_9, "0invalid --batch-size argument '…", 1);
                    result_21 = result_9;
                    zmm0_7 = var_470;
                }
                
                var_1a8 = zmm0_7;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h59a6bc66d65efc88(
                    &*var_548[8]);
                *var_548[8] = result_21;
                var_538 = var_1a8;
                std::env::set_var::h34dc2e6be26e06c8(&*var_548[8]);
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(
                &result_9, &var_618, "buffer-sizetemporary-directoryba…", 0xb);
            let rax_39: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                "buffer-sizetemporary-directoryba…", 0xb, &result_9);
            var_470 = 0x3b9aca00;
            result_9 = nullptr;
            core::option::Option$LT$T$GT$::map_or::h8647dc7e0898c332(&result_1, rax_39, &result_9);
            result = result_1;
            
            if result != 0
            {
                goto 'label_498da9;
            }
            
            let result_8: *mut i64 = result_2;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(
                &result_9, &var_618, "temporary-directorybatch-sizezer…", 0x13);
            let rax_40: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                "temporary-directorybatch-sizezer…", 0x13, &result_9);
            let mut result_18: *mut i32;
            
            if rax_40 != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&result_9, *rax_40.byte_offset(8), *rax_40.byte_offset(0x10));
                result_18 = result_9;
                result_1 = var_470;
            }
            
            if rax_40 != 0 && result_18 != -0x8000000000000000
            {
                var_470 = result_1;
                result_9 = result_18;
            }
            else
            {
                std::env::temp_dir::h4c6b7a08795666f1(&result_9);
            }
            
            uu_sort::tmp_dir::TmpDirWrapper::new::hf7e48251cfddd2bb(&var_1a8, &result_9);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(
                &result_9, &var_618, "compress-program", 0x10);
            let rax_41: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                "compress-program", 0x10, &result_9);
            let mut result_22: *mut i32 = -0x8000000000000000;
            
            if rax_41 != 0
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&result_9, rax_41);
                result_22 = result_9;
                result_1 = var_470;
            }
            
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha4ee80adb2180c0b(
                &result_26);
            result_26 = result_22;
            let var_520_1: i128 = result_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(
                &result_9, &var_618, "batch-sizezero-terminatedmergech…", 0xa);
            let rax_42: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                "batch-sizezero-terminatedmergech…", 0xa, &result_9);
            
            if rax_42 == 0
            {
                goto 'label_498673;
            }
            
            let mut var_488: *mut c_void = rax_42;
            let r15_1: *mut i8 = *rax_42.byte_offset(8);
            let r12_1: i64 = *rax_42.byte_offset(0x10);
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&result_25, 
                r15_1, r12_1);
            let mut result_5: *mut c_void;
            
            if result_25 == 1
            {
                let mut var_4b8_1: i128;
                let mut var_460_3: i64;
                let mut rax_44: i64;
                
                if *result_25[1] != 2
                {
                    result_1 = nullptr;
                    let var_650_4: *mut i8 = r15_1;
                    var_648 = r12_1;
                    *var_648[8] = 1;
                    result_29 = &result_1;
                    let var_5b8_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_9 = &data_58a500;
                    var_470 = 1;
                    let var_458_6: i64 = 0;
                    *var_470[8] = &result_29;
                    var_460_3 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h3c86ffdf6e7649eb(&result_3, 
                        &result_9);
                    var_4b8_1 = result_3;
                    rax_44 = var_598;
                }
                else
                {
                    let mut result_11: *mut *mut c_void;
                    let mut rdx_19: i64;
                    result_11 = uucore::util_name::h074417a1e6395129();
                    result_1 = result_11;
                    let var_650: i64 = rdx_19;
                    result_3 = &result_1;
                    let var_5a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf74e0be109d7e64b;
                    result_9 = &data_58a438;
                    var_470 = 2;
                    let var_458_1: i64 = 0;
                    *var_470[8] = &result_3;
                    let var_460_1: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_9);
                    let rax_43: i64 = *rax_42.byte_offset(8);
                    let rcx_3: i64 = *rax_42.byte_offset(0x10);
                    result_1 = nullptr;
                    let var_650_1: i64 = rax_43;
                    var_648 = rcx_3;
                    *var_648[8] = 1;
                    result_3 = &result_1;
                    let var_5a0_2: *mut i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_9 = &data_58a4d0;
                    var_470 = 2;
                    let var_458_2: i64 = 0;
                    *var_470[8] = &result_3;
                    let var_460_2: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_9);
                    uu_sort::get_rlimit::hac8adc03949effc6(&result_3);
                    result = result_3;
                    
                    if result != 0
                    {
                        goto 'label_498da4;
                    }
                    
                    let mut var_480: *mut i64 = var_5a0_2;
                    result_29 = &var_480;
                    let var_5b8_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    result_9 = &data_58a4f0;
                    var_470 = 1;
                    let var_458_3: i64 = 0;
                    *var_470[8] = &result_29;
                    var_460_3 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h3c86ffdf6e7649eb(&result_1, 
                        &result_9);
                    var_4b8_1 = result_1;
                    rax_44 = var_648;
                }
                
                var_460_3 = 2;
                result_9 = var_4b8_1;
                *var_470[8] = rax_44;
                result_5 = alloc::boxed::Box$LT$T$GT$::new::hccb576f8e9965088(&result_9);
                goto 'label_498d92;
            }
            
            if var_568 >= 2
            {
                let var_4e8_1: *mut c_void = var_568;
                'label_498673:
                let mut rax_49: i8 = 0xa;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "zero-terminatedmergecheckcheck-s…", 0xf) != 0
                {
                    rax_49 = 0;
                }
                
                *var_4c0[1] = rax_49;
                *var_4dc[5] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "mergecheckcheck-silentignore-cas…", 5);
                *var_4d4[1] = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_618, "checkcheck-silentignore-caseigno…", 5);
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "check-silentignore-caseignore-le…", 0xc) != 0
                {
                    *var_4d4[1] = 0x101;
                }
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, "checkcheck-silentignore-caseigno…", 5);
                    let rax_53: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                        "checkcheck-silentignore-caseigno…", 5, &result_9);
                    
                    if rax_53 != 0
                    {
                        let r14_3: i64 = *rax_53.byte_offset(8);
                        let r15_2: u64 = *rax_53.byte_offset(0x10);
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(r14_3, r15_2, "silentOpenFailederrorParseKeyErr…", 6) != 0
                        {
                            *var_4d4[1] = 0x101;
                        }
                        else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(r14_3, r15_2, "quietextra operand  not allowed …", 5) != 0
                        {
                            *var_4d4[1] = 0x101;
                        }
                    }
                }
                
                *var_4dc[2] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "ignore-caseignore-leading-blanks…", 0xb);
                *var_4dc[1] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "ignore-leading-blanksreversestab…", 0x15);
                *var_4dc[6] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "reversestableuniquefield-separat…", 7);
                *var_4dc[7] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "stableuniquefield-separator\0", 6);
                var_4d4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "uniquefield-separator\0", 6);
                
                if var_5c8 == 0
                {
                    let mut var_c8: ();
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&var_c8, "-", 1);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf9791922c3a08dd0(&result_24, &var_c8);
                }
                else if var_5c8 != 1 && *var_4d4[1] != 0
                {
                    let rcx_4: i64 = var_5d0[2];
                    let rax_63: i64 = *var_5d0.byte_offset(0x28);
                    result_1 = 1;
                    let var_650_5: i64 = rcx_4;
                    var_648 = rax_63;
                    *var_648[8] = 1;
                    result_3 = &result_1;
                    let var_5a0_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_9 = &data_58a510;
                    var_470 = 2;
                    let var_458_7: i64 = 0;
                    *var_470[8] = &result_3;
                    let mut var_460_6: i64 = 1;
                    let mut var_168: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h3c86ffdf6e7649eb(&var_168, 
                        &result_9);
                    var_460_6 = 2;
                    result_9 = var_168;
                    let var_158: i64;
                    *var_470[8] = var_158;
                    result_5 = alloc::boxed::Box$LT$T$GT$::new::hccb576f8e9965088(&result_9);
                    goto 'label_498d92;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2bd70ea87c2cbd86(&result_9, &var_618);
                let rax_65: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h095e59b65270b09a(&result_9);
                
                if rax_65 != 0
                {
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&result_9, 
                        *rax_65.byte_offset(8), *rax_65.byte_offset(0x10));
                    
                    if result_9 == 1
                    {
                        *rax_65.byte_offset(8);
                        *rax_65.byte_offset(0x10);
                        result_5 = uu_sort::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::he396e39d6b8cca84();
                        goto 'label_498d92;
                    }
                    
                    let result_28: *mut i32 = var_470;
                    let r14_5: u64 = *var_470[8];
                    let rax_66: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(result_28, r14_5, "\0", 2);
                    let mut result_19: *mut i32 = &data_427a8a[0x69];
                    
                    if rax_66 == 0
                    {
                        result_19 = result_28;
                    }
                    
                    if (r14_5 == 1 | rax_66) != 1
                    {
                        result_1 = nullptr;
                        let result_23: *mut i32 = result_19;
                        var_648 = r14_5;
                        *var_648[8] = 1;
                        result_3 = &result_1;
                        let var_5a0_6: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_9 = &data_58a530;
                        var_470 = 1;
                        let var_458_8: i64 = 0;
                        *var_470[8] = &result_3;
                        let mut var_460_7: i64 = 1;
                        let mut var_150: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h3c86ffdf6e7649eb(&var_150, 
                            &result_9);
                        var_460_7 = 2;
                        result_9 = var_150;
                        let var_140: i64;
                        *var_470[8] = var_140;
                        result_5 = alloc::boxed::Box$LT$T$GT$::new::hccb576f8e9965088(&result_9);
                        goto 'label_498d92;
                    }
                    
                    result_9 = result_19;
                    var_470 = result_19.byte_offset(1);
                    let mut rax_67: i8;
                    let mut rdx_25: i32;
                    rax_67 = core::str::validations::next_code_point::hcd1eea69f249a646(&result_9, 
                        &result_1);
                    
                    if (rax_67 & 1) == 0 || rdx_25 == 0x110000
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    let var_4e0_1: i32 = rdx_25;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4b17f599f7c7e560(&result_9, &var_618);
                clap_builder::parser::error::MatchesError::unwrap::h5daa64ee61d5cb87(&result_1, 
                    &result_9);
                
                if result_1 != 0
                {
                    let var_448_2: i128 = var_628;
                    let mut var_458: i64;
                    var_458 = var_638;
                    var_470 = var_648;
                    result_9 = result_1;
                    
                    loop
                    {
                        let rax_68: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h29c80881389e6e54(&result_9);
                        
                        if rax_68 == 0
                        {
                            goto 'label_498b80;
                        }
                        
                        uu_sort::FieldSelector::parse::hd62b608cdcbb6258(&result_3, 
                            *rax_68.byte_offset(8), *rax_68.byte_offset(0x10), &var_558);
                        let result_7: *mut *mut c_void = result_3;
                        let var_571: i8;
                        
                        if var_571 == 2
                        {
                            result = result_7;
                            break;
                        }
                        
                        let var_588: i128;
                        let var_118_1: i128 = var_588;
                        let var_128_1: i128 = var_598;
                        let mut result_10: *mut *mut c_void = result_7;
                        let var_130_1: *mut i64 = var_5a0;
                        let var_101_1: i8 = var_571;
                        let var_579: i56;
                        
                        if *var_579[6] == 5 && *var_4d4[3] == 0
                        {
                            uu_sort::get_rand_string::hfc771f269e2134eb(&result_3);
                            let var_4d0_2: i128 = result_3;
                            *var_4d4[3] = 1;
                        }
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h89ce9f7ca9cab00c(&var_558, &result_10);
                    }
                    
                    goto 'label_498da4;
                }
                
                'label_498b80:
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_618, "keymsgReadFailedOpenTmpFileFaile…", 3) == 0
                {
                    let rax_71: u64 = *var_4dc[1];
                    result_3 = 1;
                    let var_5a0_5: i64 = 1;
                    var_598 = rax_71;
                    var_648 = 2;
                    uu_sort::FieldSelector::new::h5b970f0569e874f9(&result_9, &result_3, &result_1, 
                        var_4c0 << 0x28 | rax_71 | *var_4dc[6] << 0x20);
                    core::result::Result$LT$T$C$E$GT$::unwrap::hdd99585c644c6dee(&result_1, 
                        &result_9);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h89ce9f7ca9cab00c(&var_558, &result_1);
                }
                
                let mut rsi_55: *mut i128 = var_5d0;
                let r14_6: *mut c_void = rsi_55.byte_offset(var_5c8 * 0x18);
                
                loop
                {
                    let mut r15_3: *mut i128 = rsi_55.byte_offset(0x18);
                    
                    if rsi_55 == r14_6
                    {
                        r15_3 = rsi_55;
                    }
                    
                    if rsi_55 == r14_6
                    {
                        break;
                    }
                    
                    uu_sort::open::h4bd9a97a6bbaba0d(&result_9, rsi_55);
                    result = var_470;
                    
                    if (result_9 & 1) != 0
                    {
                        goto 'label_498da4;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hcfdd83d1a966e4d1(result, *var_470[8]);
                    rsi_55 = r15_3;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, "outputCould not parse string fro…", 6);
                let mut rdx_32: u64 = &result_9;
                let rax_74: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                    "outputCould not parse string fro…", 6, rdx_32);
                let mut rsi_57: i64;
                
                if rax_74 == 0
                {
                    rsi_57 = 0;
                }
                else
                {
                    rsi_57 = *rax_74.byte_offset(8);
                    rdx_32 = *rax_74.byte_offset(0x10);
                }
                
                let rbp: u64;
                uu_sort::Output::new::h911849d79fe47e41(&result_1, rsi_57, rdx_32, rbp);
                let result_13: *mut *mut c_void = result_1;
                result = result_2;
                
                if result_13 == -0x7fffffffffffffff
                {
                    goto 'label_498da4;
                }
                
                result_3 = result_13;
                let result_4: *mut c_void = result;
                let var_590_1: i64 = *var_648[8];
                uu_sort::GlobalSettings::init_precomputed::h069bdc51928edd4d(&var_558);
                var_470 = var_648;
                result_9 = result_3;
                let mut result_6: *mut c_void;
                let mut rdx_35: *mut i64;
                result_6 = uu_sort::exec::he53ee6f4f74482d4(var_5d0, var_5c8, &var_558, &result_9, 
                    &var_1a8);
                result = result_6;
                uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal::hd3e3d7b672ec7630(&var_1a8);
                core::ptr::drop_in_place$LT$uu_sort..tmp_dir..TmpDirWrapper$GT$::h162df71e9b8e945c(
                    &var_1a8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha72760c71435eed5(&result_24);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h58e7c7ca61bf47a7(&var_618);
            }
            else
            {
                let mut result_12: *mut *mut c_void;
                let mut rdx_20: i64;
                result_12 = uucore::util_name::h074417a1e6395129();
                result_1 = result_12;
                let var_650_2: i64 = rdx_20;
                result_3 = &result_1;
                let var_5a0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf74e0be109d7e64b;
                result_9 = &data_58a438;
                var_470 = 2;
                let var_458_4: i64 = 0;
                *var_470[8] = &result_3;
                let var_460_4: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&result_9);
                result_1 = &var_488;
                let var_650_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6bc2eb9bc77f94f;
                result_9 = &data_58a4b0;
                var_470 = 2;
                let var_458_5: i64 = 0;
                *var_470[8] = &result_1;
                let mut var_460_5: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&result_9);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&result_1, "minimum --batch-size argument is…", 0x24);
                *var_470[8] = var_648;
                result_9 = result_1;
                var_460_5 = 2;
                result_5 = alloc::boxed::Box$LT$T$GT$::new::hccb576f8e9965088(&result_9);
                'label_498d92:
                result = result_5;
                'label_498da4:
                core::ptr::drop_in_place$LT$uu_sort..tmp_dir..TmpDirWrapper$GT$::h162df71e9b8e945c(
                    &var_1a8);
                'label_498da9:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha72760c71435eed5(&result_24);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h58e7c7ca61bf47a7(&var_618);
            }
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h3507019a2bba96f1(&result_9, &var_b0);
            let result_16: *mut i32 = result_9;
            result_1 = var_470;
            
            if result_16 == -0x8000000000000000
            {
                goto 'label_49789d;
            }
            
            var_568 = result_1;
            result_25 = result_16;
            let mut rsi_6: *mut c_void = var_568;
            result_29 = nullptr;
            var_5b8_1 = 8;
            var_5b0_1 = 0;
            let var_560: i64;
            
            if var_560 == 0
            {
                goto 'label_4978ed;
            }
            
            let rax_11: *mut c_void = rsi_6.byte_offset(var_560 * 0x18);
            let mut rax_12: *mut c_void = rsi_6.byte_offset(0x18);
            let result_15: *mut i32 = -0x8000000000000001;
            
            loop
            {
                uu_sort::open::h4bd9a97a6bbaba0d(&result_9, rsi_6);
                result = var_470;
                
                if result_9 == 1
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha72760c71435eed5(&result_29);
                    break;
                }
                
                let mut var_100: i128;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::he44b8f85a749dada(
                    &var_100, result, *var_470[8]);
                let var_d0: i64;
                let var_418_1: i64 = var_d0;
                let var_e0: i128;
                let var_428_1: i128 = var_e0;
                let var_f0: i128;
                let var_438_1: i128 = var_f0;
                let var_448_1: i128 = var_100;
                result_9 = result_15;
                let result_27: *mut i32 = result_15;
                let var_410_1: i8 = 0;
                
                loop
                {
                    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0b87edb5f6127eb(&result_3, &result_9);
                    let result_14: *mut *mut c_void = result_3;
                    
                    if result_14 == -0x8000000000000000
                    {
                        break;
                    }
                    
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&result_1, var_5a0, var_598);
                    let mut rax_15: i64;
                    let mut rdx_3: u64;
                    rax_15 =
                        core::result::Result$LT$T$C$E$GT$::expect::hc38c48f92990113f(&result_1);
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&result_1, rax_15, rdx_3);
                    let var_198_1: i64 = var_648;
                    var_1a8 = result_1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf9791922c3a08dd0(&result_29, &var_1a8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfc63409825449154(
                        result_14, var_5a0);
                }
                
                core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..io..Split$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$::h1baa0e9d4f6d44ce(&result_9);
                rsi_6 = rax_12;
                rax_12 = rsi_6.byte_offset(0x18);
                
                if rsi_6 == rax_11
                {
                    rax_12 = rsi_6;
                }
                
                if rsi_6 == rax_11
                {
                    goto 'label_4978ed;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha72760c71435eed5(&result_25);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h58e7c7ca61bf47a7(&var_618);
        }
    }
    else
    {
        result_9 = result_2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h5d20846e4b9c6631(
            clap_builder::error::Error$LT$F$GT$::print::h537509a9d3c7fc73(&result_9));
        let mut result_20: *mut i32 = result_9;
        
        if (*result_20.byte_offset(0xdd) & 0x1d) != 0xc
        {
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(2);
            result_20 = result_9;
        }
        
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h6057d7a11808ed3a(result_20);
        result = nullptr;
    }
    core::ptr::drop_in_place$LT$uu_sort..GlobalSettings$GT$::h08dde60c2fbfbddc(&var_558);
    result
}
