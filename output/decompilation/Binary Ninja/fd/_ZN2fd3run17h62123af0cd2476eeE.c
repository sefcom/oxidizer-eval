
  int64_t fd::run::h62123af0cd2476ee(char* arg1)

{
    void var_428;
    clap_builder::derive::Parser::parse::h32264ccf2408ce86(&var_428);
    char var_820;
    char var_230;
    fd::cli::Opts::gen_completions::ha22721d6f5bedfac(&var_820, var_230);
    char var_81f;
    int64_t var_818;
    
    if (var_820 == 1)
    {
        *(arg1 + 8) = var_818;
        *arg1 = 1;
    }
    else if (var_81f != 5)
        fd::print_completions::h77f7606377b2c54f(arg1, var_81f);
    else
    {
        int64_t rax = fd::set_working_dir::h861a2d37c6d30c19(&var_428);
        
        if (!rax)
        {
            fd::cli::Opts::search_paths::h2cf17b02bfc6ed81(&var_820, &var_428);
            int64_t rax_2 = var_820;
            
            if (-(rax_2) != -0x8000000000000000)
            {
                int64_t var_888 = rax_2;
                int64_t var_880_1 = var_818;
                int64_t var_810;
                int64_t var_878_1 = var_810;
                uint64_t rax_3;
                
                if (!var_810)
                {
                    var_820 = &data_8027c8;
                    int64_t var_818_1 = 1;
                    int64_t var_810_1 = 8;
                    int128_t var_808_1 = {0};
                    rax_3 = anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_820);
                    label_5fa31a:
                    *(arg1 + 8) = rax_3;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h3587c287637d2d82(&var_888);
                }
                else
                {
                    rax_3 = fd::ensure_search_pattern_is_not_a_path::ha1d173ccdd2458ae(&var_428);
                    
                    if (rax_3)
                        goto label_5fa31a;
                    
                    int64_t var_870 = 0;
                    int64_t var_868 = 8;
                    void var_350;
                    void* rsi_2 = &var_350;
                    int64_t var_358;
                    
                    if (var_358 == -0x8000000000000000)
                        rsi_2 = &var_868;
                    
                    int64_t var_860 = 0;
                    void var_348;
                    void* rax_4 = &var_348;
                    
                    if (var_358 == -0x8000000000000000)
                        rax_4 = &var_860;
                    
                    int64_t rsi_3 = *rsi_2;
                    void var_3a0;
                    core::iter::traits::iterator::Iterator::chain::hd72108e190f6ac58(&var_820, 
                        rsi_3, rsi_3 + *rax_4 * 0x18, &var_3a0);
                    void* var_7f0_1 = &var_428;
                    int64_t var_620;
                    core::iter::traits::iterator::Iterator::collect::h8b4159608f2d9f3d(&var_620, 
                        &var_820);
                    int64_t r13_1 = var_620;
                    uint64_t var_618;
                    
                    if (r13_1 != -0x8000000000000000)
                    {
                        int64_t var_610;
                        int64_t rbp_1 = var_610;
                        int64_t var_850 = r13_1;
                        uint64_t var_848_1 = var_618;
                        int64_t var_840_1 = rbp_1;
                        memcpy(&var_820, &var_428, 0x200);
                        int32_t rax_7;
                        rax_7 = 1;
                        int32_t var_894_1 = rax_7;
                        fd::construct_config::h2c794a0edf9679a6(&var_620, &var_820, var_618, rbp_1);
                        int64_t r13_2 = var_620;
                        
                        if (r13_2 != 2)
                        {
                            void var_218;
                            memcpy(&var_218, &var_610, 0x1e8);
                            int64_t var_228 = r13_2;
                            uint64_t var_220_1 = var_618;
                            int32_t rax_8;
                            rax_8 = 1;
                            int32_t var_894_2 = rax_8;
                            char var_4e;
                            uint64_t rax_9 = fd::ensure_use_hidden_option_for_leading_dot_pattern::he1bd7dd292972766(var_4e, var_618, rbp_1);
                            char rcx_5;
                            
                            if (!rax_9)
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h77ffe7469255444c(&var_820, &var_850);
                                int128_t var_808;
                                *var_808[8] = &var_228;
                                int32_t var_894_3 = 0;
                                core::iter::traits::iterator::Iterator::collect::h8c7ebd478fb1054f(
                                    &var_620, &var_820);
                                int64_t rcx_6 = var_620;
                                rax_9 = var_618;
                                
                                if (rcx_6 != -0x8000000000000000)
                                {
                                    int64_t rdx_4 = var_610;
                                    int64_t var_838 = rcx_6;
                                    uint64_t var_830_1 = rax_9;
                                    int64_t var_828_1 = rdx_4;
                                    memcpy(&var_820, &var_228, 0x1f8);
                                    fd::walk::scan::h6e1e68bc5996d927(arg1, var_818, var_810, 
                                        &var_838, &var_820);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h39b8e68a66044806(&var_870);
                                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h3587c287637d2d82(&var_888);
                                }
                                
                                rcx_5 = 0;
                            }
                            else
                                rcx_5 = 1;
                            
                            *(arg1 + 8) = rax_9;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$fd..config..Config$GT$::hfe087d4ad1c35932(
                                &var_228);
                            
                            if (rcx_5)
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h39b8e68a66044806(&var_850);
                        }
                        else
                        {
                            *(arg1 + 8) = var_618;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h39b8e68a66044806(&var_850);
                        }
                    }
                    else
                    {
                        *(arg1 + 8) = var_618;
                        *arg1 = 1;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h39b8e68a66044806(&var_870);
                    int64_t result = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h3587c287637d2d82(&var_888);
                    
                    if (r13_1 != -0x8000000000000000)
                        return result;
                }
            }
            else
            {
                *(arg1 + 8) = var_818;
                *arg1 = 1;
            }
        }
        else
        {
            *(arg1 + 8) = rax;
            *arg1 = 1;
        }
    }
    return core::ptr::drop_in_place$LT$fd..cli..Opts$GT$::h8f24d8296db52e21(&var_428);
}
