
  int64_t uu_tee::tee::hf98133f44c3e9f72(void* arg1)

{
    int64_t r15 = 0x2800000003;
    int32_t rax_1;
    
    if (*(arg1 + 0x19))
        rax_1 = uucore::features::signals::ignore_interrupts::hf118497e1fc87746();
    
    if (!*(arg1 + 0x19) || rax_1 == 0x86)
    {
        char rbp_1 = *(arg1 + 0x1b);
        int32_t rax_2;
        
        if (rbp_1 == 4)
            rax_2 = uucore::features::signals::enable_pipe_errors::he7938a115a9dd81b();
        
        if (rbp_1 != 4 || rax_2 == 0x86)
        {
            int64_t rax_3 = *(arg1 + 8);
            int64_t r12_1 = *(arg1 + 0x10);
            int64_t var_a8 = rax_3;
            int64_t var_a0_1 = rax_3 + r12_1 * 0x18;
            int64_t var_78;
            core::iter::traits::iterator::Iterator::collect::h2d2d7e3943ff2072(&var_78, &var_a8);
            int64_t rcx_3 = var_78;
            int64_t var_70;
            
            if (-(rcx_3) == -0x8000000000000000)
                return var_70;
            
            int64_t var_48 = rcx_3;
            int64_t var_40_1 = var_70;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hbc1a098f16dd279e(&var_a8, "'standard output'src/uu/tee/src/…", 0x11);
            var_78 = var_a8;
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            uint64_t var_90_1 = alloc::boxed::Box$LT$T$GT$::new::h4b8c53d49d3f6ca5(
                &std::io::stdio::STDOUT::h411b213c5c9add46);
            void* const var_88_1 = &data_4ea430;
            var_a8 = var_78;
            void* var_98_2 = arg1;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::h3b5bb7d6ffbbcb54(&var_48, &var_a8);
            var_a8 = var_48;
            var_88_1 = rbp_1;
            int64_t var_90_2 = 0;
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            uint64_t rax_9 = alloc::boxed::Box$LT$T$GT$::new::h4b8c53d49d3f6ca5(
                &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
            uint64_t var_58 = rax_9;
            void* const var_50_1 = &data_4ea498;
            int64_t var_68;
            
            if (!*(arg1 + 0x1a))
            {
                label_45d0a8:
                char rax_10;
                int64_t rdx_3;
                rax_10 = std::io::copy::generic_copy::h3f7e0ce8fd9cd2d0(&var_58, &var_a8);
                
                if (!(rax_10 & 1))
                    goto label_45d0cb;
                
                int64_t rbx_1 = rdx_3;
                
                if (std::io::error::Error::kind::h135fe00c4e7365f3(rdx_3) == 0x28)
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(rbx_1);
                    label_45d0cb:
                    
                    if (var_68 == r12_1)
                    {
                        int64_t rax_12 = _$LT$uu_tee..MultiWriter$u20$as$u20$std..io..Write$GT$::flush::h7fdc70565f7a6de0(&var_a8);
                        
                        if (!rax_12)
                        {
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h31caf6d465b21618(0);
                            
                            if (!var_90_2)
                                r15 = var_90_2;
                        }
                        else
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h31caf6d465b21618(rax_12);
                    }
                    
                    rbx_1 = 0;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h31caf6d465b21618(rbx_1);
                core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::h7015718fc3fc73d4(var_58, 
                    var_50_1);
            }
            else
            {
                uu_tee::ensure_stdout_not_broken::hbf7c3644b247e073(&var_78);
                
                if (!var_78)
                {
                    if (*var_78[1] & 1 || var_68 != 1)
                        goto label_45d0a8;
                    
                    r15 = 0;
                    core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::h7015718fc3fc73d4(rax_9, 
                        &data_4ea498);
                }
                else
                {
                    r15 = var_70;
                    core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::h7015718fc3fc73d4(rax_9, 
                        &data_4ea498);
                }
            }
            core::ptr::drop_in_place$LT$uu_tee..MultiWriter$GT$::he3a50c3c154937d9(&var_a8);
        }
    }
    
    return r15;
}
