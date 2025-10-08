
  fn uu_env::make_options::h2effa55e44a7ce8e(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "ignore-environmentstart with an …", 0x12);
    let mut r12: i64 = 0;
    let mut r13: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "nullXCPUBOLDBlue]", 4) != 0
    {
        r13 = 0;
    }
    
    let mut var_198: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb12f6ea3c7f6b83c(
        &var_198, arg2, "chdirDIRchange working directory…");
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h72cb49d5288c48eb(
        "chdirDIRchange working directory…", &var_198);
    
    if rax_2 != 0
    {
        r12 = *rax_2.byte_offset(8);
        rbp = *rax_2.byte_offset(0x10);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec434e3db7bf2fae(
        &var_198, arg2, "fileTSTPi128 as dyn ERANGEEDEADL…", 4);
    let mut var_b0: i64;
    clap_builder::parser::error::MatchesError::unwrap::h5b2c920e659854a6(&var_b0, 
        "fileTSTPi128 as dyn ERANGEEDEADL…", 4, &var_198);
    let mut var_258: i64;
    let mut var_248: i64;
    
    if var_b0 == 0
    {
        let mut rax_3: i64;
        let mut rdx_1: i64;
        rax_3 =
            alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha433c616156e1495(0, 8, 0x10);
        var_258 = rax_3;
        let var_250_1: i64 = rdx_1;
        var_248 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h0f7e05f4f15282a3(&var_258, &var_b0);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec434e3db7bf2fae(
        &var_198, arg2, "unsetremove variable from the en…", 5);
    let mut var_70: i64;
    clap_builder::parser::error::MatchesError::unwrap::h5b2c920e659854a6(&var_70, 
        "unsetremove variable from the en…", 5, &var_198);
    let mut var_240: i64;
    let mut var_230: i64;
    
    if var_70 == 0
    {
        let mut rax_4: i64;
        let mut rdx_2: i64;
        rax_4 =
            alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha433c616156e1495(0, 8, 0x10);
        var_240 = rax_4;
        let var_238_1: i64 = rdx_2;
        var_230 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h0f7e05f4f15282a3(&var_240, &var_70);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb12f6ea3c7f6b83c(
        &var_198, arg2, "argv0aOverride the zeroth argume…");
    let mut rax_5: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h72cb49d5288c48eb(
        "argv0aOverride the zeroth argume…", &var_198);
    let mut rcx_4: i64;
    
    if rax_5 == 0
    {
        rcx_4 = 0;
    }
    else
    {
        rcx_4 = *rax_5.byte_offset(8);
        rax_5 = *rax_5.byte_offset(0x10);
    }
    
    let var_188: i64 = var_248;
    var_198 = var_258;
    let var_180: i128 = var_240;
    let var_170: i64 = var_230;
    let var_100: i8 = rax;
    let var_ff: i8 = r13;
    let var_120: i64 = r12;
    let var_118: i64 = rbp;
    let var_168: i64 = 0;
    let var_160: i64 = 8;
    let var_158: i128 = {0};
    let var_148: i64 = 8;
    let var_140: i64 = 0;
    let var_110: i64 = rcx_4;
    let var_108: *mut c_void = rax_5;
    let var_138: i64 = 0;
    let var_130: i64 = 8;
    let var_128: i64 = 0;
    let mut var_228: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec434e3db7bf2fae(
        &var_228, arg2, "ignore-signalSIGset handling of …", 0xd);
    let mut result: *mut i64 = arg1;
    let mut var_1d8: i64;
    clap_builder::parser::error::MatchesError::unwrap::h5b2c920e659854a6(&var_1d8, 
        "ignore-signalSIGset handling of …", 0xd, &var_228);
    
    if var_1d8 == 0
    {
        'label_4750d3:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec434e3db7bf2fae(
            &var_228, arg2, "varsTERMtruemainarg[charSTOPTTIN…", 4);
        let mut var_f0: i64;
        clap_builder::parser::error::MatchesError::unwrap::h5b2c920e659854a6(&var_f0, 
            "varsTERMtruemainarg[charSTOPTTIN…", 4, &var_228);
        
        if var_f0 == 0
        {
            'label_47528d:
            memcpy(result, &var_198, 0xa0);
        }
        else
        {
            var_1d8 = var_f0;
            let mut r12_1: i64 = 0;
            
            loop
            {
                let rax_7: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd26d720e8c6e1ba(&var_1d8);
                
                if rax_7 != 0
                {
                    let rbp_1: i64 = *rax_7.byte_offset(8);
                    let rbx: u64 = *rax_7.byte_offset(0x10);
                    
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(rbp_1, rbx, "-: uu_env(uutils coreutils) 0.0.…", 1) != 0
                    {
                        let var_100_1: i8 = 1;
                    }
                    else
                    {
                        uu_env::parse_name_value_opt::hf06db07eb579a5e8(&var_228, &var_198, rbp_1, 
                            rbx);
                        let rax_9: i64 = var_228;
                        r12_1 = *var_228[8];
                        
                        if rax_9 != 0
                        {
                            result = arg1;
                            result[1] = rax_9;
                            result[2] = r12_1;
                            break;
                        }
                    }
                    
                    if (r12_1 & 1) == 0
                    {
                        continue;
                    }
                }
                
                let var_c0: i128;
                let var_1f8_2: i128 = var_c0;
                let var_d0: i128;
                let var_208_2: i128 = var_d0;
                let var_e0: i128;
                let var_218_2: i128 = var_e0;
                var_228 = var_1d8;
                result = arg1;
                let mut i: u64;
                
                do
                {
                    let rax_10: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd26d720e8c6e1ba(&var_228);
                    
                    if rax_10 == 0
                    {
                        goto 'label_47528d;
                    }
                    
                    i = uu_env::parse_program_opt::h7280c27efa5c6406(&var_198, 
                        *rax_10.byte_offset(8), *rax_10.byte_offset(0x10));
                } while i == 0;
                
                result[1] = i;
                result[2] = &data_5107e8;
                break;
            }
            
            *result = -0x8000000000000000;
            core::ptr::drop_in_place$LT$uu_env..Options$GT$::h0f0136e8e33bf55a(&var_198);
        }
    }
    else
    {
        let var_1a8: i128;
        let var_1f8_1: i128 = var_1a8;
        let var_1b8: i128;
        let var_208_1: i128 = var_1b8;
        let var_1c8: i128;
        let var_218_1: i128 = var_1c8;
        var_228 = var_1d8;
        let mut i_1: *mut c_void;
        let mut rdx_7: i64;
        
        do
        {
            let rax_6: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd26d720e8c6e1ba(&var_228);
            
            if rax_6 == 0
            {
                goto 'label_4750d3;
            }
            
            i_1 = uu_env::parse_signal_opt::h8d80c5165791b2ec(&var_198, *rax_6.byte_offset(8), 
                *rax_6.byte_offset(0x10));
        } while i_1 == 0;
        
        result[1] = i_1;
        result[2] = rdx_7;
        *result = -0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_env..Options$GT$::h0f0136e8e33bf55a(&var_198);
    }
    
    result
}
