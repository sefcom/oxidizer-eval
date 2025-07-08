
  fn uu_env::make_options::h1d1233ee0c3e2ece(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "ignore-environmentstart with an …", 0x12);
    let mut r13: i64 = 0;
    let mut rbx: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "nullXCPUBOLDBlue]", 4) != 0
    {
        rbx = 0;
    }
    
    let mut var_1e8: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf87a3f80c6c6497(
        &var_1e8, arg2, "chdirDIRchange working directory…", 5);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h86a6ee1c01117d6c(
        "chdirDIRchange working directory…", 5, &var_1e8);
    
    if rax_2 != 0
    {
        r13 = *rax_2.byte_offset(8);
        rbp = *rax_2.byte_offset(0x10);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(
        &var_1e8, arg2, "fileTSTPi128 as dyn ", 4);
    let mut var_268: *mut i128;
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&var_268, 
        "fileTSTPi128 as dyn ", 4, &var_1e8);
    let var_258: i128;
    let var_248: i128;
    let var_238: i128;
    let mut var_218: i64;
    let mut var_208: i64;
    let var_1e0: i64;
    let var_1d8: i64;
    
    if var_268 == 0
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&var_1e8, 0, 0);
        
        if var_1e8 != 0
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1e0);
            /* no return */
        }
        
        var_218 = var_1e0;
        let var_210_1: i64 = var_1d8;
        var_208 = 0;
    }
    else
    {
        let var_88_1: i128 = var_238;
        let var_98_1: i128 = var_248;
        let var_a8_1: i128 = var_258;
        let mut var_b8: i128 = var_268;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h94f0aac4391d9fcc(&var_218, &var_b8);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(
        &var_1e8, arg2, "unsetremove variable from the en…", 5);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&var_268, 
        "unsetremove variable from the en…", 5, &var_1e8);
    let mut var_200: i64;
    let mut var_1f0: i64;
    
    if var_268 == 0
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&var_1e8, 0, 0);
        
        if var_1e8 != 0
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1e0);
            /* no return */
        }
        
        var_200 = var_1e0;
        let var_1f8_1: i64 = var_1d8;
        var_1f0 = 0;
    }
    else
    {
        let var_48_1: i128 = var_238;
        let var_58_1: i128 = var_248;
        let var_68_1: i128 = var_258;
        let mut var_78: i128 = var_268;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha4c9e82de2224bcc(&var_200, &var_78);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf87a3f80c6c6497(
        &var_1e8, arg2, "argv0aOverride the zeroth argume…", 5);
    let mut rax_5: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h86a6ee1c01117d6c(
        "argv0aOverride the zeroth argume…", 5, &var_1e8);
    let mut rcx_2: i64;
    
    if rax_5 == 0
    {
        rcx_2 = 0;
    }
    else
    {
        rcx_2 = *rax_5.byte_offset(8);
        rax_5 = *rax_5.byte_offset(0x10);
    }
    
    let var_1d8_1: i64 = var_208;
    var_1e8 = var_218;
    let var_1d0: i128 = var_200;
    let var_1c0: i64 = var_1f0;
    let var_150: i8 = rax;
    let var_14f: i8 = rbx;
    let var_170: i64 = r13;
    let var_168: i64 = rbp;
    let var_1b8: i64 = 0;
    let var_1b0: i64 = 8;
    let var_1a8: i128 = {0};
    let var_198: i64 = 8;
    let var_190: i64 = 0;
    let var_160: i64 = rcx_2;
    let var_158: *mut c_void = rax_5;
    let var_188: i64 = 0;
    let var_180: i64 = 8;
    let var_178: i64 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(
        &var_268, arg2, "ignore-signalSIGset handling of …", 0xd);
    let mut var_138: i64;
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&var_138, 
        "ignore-signalSIGset handling of …", 0xd, &var_268);
    
    if var_138 == 0
    {
        'label_4cea53:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(
            &var_268, arg2, "varsTERMchararg[ -> STOPTTIN\x1b…", 4);
        let mut var_f8: i64;
        clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&var_f8, 
            "varsTERMchararg[ -> STOPTTIN\x1b…", 4, &var_268);
        
        if var_f8 == 0
        {
            'label_4cebc3:
            memcpy(arg1, &var_1e8, 0xa0);
        }
        else
        {
            var_138 = var_f8;
            let mut rbx_1: i8 = 0;
            
            loop
            {
                let rax_7: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&var_138);
                
                if rax_7 != 0
                {
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(*rax_7.byte_offset(8), *rax_7.byte_offset(0x10)) != 0
                    {
                        let var_150_1: i8 = 1;
                        
                        if (rbx_1 & 1) == 0
                        {
                            continue;
                        }
                    }
                    else
                    {
                        uu_env::parse_name_value_opt::h8375689543212933(&var_268, &var_1e8, 
                            *rax_7.byte_offset(8), *rax_7.byte_offset(0x10));
                        let rax_9: *mut i128 = var_268;
                        let var_260: i64;
                        
                        if rax_9 != 0
                        {
                            arg1[1] = rax_9;
                            arg1[2] = var_260;
                            break;
                        }
                        
                        rbx_1 = var_260;
                        
                        if (rbx_1 & 1) == 0
                        {
                            continue;
                        }
                    }
                }
                
                let var_c8: i128;
                let var_238_2: i128 = var_c8;
                let var_d8: i128;
                let var_248_2: i128 = var_d8;
                let var_e8: i128;
                let var_258_2: i128 = var_e8;
                var_268 = var_138;
                let mut i: *mut i128;
                
                do
                {
                    let rax_10: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&var_268);
                    
                    if rax_10 == 0
                    {
                        goto 'label_4cebc3;
                    }
                    
                    i = uu_env::parse_program_opt::h5dc288b3b7b61775(&var_1e8, 
                        *rax_10.byte_offset(8), *rax_10.byte_offset(0x10));
                } while i == 0;
                
                arg1[1] = i;
                arg1[2] = &data_548840;
                break;
            }
            
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&var_1e8);
        }
    }
    else
    {
        let var_108: i128;
        let var_238_1: i128 = var_108;
        let var_118: i128;
        let var_248_1: i128 = var_118;
        let var_128: i128;
        let var_258_1: i128 = var_128;
        var_268 = var_138;
        let mut i_1: *mut c_void;
        let mut rdx_6: i64;
        
        do
        {
            let rax_6: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&var_268);
            
            if rax_6 == 0
            {
                goto 'label_4cea53;
            }
            
            i_1 = uu_env::parse_signal_opt::h51ec0e44148ee3e7(&var_1e8, *rax_6.byte_offset(8), 
                *rax_6.byte_offset(0x10));
        } while i_1 == 0;
        
        arg1[1] = i_1;
        arg1[2] = rdx_6;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&var_1e8);
    }
    
    arg1
}
