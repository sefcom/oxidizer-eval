
  int64_t* just::justfile::Justfile::run_recipe::h13dd814e0c2e2885(char* arg1, void* arg2, int64_t arg3, void* arg4, int64_t arg5, char arg6, int32_t* arg7, void* arg8, void** arg9, int64_t arg10)

{
    void* rax = just::ran::Ran::mutex::heea021f2ce4a14a7(arg7, arg8, arg2, arg3);
    void* var_140 = rax;
    char var_1a8;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hb47545a45a83d034(&var_1a8, rax + 0x10);
    int32_t* rax_1;
    char rdx_1;
    rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::h269726c6fb11b939(&var_1a8);
    
    if (*(rax_1 + 5))
        *arg1 = 0x38;
    else
    {
        char var_1a7;
        int128_t var_1a6;
        int128_t var_196;
        int128_t var_186;
        int128_t var_176;
        int128_t var_166;
        int64_t var_148;
        
        if (!*(arg4 + 0x1a5))
        {
            just::recipe::Recipe$LT$D$GT$::confirm::hf942a5381005005c(&var_1a8, arg8);
            char rcx_7 = var_1a8;
            
            if (rcx_7 != 0x38)
            {
                *(arg1 + 0x60) = var_148;
                int128_t var_156;
                *(arg1 + 0x52) = var_156;
                *(arg1 + 0x42) = var_166;
                *(arg1 + 0x32) = var_176;
                *(arg1 + 0x22) = var_186;
                *(arg1 + 0x12) = var_196;
                *(arg1 + 2) = var_1a6;
                *arg1 = rcx_7;
                arg1[1] = var_1a7;
            }
            else
            {
                if (var_1a7 & 1)
                    goto label_66ef0f;
                
                void* rax_11;
                int64_t rdx_12;
                rax_11 = just::token::Token::lexeme::h66587cdf67f63270(arg8 + 0x90);
                *arg1 = 0x26;
                *(arg1 + 8) = rax_11;
                *(arg1 + 0x10) = rdx_12;
            }
        }
        else
        {
            label_66ef0f:
            void* rax_2;
            uint64_t rdx_2;
            rax_2 = just::recipe::Recipe::module_path::h2114682f44294136(arg8);
            int64_t* rax_3 =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hd770162b19fb0ee2(
                *arg9, arg9[1], rax_2, rdx_2);
            
            if (!rax_3)
            {
                core::option::expect_failed::h3f620cfb8545dc61("failed to retrieve scope for mod…");
                /* no return */
            }
            
            int64_t rcx_2 = *rax_3;
            void* var_138 = arg4;
            int64_t var_130_1 = arg5;
            int64_t var_120_1 = arg10;
            just::evaluator::Evaluator::evaluate_parameters::ha5b7a1a22f5cd100(&var_1a8, &var_138, 
                arg6, arg2, arg3, *(arg8 + 0x50), *(arg8 + 0x58), rax_3[1]);
            char rax_4 = var_1a8;
            int128_t var_f8;
            
            if (rax_4 != 0x38)
            {
                var_f8 = var_1a7;
                *(arg1 + 0x60) = var_148;
                *(arg1 + 0x50) = var_166;
                *(arg1 + 0x40) = var_176;
                *(arg1 + 0x30) = var_186;
                int128_t zmm0_1 = var_f8;
                *(arg1 + 0x21) = var_196;
                *(arg1 + 0x11) = var_1a6;
                *(arg1 + 1) = zmm0_1;
                *arg1 = rax_4;
            }
            else
            {
                int64_t rax_5 = *var_176[6];
                int128_t var_c9;
                *var_c9[8] = rax_5;
                int128_t var_d8 = var_186;
                int128_t var_e8 = var_196;
                var_f8 = var_1a6;
                int128_t var_48_1 = var_196;
                int128_t var_58 = var_1a6;
                int128_t var_118 = var_186;
                int64_t var_98 = 0;
                int64_t var_88_1 = 0;
                int128_t* var_80_1 = &var_58;
                int128_t var_d8_1 = {0};
                var_f8 = var_138;
                int128_t var_e8_1 = rcx_2;
                char var_b0_1 = 1;
                *var_c9[9] = 0;
                int64_t* var_b8_1 = &var_98;
                int64_t r12_1 = *(arg8 + 0xf0);
                void* rbx_1 = *(arg8 + 0x20);
                int64_t rbp_1 = *(arg8 + 0x28);
                void* rax_6;
                int64_t rdx_8;
                rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hd2d1f379cc75c597(r12_1, rbx_1, rbp_1);
                just::justfile::Justfile::run_dependencies::h985cd0506c66477f(&var_1a8, arg4, 
                    &var_138, rax_6, rdx_8, arg5, &var_f8, arg7, arg8, arg9, arg10);
                char rax_7 = var_1a8;
                
                if (rax_7 != 0x38)
                {
                    label_66f345:
                    *(arg1 + 0x60) = var_148;
                    *(arg1 + 0x51) = var_166;
                    *(arg1 + 0x41) = var_176;
                    *(arg1 + 0x31) = var_186;
                    *(arg1 + 0x21) = var_196;
                    *(arg1 + 0x11) = var_1a6;
                    *(arg1 + 1) = var_1a7;
                    *arg1 = rax_7;
                    label_66f390:
                    core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(
                        &var_f8);
                    core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_98);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_118);
                    core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_58);
                }
                else
                {
                    just::recipe::Recipe$LT$D$GT$::run::hef557c87b94c38c2(&var_1a8, arg8, &var_138, 
                        &var_98, *var_118[8], rax_5, arg6);
                    rax_7 = var_1a8;
                    
                    if (rax_7 != 0x38)
                        goto label_66f345;
                    
                    if (rbp_1 < r12_1)
                    {
                        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(r12_1, 
                            rbp_1);
                        /* no return */
                    }
                    
                    int32_t var_78 = 0;
                    char var_74_1 = 0;
                    int64_t var_70_1 = 0;
                    int64_t var_60_1 = 0;
                    just::justfile::Justfile::run_dependencies::h985cd0506c66477f(&var_1a8, arg4, 
                        &var_138, rbx_1 + (r12_1 << 5), rbp_1 - r12_1, arg5, &var_f8, &var_78, 
                        arg8, arg9, arg10);
                    char rax_8 = var_1a8;
                    
                    if (rax_8 != 0x38)
                    {
                        *(arg1 + 0x60) = var_148;
                        *(arg1 + 0x51) = var_166;
                        *(arg1 + 0x41) = var_176;
                        *(arg1 + 0x31) = var_186;
                        *(arg1 + 0x21) = var_196;
                        *(arg1 + 0x11) = var_1a6;
                        *(arg1 + 1) = var_1a7;
                        *arg1 = rax_8;
                        core::ptr::drop_in_place$LT$just..ran..Ran$GT$::h351cc0e2f6e1536f(&var_78);
                        goto label_66f390;
                    }
                    
                    core::ptr::drop_in_place$LT$just..ran..Ran$GT$::h351cc0e2f6e1536f(&var_78);
                    *(rax_1 + 5) = 1;
                    *arg1 = 0x38;
                    core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(
                        &var_f8);
                    core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_98);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_118);
                    core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_58);
                }
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax_1, rdx_1 & 1);
    return core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$bool$GT$$GT$$GT$::hc5f130d1b842e4bb(&var_140);
}
