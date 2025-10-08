
  fn fd::run::h62123af0cd2476ee(arg1: *mut i8) -> i64

{
    let mut var_428: ();
    clap_builder::derive::Parser::parse::h32264ccf2408ce86(&var_428);
    let mut var_820: i8;
    let var_230: i8;
    fd::cli::Opts::gen_completions::ha22721d6f5bedfac(&var_820, var_230);
    let var_81f: i8;
    let var_818: i64;
    
    if var_820 == 1
    {
        *arg1.byte_offset(8) = var_818;
        *arg1 = 1;
    }
    else if var_81f != 5
    {
        fd::print_completions::h77f7606377b2c54f(arg1, var_81f);
    }
    else
    {
        let rax: i64 = fd::set_working_dir::h861a2d37c6d30c19(&var_428);
        
        if rax == 0
        {
            fd::cli::Opts::search_paths::h2cf17b02bfc6ed81(&var_820, &var_428);
            let rax_2: i64 = var_820;
            
            if -(rax_2) != -0x8000000000000000
            {
                let mut var_888: i64 = rax_2;
                let var_880_1: i64 = var_818;
                let var_810: i64;
                let var_878_1: i64 = var_810;
                let mut rax_3: u64;
                
                if var_810 == 0
                {
                    var_820 = &data_8027c8;
                    let var_818_1: i64 = 1;
                    let var_810_1: i64 = 8;
                    let var_808_1: i128 = {0};
                    rax_3 = anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_820);
                    'label_5fa31a:
                    *arg1.byte_offset(8) = rax_3;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h3587c287637d2d82(&var_888);
                }
                else
                {
                    rax_3 = fd::ensure_search_pattern_is_not_a_path::ha1d173ccdd2458ae(&var_428);
                    
                    if rax_3 != 0
                    {
                        goto 'label_5fa31a;
                    }
                    
                    let mut var_870: i64 = 0;
                    let mut var_868: i64 = 8;
                    let mut var_350: ();
                    let mut rsi_2: *mut c_void = &var_350;
                    let var_358: i64;
                    
                    if var_358 == -0x8000000000000000
                    {
                        rsi_2 = &var_868;
                    }
                    
                    let mut var_860: i64 = 0;
                    let mut var_348: ();
                    let mut rax_4: *mut c_void = &var_348;
                    
                    if var_358 == -0x8000000000000000
                    {
                        rax_4 = &var_860;
                    }
                    
                    let rsi_3: i64 = *rsi_2;
                    let mut var_3a0: ();
                    core::iter::traits::iterator::Iterator::chain::hd72108e190f6ac58(&var_820, 
                        rsi_3, rsi_3 + *rax_4 * 0x18, &var_3a0);
                    let var_7f0_1: *mut c_void = &var_428;
                    let mut var_620: i64;
                    core::iter::traits::iterator::Iterator::collect::h8b4159608f2d9f3d(&var_620, 
                        &var_820);
                    let r13_1: i64 = var_620;
                    let var_618: u64;
                    
                    if r13_1 != -0x8000000000000000
                    {
                        let mut var_610: i64;
                        let rbp_1: i64 = var_610;
                        let mut var_850: i64 = r13_1;
                        let var_848_1: u64 = var_618;
                        let var_840_1: i64 = rbp_1;
                        memcpy(&var_820, &var_428, 0x200);
                        let mut rax_7: i32;
                        rax_7 = 1;
                        let var_894_1: i32 = rax_7;
                        fd::construct_config::h2c794a0edf9679a6(&var_620, &var_820, var_618, rbp_1);
                        let r13_2: i64 = var_620;
                        
                        if r13_2 != 2
                        {
                            let mut var_218: ();
                            memcpy(&var_218, &var_610, 0x1e8);
                            let mut var_228: i64 = r13_2;
                            let var_220_1: u64 = var_618;
                            let mut rax_8: i32;
                            rax_8 = 1;
                            let var_894_2: i32 = rax_8;
                            let var_4e: i8;
                            let mut rax_9: u64 = fd::ensure_use_hidden_option_for_leading_dot_pattern::he1bd7dd292972766(var_4e, var_618, rbp_1);
                            let mut rcx_5: i8;
                            
                            if rax_9 == 0
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h77ffe7469255444c(&var_820, &var_850);
                                let mut var_808: i128;
                                *var_808[8] = &var_228;
                                let var_894_3: i32 = 0;
                                core::iter::traits::iterator::Iterator::collect::h8c7ebd478fb1054f(
                                    &var_620, &var_820);
                                let rcx_6: i64 = var_620;
                                rax_9 = var_618;
                                
                                if rcx_6 != -0x8000000000000000
                                {
                                    let rdx_4: i64 = var_610;
                                    let mut var_838: i64 = rcx_6;
                                    let var_830_1: u64 = rax_9;
                                    let var_828_1: i64 = rdx_4;
                                    memcpy(&var_820, &var_228, 0x1f8);
                                    fd::walk::scan::h6e1e68bc5996d927(arg1, var_818, var_810, 
                                        &var_838, &var_820);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h39b8e68a66044806(&var_870);
                                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h3587c287637d2d82(&var_888);
                                }
                                
                                rcx_5 = 0;
                            }
                            else
                            {
                                rcx_5 = 1;
                            }
                            
                            *arg1.byte_offset(8) = rax_9;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$fd..config..Config$GT$::hfe087d4ad1c35932(
                                &var_228);
                            
                            if rcx_5 != 0
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h39b8e68a66044806(&var_850);
                            }
                        }
                        else
                        {
                            *arg1.byte_offset(8) = var_618;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h39b8e68a66044806(&var_850);
                        }
                    }
                    else
                    {
                        *arg1.byte_offset(8) = var_618;
                        *arg1 = 1;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h39b8e68a66044806(&var_870);
                    let result: i64 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h3587c287637d2d82(&var_888);
                    
                    if r13_1 != -0x8000000000000000
                    {
                        return result;
                    }
                }
            }
            else
            {
                *arg1.byte_offset(8) = var_818;
                *arg1 = 1;
            }
        }
        else
        {
            *arg1.byte_offset(8) = rax;
            *arg1 = 1;
        }
    }
    core::ptr::drop_in_place$LT$fd..cli..Opts$GT$::h8f24d8296db52e21(&var_428)
}
