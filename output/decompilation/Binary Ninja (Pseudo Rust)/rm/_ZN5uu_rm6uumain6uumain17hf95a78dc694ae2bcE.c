
  fn uu_rm::uumain::uumain::hf95a78dc694ae2bc(arg1: i64) -> *mut i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1: i128;
    uu_rm::uu_app::h97a746416a9c921d(&uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
    let mut var_2f8: *mut c_void;
    clap_builder::builder::command::Command::after_help::heec11f6db452ec9f(&var_2f8, 
        &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1, "By default, rm does not remove d…", 0x1ed);
    let mut var_648: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h239bec038243f8ce(&var_648, 
        &var_2f8, arg1);
    let rax: i64 = var_648;
    let mut result: *mut i64;
    let var_640: i64;
    
    if rax != -0x8000000000000000
    {
        let var_618: i64;
        let var_650_1: i64 = var_618;
        let var_628: i128;
        let var_660_1: i128 = var_628;
        let mut var_638: i128;
        let var_670_1: i128 = var_638;
        let mut var_680: i64 = rax;
        let var_678_1: i64 = var_640;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6d89796f344d6206(
            &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1, &var_680, "files0.0.28Remove (unlink) the F…", 
            5);
        clap_builder::parser::error::MatchesError::unwrap::hfbcb534b23b8c82f(&var_2f8, 
            "files0.0.28Remove (unlink) the F…", 5, &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
        let mut var_6b0: i64;
        let mut var_6a8: i64;
        let mut var_6a0: *mut c_void;
        let mut uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2: i128;
        let mut uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_2: i128;
        let mut var_598: i128;
        let mut uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_3: i128;
        let mut uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_3: i128;
        
        if var_2f8 == 0
        {
            'label_46ad1d:
            var_6b0 = 0;
            var_6a8 = 8;
            var_6a0 = nullptr;
        }
        else
        {
            let uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_3: i128 = var_2f8;
            let var_2c8: i128;
            var_598 = var_2c8;
            uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_2 =
                uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_3;
            uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 =
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_3;
            uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_3;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1005162becd2ac1a(&var_648, &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
            let rax_2: i64 = var_648;
            uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = var_640;
            
            if rax_2 == -0x8000000000000000
            {
                goto 'label_46ad1d;
            }
            
            var_6a8 = uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1;
            var_6b0 = rax_2;
        }
        
        let rax_3: bool =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_680, "forceone-file-systempreserve-roo…", 5);
        let mut rbx_1: i8;
        
        if rax_3 != 0
        {
            let mut rax_4: i64;
            let mut rdx_1: i64;
            rax_4 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(
                &var_680, "forceone-file-systempreserve-roo…", 5);
            
            if rax_4 == 0
            {
                rdx_1 = rax_4;
            }
            
            var_648 = rdx_1;
            let uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_1: i128 =
                *uu_rm::OPT_PROMPT_MORE::hc269a16929953b44;
            let uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_1: i128 =
                *uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e;
            uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = *uu_rm::OPT_PROMPT::h029e017bbb1d4e3c;
            uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 =
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_1;
            uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_2 =
                uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_1;
            var_2f8 = &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1;
            let var_2f0_1: *mut i128 = &var_598;
            rbx_1 = 0;
            rbp = 0;
            
            if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h92699e7722e0cdb1(&var_2f8, &var_680, &var_648) != 0
            {
                goto 'label_46ae31;
            }
            
            goto 'label_46b060;
        }
        
        if var_6a0 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb1cbe84a292ced29(
                &var_2f8);
            uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 =
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_3;
            uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = var_2f8;
            *uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2[8] = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::hd2f8f845018abeb1(
                &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
        }
        else
        {
            'label_46ae31:
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_680, "promptprompt-morerecursiveverbos…", 6) == 0
            {
                rbx_1 = 1;
                rbp = 1;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_680, "prompt-morerecursiveverbose-pres…", 0xb) != 0
                {
                    goto 'label_46b060;
                }
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_680, "interactiveforceone-file-systemp…", 0xb) == 0
                {
                    rbp = 3;
                    rbx_1 = 0;
                    goto 'label_46b060;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha126cde0a0efcd6f(&uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1, &var_680, 
                    "interactiveforceone-file-systemp…", 0xb);
                let rax_9: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hcd0b6e29cbee9ee2(
                    "interactiveforceone-file-systemp…", 0xb, 
                    &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
                
                if rax_9 == 0
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                let r12_1: i64 = *rax_9.byte_offset(8);
                let r13_1: u64 = *rax_9.byte_offset(0x10);
                rbx_1 = 0;
                rbp = 0;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc6df80652f5a42a6(r12_1, r13_1, "never) = Zero\x1b[7m", 5) != 0
                {
                    goto 'label_46b060;
                }
                
                rbx_1 = 1;
                rbp = 1;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc6df80652f5a42a6(r12_1, r13_1, &data_415474[8], 4) != 0
                {
                    goto 'label_46b060;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc6df80652f5a42a6(r12_1, r13_1, "alwaysInvalid argument to intera…", 6) != 0
                {
                    goto 'label_46ae3b;
                }
                
                var_648 = r12_1;
                let var_640_1: u64 = r13_1;
                var_2f8 = &var_648;
                let var_2f0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
                uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = &data_524f40;
                *uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1[8] = 2;
                uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_2 = 0;
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 = &var_2f8;
                *uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2[8] = 1;
                let mut uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_2: i128;
                core::option::Option$LT$T$GT$::map_or_else::hd9d607212dba1a42(
                    &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_2, 
                    &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
                *uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2[8] = 1;
                uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_2;
                let var_5e8: i64;
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 = var_5e8;
                result = alloc::boxed::Box$LT$T$GT$::new::hd2f8f845018abeb1(
                    &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
            }
            else
            {
                'label_46ae3b:
                rbx_1 = 0;
                rbp = 2;
                'label_46b060:
                let rax_17: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_680, "one-file-systempreserve-rootprom…", 0xf);
                let rax_18: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_680, "no-preserve-rootconnection reset…", 0x10);
                let rax_19: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_680, "recursiveverbose-presume-input-t…", 9);
                let r14_1: *mut *mut c_void = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_680, "dirinteractiveforceone-file-syst…", 3);
                let rax_21: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_680, "verbose-presume-input-ttyfiles0.…", 7);
                let mut var_6b7: bool = rax_3;
                let var_6b1_1: i8 = rbp;
                let var_6b6_1: i8 = rax_17;
                let var_6b5_1: i8 = rax_18 ^ 1;
                let var_6b4_1: i8 = rax_19;
                let var_6b3_1: i8 = r14_1;
                let var_6b2_1: i8 = rax_21;
                
                if rbx_1 == 0 || (var_6a0 >= 4 | rax_19) != 1
                {
                    goto 'label_46b399;
                }
                
                let mut var_698: *mut c_void = var_6a0;
                let c_1: bool = var_6a0 < 2;
                let mut rcx_4: *const i8 = "argumentNoEqualsNO_COLORargument…";
                
                if !c_1
                {
                    rcx_4 = "arguments? recursively?UnknownEr…";
                }
                
                let mut var_608: *const i8 = rcx_4;
                let mut rdx_4: *mut *mut c_void = "? recursively?UnknownErrnoEPERME…";
                
                if rax_19 != 0
                {
                    rdx_4 = " recursively?UnknownErrnoEPERMEN…";
                }
                
                let mut rsi_11: i64 = 1;
                
                if rax_19 != 0
                {
                    rsi_11 = 0xd;
                }
                
                let var_600_1: i64 = 8 + 1;
                let mut var_690: *mut *mut c_void = rdx_4;
                let var_688_1: i64 = rsi_11;
                uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = &var_698;
                *uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 = &var_608;
                *uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2[8] =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
                uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_2 = &var_690;
                *uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_2[8] =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
                var_2f8 = &data_524f60;
                let var_2f0_3: i64 = 3;
                uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_3 = 0;
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_3 =
                    &uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1;
                *uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_3[8] = 3;
                let mut var_5e0: i128;
                core::option::Option$LT$T$GT$::map_or_else::hd9d607212dba1a42(&var_5e0, &var_2f8);
                var_648 = var_5e0;
                let var_5d0: i64;
                var_638 = var_5d0;
                let mut rax_25: *mut c_void;
                let mut rdx_5: i64;
                rax_25 = uucore::util_name::h60d842bf27b05e82();
                var_2f8 = rax_25;
                let var_2f0_4: i64 = rdx_5;
                var_690 = &var_2f8;
                let var_688_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
                uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = &data_524ec8;
                *uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1[8] = 2;
                uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_2 = 0;
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 = &var_690;
                *uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2[8] = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
                var_2f8 = &var_648;
                let var_2f0_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = &data_415190;
                *uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1[8] = 1;
                uu_rm::OPT_INTERACTIVE::hdb1fad32ed4f9e1e_2 = 0;
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 = &var_2f8;
                *uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2[8] = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
                uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1 = &data_524f90;
                *uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1[8] = 1;
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 = 8;
                uu_rm::OPT_PROMPT_MORE::hc269a16929953b44_2 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&uu_rm::OPT_PROMPT::h029e017bbb1d4e3c_1);
                var_698 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                    &var_698);
                
                if uucore::read_yes::hc350e858ab85cf03() == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2b32e5da88b5b934(
                        &var_648);
                    result = nullptr;
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2b32e5da88b5b934(
                        &var_648);
                    'label_46b399:
                    
                    if uu_rm::remove::ha4133918b1aa389d(var_6a8, var_6a0, &var_6b7) == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6a86a76edea5cebd(&var_6b0);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h71510051a836075c(&var_680);
                        return nullptr;
                    }
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                }
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6a86a76edea5cebd(&var_6b0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h71510051a836075c(&var_680);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_640);
    }
    result
}
