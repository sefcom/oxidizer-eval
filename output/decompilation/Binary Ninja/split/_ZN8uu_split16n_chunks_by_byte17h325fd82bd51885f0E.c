
  uint64_t uu_split::n_chunks_by_byte::h325fd82bd51885f0(int64_t* arg1, void* arg2, void** arg3, int64_t arg4, void** arg5)

{
    void** r15 = arg3;
    int64_t var_c8 = 0;
    int64_t var_c0 = 1;
    int64_t var_b8 = 0;
    char rax_1;
    void** rdx_1;
    rax_1 = uu_split::get_input_size::h76e4bf9c0daaab1c(&arg1[0xe], arg2, &var_c8, *arg1, arg1[1]);
    void** r12 = rdx_1;
    int64_t r13;
    uint64_t result;
    
    if (!(rax_1 & 1))
    {
        r13 = var_c0;
        int64_t var_88 = r13;
        int64_t var_80_1 = var_b8;
        void* var_78_1 = arg2;
        char var_70_1 = 0;
        
        if (!arg4)
        {
            void** rax_4 = r12;
            
            if (r15 < r12)
                rax_4 = r15;
            
            if (*(arg1 + 0xa1))
                r15 = rax_4;
            
            if (r15)
                goto label_470aad;
            
            result = 0;
        }
        else if (!r12 || !r15)
            result = 0;
        else
        {
            label_470aad:
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            int64_t* result_1 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            int64_t* var_140 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&result_1);
            int64_t* result_6 = nullptr;
            int64_t var_100_1 = 8;
            int64_t var_f8_1 = 0;
            uint64_t var_e8_1;
            uint64_t rax_10;
            
            if (!((r12 | r15) >> 0x20))
            {
                int32_t rax_11 = r12;
                int32_t temp2_2 = r15;
                rax_10 = COMBINE(0, rax_11) / temp2_2;
                var_e8_1 = COMBINE(0, rax_11) % temp2_2;
            }
            else
            {
                int64_t rdx_2 = 0;
                int32_t temp2_1 = r15;
                rax_10 = COMBINE(rdx_2, r12) / temp2_1;
                var_e8_1 = COMBINE(rdx_2, r12) % temp2_1;
            }
            
            void** var_e0_1 = r15;
            
            if (arg4)
                goto label_470b7f;
            
            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h95c34a5c8d1a9d91(&result_1, r15, arg1, 0);
            int64_t* result_5 = result_1;
            uint64_t result_2;
            result = result_2;
            
            if (-(result_5) == -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&result_6);
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(
                    var_140);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&result_6);
                result_6 = result_5;
                uint64_t result_3 = result;
                void** var_128;
                void** const var_f8_2 = var_128;
                r15 = var_e0_1;
                label_470b7f:
                int64_t var_160_1 = r13;
                int64_t var_a0 = 1;
                void** var_98_1 = r15;
                char var_90_1 = 0;
                char rax_14;
                int64_t rdx_6;
                rax_14 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h4a3c52dfa8d527ec(&var_a0);
                
                if (!(rax_14 & 1))
                {
                    label_470dd0:
                    r13 = var_160_1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&result_6);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(
                        var_140);
                    result = 0;
                }
                else
                {
                    int64_t r14_1 = rdx_6;
                    void* var_158;
                    int64_t var_150_1;
                    uint64_t result_4;
                    int64_t rbx_1;
                    
                    if (!(arg4 & 1))
                    {
                        while (true)
                        {
                            var_158 = nullptr;
                            var_150_1 = 1;
                            uint64_t var_148_2 = 0;
                            
                            if (!r12)
                                goto label_470dbf;
                            
                            void** rax_21 = rax_10 + 0;
                            
                            if (r14_1 == var_e0_1)
                                rax_21 = r12;
                            
                            result_1 = &var_88;
                            void** var_128_2 = rax_21;
                            char rax_22;
                            int64_t rdx_9;
                            rax_22 = std::io::default_read_to_end::hfa36e1d8c1f6f3bf(&result_1, 
                                &var_158);
                            rbx_1 = rdx_9;
                            
                            if (rax_22 & 1)
                                goto label_470e0f;
                            
                            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::h595821988eb35f9a(&result_1, &result_6, r14_1 - 1, arg1);
                            result = result_1;
                            
                            if (result)
                            {
                                r13 = var_160_1;
                                goto label_470f29;
                            }
                            
                            int64_t r13_1 = rax_21[2];
                            
                            if (var_148_2 >= *rax_21 - r13_1)
                            {
                                if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h12d792e0f419688e(rax_21, var_150_1, var_148_2))
                                {
                                    r13 = var_160_1;
                                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                    break;
                                }
                            }
                            else
                            {
                                memcpy(rax_21[1] + r13_1, var_150_1, var_148_2);
                                rax_21[2] = r13_1 + var_148_2;
                            }
                            
                            r12 -= rbx_1;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_158, var_150_1);
                            char rax_25;
                            int64_t rdx_12;
                            rax_25 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h4a3c52dfa8d527ec(&var_a0);
                            r14_1 = rdx_12;
                            
                            if (!(rax_25 & 1))
                                goto label_470dd0;
                        }
                    }
                    else
                    {
                        while (true)
                        {
                            var_158 = nullptr;
                            var_150_1 = 1;
                            uint64_t var_148_1 = 0;
                            int64_t rsi_11;
                            void* rdi_15;
                            
                            if (!r12)
                            {
                                label_470dbf:
                                rsi_11 = 1;
                                rdi_15 = nullptr;
                            }
                            else
                            {
                                void** rax_17 = rax_10 + 0;
                                
                                if (r14_1 == var_e0_1)
                                    rax_17 = r12;
                                
                                result_1 = &var_88;
                                void** var_130 = rax_17;
                                void** var_128_1 = rax_17;
                                char rax_18;
                                int64_t rdx_7;
                                rax_18 = std::io::default_read_to_end::hfa36e1d8c1f6f3bf(&result_1, 
                                    &var_158);
                                rbx_1 = rdx_7;
                                
                                if (rax_18 & 1)
                                {
                                    label_470e0f:
                                    int64_t var_d0 = rbx_1;
                                    void* var_68 = &arg1[0xe];
                                    int64_t (* var_60_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                    int64_t* var_58_1 = &var_d0;
                                    int64_t (* var_50_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                                    result_1 = &data_50b040;
                                    int64_t var_130_2 = 2;
                                    int64_t var_118_1 = 0;
                                    void** var_128_3 = &var_68;
                                    int64_t var_120_1 = 2;
                                    r13 = var_160_1;
                                    int128_t var_48;
                                    core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(
                                        &var_48, 0, &result_1);
                                    var_120_1 = 1;
                                    result_1 = var_48;
                                    int64_t var_38;
                                    int64_t var_128_4 = var_38;
                                    result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(
                                        &result_1);
                                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(&var_d0);
                                    goto label_470f29;
                                }
                                
                                if (r14_1 == arg5)
                                {
                                    r13 = var_160_1;
                                    
                                    if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_140, var_150_1, var_148_1))
                                    {
                                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        break;
                                    }
                                    
                                    rdi_15 = var_158;
                                    rsi_11 = var_150_1;
                                }
                                else
                                {
                                    r12 -= rbx_1;
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_158, var_150_1);
                                    char rax_19;
                                    int64_t rdx_8;
                                    rax_19 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h4a3c52dfa8d527ec(&var_a0);
                                    r14_1 = rdx_8;
                                    
                                    if (!(rax_19 & 1))
                                        goto label_470dd0;
                                    
                                    continue;
                                }
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(rdi_15, rsi_11);
                            goto label_470dd0;
                        }
                    }
                    result = result_4;
                    label_470f29:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(
                        var_158, var_150_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&result_6);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(
                        var_140);
                }
            }
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        r13 = var_c0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_c8, r13);
    return result;
}
