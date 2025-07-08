
  void* uu_sort::uumain::uumain::h6159d59dc2a6e12d(int64_t arg1)

{
    int64_t* r13;
    int64_t* var_20 = r13;
    int16_t var_460 = 0xa06;
    int56_t var_47c = 0;
    int32_t var_474 = 0;
    int64_t var_4f8 = 0;
    int64_t var_4f0 = 8;
    int128_t var_4e8 = {0};
    int64_t var_4d8 = 1;
    int64_t var_4d0 = 0;
    int64_t var_490_1;
    __builtin_memcpy(&var_490_1, 
        "\x00\xca\x9a\x3b\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x11\x00", 0x14);
    int32_t* result_21 = -0x8000000000000000;
    int128_t s;
    __builtin_memset(&s, 0, 0x19);
    int32_t* result_14;
    uu_sort::uu_app::h48b389d7f2011a6f(&result_14);
    void* result_1;
    clap_builder::builder::command::Command::try_get_matches_from::hbc94338b68615c12(&result_1, 
        &result_14, arg1);
    void* result;
    int64_t* result_15;
    
    if (result_1 != -0x8000000000000000)
    {
        int64_t var_5e8;
        int64_t var_5a8_1 = var_5e8;
        int128_t var_5f8;
        int128_t var_5b8_1 = var_5f8;
        int128_t var_608;
        int128_t var_5c8_1 = var_608;
        int128_t var_5d8 = result_1;
        var_47c =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5d8, "debughuman-numeric-sorthuman-num…", 5);
        int64_t var_558;
        void* result_7;
        int64_t var_548;
        int64_t var_458;
        int128_t var_450;
        int64_t* result_23;
        int128_t var_3d8;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            &var_5d8, "files0-fromfiles0buffer-sizetemp…", 0xb))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7c471aa51503166b(
                &result_14, &var_5d8, "files0buffer-sizetemporary-direc…", 5);
            clap_builder::parser::error::MatchesError::unwrap::h79b2fe4796ccf1cf(&result_1, 
                "files0buffer-sizetemporary-direc…", 5, &result_14);
            
            if (!result_1)
            {
                label_4bceff:
                var_558 = 0;
                result_7 = 8;
                var_548 = 0;
            }
            else
            {
                int128_t var_3c8_2 = var_5e8;
                var_3d8 = var_5f8;
                result_23 = var_608;
                result_14 = result_1;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8a0c75cb8caa4fdf(&var_458, &result_14);
                int64_t rax_8 = var_458;
                result_14 = var_450;
                
                if (rax_8 == -0x8000000000000000)
                    goto label_4bceff;
                
                result_7 = result_14;
                var_558 = rax_8;
            }
            
            goto label_4bd1cb;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7c471aa51503166b(
            &result_14, &var_5d8, "files0-fromfiles0buffer-sizetemp…", 0xb);
        clap_builder::parser::error::MatchesError::unwrap::h79b2fe4796ccf1cf(&result_1, 
            "files0-fromfiles0buffer-sizetemp…", 0xb, &result_14);
        int64_t var_540;
        int64_t rax_7;
        int64_t rcx_2;
        
        if (!result_1)
        {
            label_4bce1b:
            var_540 = 0;
            int64_t var_538_1 = 8;
            int64_t var_530_1 = 0;
            rax_7 = 8;
            rcx_2 = 0;
        }
        else
        {
            int128_t var_3c8_1 = var_5e8;
            var_3d8 = var_5f8;
            result_23 = var_608;
            result_14 = result_1;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8a0c75cb8caa4fdf(&var_458, &result_14);
            int64_t rax_6 = var_458;
            result_14 = var_450;
            
            if (rax_6 == -0x8000000000000000)
                goto label_4bce1b;
            
            int64_t var_538;
            var_538 = result_14;
            var_540 = rax_6;
            rax_7 = var_538;
            int64_t var_530;
            rcx_2 = var_530;
        }
        
        int64_t* var_528 = nullptr;
        int64_t var_520_1 = 8;
        int64_t var_518_1 = 0;
        int64_t var_410 = rax_7;
        int64_t var_408_1 = rax_7 + rcx_2 * 0x18;
        void* rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he38f7e4bc28b78b2(&var_410);
        int128_t var_598;
        int64_t var_588;
        int64_t var_510;
        void* result_2;
        
        if (!rax_9)
        {
            label_4bd156:
            var_558 = var_528;
            var_548 = var_518_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_540);
            label_4bd1cb:
            int32_t** rbx;
            rbx = 1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_5d8, "human-numeric-sorthuman-numericm…", 0x12))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                void* rax_16 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    &data_424374[0x10], 4, &result_14);
                char rax_17;
                
                if (rax_16)
                    rax_17 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*(rax_16 + 8), *(rax_16 + 0x10), "human-numericmonth-sortmonthgene…", 
                        0xd);
                
                if (!rax_16 || !rax_17)
                {
                    rbx = 3;
                    
                    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "month-sortmonthgeneral-numeric-s…", 0xa))
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                        void* rax_19 =
                            clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                            &data_424374[0x10], 4, &result_14);
                        char rax_20;
                        
                        if (rax_19)
                            rax_20 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*(rax_19 + 8), *(rax_19 + 0x10), 
                                "monthgeneral-numeric-sortgeneral…", 5);
                        
                        if (!rax_19 || !rax_20)
                        {
                            rbx = 2;
                            
                            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "general-numeric-sortgeneral-nume…", 0x14))
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                                void* rax_22 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(&data_424374[0x10], 4, &result_14);
                                char rax_23;
                                
                                if (rax_22)
                                    rax_23 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*(rax_22 + 8), *(rax_22 + 0x10), 
                                        "general-numericnumeric-sortnumer…", 0xf);
                                
                                if (!rax_22 || !rax_23)
                                {
                                    char rax_24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "numeric-sortnumericversion-sortv…", 
                                        0xc);
                                    void* rax_25;
                                    char rax_26;
                                    
                                    if (!rax_24)
                                    {
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                                        rax_25 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(&data_424374[0x10], 4, &result_14);
                                        
                                        if (rax_25)
                                            rax_26 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*(rax_25 + 8), *(rax_25 + 0x10), 
                                                "numericversion-sortversionrandom…", 7);
                                    }
                                    
                                    if (!rax_24 && (!rax_25 || !rax_26))
                                    {
                                        rbx = 4;
                                        
                                        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "version-sortversionrandom-sortra…", 0xc))
                                        {
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                                            void* rax_28 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(&data_424374[0x10], 4, &result_14);
                                            char rax_29;
                                            
                                            if (rax_28)
                                                rax_29 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*(rax_28 + 8), *(rax_28 + 0x10), 
                                                    "versionrandom-sortrandomignore-n…", 7);
                                            
                                            if (!rax_28 || !rax_29)
                                            {
                                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "random-sortrandomignore-nonprint…", 
                                                    0xb))
                                                {
                                                    label_4bd4b3:
                                                    uu_sort::get_rand_string::he35d58b790e9e6e7(
                                                        &result_14);
                                                    int128_t var_470_1 = result_14;
                                                    *var_474[3] = 1;
                                                    rbx = 5;
                                                }
                                                else
                                                {
                                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                                                    void* rax_31 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(&data_424374[0x10], 4, 
                                                        &result_14);
                                                    rbx = 6;
                                                    
                                                    if (rax_31 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*(rax_31 + 8), *(rax_31 + 0x10), 
                                                            "randomignore-nonprintingRAYON_NU…", 6))
                                                        goto label_4bd4b3;
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
            
            var_460 = rbx;
            *var_47c[3] =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_5d8, "dictionary-order", 0x10);
            *var_47c[4] =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_5d8, "ignore-nonprintingRAYON_NUM_THRE…", 0x12);
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_5d8, "parallelDeadlock", 8))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "parallelDeadlock", 8);
                void* rax_36 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    "parallelDeadlock", 8, &result_14);
                int32_t* result_19;
                
                if (rax_36)
                {
                    core::ops::function::FnOnce::call_once::hd0974a4a962ab103(&result_14, rax_36);
                    result_19 = result_14;
                    result_1 = result_2;
                }
                
                int128_t zmm0_9;
                
                if (rax_36 && result_19 != -0x8000000000000000)
                    zmm0_9 = result_1;
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h6d81efd81ac2dcc5(
                        &result_14, "0buffer-sizetemporary-directoryb…", 1);
                    result_19 = result_14;
                    zmm0_9 = result_2;
                }
                
                var_458 = zmm0_9;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c8e99341af3dc4d(
                    &*var_4e8[8]);
                *var_4e8[8] = result_19;
                var_4d8 = var_458;
                std::env::set_var::h9f95c4fd7a2d318b("RAYON_NUM_THREADSzero-terminated…", 0x11, 
                    &*var_4e8[8]);
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(
                &result_14, &var_5d8, "buffer-sizetemporary-directoryba…", 0xb);
            void* rax_37 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                "buffer-sizetemporary-directoryba…", 0xb, &result_14);
            void* result_3 = 0x3b9aca00;
            result_14 = nullptr;
            core::option::Option$LT$T$GT$::map_or::ha8228734d6f520ed(&result_1, rax_37, &result_14);
            result = result_1;
            
            if (result)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_558);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h56a948ba6d533cf4(&var_5d8);
            }
            else
            {
                int64_t* result_22 = result_15;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "temporary-directorybatch-sizeinv…", 0x13);
                void* rax_38 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    "temporary-directorybatch-sizeinv…", 0x13, &result_14);
                int32_t* result_17;
                
                if (rax_38)
                {
                    *(rax_38 + 0x10);
                    core::ops::function::FnOnce::call_once::h423240e8db8052c3(&result_14, 
                        *(rax_38 + 8));
                    result_17 = result_14;
                    result_1 = result_3;
                }
                
                if (rax_38 && result_17 != -0x8000000000000000)
                {
                    result_3 = result_1;
                    result_14 = result_17;
                }
                else
                    core::ops::function::FnOnce::call_once::h581a47dfa52b6ab7(&result_14);
                
                uu_sort::tmp_dir::TmpDirWrapper::new::h82cb44d92092fe9e(&var_458, &result_14);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "compress-program", 0x10);
                void* rax_39 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    "compress-program", 0x10, &result_14);
                int32_t* result_20 = -0x8000000000000000;
                
                if (rax_39)
                {
                    core::ops::function::FnOnce::call_once::hd0974a4a962ab103(&result_14, rax_39);
                    result_20 = result_14;
                    result_1 = result_3;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd93f05eebf5d290f(&result_21);
                result_21 = result_20;
                int128_t var_4c0_1 = result_1;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "batch-sizeinvalid --batch-size a…", 0xa);
                void* rax_40 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    "batch-sizeinvalid --batch-size a…", 0xa, &result_14);
                
                if (!rax_40)
                    goto label_4bdbee;
                
                void* var_400 = rax_40;
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_510, *(rax_40 + 8), *(rax_40 + 0x10));
                void* result_4;
                
                if (var_510)
                {
                    int128_t* rbx_2;
                    
                    if (*var_510[1] != 2)
                    {
                        int128_t zmm0_14 = *(rax_40 + 8);
                        result_1 = nullptr;
                        result_15 = zmm0_14;
                        *var_608[8] = 1;
                        var_598 = &result_1;
                        *var_598[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        result_14 = &data_5fc118;
                        int64_t var_3f0_5 = 1;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        void var_48;
                        rbx_2 = &var_48;
                        core::option::Option$LT$T$GT$::map_or_else::hafa7e3397355f02e(&var_48, 
                            &result_14);
                    }
                    else
                    {
                        void* result_9;
                        int64_t* rdx_19;
                        result_9 = uucore::util_name::h60d842bf27b05e82();
                        result_1 = result_9;
                        int64_t* var_610 = rdx_19;
                        var_598 = &result_1;
                        *var_598[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha63ff77629669fc5;
                        result_14 = &data_5fc050;
                        int64_t var_3f0 = 2;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&result_14);
                        int128_t zmm0_15 = *(rax_40 + 8);
                        result_1 = nullptr;
                        var_610 = zmm0_15;
                        *var_608[8] = 1;
                        var_598 = &result_1;
                        *var_598[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        result_14 = &data_5fc0e8;
                        int64_t var_3f0_1 = 2;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&result_14);
                        uu_sort::get_rlimit::h790b745a9692d371(&result_1);
                        result = result_1;
                        
                        if (result)
                            goto label_4be36c;
                        
                        var_528 = var_610;
                        var_598 = &var_528;
                        *var_598[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        result_14 = &data_5fc108;
                        int64_t var_3f0_2 = 1;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        void var_60;
                        rbx_2 = &var_60;
                        core::option::Option$LT$T$GT$::map_or_else::hafa7e3397355f02e(&var_60, 
                            &result_14);
                    }
                    
                    int64_t* result_27 = rbx_2[1];
                    int64_t* result_28 = result_27;
                    int128_t zmm0_16 = *rbx_2;
                    int128_t var_78_1 = zmm0_16;
                    *result_23[8] = 2;
                    result_14 = zmm0_16;
                    result_23 = result_27;
                    result_4 = alloc::boxed::Box$LT$T$GT$::new::h8118613cd2118d08(&result_14);
                    goto label_4be35a;
                }
                
                int64_t var_508;
                
                if (var_508 >= 2)
                {
                    int64_t var_488_1 = var_508;
                    label_4bdbee:
                    char rax_44 = 0xa;
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "zero-terminatedmergecheck-silent…", 0xf))
                        rax_44 = 0;
                    
                    *var_460[1] = rax_44;
                    *var_47c[5] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "mergecheck-silentignore-caseigno…", 5);
                    *var_474[1] = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_5d8, "checkquietextra operand  not all…", 5);
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "check-silentignore-caseignore-le…", 0xc))
                        *var_474[1] = 0x101;
                    else
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "checkquietextra operand  not all…", 5);
                        void* rax_48 =
                            clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                            "checkquietextra operand  not all…", 5, &result_14);
                        
                        if (rax_48)
                        {
                            int64_t r14_2 = *(rax_48 + 8);
                            uint64_t r15_1 = *(rax_48 + 0x10);
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(r14_2, r15_1, "silentOpenFailederrorReadFailedP…", 6))
                                *var_474[1] = 0x101;
                            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(r14_2, r15_1, "quietextra operand  not allowed …", 5))
                                *var_474[1] = 0x101;
                        }
                    }
                    
                    *var_47c[2] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "ignore-caseignore-leading-blanks…", 0xb);
                    *var_47c[1] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "ignore-leading-blanksreversestab…", 0x15);
                    *var_47c[6] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "reversestableunique\0", 7);
                    *var_47c[7] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "stableunique\0", 6);
                    var_474 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "unique\0", 6);
                    
                    if (!var_548)
                    {
                        int128_t var_100;
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h6d81efd81ac2dcc5(&var_100, "-", 1);
                        int64_t* result_26;
                        result_23 = result_26;
                        result_14 = var_100;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h1a2c7d3e68bb78dc(&var_558, &result_14);
                    }
                    else if (var_548 != 1 && *var_474[1])
                    {
                        int128_t zmm0_18 = *(result_7 + 0x20);
                        result_1 = 1;
                        result_15 = zmm0_18;
                        *var_608[8] = 1;
                        var_598 = &result_1;
                        *var_598[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        result_14 = &data_5fc128;
                        int64_t var_3f0_6 = 2;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        int128_t var_130;
                        core::option::Option$LT$T$GT$::map_or_else::hafa7e3397355f02e(&var_130, 
                            &result_14);
                        *result_23[8] = 2;
                        result_14 = var_130;
                        int64_t* result_24;
                        result_23 = result_24;
                        result_4 = alloc::boxed::Box$LT$T$GT$::new::h8118613cd2118d08(&result_14);
                        goto label_4be35a;
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h46169fd50d9dc54b(&result_14, &var_5d8, "field-separatorseparator must be…", 0xf);
                    void* rax_60 =
                        clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                        "field-separatorseparator must be…", 0xf, &result_14);
                    
                    if (rax_60)
                    {
                        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&result_14, *(rax_60 + 8), *(rax_60 + 0x10));
                        
                        if (result_14)
                        {
                            *(rax_60 + 8);
                            *(rax_60 + 0x10);
                            result_4 = uu_sort::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h86e21f4d39f6a13e();
                            goto label_4be35a;
                        }
                        
                        void* result_12 = result_3;
                        char rax_61 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(result_12, result_23, "\0", 2);
                        
                        if (rax_61)
                            result_12 = &data_424f88[0xe1];
                        
                        if ((result_23 == 1 | rax_61) != 1)
                        {
                            result_1 = nullptr;
                            void* result_13 = result_12;
                            var_608 = result_23;
                            *var_608[8] = 1;
                            var_598 = &result_1;
                            *var_598[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            result_14 = &data_5fc148;
                            int64_t var_3f0_7 = 1;
                            var_3d8 = 0;
                            result_23 = &var_598;
                            result_23 = 1;
                            int128_t var_118;
                            core::option::Option$LT$T$GT$::map_or_else::hafa7e3397355f02e(&var_118, 
                                &result_14);
                            *result_23[8] = 2;
                            result_14 = var_118;
                            int64_t* result_25;
                            result_23 = result_25;
                            result_4 =
                                alloc::boxed::Box$LT$T$GT$::new::h8118613cd2118d08(&result_14);
                            goto label_4be35a;
                        }
                        
                        result_14 = result_12;
                        result_3 = result_12 + 1;
                        int32_t rax_62;
                        int32_t rdx_24;
                        rax_62 = core::str::validations::next_code_point::hbbd10007cf1fd5a1(
                            &result_14, &result_1);
                        
                        if (!rax_62 || rdx_24 == 0x110000)
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        int32_t var_480_1 = rdx_24;
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8fe44bb33256cfdc(&result_14, &var_5d8, "keymsgOpenTmpFileFailedCompressP…", 3);
                    clap_builder::parser::error::MatchesError::unwrap::h79b2fe4796ccf1cf(&result_1, 
                        "keymsgOpenTmpFileFailedCompressP…", 3, &result_14);
                    
                    if (result_1)
                    {
                        int128_t var_3c8_4 = var_5e8;
                        int128_t var_3d8_1 = var_5f8;
                        result_23 = var_608;
                        result_14 = result_1;
                        
                        while (true)
                        {
                            void* rax_63 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he714fd0669a35573(&result_14);
                            
                            if (!rax_63)
                                goto label_4be139;
                            
                            uu_sort::FieldSelector::parse::hc80187f191ca59d9(&var_598, 
                                *(rax_63 + 8), *(rax_63 + 0x10), &var_4f8);
                            void* result_6 = var_598;
                            int64_t* rsi_48 = *var_598[8];
                            char var_561;
                            
                            if (var_561 == 2)
                            {
                                result = result_6;
                                break;
                            }
                            
                            int128_t var_578;
                            int128_t var_c8_1 = var_578;
                            int128_t var_d8_1 = var_588;
                            void* result_8 = result_6;
                            int64_t* var_e0_1 = rsi_48;
                            char var_b1_1 = var_561;
                            int56_t var_569;
                            
                            if (*var_569[6] == 5 && !*var_474[3])
                            {
                                uu_sort::get_rand_string::he35d58b790e9e6e7(&var_598);
                                int128_t var_470_2 = var_598;
                                *var_474[3] = 1;
                            }
                            
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h019da0b257c5df67(&var_4f8, 
                                &result_8);
                        }
                        
                        goto label_4be36c;
                    }
                    
                    label_4be139:
                    
                    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_5d8, "keymsgOpenTmpFileFailedCompressP…", 3))
                    {
                        uint64_t rax_66 = *var_47c[1];
                        var_598 = 1;
                        *var_598[8] = 1;
                        var_588 = rax_66;
                        var_608 = 2;
                        uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(&result_14, &var_598, 
                            &result_1, var_460 << 0x28 | rax_66 | *var_47c[6] << 0x20);
                        core::result::Result$LT$T$C$E$GT$::unwrap::h5e6d483200b13174(&result_1, 
                            &result_14);
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h019da0b257c5df67(&var_4f8, &result_1);
                    }
                    
                    result_1 = result_7;
                    
                    while (true)
                    {
                        void* rax_68 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he38f7e4bc28b78b2(&result_1);
                        
                        if (!rax_68)
                            break;
                        
                        uu_sort::open::h555b4855251c8fd4(&result_14, rax_68);
                        result = result_3;
                        
                        if (result_14)
                            goto label_4be36c;
                        
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hacdedb40fd7fc62d(result, result_23);
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "outputdebughuman-numeric-sorthum…", 6);
                    uint64_t rdx_29 = &result_14;
                    void* rax_69 =
                        clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                        "outputdebughuman-numeric-sorthum…", 6, rdx_29);
                    int64_t rsi_55;
                    
                    if (!rax_69)
                        rsi_55 = 0;
                    else
                    {
                        rsi_55 = *(rax_69 + 8);
                        rdx_29 = *(rax_69 + 0x10);
                    }
                    
                    uint64_t rbp;
                    uu_sort::Output::new::h0f0ba6416cebc253(&result_1, rsi_55, rdx_29, rbp);
                    void* result_11 = result_1;
                    result = result_7 + var_548 * 0x18;
                    
                    if (result_11 == -0x7fffffffffffffff)
                        goto label_4be36c;
                    
                    var_598 = result_11;
                    *var_598[8] = result;
                    int64_t var_580_1 = *var_608[8];
                    uu_sort::GlobalSettings::init_precomputed::h2e4e09def4bcf2a9(&var_4f8);
                    int128_t var_3e8 = var_608;
                    result_14 = var_598;
                    void* result_5;
                    int64_t* rdx_32;
                    result_5 = uu_sort::exec::h00f1df48122bfa65(result_7, var_548, &var_4f8, 
                        &result_14, &var_458);
                    result = result_5;
                    uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal::hf26c819e03224897(&var_458);
                    core::ptr::drop_in_place$LT$uu_sort..tmp_dir..TmpDirWrapper$GT$::hbdecdb2e731eb45d(&var_458);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_558);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h56a948ba6d533cf4(&var_5d8);
                }
                else
                {
                    void* result_10;
                    int64_t rdx_20;
                    result_10 = uucore::util_name::h60d842bf27b05e82();
                    result_1 = result_10;
                    int64_t var_610_1 = rdx_20;
                    var_598 = &result_1;
                    *var_598[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha63ff77629669fc5;
                    result_14 = &data_5fc050;
                    int64_t var_3f0_3 = 2;
                    var_3d8 = 0;
                    result_23 = &var_598;
                    result_23 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&result_14);
                    result_1 = &var_400;
                    int64_t (* var_610_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00283c1a1818c493;
                    result_14 = &data_5fc0c8;
                    int64_t var_3f0_4 = 2;
                    var_3d8 = 0;
                    result_23 = &result_1;
                    result_23 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&result_14);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h6d81efd81ac2dcc5(
                        &result_1, "minimum --batch-size argument is…", 0x24);
                    result_23 = var_608;
                    result_14 = result_1;
                    *result_23[8] = 2;
                    result_4 = alloc::boxed::Box$LT$T$GT$::new::h8118613cd2118d08(&result_14);
                    label_4be35a:
                    result = result_4;
                    label_4be36c:
                    core::ptr::drop_in_place$LT$uu_sort..tmp_dir..TmpDirWrapper$GT$::hbdecdb2e731eb45d(&var_458);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_558);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h56a948ba6d533cf4(&var_5d8);
                }
            }
        }
        else
        {
            int32_t* result_16 = -0x8000000000000001;
            
            while (true)
            {
                uu_sort::open::h555b4855251c8fd4(&result_14, rax_9);
                
                if (result_14)
                {
                    result = result_2;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_528);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_540);
                    break;
                }
                
                int128_t var_b0;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h431ca5ffcc2ece79(
                    &var_b0, 0x2000, result_2, result_23);
                int64_t var_80;
                int64_t var_398_1 = var_80;
                int128_t var_90;
                int128_t var_3a8_1 = var_90;
                int128_t var_a0;
                int128_t var_3b8_1 = var_a0;
                int128_t var_3c8_3 = var_b0;
                result_14 = result_16;
                result_23 = result_16;
                char var_390_1 = 0;
                
                while (true)
                {
                    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h20861ed2ff99c5ef(&var_510, &result_14);
                    
                    if (var_510 == -0x8000000000000000)
                        break;
                    
                    int64_t var_500;
                    var_588 = var_500;
                    var_598 = var_510;
                    core::str::converts::from_utf8::ha1effb4cca6d9901(&result_1, *var_598[8], 
                        var_500);
                    int64_t rax_12;
                    uint64_t rdx_3;
                    rax_12 =
                        core::result::Result$LT$T$C$E$GT$::expect::h1d7035ce41415503(&result_1);
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&result_1, rax_12, 
                        rdx_3);
                    *var_450[8] = var_608;
                    var_458 = result_1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h1a2c7d3e68bb78dc(&var_528, &var_458);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h999636f83e050526(
                        &var_598);
                }
                
                core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..io..Split$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$::h8137606887b8fa65(&result_14);
                rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he38f7e4bc28b78b2(&var_410);
                
                if (!rax_9)
                    goto label_4bd156;
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h56a948ba6d533cf4(&var_5d8);
        }
    }
    else
    {
        result_14 = result_15;
        core::result::Result$LT$T$C$E$GT$::unwrap::h050bd512b2f8a0d8(
            clap_builder::error::Error$LT$F$GT$::print::h8aa36859c5518f95(&result_14));
        int32_t* result_18 = result_14;
        
        if ((*(result_18 + 0xd5) & 0x1d) != 0xc)
        {
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2);
            result_18 = result_14;
        }
        
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h0956252b86df92fc(result_18);
        result = nullptr;
    }
    core::ptr::drop_in_place$LT$uu_sort..GlobalSettings$GT$::h481077a657f06359(&var_4f8);
    return result;
}
