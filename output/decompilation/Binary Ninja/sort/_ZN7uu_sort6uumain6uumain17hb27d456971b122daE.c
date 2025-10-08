
  void* uu_sort::uumain::uumain::hb27d456971b122da(int64_t* arg1)

{
    int16_t var_4c0 = 0xa06;
    int56_t var_4dc = 0;
    int32_t var_4d4 = 0;
    int64_t var_558 = 0;
    int64_t var_550 = 8;
    int128_t var_548 = {0};
    int64_t var_538 = 1;
    int64_t var_530 = 0;
    int64_t var_4f0_1;
    __builtin_memcpy(&var_4f0_1, 
        "\x00\xca\x9a\x3b\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x11\x00", 0x14);
    int32_t* result_26 = -0x8000000000000000;
    int128_t s;
    __builtin_memset(&s, 0, 0x19);
    int32_t* result_9;
    uu_sort::uu_app::h8011682cb601ab69(&result_9);
    void** result_1;
    clap_builder::builder::command::Command::try_get_matches_from::h3bf18f550a547249(&result_1, 
        &result_9, arg1);
    void* result;
    int64_t* result_2;
    
    if (result_1 != -0x8000000000000000)
    {
        int64_t var_628;
        int64_t var_5e8_1 = var_628;
        int128_t var_638;
        int128_t var_5f8_1 = var_638;
        int128_t var_648;
        int128_t var_608_1 = var_648;
        int128_t var_618 = result_1;
        var_4dc =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_618, "debugfiles0-fromfileshuman-numer…", 5);
        int64_t** result_24;
        int128_t* var_5d0;
        int64_t var_5c8;
        int128_t var_470;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &var_618, "files0-fromfileshuman-numeric-so…", 0xb))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h62fd15325c6d6a3c(
                &result_9, &var_618, "fileshuman-numeric-sorthuman-num…", 5);
            int64_t var_70;
            clap_builder::parser::error::MatchesError::unwrap::h4937b28c9175a5d9(&var_70, 
                "fileshuman-numeric-sorthuman-num…", 5, &result_9);
            
            if (!var_70)
            {
                label_4979ad:
                result_24 = nullptr;
                var_5d0 = 8;
                var_5c8 = 0;
            }
            else
            {
                core::iter::traits::iterator::Iterator::collect::h3507019a2bba96f1(&result_9, 
                    &var_70);
                int64_t** result_17 = result_9;
                result_1 = var_470;
                
                if (result_17 == -0x8000000000000000)
                    goto label_4979ad;
                
                var_5d0 = result_1;
                result_24 = result_17;
            }
            
            goto label_497c00;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h62fd15325c6d6a3c(
            &result_9, &var_618, "files0-fromfileshuman-numeric-so…", 0xb);
        int64_t var_b0;
        clap_builder::parser::error::MatchesError::unwrap::h4937b28c9175a5d9(&var_b0, 
            "files0-fromfileshuman-numeric-so…", 0xb, &result_9);
        int64_t** result_29;
        int128_t* var_5b8_1;
        int64_t var_5b0_1;
        void** result_3;
        char* var_5a0;
        int64_t var_598;
        int64_t** result_25;
        void* var_568;
        int128_t var_1a8;
        
        if (!var_b0)
        {
            label_49789d:
            result_25 = nullptr;
            var_568 = 8;
            int64_t var_560_1 = 0;
            result_29 = nullptr;
            var_5b8_1 = 8;
            var_5b0_1 = 0;
            label_4978ed:
            var_5c8 = var_5b0_1;
            result_24 = result_29;
            var_5d0 = var_5b8_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha72760c71435eed5(&result_25);
            label_497c00:
            int32_t** rbx;
            rbx = 1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_618, "human-numeric-sorthuman-numericm…", 0x12))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                void* rax_18 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                    &data_426bd0[0x14], 4, &result_9);
                char rax_19;
                
                if (rax_18)
                    rax_19 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*(rax_18 + 8), *(rax_18 + 0x10), "human-numericmonth-sortmonthgene…", 
                        0xd);
                
                if (!rax_18 || !rax_19)
                {
                    rbx = 3;
                    
                    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "month-sortmonthgeneral-numeric-s…", 0xa))
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                        void* rax_21 =
                            clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                            &data_426bd0[0x14], 4, &result_9);
                        char rax_22;
                        
                        if (rax_21)
                            rax_22 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*(rax_21 + 8), *(rax_21 + 0x10), 
                                "monthgeneral-numeric-sortgeneral…", 5);
                        
                        if (!rax_21 || !rax_22)
                        {
                            rbx = 2;
                            
                            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "general-numeric-sortgeneral-nume…", 0x14))
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                                void* rax_24 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(&data_426bd0[0x14], 4, &result_9);
                                char rax_25;
                                
                                if (rax_24)
                                    rax_25 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*(rax_24 + 8), *(rax_24 + 0x10), 
                                        "general-numericnumeric-sortnumer…", 0xf);
                                
                                if (!rax_24 || !rax_25)
                                {
                                    char rax_26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "numeric-sortnumericversion-sortv…", 
                                        0xc);
                                    void* rax_27;
                                    char rax_28;
                                    
                                    if (!rax_26)
                                    {
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                                        rax_27 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(&data_426bd0[0x14], 4, &result_9);
                                        
                                        if (rax_27)
                                            rax_28 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*(rax_27 + 8), *(rax_27 + 0x10), 
                                                "numericversion-sortversionrandom…", 7);
                                    }
                                    
                                    if (!rax_26 && (!rax_27 || !rax_28))
                                    {
                                        rbx = 4;
                                        
                                        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "version-sortversionrandom-sortra…", 0xc))
                                        {
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                                            void* rax_30 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(&data_426bd0[0x14], 4, &result_9);
                                            char rax_31;
                                            
                                            if (rax_30)
                                                rax_31 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*(rax_30 + 8), *(rax_30 + 0x10), 
                                                    "versionrandom-sortrandomignore-n…", 7);
                                            
                                            if (!rax_30 || !rax_31)
                                            {
                                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "random-sortrandomignore-nonprint…", 
                                                    0xb))
                                                {
                                                    label_497f02:
                                                    uu_sort::get_rand_string::hfc771f269e2134eb(
                                                        &result_9);
                                                    int128_t var_4d0_1 = result_9;
                                                    *var_4d4[3] = 1;
                                                    rbx = 5;
                                                }
                                                else
                                                {
                                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, &data_426bd0[0x14], 4);
                                                    void* rax_33 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(&data_426bd0[0x14], 4, 
                                                        &result_9);
                                                    rbx = 6;
                                                    
                                                    if (rax_33 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(*(rax_33 + 8), *(rax_33 + 0x10), 
                                                            "randomignore-nonprintingRAYON_NU…", 6))
                                                        goto label_497f02;
                                                }
                                            }
                                        }
                                    }
                                    else
                                        rbx = nullptr;
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
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_618, "parallel' existsDeadlock", 8))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, "parallel' existsDeadlock", 8);
                void* rax_38 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                    "parallel' existsDeadlock", 8, &result_9);
                int32_t* result_21;
                
                if (rax_38)
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&result_9, rax_38);
                    result_21 = result_9;
                    result_1 = var_470;
                }
                
                int128_t zmm0_7;
                
                if (rax_38 && result_21 != -0x8000000000000000)
                    zmm0_7 = result_1;
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
            void* rax_39 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                "buffer-sizetemporary-directoryba…", 0xb, &result_9);
            var_470 = 0x3b9aca00;
            result_9 = nullptr;
            core::option::Option$LT$T$GT$::map_or::h8647dc7e0898c332(&result_1, rax_39, &result_9);
            result = result_1;
            
            if (result)
                goto label_498da9;
            
            int64_t* result_8 = result_2;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(
                &result_9, &var_618, "temporary-directorybatch-sizezer…", 0x13);
            void* rax_40 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                "temporary-directorybatch-sizezer…", 0x13, &result_9);
            int32_t* result_18;
            
            if (rax_40)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&result_9, *(rax_40 + 8), *(rax_40 + 0x10));
                result_18 = result_9;
                result_1 = var_470;
            }
            
            if (rax_40 && result_18 != -0x8000000000000000)
            {
                var_470 = result_1;
                result_9 = result_18;
            }
            else
                std::env::temp_dir::h4c6b7a08795666f1(&result_9);
            
            uu_sort::tmp_dir::TmpDirWrapper::new::hf7e48251cfddd2bb(&var_1a8, &result_9);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(
                &result_9, &var_618, "compress-program", 0x10);
            void* rax_41 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                "compress-program", 0x10, &result_9);
            int32_t* result_22 = -0x8000000000000000;
            
            if (rax_41)
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&result_9, rax_41);
                result_22 = result_9;
                result_1 = var_470;
            }
            
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha4ee80adb2180c0b(
                &result_26);
            result_26 = result_22;
            int128_t var_520_1 = result_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(
                &result_9, &var_618, "batch-sizezero-terminatedmergech…", 0xa);
            void* rax_42 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                "batch-sizezero-terminatedmergech…", 0xa, &result_9);
            
            if (!rax_42)
                goto label_498673;
            
            void* var_488 = rax_42;
            char* r15_1 = *(rax_42 + 8);
            int64_t r12_1 = *(rax_42 + 0x10);
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&result_25, 
                r15_1, r12_1);
            void* result_5;
            
            if (result_25 == 1)
            {
                int128_t var_4b8_1;
                int64_t var_460_3;
                int64_t rax_44;
                
                if (*result_25[1] != 2)
                {
                    result_1 = nullptr;
                    char* var_650_4 = r15_1;
                    var_648 = r12_1;
                    *var_648[8] = 1;
                    result_29 = &result_1;
                    int64_t (* var_5b8_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_9 = &data_58a500;
                    var_470 = 1;
                    int64_t var_458_6 = 0;
                    *var_470[8] = &result_29;
                    var_460_3 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h3c86ffdf6e7649eb(&result_3, 
                        &result_9);
                    var_4b8_1 = result_3;
                    rax_44 = var_598;
                }
                else
                {
                    void** result_11;
                    int64_t rdx_19;
                    result_11 = uucore::util_name::h074417a1e6395129();
                    result_1 = result_11;
                    int64_t var_650 = rdx_19;
                    result_3 = &result_1;
                    int64_t (* var_5a0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf74e0be109d7e64b;
                    result_9 = &data_58a438;
                    var_470 = 2;
                    int64_t var_458_1 = 0;
                    *var_470[8] = &result_3;
                    int64_t var_460_1 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_9);
                    int64_t rax_43 = *(rax_42 + 8);
                    int64_t rcx_3 = *(rax_42 + 0x10);
                    result_1 = nullptr;
                    int64_t var_650_1 = rax_43;
                    var_648 = rcx_3;
                    *var_648[8] = 1;
                    result_3 = &result_1;
                    int64_t* var_5a0_2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_9 = &data_58a4d0;
                    var_470 = 2;
                    int64_t var_458_2 = 0;
                    *var_470[8] = &result_3;
                    int64_t var_460_2 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_9);
                    uu_sort::get_rlimit::hac8adc03949effc6(&result_3);
                    result = result_3;
                    
                    if (result)
                        goto label_498da4;
                    
                    int64_t* var_480 = var_5a0_2;
                    result_29 = &var_480;
                    uint64_t (* var_5b8_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    result_9 = &data_58a4f0;
                    var_470 = 1;
                    int64_t var_458_3 = 0;
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
                goto label_498d92;
            }
            
            if (var_568 >= 2)
            {
                void* var_4e8_1 = var_568;
                label_498673:
                char rax_49 = 0xa;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "zero-terminatedmergecheckcheck-s…", 0xf))
                    rax_49 = 0;
                
                *var_4c0[1] = rax_49;
                *var_4dc[5] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "mergecheckcheck-silentignore-cas…", 5);
                *var_4d4[1] = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_618, "checkcheck-silentignore-caseigno…", 5);
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "check-silentignore-caseignore-le…", 0xc))
                    *var_4d4[1] = 0x101;
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, "checkcheck-silentignore-caseigno…", 5);
                    void* rax_53 =
                        clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                        "checkcheck-silentignore-caseigno…", 5, &result_9);
                    
                    if (rax_53)
                    {
                        int64_t r14_3 = *(rax_53 + 8);
                        uint64_t r15_2 = *(rax_53 + 0x10);
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(r14_3, r15_2, "silentOpenFailederrorParseKeyErr…", 6))
                            *var_4d4[1] = 0x101;
                        else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(r14_3, r15_2, "quietextra operand  not allowed …", 5))
                            *var_4d4[1] = 0x101;
                    }
                }
                
                *var_4dc[2] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "ignore-caseignore-leading-blanks…", 0xb);
                *var_4dc[1] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "ignore-leading-blanksreversestab…", 0x15);
                *var_4dc[6] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "reversestableuniquefield-separat…", 7);
                *var_4dc[7] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "stableuniquefield-separator\0", 6);
                var_4d4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_618, "uniquefield-separator\0", 6);
                
                if (!var_5c8)
                {
                    void var_c8;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&var_c8, "-", 1);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf9791922c3a08dd0(&result_24, &var_c8);
                }
                else if (var_5c8 != 1 && *var_4d4[1])
                {
                    int64_t rcx_4 = var_5d0[2];
                    int64_t rax_63 = *(var_5d0 + 0x28);
                    result_1 = 1;
                    int64_t var_650_5 = rcx_4;
                    var_648 = rax_63;
                    *var_648[8] = 1;
                    result_3 = &result_1;
                    int64_t (* var_5a0_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_9 = &data_58a510;
                    var_470 = 2;
                    int64_t var_458_7 = 0;
                    *var_470[8] = &result_3;
                    int64_t var_460_6 = 1;
                    int128_t var_168;
                    core::option::Option$LT$T$GT$::map_or_else::h3c86ffdf6e7649eb(&var_168, 
                        &result_9);
                    var_460_6 = 2;
                    result_9 = var_168;
                    int64_t var_158;
                    *var_470[8] = var_158;
                    result_5 = alloc::boxed::Box$LT$T$GT$::new::hccb576f8e9965088(&result_9);
                    goto label_498d92;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2bd70ea87c2cbd86(&result_9, &var_618);
                void* rax_65 =
                    clap_builder::parser::error::MatchesError::unwrap::h095e59b65270b09a(&result_9);
                
                if (rax_65)
                {
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&result_9, *(rax_65 + 8), 
                        *(rax_65 + 0x10));
                    
                    if (result_9 == 1)
                    {
                        *(rax_65 + 8);
                        *(rax_65 + 0x10);
                        result_5 = uu_sort::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::he396e39d6b8cca84();
                        goto label_498d92;
                    }
                    
                    int32_t* result_28 = var_470;
                    uint64_t r14_5 = *var_470[8];
                    char rax_66 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h452cddac4580bdfb(result_28, r14_5, "\0", 2);
                    int32_t* result_19 = &data_427a8a[0x69];
                    
                    if (!rax_66)
                        result_19 = result_28;
                    
                    if ((r14_5 == 1 | rax_66) != 1)
                    {
                        result_1 = nullptr;
                        int32_t* result_23 = result_19;
                        var_648 = r14_5;
                        *var_648[8] = 1;
                        result_3 = &result_1;
                        int64_t (* var_5a0_6)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_9 = &data_58a530;
                        var_470 = 1;
                        int64_t var_458_8 = 0;
                        *var_470[8] = &result_3;
                        int64_t var_460_7 = 1;
                        int128_t var_150;
                        core::option::Option$LT$T$GT$::map_or_else::h3c86ffdf6e7649eb(&var_150, 
                            &result_9);
                        var_460_7 = 2;
                        result_9 = var_150;
                        int64_t var_140;
                        *var_470[8] = var_140;
                        result_5 = alloc::boxed::Box$LT$T$GT$::new::hccb576f8e9965088(&result_9);
                        goto label_498d92;
                    }
                    
                    result_9 = result_19;
                    var_470 = result_19 + 1;
                    char rax_67;
                    int32_t rdx_25;
                    rax_67 = core::str::validations::next_code_point::hcd1eea69f249a646(&result_9, 
                        &result_1);
                    
                    if (!(rax_67 & 1) || rdx_25 == 0x110000)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    int32_t var_4e0_1 = rdx_25;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4b17f599f7c7e560(&result_9, &var_618);
                clap_builder::parser::error::MatchesError::unwrap::h5daa64ee61d5cb87(&result_1, 
                    &result_9);
                
                if (result_1)
                {
                    int128_t var_448_2 = var_628;
                    int64_t var_458;
                    var_458 = var_638;
                    var_470 = var_648;
                    result_9 = result_1;
                    
                    while (true)
                    {
                        void* rax_68 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h29c80881389e6e54(&result_9);
                        
                        if (!rax_68)
                            goto label_498b80;
                        
                        uu_sort::FieldSelector::parse::hd62b608cdcbb6258(&result_3, *(rax_68 + 8), 
                            *(rax_68 + 0x10), &var_558);
                        void** result_7 = result_3;
                        char var_571;
                        
                        if (var_571 == 2)
                        {
                            result = result_7;
                            break;
                        }
                        
                        int128_t var_588;
                        int128_t var_118_1 = var_588;
                        int128_t var_128_1 = var_598;
                        void** result_10 = result_7;
                        int64_t* var_130_1 = var_5a0;
                        char var_101_1 = var_571;
                        int56_t var_579;
                        
                        if (*var_579[6] == 5 && !*var_4d4[3])
                        {
                            uu_sort::get_rand_string::hfc771f269e2134eb(&result_3);
                            int128_t var_4d0_2 = result_3;
                            *var_4d4[3] = 1;
                        }
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h89ce9f7ca9cab00c(&var_558, &result_10);
                    }
                    
                    goto label_498da4;
                }
                
                label_498b80:
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_618, "keymsgReadFailedOpenTmpFileFaile…", 3))
                {
                    uint64_t rax_71 = *var_4dc[1];
                    result_3 = 1;
                    int64_t var_5a0_5 = 1;
                    var_598 = rax_71;
                    var_648 = 2;
                    uu_sort::FieldSelector::new::h5b970f0569e874f9(&result_9, &result_3, &result_1, 
                        var_4c0 << 0x28 | rax_71 | *var_4dc[6] << 0x20);
                    core::result::Result$LT$T$C$E$GT$::unwrap::hdd99585c644c6dee(&result_1, 
                        &result_9);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h89ce9f7ca9cab00c(&var_558, &result_1);
                }
                
                int128_t* rsi_55 = var_5d0;
                void* r14_6 = rsi_55 + var_5c8 * 0x18;
                
                while (true)
                {
                    int128_t* r15_3 = rsi_55 + 0x18;
                    
                    if (rsi_55 == r14_6)
                        r15_3 = rsi_55;
                    
                    if (rsi_55 == r14_6)
                        break;
                    
                    uu_sort::open::h4bd9a97a6bbaba0d(&result_9, rsi_55);
                    result = var_470;
                    
                    if (result_9 & 1)
                        goto label_498da4;
                    
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hcfdd83d1a966e4d1(result, *var_470[8]);
                    rsi_55 = r15_3;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2fe511762ba9ce4d(&result_9, &var_618, "outputCould not parse string fro…", 6);
                uint64_t rdx_32 = &result_9;
                void* rax_74 = clap_builder::parser::error::MatchesError::unwrap::hdba16c3141b67f40(
                    "outputCould not parse string fro…", 6, rdx_32);
                int64_t rsi_57;
                
                if (!rax_74)
                    rsi_57 = 0;
                else
                {
                    rsi_57 = *(rax_74 + 8);
                    rdx_32 = *(rax_74 + 0x10);
                }
                
                uint64_t rbp;
                uu_sort::Output::new::h911849d79fe47e41(&result_1, rsi_57, rdx_32, rbp);
                void** result_13 = result_1;
                result = result_2;
                
                if (result_13 == -0x7fffffffffffffff)
                    goto label_498da4;
                
                result_3 = result_13;
                void* result_4 = result;
                int64_t var_590_1 = *var_648[8];
                uu_sort::GlobalSettings::init_precomputed::h069bdc51928edd4d(&var_558);
                var_470 = var_648;
                result_9 = result_3;
                void* result_6;
                int64_t* rdx_35;
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
                void** result_12;
                int64_t rdx_20;
                result_12 = uucore::util_name::h074417a1e6395129();
                result_1 = result_12;
                int64_t var_650_2 = rdx_20;
                result_3 = &result_1;
                int64_t (* var_5a0_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf74e0be109d7e64b;
                result_9 = &data_58a438;
                var_470 = 2;
                int64_t var_458_4 = 0;
                *var_470[8] = &result_3;
                int64_t var_460_4 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&result_9);
                result_1 = &var_488;
                int64_t (* var_650_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6bc2eb9bc77f94f;
                result_9 = &data_58a4b0;
                var_470 = 2;
                int64_t var_458_5 = 0;
                *var_470[8] = &result_1;
                int64_t var_460_5 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&result_9);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&result_1, "minimum --batch-size argument is…", 0x24);
                *var_470[8] = var_648;
                result_9 = result_1;
                var_460_5 = 2;
                result_5 = alloc::boxed::Box$LT$T$GT$::new::hccb576f8e9965088(&result_9);
                label_498d92:
                result = result_5;
                label_498da4:
                core::ptr::drop_in_place$LT$uu_sort..tmp_dir..TmpDirWrapper$GT$::h162df71e9b8e945c(
                    &var_1a8);
                label_498da9:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha72760c71435eed5(&result_24);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h58e7c7ca61bf47a7(&var_618);
            }
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h3507019a2bba96f1(&result_9, &var_b0);
            int32_t* result_16 = result_9;
            result_1 = var_470;
            
            if (result_16 == -0x8000000000000000)
                goto label_49789d;
            
            var_568 = result_1;
            result_25 = result_16;
            void* rsi_6 = var_568;
            result_29 = nullptr;
            var_5b8_1 = 8;
            var_5b0_1 = 0;
            int64_t var_560;
            
            if (!var_560)
                goto label_4978ed;
            
            void* rax_11 = rsi_6 + var_560 * 0x18;
            void* rax_12 = rsi_6 + 0x18;
            int32_t* result_15 = -0x8000000000000001;
            
            while (true)
            {
                uu_sort::open::h4bd9a97a6bbaba0d(&result_9, rsi_6);
                result = var_470;
                
                if (result_9 == 1)
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha72760c71435eed5(&result_29);
                    break;
                }
                
                int128_t var_100;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::he44b8f85a749dada(
                    &var_100, result, *var_470[8]);
                int64_t var_d0;
                int64_t var_418_1 = var_d0;
                int128_t var_e0;
                int128_t var_428_1 = var_e0;
                int128_t var_f0;
                int128_t var_438_1 = var_f0;
                int128_t var_448_1 = var_100;
                result_9 = result_15;
                int32_t* result_27 = result_15;
                char var_410_1 = 0;
                
                while (true)
                {
                    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0b87edb5f6127eb(&result_3, &result_9);
                    void** result_14 = result_3;
                    
                    if (result_14 == -0x8000000000000000)
                        break;
                    
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&result_1, var_5a0, var_598);
                    int64_t rax_15;
                    uint64_t rdx_3;
                    rax_15 =
                        core::result::Result$LT$T$C$E$GT$::expect::hc38c48f92990113f(&result_1);
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0bb43b7cd3e7fe59(&result_1, rax_15, rdx_3);
                    int64_t var_198_1 = var_648;
                    var_1a8 = result_1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf9791922c3a08dd0(&result_29, &var_1a8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfc63409825449154(
                        result_14, var_5a0);
                }
                
                core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..io..Split$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$::h1baa0e9d4f6d44ce(&result_9);
                rsi_6 = rax_12;
                rax_12 = rsi_6 + 0x18;
                
                if (rsi_6 == rax_11)
                    rax_12 = rsi_6;
                
                if (rsi_6 == rax_11)
                    goto label_4978ed;
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
        int32_t* result_20 = result_9;
        
        if ((*(result_20 + 0xdd) & 0x1d) != 0xc)
        {
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(2);
            result_20 = result_9;
        }
        
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h6057d7a11808ed3a(result_20);
        result = nullptr;
    }
    core::ptr::drop_in_place$LT$uu_sort..GlobalSettings$GT$::h08dde60c2fbfbddc(&var_558);
    return result;
}
