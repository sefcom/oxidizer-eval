
  int128_t* uu_split::n_chunks_by_byte::h9e6fb58ce66e9e3c(int64_t* arg1, void* arg2, void** arg3, int64_t arg4, int64_t arg5)

{
    void** r13 = arg3;
    int64_t var_c0 = 0;
    int64_t var_b8 = 1;
    int64_t var_b0 = 0;
    void* r14 = &arg1[0xe];
    int64_t rax;
    void** rdx_1;
    rax = uu_split::get_input_size::hff72b499bd50ee30(r14, arg2, &var_c0, *arg1, arg1[1]);
    void** r15 = rdx_1;
    int128_t* result;
    
    if (!rax)
    {
        int128_t var_88 = var_b8;
        void** const var_78_1 = arg2;
        char var_70_1 = 0;
        
        if (arg4 != 1)
        {
            void** rax_8 = r13;
            
            if (r15 < r13)
                rax_8 = r15;
            
            if (*(arg1 + 0xa1))
                r13 = rax_8;
            
            if (r13)
                goto label_4cd1f0;
            
            result = nullptr;
        }
        else if (!r15 || !r13)
            result = nullptr;
        else
        {
            label_4cd1f0:
            std::io::stdio::stdout::h077da66234850927();
            int64_t* result_2 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            int64_t* var_148 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&result_2);
            int64_t* result_6 = nullptr;
            int64_t var_138_1 = 8;
            int64_t var_130_1 = 0;
            uint64_t var_e8_1;
            uint64_t rax_7;
            
            if (!((r15 | r13) >> 0x20))
            {
                int32_t rax_9 = r15;
                int32_t temp2_2 = r13;
                rax_7 = COMBINE(0, rax_9) / temp2_2;
                var_e8_1 = COMBINE(0, rax_9) % temp2_2;
            }
            else
            {
                int64_t rdx_2 = 0;
                int32_t temp2_1 = r13;
                rax_7 = COMBINE(rdx_2, r15) / temp2_1;
                var_e8_1 = COMBINE(rdx_2, r15) % temp2_1;
            }
            
            void** var_e0_1 = r13;
            
            if (arg4 == 1)
                goto label_4cd2f1;
            
            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h5aea99d9a23c30d0(&result_2, r13, arg1, 0);
            int64_t* result_5 = result_2;
            int128_t* result_3;
            result = result_3;
            
            if (result_5 != -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&result_6);
                result_6 = result_5;
                int128_t* result_1 = result;
                void** var_118;
                void** const var_130_2 = var_118;
                r13 = var_e0_1;
                label_4cd2f1:
                int64_t var_a0 = 1;
                void** var_98_1 = r13;
                char var_90_1 = 0;
                int64_t rax_11;
                void** rdx_6;
                rax_11 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&var_a0);
                
                if (!rax_11)
                {
                    label_4cd60d:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&result_6);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(
                        var_148);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                        &var_c0);
                    return nullptr;
                }
                
                void** const rbx = rdx_6;
                int64_t var_160;
                int128_t* result_4;
                int64_t rbp_1;
                
                if (!arg4)
                {
                    void* var_c8_1 = r14;
                    
                    while (true)
                    {
                        var_160 = 0;
                        int64_t var_158_2 = 1;
                        uint64_t var_150_2 = 0;
                        
                        if (!r15)
                            goto label_4cd603;
                        
                        void** rax_18 = rax_7 + 0;
                        
                        if (rbx == var_e0_1)
                            rax_18 = r15;
                        
                        result_2 = &var_88;
                        int64_t rax_19;
                        int64_t rdx_9;
                        rax_19 = std::io::default_read_to_end::h2406a85fdf2eff30(&result_2, 
                            &var_160, 0, &var_88);
                        rbp_1 = rdx_9;
                        
                        if (rax_19)
                            goto label_4cd50e;
                        
                        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::hcb920ccabbd9d626(&result_2, &result_6, rbx - 1, arg1);
                        result = result_2;
                        
                        if (result)
                            goto label_4cd642;
                        
                        int64_t r14_1 = rax_18[2];
                        
                        if (var_150_2 >= *rax_18 - r14_1)
                        {
                            r14 = var_c8_1;
                            
                            if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h76ddc0e24b459a3f(rax_18, var_158_2, var_150_2))
                            {
                                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                break;
                            }
                        }
                        else
                        {
                            memcpy(rax_18[1] + r14_1, var_158_2, var_150_2);
                            rax_18[2] = r14_1 + var_150_2;
                            r14 = var_c8_1;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_160);
                        r15 -= rbp_1;
                        int64_t rax_23;
                        void** rdx_13;
                        rax_23 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&var_a0);
                        rbx = rdx_13;
                        
                        if (!rax_23)
                            goto label_4cd60d;
                    }
                }
                else
                {
                    while (true)
                    {
                        var_160 = 0;
                        int64_t var_158_1 = 1;
                        uint64_t var_150_1 = 0;
                        
                        if (r15)
                        {
                            void** rax_14 = rax_7 + 0;
                            
                            if (rbx == var_e0_1)
                                rax_14 = r15;
                            
                            result_2 = &var_88;
                            void** var_120 = rax_14;
                            int64_t rax_15;
                            int64_t rdx_7;
                            rax_15 = std::io::default_read_to_end::h2406a85fdf2eff30(&result_2, 
                                &var_160, 0, &var_88);
                            rbp_1 = rdx_7;
                            
                            if (rax_15)
                            {
                                label_4cd50e:
                                int64_t var_d8 = rbp_1;
                                void* var_68 = r14;
                                int64_t (* var_60_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                int64_t* var_58_1 = &var_d8;
                                int64_t (* var_50_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                                result_2 = &data_548580;
                                int64_t var_120_2 = 2;
                                int64_t var_108_1 = 0;
                                void** var_118_1 = &var_68;
                                int64_t var_110_1 = 2;
                                int128_t var_48;
                                core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(
                                    &var_48, 0, &result_2);
                                var_110_1 = 1;
                                result_2 = var_48;
                                int64_t var_38;
                                int64_t var_118_2 = var_38;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&result_2);
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(var_d8);
                                goto label_4cd642;
                            }
                            
                            if (rbx == arg5)
                            {
                                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_148, var_158_1, var_150_1))
                                {
                                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    break;
                                }
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_160);
                                r15 -= rbp_1;
                                int64_t rax_16;
                                void** rdx_8;
                                rax_16 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&var_a0);
                                rbx = rdx_8;
                                
                                if (!rax_16)
                                    goto label_4cd60d;
                                
                                continue;
                            }
                        }
                        
                        label_4cd603:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_160);
                        goto label_4cd60d;
                    }
                }
                result = result_4;
                label_4cd642:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_160);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&result_6);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(var_148);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
    return result;
}
