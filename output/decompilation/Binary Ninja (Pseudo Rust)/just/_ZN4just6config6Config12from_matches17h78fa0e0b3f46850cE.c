
  fn just::config::Config::from_matches::h78fa0e0b3f46850c(arg1: *mut *mut c_void, arg2: *mut c_void) -> *mut *mut c_void

{
    let mut rbp: *mut i128;
    let var_8: *mut i128 = rbp;
    let mut r15: *mut i64;
    let var_10: *mut i64 = r15;
    let mut i_1: *mut c_void;
    let i_2: *mut c_void = i_1;
    let mut var_548: i64 = 0;
    let var_538: i64 = 0;
    let mut var_338: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(
        &var_338, arg2, "SETsetVALUESHELLshellInvoke <SHE…", 3);
    let mut var_598: i64;
    clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(&var_598, 
        "SETsetVALUESHELLshellInvoke <SHE…", 3, &var_338);
    let var_588: i128;
    let var_578: i128;
    let var_568: i128;
    let mut var_528: i64;
    let mut var_4d0: i128;
    let mut var_328: i128;
    let mut var_318: i128;
    let mut var_308: i128;
    let mut var_198: i128;
    
    if var_598 != 0
    {
        var_308 = var_568;
        var_318 = var_578;
        var_328 = var_588;
        var_338 = var_598;
        
        loop
        {
            let rax_1: *mut i64 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7eaf0fbbe856525(&var_338);
            let rax_2: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7eaf0fbbe856525(&var_338);
            
            if rax_1 == 0
            {
                break;
            }
            
            if rax_2 == 0
            {
                break;
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_4d0, rax_1);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_528, rax_2);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h31a4bd75c0e0caf1(
                &var_198, &var_548, &var_4d0, &var_528);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_198);
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(
        &var_338, arg2, "ARGUMENTSList available recipes …", 9);
    clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(&var_598, 
        "ARGUMENTSList available recipes …", 9, &var_338);
    
    if var_598 == 0
    {
        var_338 = 0;
    }
    else
    {
        var_308 = var_568;
        var_318 = var_578;
        var_328 = var_588;
        var_338 = var_598;
    }
    
    just::positional::Positional::from_values::hbb6d6eb8f50fc340(&var_4d0, &var_338);
    let var_4a8: i64;
    
    if var_4a8 != 0
    {
        let var_4b0: *mut c_void;
        let mut r14_1: *mut c_void = var_4b0;
        i_1 = var_4a8 * 0x30;
        let mut i: *mut c_void;
        
        do
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_598, r14_1);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_338, r14_1.byte_offset(0x18));
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h31a4bd75c0e0caf1(
                &var_528, &var_548, &var_598, &var_338);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_528);
            r14_1 += 0x30;
            i = i_1;
            i_1 -= 0x30;
        } while i != 0x30;
    }
    
    just::config::Config::search_config::hc89ef7530a42dfa5(&var_338, arg2, &var_4d0);
    let rax_5: i64 = var_338;
    var_598 = var_338;
    let mut var_588_1: i128 = var_328;
    let mut var_4b8: ();
    let mut var_4a0: ();
    
    if rax_5 != -0x7ffffffffffffff9
    {
        let zmm0_3: i128 = var_598;
        *arg1.byte_offset(0x30) = var_318;
        *arg1.byte_offset(0x20) = var_588_1;
        *arg1.byte_offset(0x10) = zmm0_3;
        arg1[1] = rax_5;
        arg1[8] = *var_308[8];
        *arg1 = -0x8000000000000000;
        i_1 = 1;
        'label_66003d:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_4d0);
        'label_66015a:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4bba455ed43cce38(&var_4b8);
        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_4a0);
        
        if i_1 != 0
        {
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_548);
        }
    }
    else
    {
        let mut var_408: i128 = var_598;
        let var_3f8_1: i128 = var_588_1;
        let var_4c0: i64;
        
        if var_4c0 == 0
        {
            let mut rax_9: *mut *mut c_void;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "CHANGELOGchangelogPrint changelo…", 9) != 0 && var_538 != 0
            {
                rax_9 = &data_82e8b0;
                'label_65fff8:
                let zmm0_5: i128 = *rax_9;
                *arg1.byte_offset(0x20) = var_548;
                arg1[6] = var_538;
                arg1[1] = -0x7ffffffffffffffa;
                *arg1.byte_offset(0x10) = zmm0_5;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(&var_408);
                i_1 = nullptr;
                goto 'label_66003d;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "DUMP.batbashTextHOMECoreSlimm", 4) != 0 && var_538 != 0
            {
                rax_9 = &data_82e8c0;
                goto 'label_65fff8;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EDIT':=''=~'elsewordc", 4) != 0 && var_538 != 0
            {
                rax_9 = &data_82e8d0;
                goto 'label_65fff8;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "FORMATRun `--fmt` in 'check' mod…", 6) != 0 && var_538 != 0
            {
                rax_9 = &data_82e8e0;
                goto 'label_65fff8;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "INIT || data.env>", 4) != 0 && var_538 != 0
            {
                rax_9 = &data_82e8f0;
                goto 'label_65fff8;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "MANmanPrint man pageREQUESTreque…", 3) != 0 && var_538 != 0
            {
                rax_9 = &data_82e900;
                goto 'label_65fff8;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "SUMMARYsummaryList names of avai…", 7) != 0 && var_538 != 0
            {
                rax_9 = &data_82e910;
                goto 'label_65fff8;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "VARIABLESvariablesList names of …", 9) != 0 && var_538 != 0
            {
                rax_9 = &data_82e920;
                goto 'label_65fff8;
            }
        }
        else
        {
            let mut rax_7: *mut *mut c_void;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "CHANGELOGchangelogPrint changelo…", 9) != 0
            {
                rax_7 = &data_82e8b0;
                'label_6600bb:
                i_1 = var_538 == 0;
                let mut rax_25: i64;
                let mut rcx_7: *mut c_void;
                let mut rdx_6: i64;
                let mut rsi_9: i64;
                let mut rdi_34: *mut *mut c_void;
                
                if var_538 == 0
                {
                    rdi_34 = arg1;
                    rdi_34[4] = var_4c0;
                    *rdi_34.byte_offset(0x10) = var_4d0;
                    rcx_7 = *rax_7;
                    rax_25 = rax_7[1];
                    rdi_34[1] = -0x7ffffffffffffffb;
                    rdx_6 = 0x30;
                    rsi_9 = 0x28;
                }
                else
                {
                    rdi_34 = arg1;
                    rdi_34[3] = var_4c0;
                    *rdi_34.byte_offset(8) = var_4d0;
                    rcx_7 = *rax_7;
                    rax_25 = rax_7[1];
                    rdi_34[8] = var_538;
                    *rdi_34.byte_offset(0x30) = var_548;
                    rdx_6 = 0x28;
                    rsi_9 = 0x20;
                }
                
                *rdi_34.byte_offset(rsi_9) = rcx_7;
                *rdi_34.byte_offset(rdx_6) = rax_25;
                *rdi_34 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(&var_408);
                goto 'label_66015a;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "DUMP.batbashTextHOMECoreSlimm", 4) != 0
            {
                rax_7 = &data_82e8c0;
                goto 'label_6600bb;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EDIT':=''=~'elsewordc", 4) != 0
            {
                rax_7 = &data_82e8d0;
                goto 'label_6600bb;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "FORMATRun `--fmt` in 'check' mod…", 6) != 0
            {
                rax_7 = &data_82e8e0;
                goto 'label_6600bb;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "INIT || data.env>", 4) != 0
            {
                rax_7 = &data_82e8f0;
                goto 'label_6600bb;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "MANmanPrint man pageREQUESTreque…", 3) != 0
            {
                rax_7 = &data_82e900;
                goto 'label_6600bb;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "SUMMARYsummaryList names of avai…", 7) != 0
            {
                rax_7 = &data_82e910;
                goto 'label_6600bb;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "VARIABLESvariablesList names of …", 9) != 0
            {
                rax_7 = &data_82e920;
                goto 'label_6600bb;
            }
        }
        
        i_1 = 1;
        rbp = 1;
        let var_590: i128;
        let mut var_518: i64;
        let mut var_510: i128;
        let mut var_4f8: i128;
        let mut var_4e8: i64;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
            arg2, "CHANGELOGchangelogPrint changelo…", 9) == 0
        {
            rbp = 1;
            let mut var_520: i64;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "CHOOSEchooseSelect one or more r…", 6) != 0
            {
                rbp = 1;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_338, arg2, "CHOOSERchooserJUST_CHOOSEROverri…", 7);
                rbp = 1;
                let rax_29: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "CHOOSERchooserJUST_CHOOSEROverri…", 7, &var_338);
                let mut rcx_9: i64 = -0x8000000000000000;
                
                if rax_29 != 0
                {
                    rbp = 1;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_338, rax_29);
                    rcx_9 = var_338;
                    var_598 = var_338;
                }
                
                var_4f8 = var_538;
                var_510 = var_548;
                var_520 = rcx_9;
                var_518 = var_598;
                var_528 = -0x7fffffffffffffff;
                goto 'label_660353;
            }
            
            rbp = 1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4b6ceb669de439c2(
                &var_338, arg2);
            rbp = 1;
            let mut var_130: i64;
            clap_builder::parser::error::MatchesError::unwrap::h8f151a33b8350140(&var_130, 
                &var_338);
            
            if var_130 != 0
            {
                rbp = 1;
                core::iter::traits::iterator::Iterator::collect::h3d2741f2092effca(&var_598, 
                    &var_130);
                alloc::vec::Vec$LT$T$C$A$GT$::remove::hf1c21fc20f558c4f(&var_338, &var_598);
                var_518 = var_588_1;
                var_528 = var_598;
                var_4f8 = var_548;
                var_4e8 = var_538;
                var_510 = var_338;
                let var_500_1: i64 = var_328;
                'label_660353:
                rbp = 1;
                'label_660356:
                r15 = nullptr;
                goto 'label_660369;
            }
            
            rbp = 1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6bbf46f9a3f19a39(
                &var_338, arg2);
            rbp = 1;
            let rax_71: *mut i8 =
                clap_builder::parser::error::MatchesError::unwrap::h8d68ef0cbe2f9734(&var_338);
            
            if rax_71 != 0
            {
                var_520 = *rax_71;
                var_528 = -0x7ffffffffffffffd;
                goto 'label_6601b8;
            }
            
            rbp = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "DUMP.batbashTextHOMECoreSlimm", 4) != 0
            {
                var_528 = -0x7ffffffffffffffc;
                goto 'label_6601b8;
            }
            
            rbp = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EDIT':=''=~'elsewordc", 4) != 0
            {
                var_528 = -0x7ffffffffffffffb;
                goto 'label_6601b8;
            }
            
            rbp = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EVALUATEExtenderbopomofoUgaritic…", 8) == 0
            {
                rbp = 1;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "FORMATRun `--fmt` in 'check' mod…", 6) != 0
                {
                    var_528 = -0x7ffffffffffffff9;
                    goto 'label_6601b8;
                }
                
                rbp = 1;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "GROUPSgroupsList recipe groupsin…", 6) != 0
                {
                    var_528 = -0x7ffffffffffffff8;
                    goto 'label_6601b8;
                }
                
                rbp = 1;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "INIT || data.env>", 4) != 0
                {
                    var_528 = -0x7ffffffffffffff7;
                    goto 'label_6601b8;
                }
                
                rbp = 1;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(&var_338, arg2, "LISTQuitbyten", 4);
                rbp = 1;
                let mut var_f0: i64;
                clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(&var_f0, 
                    "LISTQuitbyten", 4, &var_338);
                let mut rdx_25: *mut *mut c_void;
                let mut rax_117: i64;
                
                if var_f0 == 0
                {
                    rbp = 1;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "MANmanPrint man pageREQUESTreque…", 3) != 0
                    {
                        var_528 = -0x7ffffffffffffff5;
                        goto 'label_6601b8;
                    }
                    
                    rbp = 1;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_338, arg2, "REQUESTrequestExecute <REQUEST>.…", 7);
                    rbp = 1;
                    let rax_119: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                        "REQUESTrequestExecute <REQUEST>.…", 7, &var_338);
                    
                    if rax_119 == 0
                    {
                        rbp = 1;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(&var_338, arg2, "SHOW'}}'cyanstaro", 4);
                        rbp = 1;
                        let mut var_b0: i64;
                        clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(
                            &var_b0, "SHOW'}}'cyanstaro", 4, &var_338);
                        
                        if var_b0 != 0
                        {
                            rbp = 1;
                            just::config::Config::parse_module_path::hcb242e7462a07dcd(&var_338, 
                                &var_b0);
                            rax_117 = var_338;
                            var_598 = var_338;
                            var_588_1 = var_328;
                            
                            if rax_117 != -0x7ffffffffffffff9
                            {
                                goto 'label_661455;
                            }
                            
                            var_520 = var_598;
                            var_510 = var_588_1;
                            var_528 = -0x7ffffffffffffff2;
                            goto 'label_6601b8;
                        }
                        
                        rbp = 1;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "SUMMARYsummaryList names of avai…", 7) != 0
                        {
                            var_528 = -0x7ffffffffffffff1;
                            goto 'label_6601b8;
                        }
                        
                        rbp = 1;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "VARIABLESvariablesList names of …", 9) != 0
                        {
                            var_528 = -0x7ffffffffffffff0;
                            goto 'label_6601b8;
                        }
                        
                        var_510 = var_4c0;
                        var_520 = var_4d0;
                        var_510 = var_548;
                        var_4f8 = var_538;
                        var_528 = -0x7ffffffffffffff3;
                        rbp = nullptr;
                        goto 'label_660356;
                    }
                    
                    var_338 = *rax_119.byte_offset(8);
                    var_328 = 0;
                    rbp = 1;
                    serde_json::de::from_trait::h0127de077f5b8970(&var_598, &var_338);
                    let rax_120: i64 = var_598;
                    
                    if rax_120 != -0x7fffffffffffffff
                    {
                        var_518 = var_590;
                        var_520 = rax_120;
                        var_528 = -0x7ffffffffffffff4;
                        goto 'label_6601b8;
                    }
                    
                    rdx_25 = arg1;
                    rdx_25[1] = -0x7ffffffffffffffd;
                    rdx_25[2] = var_590;
                }
                else
                {
                    rbp = 1;
                    just::config::Config::parse_module_path::hcb242e7462a07dcd(&var_338, &var_f0);
                    rax_117 = var_338;
                    var_598 = var_338;
                    var_588_1 = var_328;
                    
                    if rax_117 == -0x7ffffffffffffff9
                    {
                        var_520 = var_598;
                        var_510 = var_588_1;
                        var_528 = -0x7ffffffffffffff6;
                        goto 'label_6601b8;
                    }
                    
                    'label_661455:
                    rdx_25 = arg1;
                    rdx_25[8] = *var_308[8];
                    *rdx_25.byte_offset(0x30) = var_318;
                    let zmm0_22: i128 = var_598;
                    *rdx_25.byte_offset(0x20) = var_588_1;
                    *rdx_25.byte_offset(0x10) = zmm0_22;
                    rdx_25[1] = rax_117;
                }
                *rdx_25 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(&var_408);
                i_1 = 1;
                goto 'label_66003d;
            }
            
            if var_4c0 <= 1
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9001c4925ee01b8(&var_338, &var_4d0);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&var_520, &var_338);
                var_4f8 = var_538;
                var_510 = var_548;
                var_528 = -0x7ffffffffffffffa;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h57d196e280b32628(&var_338);
                rbp = nullptr;
                goto 'label_660356;
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9001c4925ee01b8(&var_338, &var_4d0);
            var_318 = 1;
            core::iter::traits::iterator::Iterator::collect::hfb8788515a098a3e(&var_598, &var_338);
            arg1[4] = var_588_1;
            *arg1.byte_offset(0x10) = var_598;
            arg1[1] = -0x7ffffffffffffffb;
            arg1[5] = "EVALUATEExtenderbopomofoUgaritic…";
            arg1[6] = 8;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(
                &var_408);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4bba455ed43cce38(&var_4b8);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_4a0);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_548);
        }
        else
        {
            var_528 = -0x8000000000000000;
            'label_6601b8:
            rbp = 1;
            r15 = 1;
            'label_660369:
            let mut var_5b0_1: i8 = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "UNSTABLEvariableBracketRcapacity…", 8) == 0
            {
                var_5b0_1 = _$LT$just..subcommand..Subcommand$u20$as$u20$core..cmp..PartialEq$GT$::eq::h34a7e583baca5cca(var_528);
            }
            
            let rax_36: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EXPLAINexplainJUST_EXPLAINPrint …", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h026e6f2bb967019c(
                &var_598, arg2);
            let rax_37: *mut i8 =
                clap_builder::parser::error::MatchesError::unwrap::h0bb0efff222160fb(&var_598);
            
            if rax_37 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let rax_38: i8 = *rax_37;
            let rax_39: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "ALLOW-MISSINGallow-missingJUST_A…", 0xd);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(
                &var_598, arg2, "CEILINGceilingJUST_CEILINGDo not…", 7);
            let rax_40: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
                "CEILINGceilingJUST_CEILINGDo not…", 7, &var_598);
            let mut var_468: i64;
            let mut var_458: i64;
            
            if rax_40 == 0
            {
                var_468 = -0x8000000000000000;
            }
            else
            {
                _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_598, *rax_40.byte_offset(8), *rax_40.byte_offset(0x10));
                var_458 = var_588_1;
                var_468 = var_598;
            }
            
            let rax_42: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "CHECKcheckFORMATRun `--fmt` in '…", 5);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3863d1258dafe873(
                &var_598, arg2);
            let rax_43: *mut i8 =
                clap_builder::parser::error::MatchesError::unwrap::hbad1bf60ac211316(&var_598);
            let mut var_4d4_1: i32;
            let mut rax_44: i8;
            let mut rax_48: *mut c_void;
            
            if rax_43 != 0
            {
                rax_44 = *rax_43;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0f93679e049fab93(&var_598, arg2);
                let rax_45: *mut i8 =
                    clap_builder::parser::error::MatchesError::unwrap::heac10de9866ea1b3(&var_598);
                
                if rax_45 == 0
                {
                    var_4d4_1 = 0xa;
                }
                else
                {
                    var_4d4_1 = *U"}]){[("[6 + *rax_45];
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(&var_598, arg2, "CYGPATHcygpathJUST_CYGPATHUse bi…", 7);
                rax_48 = clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
                    "CYGPATHcygpathJUST_CYGPATHUse bi…", 7, &var_598);
            }
            
            if rax_43 == 0 || rax_48 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_598, *rax_48.byte_offset(8), *rax_48.byte_offset(0x10));
            let mut var_3d8: i128 = var_598;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(
                &var_598, arg2, "DOTENV-FILENAMEdotenv-filenameSe…", 0xf);
            let rax_50: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                "DOTENV-FILENAMEdotenv-filenameSe…", 0xf, &var_598);
            let mut var_448: i64;
            let mut var_438: i64;
            
            if rax_50 == 0
            {
                var_448 = -0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_598, rax_50);
                var_438 = var_588_1;
                var_448 = var_598;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(
                &var_598, arg2, "DOTENV-PATHdotenv-pathLoad <DOTE…", 0xb);
            let rax_52: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
                "DOTENV-PATHdotenv-pathLoad <DOTE…", 0xb, &var_598);
            let mut var_428: i64;
            let mut var_418: i64;
            
            if rax_52 == 0
            {
                var_428 = -0x8000000000000000;
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_598, *rax_52.byte_offset(8), *rax_52.byte_offset(0x10));
                var_418 = var_588_1;
                var_428 = var_598;
            }
            
            let rax_54: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "DRY-RUNdry-runJUST_DRY_RUNPrint …", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h75fea92bfd3625b0(
                &var_598, arg2);
            let rax_55: *mut i8 =
                clap_builder::parser::error::MatchesError::unwrap::h19f7b247361257d2(&var_598);
            
            if rax_55 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let rax_56: i8 = *rax_55;
            let rax_57: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "NO-HIGHLIGHTJUST_JUSTFILEUse <JU…", 0xc);
            std::env::current_dir::h2d02f56ea8ff76eb(&var_198);
            _$LT$core..result..Result$LT$T$C$E$GT$$u20$as$u20$snafu..ResultExt$LT$T$C$E$GT$$GT$::context::hdc31640791813314(&var_598, &var_198);
            let rax_58: i64 = var_598;
            let rdx_15: i64 = *var_588_1[8];
            
            if rax_58 != -0x7ffffffffffffff9
            {
                *arg1.byte_offset(0x38) = var_568;
                *arg1.byte_offset(0x28) = var_318;
                arg1[4] = rdx_15;
                *arg1.byte_offset(0x10) = var_590;
                arg1[1] = rax_58;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_428);
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_448);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_3d8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_468);
                core::ptr::drop_in_place$LT$just..subcommand..Subcommand$GT$::h07b589e09bc87d7c(
                    &var_528);
                core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(&var_408);
                
                if rbp != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_4d0);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4bba455ed43cce38(&var_4b8);
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_4a0);
                
                if r15 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_548);
                }
            }
            else
            {
                let var_52c_1: i8 = r15;
                let var_530_1: i8 = rbp;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_598, arg2, "LIST-HEADINGlist-headingJUST_LIS…", 0xc);
                let rax_60: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "LIST-HEADINGlist-headingJUST_LIS…", 0xc, &var_598);
                
                if rax_60 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                let mut var_160: i128;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_160, rax_60);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_598, arg2, "LIST-PREFIXlist-prefixPrint <TEX…", 0xb);
                let rax_61: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "LIST-PREFIXlist-prefixPrint <TEX…", 0xb, &var_598);
                
                if rax_61 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                let mut var_148: i128;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_148, rax_61);
                let rax_62: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "LIST-SUBMODULESlist-submodulesJU…", 0xf);
                let rax_63: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "NO-DOTENVno-dotenvJUST_NO_DOTENV…", 9);
                let rax_64: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "NO-ALIASESCEILINGceilingJUST_CEI…", 0xa);
                let rax_65: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "NO-DEPSno-depsJUST_NO_DEPSno-dep…", 7);
                let rax_66: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "ONEoneForbid multiple recipes fr…", 3);
                let var_178_1: i128 = var_318;
                var_198 = var_408;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_598, arg2, "SHELLshellInvoke <SHELL> to run …", 5);
                let rax_67: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "SHELLshellInvoke <SHELL> to run …", 5, &var_598);
                let mut var_378: i64;
                let mut var_368: i64;
                
                if rax_67 == 0
                {
                    var_378 = -0x8000000000000000;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_598, rax_67);
                    var_368 = var_588_1;
                    var_378 = var_598;
                }
                
                let mut var_488: i64;
                let mut var_478: i64;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "CLEAR-SHELL-ARGS../etc/zoneinfo/…", 0x10) == 0
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(&var_598, arg2, "SHELL-ARGClear shell argumentsCO…", 9);
                    let mut var_70: i64;
                    clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(&var_70, 
                        "SHELL-ARGClear shell argumentsCO…", 9, &var_598);
                    
                    if var_70 == 0
                    {
                        var_488 = -0x8000000000000000;
                    }
                    else
                    {
                        core::iter::traits::iterator::Iterator::collect::h5c3bb3d703877833(
                            &var_598, &var_70);
                        var_478 = var_588_1;
                        var_488 = var_598;
                    }
                }
                else
                {
                    var_488 = 0;
                    let var_480_1: i64 = 8;
                    var_478 = 0;
                }
                
                let rax_73: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "SHELL-COMMANDshell-commandCOMMAN…", 0xd);
                let var_558_1: i64 = var_4e8;
                let var_568_1: i128 = var_4f8;
                let var_578_2: i128 = var_510;
                let var_588_2: i128 = var_518;
                var_598 = var_528;
                let mut var_3c0: i128;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(&var_3c0, arg2, "TEMPDIRJUST_TEMPDIRtempdirSave t…", 7);
                let rax_75: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
                    "TEMPDIRJUST_TEMPDIRtempdirSave t…", 7, &var_3c0);
                let var_3b0: i64;
                let mut var_358: i64;
                let mut var_348: i64;
                
                if rax_75 == 0
                {
                    var_358 = -0x8000000000000000;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_3c0, *rax_75.byte_offset(8), *rax_75.byte_offset(0x10));
                    var_348 = var_3b0;
                    var_358 = var_3c0;
                }
                
                let rax_77: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "TIMESTAMPtimestampJUST_TIMESTAMP…", 9);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_3c0, arg2, "TIMESTAMP-FORMATInvalid argument…", 0x10);
                let rax_78: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "TIMESTAMP-FORMATInvalid argument…", 0x10, &var_3c0);
                
                if rax_78 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_3c0, rax_78);
                let rax_79: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "UNSORTE", 8);
                let mut rbx_5: bool;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "QUIETDUMP-FORMATdump-formatDump …", 5) == 0
                {
                    let rax_81: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_count::hb8804a73e8905967(arg2, "VERBOSEverboseJUST_VERBOSEUse ve…", 7);
                    rbx_5 = true;
                    
                    if rax_81 != 0
                    {
                        rbx_5 = rax_81 == 1 ^ 3;
                    }
                }
                else
                {
                    rbx_5 = false;
                }
                
                let rax_83: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "YESyesAutomatically confirm all …", 3);
                let var_2b0_1: i64 = var_458;
                let var_2c0_1: i128 = var_468;
                var_338 = var_3d8;
                var_328 = var_588_1;
                let var_2a8_1: i128 = var_448;
                let var_298_1: i64 = var_438;
                let var_290_1: i128 = var_428;
                let var_280_1: i64 = var_418;
                *var_318[8] = rdx_15;
                var_328 = var_590;
                let var_150: i64;
                let var_2f8_1: i64 = var_150;
                let var_308_1: i128 = var_160;
                let var_2f0_1: i128 = var_148;
                let var_138: i64;
                let var_2e0_1: i64 = var_138;
                let var_230_1: i128 = var_198;
                let var_220_1: i128 = var_3f8_1;
                let var_210_1: i128 = var_178_1;
                let var_278_1: i128 = var_378;
                let var_268_1: i64 = var_368;
                let var_250_1: i64 = var_478;
                let var_260_1: i128 = var_488;
                let var_1c0_1: i64 = var_4e8;
                let var_1d0_1: i128 = var_4f8;
                let var_1e0_1: i128 = var_510;
                let var_1f0_1: i128 = var_518;
                let var_200_1: i128 = var_528;
                let var_238_1: i64 = var_348;
                let var_248_1: i128 = var_358;
                let var_2c8_1: i64 = var_3b0;
                let var_2d8_1: i128 = var_3c0;
                memcpy(arg1, &var_338, 0x180);
                arg1[0x30] = var_4d4_1;
                *arg1.byte_offset(0x184) = 0;
                *arg1.byte_offset(0x18c) = 0;
                *arg1.byte_offset(0x18d) = 0xa0000000a;
                *arg1.byte_offset(0x195) = rax_44;
                *arg1.byte_offset(0x196) = rax_39;
                *arg1.byte_offset(0x197) = rax_42;
                arg1[0x33] = rax_54;
                *arg1.byte_offset(0x199) = rax_56;
                let temp0_2: i64 = _mm_insert_epi16(
                    _mm_insert_epi16(
                        (rax_63 ^ 1) << 0x18 | rax_62 << 0x10 | (rax_57 ^ 1) << 8 | rax_36, 
                        rax_65 << 8 | rax_64, 2), 
                    rax_73 << 8 | rax_66, 3);
                *arg1.byte_offset(0x19a) = temp0_2[0];
                *arg1.byte_offset(0x1a2) = rax_77;
                *arg1.byte_offset(0x1a3) = rax_79;
                *arg1.byte_offset(0x1a4) = var_5b0_1;
                *arg1.byte_offset(0x1a5) = rax_83;
                *arg1.byte_offset(0x1a6) = rax_38;
                *arg1.byte_offset(0x1a7) = rbx_5;
                
                if var_530_1 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_4d0);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4bba455ed43cce38(&var_4b8);
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_4a0);
                
                if var_52c_1 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_548);
                }
            }
        }
    }
    arg1
}
