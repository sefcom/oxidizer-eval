
  void** just::config::Config::from_matches::h78fa0e0b3f46850c(void** arg1, void* arg2)

{
    int128_t* rbp;
    int128_t* var_8 = rbp;
    int64_t* r15;
    int64_t* var_10 = r15;
    void* i_1;
    void* i_2 = i_1;
    int64_t var_548 = 0;
    int64_t var_538 = 0;
    int128_t var_338;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(
        &var_338, arg2, "SETsetVALUESHELLshellInvoke <SHE…", 3);
    int64_t var_598;
    clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(&var_598, 
        "SETsetVALUESHELLshellInvoke <SHE…", 3, &var_338);
    int128_t var_588;
    int128_t var_578;
    int128_t var_568;
    int64_t var_528;
    int128_t var_4d0;
    int128_t var_328;
    int128_t var_318;
    int128_t var_308;
    int128_t var_198;
    
    if (var_598)
    {
        var_308 = var_568;
        var_318 = var_578;
        var_328 = var_588;
        var_338 = var_598;
        
        while (true)
        {
            int64_t* rax_1 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7eaf0fbbe856525(&var_338);
            void* rax_2 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7eaf0fbbe856525(&var_338);
            
            if (!rax_1)
                break;
            
            if (!rax_2)
                break;
            
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
    
    if (!var_598)
        var_338 = 0;
    else
    {
        var_308 = var_568;
        var_318 = var_578;
        var_328 = var_588;
        var_338 = var_598;
    }
    
    just::positional::Positional::from_values::hbb6d6eb8f50fc340(&var_4d0, &var_338);
    int64_t var_4a8;
    
    if (var_4a8)
    {
        void* var_4b0;
        void* r14_1 = var_4b0;
        i_1 = var_4a8 * 0x30;
        void* i;
        
        do
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_598, r14_1);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_338, r14_1 + 0x18);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h31a4bd75c0e0caf1(
                &var_528, &var_548, &var_598, &var_338);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_528);
            r14_1 += 0x30;
            i = i_1;
            i_1 -= 0x30;
        } while (i != 0x30);
    }
    
    just::config::Config::search_config::hc89ef7530a42dfa5(&var_338, arg2, &var_4d0);
    int64_t rax_5 = var_338;
    var_598 = var_338;
    int128_t var_588_1 = var_328;
    void var_4b8;
    void var_4a0;
    
    if (rax_5 != -0x7ffffffffffffff9)
    {
        int128_t zmm0_3 = var_598;
        *(arg1 + 0x30) = var_318;
        *(arg1 + 0x20) = var_588_1;
        *(arg1 + 0x10) = zmm0_3;
        arg1[1] = rax_5;
        arg1[8] = *var_308[8];
        *arg1 = -0x8000000000000000;
        i_1 = 1;
        label_66003d:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_4d0);
        label_66015a:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4bba455ed43cce38(&var_4b8);
        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_4a0);
        
        if (i_1)
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_548);
    }
    else
    {
        int128_t var_408 = var_598;
        int128_t var_3f8_1 = var_588_1;
        int64_t var_4c0;
        
        if (!var_4c0)
        {
            void** const rax_9;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "CHANGELOGchangelogPrint changelo…", 9) && var_538)
            {
                rax_9 = &data_82e8b0;
                label_65fff8:
                int128_t zmm0_5 = *rax_9;
                *(arg1 + 0x20) = var_548;
                arg1[6] = var_538;
                arg1[1] = -0x7ffffffffffffffa;
                *(arg1 + 0x10) = zmm0_5;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(&var_408);
                i_1 = nullptr;
                goto label_66003d;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "DUMP.batbashTextHOMECoreSlimm", 4) && var_538)
            {
                rax_9 = &data_82e8c0;
                goto label_65fff8;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EDIT':=''=~'elsewordc", 4) && var_538)
            {
                rax_9 = &data_82e8d0;
                goto label_65fff8;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "FORMATRun `--fmt` in 'check' mod…", 6) && var_538)
            {
                rax_9 = &data_82e8e0;
                goto label_65fff8;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "INIT || data.env>", 4) && var_538)
            {
                rax_9 = &data_82e8f0;
                goto label_65fff8;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "MANmanPrint man pageREQUESTreque…", 3) && var_538)
            {
                rax_9 = &data_82e900;
                goto label_65fff8;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "SUMMARYsummaryList names of avai…", 7) && var_538)
            {
                rax_9 = &data_82e910;
                goto label_65fff8;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "VARIABLESvariablesList names of …", 9) && var_538)
            {
                rax_9 = &data_82e920;
                goto label_65fff8;
            }
        }
        else
        {
            void** const rax_7;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "CHANGELOGchangelogPrint changelo…", 9))
            {
                rax_7 = &data_82e8b0;
                label_6600bb:
                i_1 = !var_538;
                int64_t rax_25;
                void* rcx_7;
                int64_t rdx_6;
                int64_t rsi_9;
                void** rdi_34;
                
                if (!var_538)
                {
                    rdi_34 = arg1;
                    rdi_34[4] = var_4c0;
                    *(rdi_34 + 0x10) = var_4d0;
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
                    *(rdi_34 + 8) = var_4d0;
                    rcx_7 = *rax_7;
                    rax_25 = rax_7[1];
                    rdi_34[8] = var_538;
                    *(rdi_34 + 0x30) = var_548;
                    rdx_6 = 0x28;
                    rsi_9 = 0x20;
                }
                
                *(rdi_34 + rsi_9) = rcx_7;
                *(rdi_34 + rdx_6) = rax_25;
                *rdi_34 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(&var_408);
                goto label_66015a;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "DUMP.batbashTextHOMECoreSlimm", 4))
            {
                rax_7 = &data_82e8c0;
                goto label_6600bb;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EDIT':=''=~'elsewordc", 4))
            {
                rax_7 = &data_82e8d0;
                goto label_6600bb;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "FORMATRun `--fmt` in 'check' mod…", 6))
            {
                rax_7 = &data_82e8e0;
                goto label_6600bb;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "INIT || data.env>", 4))
            {
                rax_7 = &data_82e8f0;
                goto label_6600bb;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "MANmanPrint man pageREQUESTreque…", 3))
            {
                rax_7 = &data_82e900;
                goto label_6600bb;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "SUMMARYsummaryList names of avai…", 7))
            {
                rax_7 = &data_82e910;
                goto label_6600bb;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "VARIABLESvariablesList names of …", 9))
            {
                rax_7 = &data_82e920;
                goto label_6600bb;
            }
        }
        
        i_1 = 1;
        rbp = 1;
        int128_t var_590;
        int64_t var_518;
        int128_t var_510;
        int128_t var_4f8;
        int64_t var_4e8;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
            arg2, "CHANGELOGchangelogPrint changelo…", 9))
        {
            rbp = 1;
            int64_t var_520;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "CHOOSEchooseSelect one or more r…", 6))
            {
                rbp = 1;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_338, arg2, "CHOOSERchooserJUST_CHOOSEROverri…", 7);
                rbp = 1;
                void* rax_29 = clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "CHOOSERchooserJUST_CHOOSEROverri…", 7, &var_338);
                int64_t rcx_9 = -0x8000000000000000;
                
                if (rax_29)
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
                goto label_660353;
            }
            
            rbp = 1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4b6ceb669de439c2(
                &var_338, arg2);
            rbp = 1;
            int64_t var_130;
            clap_builder::parser::error::MatchesError::unwrap::h8f151a33b8350140(&var_130, 
                &var_338);
            
            if (var_130)
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
                int64_t var_500_1 = var_328;
                label_660353:
                rbp = 1;
                label_660356:
                r15 = nullptr;
                goto label_660369;
            }
            
            rbp = 1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6bbf46f9a3f19a39(
                &var_338, arg2);
            rbp = 1;
            char* rax_71 =
                clap_builder::parser::error::MatchesError::unwrap::h8d68ef0cbe2f9734(&var_338);
            
            if (rax_71)
            {
                var_520 = *rax_71;
                var_528 = -0x7ffffffffffffffd;
                goto label_6601b8;
            }
            
            rbp = 1;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "DUMP.batbashTextHOMECoreSlimm", 4))
            {
                var_528 = -0x7ffffffffffffffc;
                goto label_6601b8;
            }
            
            rbp = 1;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EDIT':=''=~'elsewordc", 4))
            {
                var_528 = -0x7ffffffffffffffb;
                goto label_6601b8;
            }
            
            rbp = 1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EVALUATEExtenderbopomofoUgaritic…", 8))
            {
                rbp = 1;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "FORMATRun `--fmt` in 'check' mod…", 6))
                {
                    var_528 = -0x7ffffffffffffff9;
                    goto label_6601b8;
                }
                
                rbp = 1;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "GROUPSgroupsList recipe groupsin…", 6))
                {
                    var_528 = -0x7ffffffffffffff8;
                    goto label_6601b8;
                }
                
                rbp = 1;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "INIT || data.env>", 4))
                {
                    var_528 = -0x7ffffffffffffff7;
                    goto label_6601b8;
                }
                
                rbp = 1;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(&var_338, arg2, "LISTQuitbyten", 4);
                rbp = 1;
                int64_t var_f0;
                clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(&var_f0, 
                    "LISTQuitbyten", 4, &var_338);
                void** rdx_25;
                int64_t rax_117;
                
                if (!var_f0)
                {
                    rbp = 1;
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "MANmanPrint man pageREQUESTreque…", 3))
                    {
                        var_528 = -0x7ffffffffffffff5;
                        goto label_6601b8;
                    }
                    
                    rbp = 1;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_338, arg2, "REQUESTrequestExecute <REQUEST>.…", 7);
                    rbp = 1;
                    void* rax_119 =
                        clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                        "REQUESTrequestExecute <REQUEST>.…", 7, &var_338);
                    
                    if (!rax_119)
                    {
                        rbp = 1;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(&var_338, arg2, "SHOW'}}'cyanstaro", 4);
                        rbp = 1;
                        int64_t var_b0;
                        clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(
                            &var_b0, "SHOW'}}'cyanstaro", 4, &var_338);
                        
                        if (var_b0)
                        {
                            rbp = 1;
                            just::config::Config::parse_module_path::hcb242e7462a07dcd(&var_338, 
                                &var_b0);
                            rax_117 = var_338;
                            var_598 = var_338;
                            var_588_1 = var_328;
                            
                            if (rax_117 != -0x7ffffffffffffff9)
                                goto label_661455;
                            
                            var_520 = var_598;
                            var_510 = var_588_1;
                            var_528 = -0x7ffffffffffffff2;
                            goto label_6601b8;
                        }
                        
                        rbp = 1;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "SUMMARYsummaryList names of avai…", 7))
                        {
                            var_528 = -0x7ffffffffffffff1;
                            goto label_6601b8;
                        }
                        
                        rbp = 1;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "VARIABLESvariablesList names of …", 9))
                        {
                            var_528 = -0x7ffffffffffffff0;
                            goto label_6601b8;
                        }
                        
                        var_510 = var_4c0;
                        var_520 = var_4d0;
                        var_510 = var_548;
                        var_4f8 = var_538;
                        var_528 = -0x7ffffffffffffff3;
                        rbp = nullptr;
                        goto label_660356;
                    }
                    
                    var_338 = *(rax_119 + 8);
                    var_328 = 0;
                    rbp = 1;
                    serde_json::de::from_trait::h0127de077f5b8970(&var_598, &var_338);
                    int64_t rax_120 = var_598;
                    
                    if (rax_120 != -0x7fffffffffffffff)
                    {
                        var_518 = var_590;
                        var_520 = rax_120;
                        var_528 = -0x7ffffffffffffff4;
                        goto label_6601b8;
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
                    
                    if (rax_117 == -0x7ffffffffffffff9)
                    {
                        var_520 = var_598;
                        var_510 = var_588_1;
                        var_528 = -0x7ffffffffffffff6;
                        goto label_6601b8;
                    }
                    
                    label_661455:
                    rdx_25 = arg1;
                    rdx_25[8] = *var_308[8];
                    *(rdx_25 + 0x30) = var_318;
                    int128_t zmm0_22 = var_598;
                    *(rdx_25 + 0x20) = var_588_1;
                    *(rdx_25 + 0x10) = zmm0_22;
                    rdx_25[1] = rax_117;
                }
                *rdx_25 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(&var_408);
                i_1 = 1;
                goto label_66003d;
            }
            
            if (var_4c0 <= 1)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9001c4925ee01b8(&var_338, &var_4d0);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&var_520, &var_338);
                var_4f8 = var_538;
                var_510 = var_548;
                var_528 = -0x7ffffffffffffffa;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h57d196e280b32628(&var_338);
                rbp = nullptr;
                goto label_660356;
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9001c4925ee01b8(&var_338, &var_4d0);
            var_318 = 1;
            core::iter::traits::iterator::Iterator::collect::hfb8788515a098a3e(&var_598, &var_338);
            arg1[4] = var_588_1;
            *(arg1 + 0x10) = var_598;
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
            label_6601b8:
            rbp = 1;
            r15 = 1;
            label_660369:
            char var_5b0_1 = 1;
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "UNSTABLEvariableBracketRcapacity…", 8))
                var_5b0_1 = _$LT$just..subcommand..Subcommand$u20$as$u20$core..cmp..PartialEq$GT$::eq::h34a7e583baca5cca(var_528);
            
            char rax_36 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "EXPLAINexplainJUST_EXPLAINPrint …", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h026e6f2bb967019c(
                &var_598, arg2);
            char* rax_37 =
                clap_builder::parser::error::MatchesError::unwrap::h0bb0efff222160fb(&var_598);
            
            if (!rax_37)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            char rax_38 = *rax_37;
            char rax_39 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "ALLOW-MISSINGallow-missingJUST_A…", 0xd);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(
                &var_598, arg2, "CEILINGceilingJUST_CEILINGDo not…", 7);
            void* rax_40 = clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
                "CEILINGceilingJUST_CEILINGDo not…", 7, &var_598);
            int64_t var_468;
            int64_t var_458;
            
            if (!rax_40)
                var_468 = -0x8000000000000000;
            else
            {
                _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_598, *(rax_40 + 8), *(rax_40 + 0x10));
                var_458 = var_588_1;
                var_468 = var_598;
            }
            
            char rax_42 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "CHECKcheckFORMATRun `--fmt` in '…", 5);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3863d1258dafe873(
                &var_598, arg2);
            char* rax_43 =
                clap_builder::parser::error::MatchesError::unwrap::hbad1bf60ac211316(&var_598);
            int32_t var_4d4_1;
            char rax_44;
            void* rax_48;
            
            if (rax_43)
            {
                rax_44 = *rax_43;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0f93679e049fab93(&var_598, arg2);
                char* rax_45 =
                    clap_builder::parser::error::MatchesError::unwrap::heac10de9866ea1b3(&var_598);
                
                if (!rax_45)
                    var_4d4_1 = 0xa;
                else
                    var_4d4_1 = (*U"}]){[(")[6 + *rax_45];
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(&var_598, arg2, "CYGPATHcygpathJUST_CYGPATHUse bi…", 7);
                rax_48 = clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
                    "CYGPATHcygpathJUST_CYGPATHUse bi…", 7, &var_598);
            }
            
            if (!rax_43 || !rax_48)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_598, *(rax_48 + 8), *(rax_48 + 0x10));
            int128_t var_3d8 = var_598;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(
                &var_598, arg2, "DOTENV-FILENAMEdotenv-filenameSe…", 0xf);
            void* rax_50 = clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                "DOTENV-FILENAMEdotenv-filenameSe…", 0xf, &var_598);
            int64_t var_448;
            int64_t var_438;
            
            if (!rax_50)
                var_448 = -0x8000000000000000;
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_598, rax_50);
                var_438 = var_588_1;
                var_448 = var_598;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(
                &var_598, arg2, "DOTENV-PATHdotenv-pathLoad <DOTE…", 0xb);
            void* rax_52 = clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
                "DOTENV-PATHdotenv-pathLoad <DOTE…", 0xb, &var_598);
            int64_t var_428;
            int64_t var_418;
            
            if (!rax_52)
                var_428 = -0x8000000000000000;
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_598, *(rax_52 + 8), *(rax_52 + 0x10));
                var_418 = var_588_1;
                var_428 = var_598;
            }
            
            char rax_54 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "DRY-RUNdry-runJUST_DRY_RUNPrint …", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h75fea92bfd3625b0(
                &var_598, arg2);
            char* rax_55 =
                clap_builder::parser::error::MatchesError::unwrap::h19f7b247361257d2(&var_598);
            
            if (!rax_55)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            char rax_56 = *rax_55;
            char rax_57 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(
                arg2, "NO-HIGHLIGHTJUST_JUSTFILEUse <JU…", 0xc);
            std::env::current_dir::h2d02f56ea8ff76eb(&var_198);
            _$LT$core..result..Result$LT$T$C$E$GT$$u20$as$u20$snafu..ResultExt$LT$T$C$E$GT$$GT$::context::hdc31640791813314(&var_598, &var_198);
            int64_t rax_58 = var_598;
            int64_t rdx_15 = *var_588_1[8];
            
            if (rax_58 != -0x7ffffffffffffff9)
            {
                *(arg1 + 0x38) = var_568;
                *(arg1 + 0x28) = var_318;
                arg1[4] = rdx_15;
                *(arg1 + 0x10) = var_590;
                arg1[1] = rax_58;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_428);
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_448);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_3d8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_468);
                core::ptr::drop_in_place$LT$just..subcommand..Subcommand$GT$::h07b589e09bc87d7c(
                    &var_528);
                core::ptr::drop_in_place$LT$just..search_config..SearchConfig$GT$::hac4c946053031165(&var_408);
                
                if (rbp)
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_4d0);
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4bba455ed43cce38(&var_4b8);
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_4a0);
                
                if (r15)
                    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_548);
            }
            else
            {
                char var_52c_1 = r15;
                char var_530_1 = rbp;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_598, arg2, "LIST-HEADINGlist-headingJUST_LIS…", 0xc);
                void* rax_60 = clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "LIST-HEADINGlist-headingJUST_LIS…", 0xc, &var_598);
                
                if (!rax_60)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                int128_t var_160;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_160, rax_60);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_598, arg2, "LIST-PREFIXlist-prefixPrint <TEX…", 0xb);
                void* rax_61 = clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "LIST-PREFIXlist-prefixPrint <TEX…", 0xb, &var_598);
                
                if (!rax_61)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                int128_t var_148;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_148, rax_61);
                char rax_62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "LIST-SUBMODULESlist-submodulesJU…", 0xf);
                char rax_63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "NO-DOTENVno-dotenvJUST_NO_DOTENV…", 9);
                char rax_64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "NO-ALIASESCEILINGceilingJUST_CEI…", 0xa);
                char rax_65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "NO-DEPSno-depsJUST_NO_DEPSno-dep…", 7);
                char rax_66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "ONEoneForbid multiple recipes fr…", 3);
                int128_t var_178_1 = var_318;
                var_198 = var_408;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_598, arg2, "SHELLshellInvoke <SHELL> to run …", 5);
                void* rax_67 = clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "SHELLshellInvoke <SHELL> to run …", 5, &var_598);
                int64_t var_378;
                int64_t var_368;
                
                if (!rax_67)
                    var_378 = -0x8000000000000000;
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_598, rax_67);
                    var_368 = var_588_1;
                    var_378 = var_598;
                }
                
                int64_t var_488;
                int64_t var_478;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "CLEAR-SHELL-ARGS../etc/zoneinfo/…", 0x10))
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6518733828433cfc(&var_598, arg2, "SHELL-ARGClear shell argumentsCO…", 9);
                    int64_t var_70;
                    clap_builder::parser::error::MatchesError::unwrap::h7031e7fe0f18ee77(&var_70, 
                        "SHELL-ARGClear shell argumentsCO…", 9, &var_598);
                    
                    if (!var_70)
                        var_488 = -0x8000000000000000;
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
                    int64_t var_480_1 = 8;
                    var_478 = 0;
                }
                
                char rax_73 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "SHELL-COMMANDshell-commandCOMMAN…", 0xd);
                int64_t var_558_1 = var_4e8;
                int128_t var_568_1 = var_4f8;
                int128_t var_578_2 = var_510;
                int128_t var_588_2 = var_518;
                var_598 = var_528;
                int128_t var_3c0;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(&var_3c0, arg2, "TEMPDIRJUST_TEMPDIRtempdirSave t…", 7);
                void* rax_75 = clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
                    "TEMPDIRJUST_TEMPDIRtempdirSave t…", 7, &var_3c0);
                int64_t var_3b0;
                int64_t var_358;
                int64_t var_348;
                
                if (!rax_75)
                    var_358 = -0x8000000000000000;
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_3c0, *(rax_75 + 8), *(rax_75 + 0x10));
                    var_348 = var_3b0;
                    var_358 = var_3c0;
                }
                
                char rax_77 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "TIMESTAMPtimestampJUST_TIMESTAMP…", 9);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74bfb6ef6fd25741(&var_3c0, arg2, "TIMESTAMP-FORMATInvalid argument…", 0x10);
                void* rax_78 = clap_builder::parser::error::MatchesError::unwrap::h99b8996a07cbbeab(
                    "TIMESTAMP-FORMATInvalid argument…", 0x10, &var_3c0);
                
                if (!rax_78)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_3c0, rax_78);
                char rax_79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "UNSORTE", 8);
                bool rbx_5;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "QUIETDUMP-FORMATdump-formatDump …", 5))
                {
                    char rax_81 = clap_builder::parser::matches::arg_matches::ArgMatches::get_count::hb8804a73e8905967(arg2, "VERBOSEverboseJUST_VERBOSEUse ve…", 7);
                    rbx_5 = true;
                    
                    if (rax_81)
                        rbx_5 = rax_81 == 1 ^ 3;
                }
                else
                    rbx_5 = false;
                
                char rax_83 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, "YESyesAutomatically confirm all …", 3);
                int64_t var_2b0_1 = var_458;
                int128_t var_2c0_1 = var_468;
                var_338 = var_3d8;
                var_328 = var_588_1;
                int128_t var_2a8_1 = var_448;
                int64_t var_298_1 = var_438;
                int128_t var_290_1 = var_428;
                int64_t var_280_1 = var_418;
                *var_318[8] = rdx_15;
                var_328 = var_590;
                int64_t var_150;
                int64_t var_2f8_1 = var_150;
                int128_t var_308_1 = var_160;
                int128_t var_2f0_1 = var_148;
                int64_t var_138;
                int64_t var_2e0_1 = var_138;
                int128_t var_230_1 = var_198;
                int128_t var_220_1 = var_3f8_1;
                int128_t var_210_1 = var_178_1;
                int128_t var_278_1 = var_378;
                int64_t var_268_1 = var_368;
                int64_t var_250_1 = var_478;
                int128_t var_260_1 = var_488;
                int64_t var_1c0_1 = var_4e8;
                int128_t var_1d0_1 = var_4f8;
                int128_t var_1e0_1 = var_510;
                int128_t var_1f0_1 = var_518;
                int128_t var_200_1 = var_528;
                int64_t var_238_1 = var_348;
                int128_t var_248_1 = var_358;
                int64_t var_2c8_1 = var_3b0;
                int128_t var_2d8_1 = var_3c0;
                memcpy(arg1, &var_338, 0x180);
                arg1[0x30] = var_4d4_1;
                *(arg1 + 0x184) = 0;
                *(arg1 + 0x18c) = 0;
                *(arg1 + 0x18d) = 0xa0000000a;
                *(arg1 + 0x195) = rax_44;
                *(arg1 + 0x196) = rax_39;
                *(arg1 + 0x197) = rax_42;
                arg1[0x33] = rax_54;
                *(arg1 + 0x199) = rax_56;
                int64_t temp0_2 = _mm_insert_epi16(
                    _mm_insert_epi16(
                        (rax_63 ^ 1) << 0x18 | rax_62 << 0x10 | (rax_57 ^ 1) << 8 | rax_36, 
                        rax_65 << 8 | rax_64, 2), 
                    rax_73 << 8 | rax_66, 3);
                *(arg1 + 0x19a) = temp0_2[0];
                *(arg1 + 0x1a2) = rax_77;
                *(arg1 + 0x1a3) = rax_79;
                *(arg1 + 0x1a4) = var_5b0_1;
                *(arg1 + 0x1a5) = rax_83;
                *(arg1 + 0x1a6) = rax_38;
                *(arg1 + 0x1a7) = rbx_5;
                
                if (var_530_1)
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_4d0);
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h4bba455ed43cce38(&var_4b8);
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_4a0);
                
                if (var_52c_1)
                    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_548);
            }
        }
    }
    return arg1;
}
