
  fn uu_rm::uumain::uumain::h70e0ab345ddb6bc4(arg1: i64) -> u64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_608: *mut i64;
    uu_rm::uu_app::hbf90efb73f59e8a6(&var_608);
    let mut var_2f8: *mut i64;
    clap_builder::builder::command::Command::after_help::h82f737b207138c15(&var_2f8, &var_608);
    let mut var_6a8: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::h3a9cbc4c588e5ca9(&var_6a8, 
        &var_2f8, arg1);
    let rax: *mut i64 = var_6a8;
    let var_6a0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_6a0);
    }
    
    let var_678: i64;
    let var_2c8_1: i64 = var_678;
    let mut var_688: i128;
    let var_2d8_1: i128 = var_688;
    let mut var_698: i128;
    let var_2e8_1: i128 = var_698;
    var_2f8 = rax;
    let var_2f0_1: i64 = var_6a0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hca9a760e17c4905f(
        &var_608, &var_2f8, "files(uutils coreutils) 0.0.30Re…", 5);
    let mut var_338: i64;
    clap_builder::parser::error::MatchesError::unwrap::hf52b18848be69bea(&var_338, 
        "files(uutils coreutils) 0.0.30Re…", 5, &var_608);
    let mut var_6d0_1: i64;
    let mut var_6c8_1: *mut i64;
    let mut var_6c0_1: *mut i64;
    let mut var_5f8: i64;
    
    if var_338 == 0
    {
        'label_4571f5:
        var_6c0_1 = 8;
        var_6d0_1 = 0;
        var_6c8_1 = nullptr;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h24c187cf39dba405(&var_608, &var_338);
        let rcx_4: *mut i64 = var_608;
        
        if rcx_4 == -0x8000000000000000
        {
            goto 'label_4571f5;
        }
        
        var_6c8_1 = rcx_4;
        let var_600: *mut i64;
        var_6c0_1 = var_600;
        var_6d0_1 = var_5f8;
    }
    
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2f8, "forceone-file-systempreserve-roo…", 5);
    let mut var_670: *mut *mut i64;
    let mut uu_rm::OPT_INTERACTIVE::hdcb858e2bfe51191_1: i128;
    let mut rcx_6: i8;
    
    if rax_4 != 0
    {
        let mut rax_5: i8;
        let mut rdx_1: *mut *mut i64;
        rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(
            &var_2f8, "forceone-file-systempreserve-roo…", 5);
        let mut rcx_5: *mut *mut i64 = nullptr;
        
        if (rax_5 & 1) != 0
        {
            rcx_5 = rdx_1;
        }
        
        var_670 = rcx_5;
        var_608 = *uu_rm::OPT_PROMPT::ha40e439f0eca58ad;
        var_5f8 = *uu_rm::OPT_PROMPT_MORE::h9f4f98361447e1ef;
        uu_rm::OPT_INTERACTIVE::hdcb858e2bfe51191_1 = *uu_rm::OPT_INTERACTIVE::hdcb858e2bfe51191;
        var_6a8 = &var_608;
        let mut var_5d8: ();
        let var_6a0_1: *mut c_void = &var_5d8;
        rcx_6 = 0;
        rbp = 0;
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h831b4787a29b115a(&var_6a8, &var_2f8, &var_670) != 0
        {
            goto 'label_457313;
        }
        
        goto 'label_457553;
    }
    
    let mut result: u64;
    
    if var_6d0_1 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h814d9f48fb28eb6a(&var_6a8, "missing operandnever", 0xf);
        let var_5f8_3: i64 = var_698;
        var_608 = var_6a8;
        let var_5f0_2: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h00709b7edeb99d0e(&var_608);
    }
    else
    {
        'label_457313:
        let mut var_5f0: i32;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2f8, "promptprompt-morerecursiveverbos…", 6) == 0
        {
            rcx_6 = 1;
            rbp = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_2f8, "prompt-morerecursiveverbose-pres…", 0xb) != 0
            {
                goto 'label_457553;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_2f8, "interactiveforceone-file-systemp…", 0xb) == 0
            {
                rbp = 3;
                rcx_6 = 0;
                goto 'label_457553;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h443c0c4ca046772e(
                &var_608, &var_2f8, "interactiveforceone-file-systemp…", 0xb);
            let rax_10: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::ha2fd908dc3a94b35(
                "interactiveforceone-file-systemp…", 0xb, &var_608);
            
            if rax_10 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let rbx_1: *mut *mut i64 = *rax_10.byte_offset(8);
            let r12_1: u64 = *rax_10.byte_offset(0x10);
            rcx_6 = 0;
            rbp = 0;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5e8de16b13b0fa7a(rbx_1, r12_1, "never", 5) != 0
            {
                goto 'label_457553;
            }
            
            rcx_6 = 1;
            rbp = 1;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5e8de16b13b0fa7a(rbx_1, r12_1, &data_418b64[0xc], 4) != 0
            {
                goto 'label_457553;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5e8de16b13b0fa7a(rbx_1, r12_1, "alwaysInvalid argument to intera…", 6) != 0
            {
                goto 'label_45731d;
            }
            
            var_670 = rbx_1;
            let var_668_1: u64 = r12_1;
            var_6a8 = &var_670;
            let var_6a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h709d5a6c04fcf791;
            var_608 = &data_4e9810;
            let var_600_1: i64 = 2;
            uu_rm::OPT_INTERACTIVE::hdcb858e2bfe51191_1 = 0;
            let var_5f8_1: *mut *mut i64 = &var_6a8;
            var_5f0 = 1;
            let mut var_620: i128;
            core::option::Option$LT$T$GT$::map_or_else::h8617635e584293d6(&var_620, &var_608);
            let var_5f0_1: i32 = 1;
            var_608 = var_620;
            let var_610: i64;
            let var_5f8_2: i64 = var_610;
            result = alloc::boxed::Box$LT$T$GT$::new::h00709b7edeb99d0e(&var_608);
        }
        else
        {
            'label_45731d:
            rcx_6 = 0;
            rbp = 2;
            'label_457553:
            let rax_17: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_2f8, "one-file-systempreserve-rootprom…", 0xf);
            let rax_18: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_2f8, "no-preserve-root", 0x10);
            let rax_19: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_2f8, "recursiveverbose-presume-input-t…", 9);
            let rax_20: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_2f8, "dirinteractiveforceone-file-syst…", 3);
            let rax_21: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_2f8, "verbose-presume-input-ttyfiles(u…", 7);
            let rcx_7: i8 = 2 -
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_2f8, "-presume-input-ttyfiles(uutils c…", 0x12);
            let mut var_6d8: i8 = rax_4;
            let var_6d1_1: i8 = rbp;
            let var_6d7_1: i8 = rax_17;
            let var_6d6_1: i8 = rax_18 ^ 1;
            let var_6d5_1: i8 = rax_19;
            let var_6d4_1: i8 = rax_20;
            let var_6d3_1: i8 = rax_21;
            let var_6d2_1: i8 = rcx_7;
            let mut result_1: u64;
            
            if rcx_6 == 0
            {
                'label_457992:
                
                if uu_rm::remove::h1125bc30f1a1af71(var_6c0_1, var_6d0_1, &var_6d8) == 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h2b29754fe9bf5166(var_6c8_1, var_6c0_1);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b29608627f08de6(&var_2f8);
                    return 0;
                }
                
                let mut rdx_4: *mut *mut c_void;
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
            }
            else
            {
                let mut var_650: i64;
                let mut var_648: *const i8;
                let mut rax_25: i64;
                let mut rcx_9: *const i8;
                
                if rax_19 != 0
                {
                    let c_1: bool = var_6d0_1 < 2;
                    let mut rcx_8: *const i8 = "argumentNoEqualsNO_COLORargument…";
                    
                    if !c_1
                    {
                        rcx_8 = "arguments? recursively?UnknownEr…";
                    }
                    
                    var_650 = var_6d0_1;
                    var_648 = rcx_8;
                    let var_640_1: i64 = 8 + 1;
                    rax_25 = 0xd;
                    rcx_9 = " recursively?UnknownErrnoEPERMEN…";
                    goto 'label_4576c1;
                }
                
                if var_6d0_1 <= 3
                {
                    goto 'label_457992;
                }
                
                var_650 = var_6d0_1;
                var_648 = "arguments? recursively?UnknownEr…";
                let var_640_2: i64 = 9;
                rax_25 = 1;
                rcx_9 = "? recursively?UnknownErrnoEPERME…";
                'label_4576c1:
                let mut var_6b8: *const i8 = rcx_9;
                let var_6b0_1: i64 = rax_25;
                var_608 = &var_650;
                let var_600_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                let var_5f8_4: *const *const i8 = &var_648;
                var_5f0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h709d5a6c04fcf791;
                uu_rm::OPT_INTERACTIVE::hdcb858e2bfe51191_1 = &var_6b8;
                *uu_rm::OPT_INTERACTIVE::hdcb858e2bfe51191_1[8] =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h709d5a6c04fcf791;
                var_6a8 = &data_4e9830;
                let var_6a0_3: i64 = 3;
                var_688 = 0;
                var_698 = &var_608;
                *var_698[8] = 3;
                core::option::Option$LT$T$GT$::map_or_else::h8617635e584293d6(&var_670, &var_6a8);
                let mut var_638: i128 = var_670;
                let var_660: i64;
                let var_628_1: i64 = var_660;
                let mut rax_28: *mut i64;
                let mut rdx_6: i64;
                rax_28 = uucore::util_name::h074417a1e6395129();
                var_6a8 = rax_28;
                let var_6a0_4: i64 = rdx_6;
                var_670 = &var_6a8;
                let var_668_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h709d5a6c04fcf791;
                var_608 = &data_4e9798;
                let var_600_3: i64 = 2;
                uu_rm::OPT_INTERACTIVE::hdcb858e2bfe51191_1 = 0;
                let var_5f8_5: *mut *mut *mut i64 = &var_670;
                var_5f0 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_608);
                var_6a8 = &var_638;
                let var_6a0_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_608 = &data_418830;
                let var_600_4: i64 = 1;
                uu_rm::OPT_INTERACTIVE::hdcb858e2bfe51191_1 = 0;
                let var_5f8_6: *mut *mut i64 = &var_6a8;
                var_5f0 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_608);
                var_608 = &data_4e9860;
                let var_600_5: i64 = 1;
                let var_5f8_7: i64 = 8;
                var_5f0 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_608);
                var_608 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                    &var_608);
                let rax_32: i8 = uucore::read_yes::h67cb9532536454c0();
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc367c76fecfebbb2(&var_638);
                
                if rax_32 != 0
                {
                    goto 'label_457992;
                }
                
                result_1 = 0;
            }
            
            result = result_1;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h2b29754fe9bf5166(var_6c8_1, var_6c0_1);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b29608627f08de6(&var_2f8);
    result
}
