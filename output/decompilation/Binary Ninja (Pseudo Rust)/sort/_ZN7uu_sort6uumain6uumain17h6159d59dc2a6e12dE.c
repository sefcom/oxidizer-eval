
  fn uu_sort::uumain::uumain::h6159d59dc2a6e12d(arg1: i64) -> *mut c_void

{
    let r13: *mut i64;
    let var_20: *mut i64 = r13;
    let mut var_460: i16 = 0xa06;
    let mut var_47c: i56 = 0;
    let mut var_474: i32 = 0;
    let mut var_4f8: i64 = 0;
    let var_4f0: i64 = 8;
    let mut var_4e8: i128 = {0};
    let mut var_4d8: i64 = 1;
    let var_4d0: i64 = 0;
    let mut var_490_1: i64;
    __builtin_memcpy(&var_490_1, 
        "\x00\xca\x9a\x3b\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x11\x00", 0x14);
    let mut result_21: *mut i32 = -0x8000000000000000;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x19);
    let mut result_14: *mut i32;
    uu_sort::uu_app::h48b389d7f2011a6f(&result_14);
    let mut result_1: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::hbc94338b68615c12(&result_1, 
        &result_14, arg1);
    let mut result: *mut c_void;
    let mut result_15: *mut i64;
    
    if result_1 != -0x8000000000000000
    {
        let var_5e8: i64;
        let var_5a8_1: i64 = var_5e8;
        let var_5f8: i128;
        let var_5b8_1: i128 = var_5f8;
        let mut var_608: i128;
        let var_5c8_1: i128 = var_608;
        let mut var_5d8: i128 = result_1;
        var_47c =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_5d8, "debughuman-numeric-sorthuman-num…", 5);
        let mut var_558: i64;
        let mut result_7: *mut c_void;
        let mut var_548: i64;
        let mut var_458: i64;
        let mut var_450: i128;
        let mut result_23: *mut i64;
        let mut var_3d8: i128;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            &var_5d8, "files0-fromfiles0buffer-sizetemp…", 0xb) == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7c471aa51503166b(
                &result_14, &var_5d8, "files0buffer-sizetemporary-direc…", 5);
            clap_builder::parser::error::MatchesError::unwrap::h79b2fe4796ccf1cf(&result_1, 
                "files0buffer-sizetemporary-direc…", 5, &result_14);
            
            if result_1 == 0
            {
                'label_4bceff:
                var_558 = 0;
                result_7 = 8;
                var_548 = 0;
            }
            else
            {
                let var_3c8_2: i128 = var_5e8;
                var_3d8 = var_5f8;
                result_23 = var_608;
                result_14 = result_1;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8a0c75cb8caa4fdf(&var_458, &result_14);
                let rax_8: i64 = var_458;
                result_14 = var_450;
                
                if rax_8 == -0x8000000000000000
                {
                    goto 'label_4bceff;
                }
                
                result_7 = result_14;
                var_558 = rax_8;
            }
            
            goto 'label_4bd1cb;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7c471aa51503166b(
            &result_14, &var_5d8, "files0-fromfiles0buffer-sizetemp…", 0xb);
        clap_builder::parser::error::MatchesError::unwrap::h79b2fe4796ccf1cf(&result_1, 
            "files0-fromfiles0buffer-sizetemp…", 0xb, &result_14);
        let mut var_540: i64;
        let mut rax_7: i64;
        let mut rcx_2: i64;
        
        if result_1 == 0
        {
            'label_4bce1b:
            var_540 = 0;
            let var_538_1: i64 = 8;
            let var_530_1: i64 = 0;
            rax_7 = 8;
            rcx_2 = 0;
        }
        else
        {
            let var_3c8_1: i128 = var_5e8;
            var_3d8 = var_5f8;
            result_23 = var_608;
            result_14 = result_1;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8a0c75cb8caa4fdf(&var_458, &result_14);
            let rax_6: i64 = var_458;
            result_14 = var_450;
            
            if rax_6 == -0x8000000000000000
            {
                goto 'label_4bce1b;
            }
            
            let mut var_538: i64;
            var_538 = result_14;
            var_540 = rax_6;
            rax_7 = var_538;
            let var_530: i64;
            rcx_2 = var_530;
        }
        
        let mut var_528: *mut i64 = nullptr;
        let var_520_1: i64 = 8;
        let var_518_1: i64 = 0;
        let mut var_410: i64 = rax_7;
        let var_408_1: i64 = rax_7 + rcx_2 * 0x18;
        let mut rax_9: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he38f7e4bc28b78b2(&var_410);
        let mut var_598: i128;
        let mut var_588: i64;
        let mut var_510: i64;
        let result_2: *mut c_void;
        
        if rax_9 == 0
        {
            'label_4bd156:
            var_558 = var_528;
            var_548 = var_518_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_540);
            'label_4bd1cb:
            let mut rbx: *mut *mut i32;
            rbx = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_5d8, "human-numeric-sorthuman-numericm…", 0x12) == 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                let rax_16: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    &data_424374[0x10], 4, &result_14);
                let mut rax_17: i8;
                
                if rax_16 != 0
                {
                    rax_17 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*rax_16.byte_offset(8), *rax_16.byte_offset(0x10), 
                        "human-numericmonth-sortmonthgene…", 0xd);
                }
                
                if rax_16 == 0 || rax_17 == 0
                {
                    rbx = 3;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "month-sortmonthgeneral-numeric-s…", 0xa) == 0
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                        let rax_19: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                            &data_424374[0x10], 4, &result_14);
                        let mut rax_20: i8;
                        
                        if rax_19 != 0
                        {
                            rax_20 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*rax_19.byte_offset(8), *rax_19.byte_offset(0x10), 
                                "monthgeneral-numeric-sortgeneral…", 5);
                        }
                        
                        if rax_19 == 0 || rax_20 == 0
                        {
                            rbx = 2;
                            
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "general-numeric-sortgeneral-nume…", 0x14) == 0
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                                let rax_22: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(&data_424374[0x10], 4, &result_14);
                                let mut rax_23: i8;
                                
                                if rax_22 != 0
                                {
                                    rax_23 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*rax_22.byte_offset(8), *rax_22.byte_offset(0x10), 
                                        "general-numericnumeric-sortnumer…", 0xf);
                                }
                                
                                if rax_22 == 0 || rax_23 == 0
                                {
                                    let rax_24: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "numeric-sortnumericversion-sortv…", 
                                        0xc);
                                    let mut rax_25: *mut c_void;
                                    let mut rax_26: i8;
                                    
                                    if rax_24 == 0
                                    {
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                                        rax_25 = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(&data_424374[0x10], 4, &result_14);
                                        
                                        if rax_25 != 0
                                        {
                                            rax_26 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*rax_25.byte_offset(8), 
                                                *rax_25.byte_offset(0x10), 
                                                "numericversion-sortversionrandom…", 7);
                                        }
                                    }
                                    
                                    if rax_24 == 0 && (rax_25 == 0 || rax_26 == 0)
                                    {
                                        rbx = 4;
                                        
                                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "version-sortversionrandom-sortra…", 0xc) == 0
                                        {
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                                            let rax_28: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(&data_424374[0x10], 4, 
                                                &result_14);
                                            let mut rax_29: i8;
                                            
                                            if rax_28 != 0
                                            {
                                                rax_29 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*rax_28.byte_offset(8), 
                                                    *rax_28.byte_offset(0x10), 
                                                    "versionrandom-sortrandomignore-n…", 7);
                                            }
                                            
                                            if rax_28 == 0 || rax_29 == 0
                                            {
                                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "random-sortrandomignore-nonprint…", 
                                                    0xb) != 0
                                                {
                                                    'label_4bd4b3:
                                                    uu_sort::get_rand_string::he35d58b790e9e6e7(
                                                        &result_14);
                                                    let var_470_1: i128 = result_14;
                                                    *var_474[3] = 1;
                                                    rbx = 5;
                                                }
                                                else
                                                {
                                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, &data_424374[0x10], 4);
                                                    let rax_31: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(&data_424374[0x10], 
                                                        4, &result_14);
                                                    rbx = 6;
                                                    
                                                    if rax_31 != 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(*rax_31.byte_offset(8), 
                                                        *rax_31.byte_offset(0x10), 
                                                        "randomignore-nonprintingRAYON_NU…", 6) != 0
                                                    {
                                                        goto 'label_4bd4b3;
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
            
            var_460 = rbx;
            *var_47c[3] =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_5d8, "dictionary-order", 0x10);
            *var_47c[4] =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_5d8, "ignore-nonprintingRAYON_NUM_THRE…", 0x12);
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_5d8, "parallelDeadlock", 8) != 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "parallelDeadlock", 8);
                let rax_36: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    "parallelDeadlock", 8, &result_14);
                let mut result_19: *mut i32;
                
                if rax_36 != 0
                {
                    core::ops::function::FnOnce::call_once::hd0974a4a962ab103(&result_14, rax_36);
                    result_19 = result_14;
                    result_1 = result_2;
                }
                
                let mut zmm0_9: i128;
                
                if rax_36 != 0 && result_19 != -0x8000000000000000
                {
                    zmm0_9 = result_1;
                }
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
            let rax_37: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                "buffer-sizetemporary-directoryba…", 0xb, &result_14);
            let mut result_3: *mut c_void = 0x3b9aca00;
            result_14 = nullptr;
            core::option::Option$LT$T$GT$::map_or::ha8228734d6f520ed(&result_1, rax_37, &result_14);
            result = result_1;
            
            if result != 0
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_558);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h56a948ba6d533cf4(&var_5d8);
            }
            else
            {
                let result_22: *mut i64 = result_15;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "temporary-directorybatch-sizeinv…", 0x13);
                let rax_38: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    "temporary-directorybatch-sizeinv…", 0x13, &result_14);
                let mut result_17: *mut i32;
                
                if rax_38 != 0
                {
                    *rax_38.byte_offset(0x10);
                    core::ops::function::FnOnce::call_once::h423240e8db8052c3(&result_14, 
                        *rax_38.byte_offset(8));
                    result_17 = result_14;
                    result_1 = result_3;
                }
                
                if rax_38 != 0 && result_17 != -0x8000000000000000
                {
                    result_3 = result_1;
                    result_14 = result_17;
                }
                else
                {
                    core::ops::function::FnOnce::call_once::h581a47dfa52b6ab7(&result_14);
                }
                
                uu_sort::tmp_dir::TmpDirWrapper::new::h82cb44d92092fe9e(&var_458, &result_14);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "compress-program", 0x10);
                let rax_39: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    "compress-program", 0x10, &result_14);
                let mut result_20: *mut i32 = -0x8000000000000000;
                
                if rax_39 != 0
                {
                    core::ops::function::FnOnce::call_once::hd0974a4a962ab103(&result_14, rax_39);
                    result_20 = result_14;
                    result_1 = result_3;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd93f05eebf5d290f(&result_21);
                result_21 = result_20;
                let var_4c0_1: i128 = result_1;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "batch-sizeinvalid --batch-size a…", 0xa);
                let rax_40: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                    "batch-sizeinvalid --batch-size a…", 0xa, &result_14);
                
                if rax_40 == 0
                {
                    goto 'label_4bdbee;
                }
                
                let mut var_400: *mut c_void = rax_40;
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_510, *rax_40.byte_offset(8), *rax_40.byte_offset(0x10));
                let mut result_4: *mut c_void;
                
                if var_510 != 0
                {
                    let mut rbx_2: *mut i128;
                    
                    if *var_510[1] != 2
                    {
                        let zmm0_14: i128 = *rax_40.byte_offset(8);
                        result_1 = nullptr;
                        result_15 = zmm0_14;
                        *var_608[8] = 1;
                        var_598 = &result_1;
                        *var_598[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        result_14 = &data_5fc118;
                        let var_3f0_5: i64 = 1;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        let mut var_48: ();
                        rbx_2 = &var_48;
                        core::option::Option$LT$T$GT$::map_or_else::hafa7e3397355f02e(&var_48, 
                            &result_14);
                    }
                    else
                    {
                        let mut result_9: *mut c_void;
                        let mut rdx_19: *mut i64;
                        result_9 = uucore::util_name::h60d842bf27b05e82();
                        result_1 = result_9;
                        let mut var_610: *mut i64 = rdx_19;
                        var_598 = &result_1;
                        *var_598[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha63ff77629669fc5;
                        result_14 = &data_5fc050;
                        let var_3f0: i64 = 2;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&result_14);
                        let zmm0_15: i128 = *rax_40.byte_offset(8);
                        result_1 = nullptr;
                        var_610 = zmm0_15;
                        *var_608[8] = 1;
                        var_598 = &result_1;
                        *var_598[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        result_14 = &data_5fc0e8;
                        let var_3f0_1: i64 = 2;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&result_14);
                        uu_sort::get_rlimit::h790b745a9692d371(&result_1);
                        result = result_1;
                        
                        if result != 0
                        {
                            goto 'label_4be36c;
                        }
                        
                        var_528 = var_610;
                        var_598 = &var_528;
                        *var_598[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        result_14 = &data_5fc108;
                        let var_3f0_2: i64 = 1;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        let mut var_60: ();
                        rbx_2 = &var_60;
                        core::option::Option$LT$T$GT$::map_or_else::hafa7e3397355f02e(&var_60, 
                            &result_14);
                    }
                    
                    let result_27: *mut i64 = rbx_2[1];
                    let result_28: *mut i64 = result_27;
                    let zmm0_16: i128 = *rbx_2;
                    let var_78_1: i128 = zmm0_16;
                    *result_23[8] = 2;
                    result_14 = zmm0_16;
                    result_23 = result_27;
                    result_4 = alloc::boxed::Box$LT$T$GT$::new::h8118613cd2118d08(&result_14);
                    goto 'label_4be35a;
                }
                
                let var_508: i64;
                
                if var_508 >= 2
                {
                    let var_488_1: i64 = var_508;
                    'label_4bdbee:
                    let mut rax_44: i8 = 0xa;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "zero-terminatedmergecheck-silent…", 0xf) != 0
                    {
                        rax_44 = 0;
                    }
                    
                    *var_460[1] = rax_44;
                    *var_47c[5] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "mergecheck-silentignore-caseigno…", 5);
                    *var_474[1] = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_5d8, "checkquietextra operand  not all…", 5);
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "check-silentignore-caseignore-le…", 0xc) != 0
                    {
                        *var_474[1] = 0x101;
                    }
                    else
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "checkquietextra operand  not all…", 5);
                        let rax_48: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                            "checkquietextra operand  not all…", 5, &result_14);
                        
                        if rax_48 != 0
                        {
                            let r14_2: i64 = *rax_48.byte_offset(8);
                            let r15_1: u64 = *rax_48.byte_offset(0x10);
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(r14_2, r15_1, "silentOpenFailederrorReadFailedP…", 6) != 0
                            {
                                *var_474[1] = 0x101;
                            }
                            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(r14_2, r15_1, "quietextra operand  not allowed …", 5) != 0
                            {
                                *var_474[1] = 0x101;
                            }
                        }
                    }
                    
                    *var_47c[2] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "ignore-caseignore-leading-blanks…", 0xb);
                    *var_47c[1] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "ignore-leading-blanksreversestab…", 0x15);
                    *var_47c[6] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "reversestableunique\0", 7);
                    *var_47c[7] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "stableunique\0", 6);
                    var_474 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_5d8, "unique\0", 6);
                    
                    if var_548 == 0
                    {
                        let mut var_100: i128;
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h6d81efd81ac2dcc5(&var_100, "-", 1);
                        let result_26: *mut i64;
                        result_23 = result_26;
                        result_14 = var_100;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h1a2c7d3e68bb78dc(&var_558, &result_14);
                    }
                    else if var_548 != 1 && *var_474[1] != 0
                    {
                        let zmm0_18: i128 = *result_7.byte_offset(0x20);
                        result_1 = 1;
                        result_15 = zmm0_18;
                        *var_608[8] = 1;
                        var_598 = &result_1;
                        *var_598[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        result_14 = &data_5fc128;
                        let var_3f0_6: i64 = 2;
                        var_3d8 = 0;
                        result_23 = &var_598;
                        result_23 = 1;
                        let mut var_130: i128;
                        core::option::Option$LT$T$GT$::map_or_else::hafa7e3397355f02e(&var_130, 
                            &result_14);
                        *result_23[8] = 2;
                        result_14 = var_130;
                        let result_24: *mut i64;
                        result_23 = result_24;
                        result_4 = alloc::boxed::Box$LT$T$GT$::new::h8118613cd2118d08(&result_14);
                        goto 'label_4be35a;
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h46169fd50d9dc54b(&result_14, &var_5d8, "field-separatorseparator must be…", 0xf);
                    let rax_60: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                        "field-separatorseparator must be…", 0xf, &result_14);
                    
                    if rax_60 != 0
                    {
                        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&result_14, *rax_60.byte_offset(8), *rax_60.byte_offset(0x10));
                        
                        if result_14 != 0
                        {
                            *rax_60.byte_offset(8);
                            *rax_60.byte_offset(0x10);
                            result_4 = uu_sort::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h86e21f4d39f6a13e();
                            goto 'label_4be35a;
                        }
                        
                        let mut result_12: *mut c_void = result_3;
                        let rax_61: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(result_12, result_23, "\0", 2);
                        
                        if rax_61 != 0
                        {
                            result_12 = &data_424f88[0xe1];
                        }
                        
                        if (result_23 == 1 | rax_61) != 1
                        {
                            result_1 = nullptr;
                            let result_13: *mut c_void = result_12;
                            var_608 = result_23;
                            *var_608[8] = 1;
                            var_598 = &result_1;
                            *var_598[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            result_14 = &data_5fc148;
                            let var_3f0_7: i64 = 1;
                            var_3d8 = 0;
                            result_23 = &var_598;
                            result_23 = 1;
                            let mut var_118: i128;
                            core::option::Option$LT$T$GT$::map_or_else::hafa7e3397355f02e(&var_118, 
                                &result_14);
                            *result_23[8] = 2;
                            result_14 = var_118;
                            let result_25: *mut i64;
                            result_23 = result_25;
                            result_4 =
                                alloc::boxed::Box$LT$T$GT$::new::h8118613cd2118d08(&result_14);
                            goto 'label_4be35a;
                        }
                        
                        result_14 = result_12;
                        result_3 = result_12.byte_offset(1);
                        let mut rax_62: i32;
                        let mut rdx_24: i32;
                        rax_62 = core::str::validations::next_code_point::hbbd10007cf1fd5a1(
                            &result_14, &result_1);
                        
                        if rax_62 == 0 || rdx_24 == 0x110000
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        let var_480_1: i32 = rdx_24;
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8fe44bb33256cfdc(&result_14, &var_5d8, "keymsgOpenTmpFileFailedCompressP…", 3);
                    clap_builder::parser::error::MatchesError::unwrap::h79b2fe4796ccf1cf(&result_1, 
                        "keymsgOpenTmpFileFailedCompressP…", 3, &result_14);
                    
                    if result_1 != 0
                    {
                        let var_3c8_4: i128 = var_5e8;
                        let var_3d8_1: i128 = var_5f8;
                        result_23 = var_608;
                        result_14 = result_1;
                        
                        loop
                        {
                            let rax_63: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he714fd0669a35573(&result_14);
                            
                            if rax_63 == 0
                            {
                                goto 'label_4be139;
                            }
                            
                            uu_sort::FieldSelector::parse::hc80187f191ca59d9(&var_598, 
                                *rax_63.byte_offset(8), *rax_63.byte_offset(0x10), &var_4f8);
                            let result_6: *mut c_void = var_598;
                            let rsi_48: *mut i64 = *var_598[8];
                            let var_561: i8;
                            
                            if var_561 == 2
                            {
                                result = result_6;
                                break;
                            }
                            
                            let var_578: i128;
                            let var_c8_1: i128 = var_578;
                            let var_d8_1: i128 = var_588;
                            let mut result_8: *mut c_void = result_6;
                            let var_e0_1: *mut i64 = rsi_48;
                            let var_b1_1: i8 = var_561;
                            let var_569: i56;
                            
                            if *var_569[6] == 5 && *var_474[3] == 0
                            {
                                uu_sort::get_rand_string::he35d58b790e9e6e7(&var_598);
                                let var_470_2: i128 = var_598;
                                *var_474[3] = 1;
                            }
                            
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h019da0b257c5df67(&var_4f8, 
                                &result_8);
                        }
                        
                        goto 'label_4be36c;
                    }
                    
                    'label_4be139:
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_5d8, "keymsgOpenTmpFileFailedCompressP…", 3) == 0
                    {
                        let rax_66: u64 = *var_47c[1];
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
                    
                    loop
                    {
                        let rax_68: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he38f7e4bc28b78b2(&result_1);
                        
                        if rax_68 == 0
                        {
                            break;
                        }
                        
                        uu_sort::open::h555b4855251c8fd4(&result_14, rax_68);
                        result = result_3;
                        
                        if result_14 != 0
                        {
                            goto 'label_4be36c;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hacdedb40fd7fc62d(result, result_23);
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac9e56a02a35c8d0(&result_14, &var_5d8, "outputdebughuman-numeric-sorthum…", 6);
                    let mut rdx_29: u64 = &result_14;
                    let rax_69: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h7e3b728a45ec187a(
                        "outputdebughuman-numeric-sorthum…", 6, rdx_29);
                    let mut rsi_55: i64;
                    
                    if rax_69 == 0
                    {
                        rsi_55 = 0;
                    }
                    else
                    {
                        rsi_55 = *rax_69.byte_offset(8);
                        rdx_29 = *rax_69.byte_offset(0x10);
                    }
                    
                    let rbp: u64;
                    uu_sort::Output::new::h0f0ba6416cebc253(&result_1, rsi_55, rdx_29, rbp);
                    let result_11: *mut c_void = result_1;
                    result = result_7.byte_offset(var_548 * 0x18);
                    
                    if result_11 == -0x7fffffffffffffff
                    {
                        goto 'label_4be36c;
                    }
                    
                    var_598 = result_11;
                    *var_598[8] = result;
                    let var_580_1: i64 = *var_608[8];
                    uu_sort::GlobalSettings::init_precomputed::h2e4e09def4bcf2a9(&var_4f8);
                    let var_3e8: i128 = var_608;
                    result_14 = var_598;
                    let mut result_5: *mut c_void;
                    let mut rdx_32: *mut i64;
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
                    let mut result_10: *mut c_void;
                    let mut rdx_20: i64;
                    result_10 = uucore::util_name::h60d842bf27b05e82();
                    result_1 = result_10;
                    let var_610_1: i64 = rdx_20;
                    var_598 = &result_1;
                    *var_598[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha63ff77629669fc5;
                    result_14 = &data_5fc050;
                    let var_3f0_3: i64 = 2;
                    var_3d8 = 0;
                    result_23 = &var_598;
                    result_23 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&result_14);
                    result_1 = &var_400;
                    let var_610_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00283c1a1818c493;
                    result_14 = &data_5fc0c8;
                    let var_3f0_4: i64 = 2;
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
                    'label_4be35a:
                    result = result_4;
                    'label_4be36c:
                    core::ptr::drop_in_place$LT$uu_sort..tmp_dir..TmpDirWrapper$GT$::hbdecdb2e731eb45d(&var_458);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_558);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h56a948ba6d533cf4(&var_5d8);
                }
            }
        }
        else
        {
            let result_16: *mut i32 = -0x8000000000000001;
            
            loop
            {
                uu_sort::open::h555b4855251c8fd4(&result_14, rax_9);
                
                if result_14 != 0
                {
                    result = result_2;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_528);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he65e364315c781c6(&var_540);
                    break;
                }
                
                let mut var_b0: i128;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h431ca5ffcc2ece79(
                    &var_b0, 0x2000, result_2, result_23);
                let var_80: i64;
                let var_398_1: i64 = var_80;
                let var_90: i128;
                let var_3a8_1: i128 = var_90;
                let var_a0: i128;
                let var_3b8_1: i128 = var_a0;
                let var_3c8_3: i128 = var_b0;
                result_14 = result_16;
                result_23 = result_16;
                let var_390_1: i8 = 0;
                
                loop
                {
                    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h20861ed2ff99c5ef(&var_510, &result_14);
                    
                    if var_510 == -0x8000000000000000
                    {
                        break;
                    }
                    
                    let var_500: i64;
                    var_588 = var_500;
                    var_598 = var_510;
                    core::str::converts::from_utf8::ha1effb4cca6d9901(&result_1, *var_598[8], 
                        var_500);
                    let mut rax_12: i64;
                    let mut rdx_3: u64;
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
                
                if rax_9 == 0
                {
                    goto 'label_4bd156;
                }
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h56a948ba6d533cf4(&var_5d8);
        }
    }
    else
    {
        result_14 = result_15;
        core::result::Result$LT$T$C$E$GT$::unwrap::h050bd512b2f8a0d8(
            clap_builder::error::Error$LT$F$GT$::print::h8aa36859c5518f95(&result_14));
        let mut result_18: *mut i32 = result_14;
        
        if (*result_18.byte_offset(0xd5) & 0x1d) != 0xc
        {
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2);
            result_18 = result_14;
        }
        
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h0956252b86df92fc(result_18);
        result = nullptr;
    }
    core::ptr::drop_in_place$LT$uu_sort..GlobalSettings$GT$::h481077a657f06359(&var_4f8);
    result
}
