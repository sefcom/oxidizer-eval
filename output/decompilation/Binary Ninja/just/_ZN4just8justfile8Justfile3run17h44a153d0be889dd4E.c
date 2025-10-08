
  int64_t just::justfile::Justfile::run::h44a153d0be889dd4(char* arg1, void* arg2, void* arg3, void* arg4, int64_t* arg5, int64_t arg6, int64_t arg7)

{
    int64_t rax = *arg5;
    int64_t rcx = arg5[1];
    int64_t rsi = rax;
    char* rdx;
    rdx = rax;
    
    if (rax)
        rsi = arg5[2];
    
    char const* const var_3e8 = rdx;
    int64_t result = 0;
    int64_t var_3c0 = 0;
    int128_t var_220;
    core::iter::traits::iterator::Iterator::collect::h7b08ed1676f42405(&var_220, &var_3e8);
    int64_t var_210;
    
    if (var_210)
    {
        *var_3e8[7] = var_220;
        *arg1 = 0x33;
        *(arg1 + 1) = var_3e8;
        *(arg1 + 0x10) = result;
        *(arg1 + 0x18) = var_210;
        return result;
    }
    
    int128_t var_398;
    int64_t var_388;
    int64_t var_2d8;
    int128_t var_1d8;
    
    if (!*(arg3 + 0x19d))
    {
        var_2d8 = 0;
        int64_t var_2c8_2 = 0;
        label_66db68:
        void var_f0;
        just::scope::Scope::root::hda0e4ba20c461efb(&var_f0);
        void var_68;
        typed_arena::Arena$LT$T$GT$::new::hd6515356f5b54e6a(&var_68);
        void* const var_250 = nullptr;
        int64_t var_240_1 = 0;
        just::justfile::Justfile::evaluate_scopes::h6ff4fac1720d11b8(&var_3e8, arg2, &var_68, arg3, 
            &var_2d8, arg5, &var_f0, &var_250, arg4);
        char rax_6 = var_3e8;
        
        if (rax_6 != 0x38)
        {
            *(arg1 + 0x60) = var_388;
            *(arg1 + 0x51) = var_398;
            *(arg1 + 0x41) = *rsi[1];
            int128_t zmm0_3 = *var_3e8[1];
            *(arg1 + 0x31) = *rax[1];
            *(arg1 + 0x21) = *rdx[1];
            *(arg1 + 0x11) = *rax[1];
            *(arg1 + 1) = zmm0_3;
            *arg1 = rax_6;
            label_66e78d:
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$$LP$$RF$just..justfile..Justfile$C$$RF$just..scope..Scope$RP$$GT$$GT$::h32af9d5b63dc3081(&var_250);
            core::ptr::drop_in_place$LT$typed_arena..Arena$LT$just..scope..Scope$GT$$GT$::h663a7193296ae013(&var_68);
            core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_f0);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_2d8);
        }
        else
        {
            int64_t var_248;
            void* rax_7 =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hc82ab274f21ca297(
                var_250, var_248, *(arg2 + 0x38), *(arg2 + 0x40));
            
            if (!rax_7)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            int64_t* rbp_1 = *(rax_7 + 8);
            int64_t rcx_6 = *(arg3 + 0x138) ^ 0x8000000000000000;
            int64_t rax_8 = 2;
            
            if (rcx_6 < 0x11)
                rax_8 = rcx_6;
            
            int16_t var_400;
            void* const var_308;
            char var_2b8;
            int32_t var_2a8;
            
            if (rax_8 == 2)
            {
                if (!*(arg3 + 0x1a1))
                    std::process::Command::new::h8c26813fa7e2543d(&var_1d8, arg3 + 0x150);
                else
                {
                    just::settings::Settings::shell_command::h194009976e056ef8(&var_3e8, 
                        arg2 + 0xa8, arg3);
                    std::process::Command::arg::hdfbbb0c642d6ac00(&var_3e8, arg3 + 0x150);
                    memcpy(&var_1d8, &var_3e8, 0xe0);
                }
                
                int64_t rsi_14 = *(arg3 + 0x140);
                int64_t rdx_10 = *(arg3 + 0x148);
                std::process::Command::args::h47fc44e4a8bf7289(&var_1d8, rsi_14, rdx_10);
                std::process::Command::current_dir::hfb203bdc96bba19b(&var_1d8, arg4 + 0x18);
                var_308 = nullptr;
                int64_t var_2f8_1 = 0;
                int64_t* var_2f0_1 = rbp_1;
                int64_t r12;
                r12 = 1;
                _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::export::hbded0bf5acb950b5(&var_1d8, arg2 + 0xa8, &var_2d8, &var_308, arg2 + 0x238);
                memcpy(&var_3e8, &var_1d8, 0xe0);
                _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::status_guard::h0e09d4f2af31801d(&var_2b8, &var_3e8);
                int32_t r15_5 = var_2a8;
                int32_t rbp_2;
                
                if (!(var_2b8 & 1))
                {
                    int32_t var_2b4;
                    rbp_2 = var_2b4;
                    label_66e1dd:
                    
                    if (rbp_2)
                    {
                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_3e8, *(arg3 + 0x158), *(arg3 + 0x160));
                        var_2a8 = rax;
                        var_2b8 = var_3e8;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h828044586946af78(&var_3e8, rsi_14, rdx_10);
                        *(arg1 + 0x18) = var_2a8;
                        *(arg1 + 8) = var_2b8;
                        *(arg1 + 0x20) = var_3e8;
                        *(arg1 + 0x30) = rax;
                        *arg1 = 0xb;
                        *(arg1 + 4) = rbp_2;
                    }
                    else if (!r15_5)
                        *arg1 = 0x38;
                    else
                    {
                        *arg1 = 0x1e;
                        *(arg1 + 4) = r15_5;
                    }
                }
                else
                {
                    int64_t var_2b0;
                    just::justfile::Justfile::run::_$u7b$$u7b$closure$u7d$$u7d$::h500eb1357fdc462c(
                        &var_3e8, *(arg3 + 0x158), *(arg3 + 0x160), rsi_14, rdx_10, var_2b0);
                    char rax_19 = var_3e8;
                    var_400 = *var_3e8[1];
                    rbp_2 = *var_3e8[4];
                    var_2b8 = result;
                    var_2a8 = rcx;
                    int128_t var_298_1 = var_3c0;
                    int128_t var_288_1 = rcx;
                    int128_t var_278_1 = arg2;
                    
                    if (rax_19 == 0x38)
                        goto label_66e1dd;
                    
                    arg1[3] = *var_3e8[3];
                    *(arg1 + 1) = var_400;
                    *(arg1 + 8) = var_2b8;
                    *(arg1 + 0x18) = var_2a8;
                    *(arg1 + 0x28) = var_298_1;
                    *(arg1 + 0x38) = var_288_1;
                    *(arg1 + 0x48) = var_278_1;
                    *(arg1 + 0x58) = var_398;
                    *arg1 = rax_19;
                    *(arg1 + 4) = rbp_2;
                }
                core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_308);
                goto label_66e78d;
            }
            
            int128_t var_1c9;
            
            if (rax_8 == 6)
            {
                if (*(arg3 + 0x140) != -0x8000000000000000)
                {
                    int64_t r15_4 = *(arg3 + 0x148);
                    uint64_t r12_1 = *(arg3 + 0x150);
                    int64_t rax_18;
                    int64_t rdx_9;
                    rax_18 = just::scope::Scope::value::hb06d4bb986c3514e(rbp_1, r15_4, r12_1);
                    
                    if (!rax_18)
                    {
                        just::justfile::Justfile::suggest_variable::h768f9f50c733e0a8(&var_1d8, 
                            arg2, r15_4, r12_1);
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_2b8, arg3 + 0x140);
                        *(arg1 + 0x38) = var_2a8;
                        *(arg1 + 0x28) = var_2b8;
                        *var_3e8[7] = var_1d8;
                        int64_t var_3d8;
                        *var_3d8[7] = var_1c9;
                        *arg1 = 0x15;
                        *(arg1 + 1) = var_3e8;
                        *(arg1 + 0x11) = var_3d8;
                        *(arg1 + 0x20) = rcx;
                    }
                    else
                    {
                        var_2b8 = rax_18;
                        int64_t var_2b0_1 = rdx_9;
                        var_1d8 = &var_2b8;
                        *var_1d8[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                        var_3e8 = &data_465db0;
                        int64_t var_3e0 = 1;
                        int64_t var_3c8_1 = 0;
                        int128_t* var_3d8_1 = &var_1d8;
                        int64_t var_3d0_1 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_3e8);
                        *arg1 = 0x38;
                    }
                }
                else
                {
                    int64_t rax_9 = *rbp_1;
                    int64_t rcx_7;
                    int128_t zmm0_4;
                    
                    if (!rax_9)
                    {
                        zmm0_4 = {0};
                        rcx_7 = 0;
                    }
                    else
                    {
                        zmm0_4 = *(rbp_1 + 8);
                        rcx_7 = 1;
                    }
                    
                    int64_t var_d0 = rcx_7;
                    int64_t var_c8_1 = 0;
                    int64_t var_c0_1 = rax_9;
                    int64_t var_b8_1 = zmm0_4;
                    int64_t var_b0_1 = rcx_7;
                    int64_t var_a8_1 = 0;
                    int64_t var_a0_1 = rax_9;
                    int128_t var_98_1 = zmm0_4;
                    int64_t rax_24 =
                        core::iter::traits::iterator::Iterator::fold::ha230720025cbcf4e(&var_d0);
                    int64_t rax_25 = *rbp_1;
                    char* rcx_20;
                    int128_t zmm0_11;
                    
                    if (!rax_25)
                    {
                        zmm0_11 = {0};
                        rcx_20 = nullptr;
                    }
                    else
                    {
                        zmm0_11 = *(rbp_1 + 8);
                        rcx_20 = 1;
                    }
                    
                    var_3e8 = rcx_20;
                    int64_t var_3e0_1 = 0;
                    int64_t var_3d8_2 = rax_25;
                    int64_t var_3d0_2 = zmm0_11;
                    char* var_3c8_2 = rcx_20;
                    int64_t var_3c0_1 = 0;
                    int64_t var_3b8_1 = rax_25;
                    int64_t var_3b0;
                    var_3b0 = zmm0_11;
                    
                    if (rax_24 > 0xffff)
                    {
                        while (true)
                        {
                            int64_t rax_30;
                            void* rdx_22;
                            rax_30 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d1d04c89b6ca8e6(&var_3e8);
                            
                            if (!rax_30)
                                break;
                            
                            if (!rdx_22)
                                break;
                            
                            if (!*(rdx_22 + 0x66))
                            {
                                void* rax_31;
                                int64_t rdx_24;
                                rax_31 =
                                    just::token::Token::lexeme::h66587cdf67f63270(rdx_22 + 0x18);
                                var_400 = rax_31;
                                int64_t var_3f8_2 = rdx_24;
                                var_1d8 = &data_82ce08;
                                *var_1d8[8] = 1;
                                *var_1c9[1] = 8;
                                var_1c9 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&var_1d8);
                                /* no return */
                            }
                        }
                    }
                    else
                    {
                        while (true)
                        {
                            int64_t rax_28;
                            void* rdx_20;
                            rax_28 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d1d04c89b6ca8e6(&var_3e8);
                            
                            if (!rax_28)
                                break;
                            
                            if (!rdx_20)
                                break;
                            
                            if (!*(rdx_20 + 0x66))
                            {
                                void* rax_29;
                                int64_t rdx_21;
                                rax_29 =
                                    just::token::Token::lexeme::h66587cdf67f63270(rdx_20 + 0x18);
                                var_400 = rax_29;
                                int64_t var_3f8_1 = rdx_21;
                                var_2b8 = &var_400;
                                int64_t (* var_2b0_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                                var_2a8 = rdx_20;
                                int64_t (* var_2a0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                int128_t var_298;
                                var_298 = 0;
                                *var_298[8] = rax_24;
                                var_308 = &data_8301a8;
                                int64_t var_300_2 = 3;
                                void* const var_2e8_1 = &data_471130;
                                int64_t var_2e0_1 = 2;
                                char* var_2f8_2 = &var_2b8;
                                int64_t var_2f0_3 = 3;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_308);
                            }
                        }
                    }
                    
                    *arg1 = 0x38;
                }
                
                goto label_66e78d;
            }
            
            int64_t var_1f0;
            core::iter::traits::iterator::Iterator::collect::hd7d28e57b04694ba(&var_1f0, arg6);
            int64_t var_1e8;
            int64_t var_1e0;
            just::argument_parser::ArgumentParser::parse_arguments::hcf80b6b83f04fab6(&var_3e8, 
                arg2, var_1e8, var_1e0);
            char rax_12 = var_3e8;
            
            if (rax_12 != 0x38)
            {
                var_1d8 = *var_3e8[1];
                *(arg1 + 0x60) = var_388;
                *(arg1 + 0x50) = var_398;
                *(arg1 + 0x40) = rsi;
                *(arg1 + 0x30) = rax;
                *(arg1 + 0x20) = rdx;
                *(arg1 + 0x10) = rax;
                *(arg1 + 1) = var_1d8;
                *arg1 = rax_12;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_1f0, var_1e8);
                goto label_66e78d;
            }
            
            int128_t var_208 = result;
            int64_t var_1f8_1 = rcx;
            int64_t var_238 = 0;
            int64_t var_230_1 = 8;
            int64_t var_228_1 = 0;
            
            if (rcx)
            {
                int64_t r15_3 = *var_208[8];
                int64_t i = 0;
                
                do
                {
                    just::justfile::Justfile::invocation::h7dbacef274c6ed0e(&var_3e8, arg2, 
                        *(r15_3 + i + 8), *(r15_3 + i + 0x10), *(r15_3 + i + 0x20), 
                        *(r15_3 + i + 0x28), 0);
                    char rax_16 = var_3e8;
                    
                    if (rax_16 != 0x38)
                    {
                        var_1d8 = *var_3e8[1];
                        *(arg1 + 0x58) = var_398;
                        *(arg1 + 0x48) = arg2;
                        *(arg1 + 0x38) = rcx;
                        *(arg1 + 0x28) = var_3c0;
                        *(arg1 + 0x20) = rdx;
                        int128_t zmm0_6 = var_1d8;
                        *(arg1 + 0x11) = *rax[1];
                        *(arg1 + 1) = zmm0_6;
                        *arg1 = rax_16;
                        goto label_66e6cb;
                    }
                    
                    var_1c9 = rcx;
                    var_1d8 = result;
                    int128_t var_88 = var_1d8;
                    int128_t var_78_1 = var_1c9;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hccff6a8e265ff87e(&var_238, &var_88);
                    i += 0x30;
                } while (rcx * 0x30 != i);
            }
            
            if (*(arg3 + 0x1a0) && var_228_1 >= 2)
            {
                *arg1 = 0x16;
                *(arg1 + 8) = var_228_1;
                label_66e6cb:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..justfile..Invocation$GT$$GT$::h40b6867bb2dc82a5(&var_238);
                label_66e770:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..argument_parser..ArgumentGroup$GT$$GT$::h723770c4ad86c3c3(&var_208);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_1f0, var_1e8);
                goto label_66e78d;
            }
            
            var_308 = 0;
            *var_308[4] = 0;
            int64_t var_300_1 = 0;
            int64_t var_2f0_2 = 0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4a43cbe8819ee2ea(&var_2b8, &var_238);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcdb832d90bc0aa2f(&var_1d8, &var_2b8);
            int64_t r13_2 = var_1d8;
            
            if (r13_2 != -0x8000000000000000)
            {
                while (true)
                {
                    int64_t rbp_3 = *var_1d8[8];
                    core::iter::traits::iterator::Iterator::collect::hb7e8c019ce75787d(&var_400, 
                        rbp_3);
                    void* var_3f8;
                    int64_t var_3f0;
                    just::justfile::Justfile::run_recipe::h13dd814e0c2e2885(&var_3e8, var_3f8, 
                        var_3f0, arg3, &var_2d8, 0, &var_308, *var_1c9[9], &var_250, arg4);
                    char rax_23 = var_3e8;
                    
                    if (rax_23 != 0x38)
                    {
                        *(arg1 + 0x60) = var_388;
                        *(arg1 + 0x51) = var_398;
                        *(arg1 + 0x41) = *rsi[1];
                        int128_t zmm0_10 = *var_3e8[1];
                        *(arg1 + 0x31) = *rax[1];
                        *(arg1 + 0x21) = *rdx[1];
                        *(arg1 + 0x11) = *rax[1];
                        *(arg1 + 1) = zmm0_10;
                        *arg1 = rax_23;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_400);
                        core::ptr::drop_in_place$LT$just..justfile..Invocation$GT$::hbdbe404d2ce59abc(r13_2, rbp_3);
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$just..justfile..Invocation$GT$$GT$::hb9dce2d48e39b98b(&var_2b8);
                        core::ptr::drop_in_place$LT$just..ran..Ran$GT$::h351cc0e2f6e1536f(&var_308);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_400);
                    core::ptr::drop_in_place$LT$just..justfile..Invocation$GT$::hbdbe404d2ce59abc(
                        r13_2, rbp_3);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcdb832d90bc0aa2f(&var_1d8, &var_2b8);
                    r13_2 = var_1d8;
                    
                    if (r13_2 == -0x8000000000000000)
                        goto label_66e3a6;
                }
                
                goto label_66e770;
            }
            
            label_66e3a6:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$just..justfile..Invocation$GT$$GT$::hb9dce2d48e39b98b(&var_2b8);
            *arg1 = 0x38;
            core::ptr::drop_in_place$LT$just..ran..Ran$GT$::h351cc0e2f6e1536f(&var_308);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..argument_parser..ArgumentGroup$GT$$GT$::h723770c4ad86c3c3(&var_208);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_1f0, var_1e8);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$$LP$$RF$just..justfile..Justfile$C$$RF$just..scope..Scope$RP$$GT$$GT$::h32af9d5b63dc3081(&var_250);
            core::ptr::drop_in_place$LT$typed_arena..Arena$LT$just..scope..Scope$GT$$GT$::h663a7193296ae013(&var_68);
            core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_f0);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_2d8);
        }
    }
    else
    {
        just::load_dotenv::load_dotenv::h65248fa26d942f27(&var_3e8, arg3, arg2 + 0xa8, 
            *(arg4 + 0x20), *(arg4 + 0x28));
        char rax_4 = var_3e8;
        
        if (rax_4 == 0x38)
        {
            var_2d8 = result;
            int64_t var_2c8_1 = rcx;
            goto label_66db68;
        }
        
        var_1d8 = *var_3e8[1];
        *(arg1 + 0x60) = var_388;
        *(arg1 + 0x50) = var_398;
        *(arg1 + 0x40) = rsi;
        *(arg1 + 0x30) = rax;
        *(arg1 + 0x20) = rdx;
        *(arg1 + 0x10) = rax;
        *(arg1 + 1) = var_1d8;
        *arg1 = rax_4;
    }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_220);
}
