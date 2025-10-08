
  uint64_t uu_split::n_chunks_by_line::h05febb31e178eac9(int64_t* arg1, void* arg2, void** arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_b0 = 0;
    int64_t* var_a8 = 1;
    int64_t var_a0 = 0;
    char rax;
    int64_t rdx_1;
    rax = uu_split::get_input_size::h76e4bf9c0daaab1c(&arg1[0xe], arg2, &var_b0, *arg1, arg1[1]);
    uint64_t result;
    int64_t* rsi;
    
    if (!(rax & 1))
    {
        if (!rdx_1 && (arg4 || *(arg1 + 0xa1)))
        {
            label_471409:
            result = 0;
        }
        else
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            int64_t* var_78 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            int64_t* var_100 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_78);
            int64_t* var_f8 = nullptr;
            int64_t var_f0_1 = 8;
            int64_t var_e8_1 = 0;
            
            if (!arg3)
            {
                core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                /* no return */
            }
            
            uint64_t var_e0_1;
            uint64_t r13_1;
            
            if ((rdx_1 | arg3) >> 0x20)
            {
                int64_t rdx_2 = 0;
                int32_t temp2_1 = arg3;
                var_e0_1 = COMBINE(rdx_2, rdx_1) % temp2_1;
                r13_1 = COMBINE(rdx_2, rdx_1) / temp2_1;
                
                if (!arg4)
                    goto label_47113e;
                
                goto label_4710fb;
            }
            
            int32_t rax_9 = rdx_1;
            int32_t temp2_2 = arg3;
            var_e0_1 = COMBINE(0, rax_9) % temp2_2;
            r13_1 = COMBINE(0, rax_9) / temp2_2;
            int64_t var_98_1;
            char rdx_4;
            
            if (arg4)
            {
                label_4710fb:
                var_98_1 = rdx_1;
                rdx_4 = *(arg1 + 0xa1);
                label_4711d0:
                char rax_16 = *(arg1 + 0xa2);
                int64_t rbx_2 = r13_1 + 1;
                var_78 = var_a8;
                int64_t var_70 = var_a0;
                void* var_68_1 = arg2;
                char var_60_1 = 0;
                char var_58_1 = rax_16;
                int64_t rcx_4 = arg1[0x11];
                void** const r14 = 1;
                int64_t var_d8_2 = -0x7fffffffffffffff;
                uint64_t var_108;
                var_108 = rax_16;
                int64_t rbp_1 = 0;
                
                while (true)
                {
                    int64_t var_48;
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0018ef1f4ff01f8f(&var_48, &var_78);
                    int64_t rax_20 = var_48;
                    
                    if (rax_20 != var_d8_2)
                    {
                        int64_t var_40;
                        int64_t r15_3 = var_40;
                        
                        if (rax_20 == -0x8000000000000000)
                        {
                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            break;
                        }
                        
                        int64_t var_c8 = rax_20;
                        int64_t var_c0_1 = r15_3;
                        uint64_t var_38;
                        
                        if (var_38 + rbp_1 < var_98_1)
                        {
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hec3bc305ec2b1aaa(&var_c8, var_108);
                            r15_3 = var_c0_1;
                        }
                        
                        uint64_t result_3;
                        
                        if (!(arg4 & 1))
                        {
                            uint64_t result_5;
                            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::h595821988eb35f9a(&result_5, &var_f8, r14 - 1, arg1);
                            uint64_t result_2 = result_5;
                            
                            if (result_2)
                            {
                                result = result_2;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_c8, var_c0_1);
                                break;
                            }
                            
                            int64_t* var_80;
                            uu_split::custom_write_all::h5ae19a5a4a9a7063(&result_5, r15_3, var_38, 
                                var_80, rcx_4);
                            
                            if (result_5 == 1)
                            {
                                result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                label_47143f:
                                result = result_3;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_c8, var_c0_1);
                                break;
                            }
                        }
                        else if (r14 == arg5 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_100, r15_3, var_38))
                        {
                            result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            goto label_47143f;
                        }
                        rbp_1 += var_38;
                        int32_t rax_18 = -1;
                        int64_t r12_1;
                        
                        if (rbx_2 > rbp_1)
                            r12_1 = arg4;
                        else
                        {
                            r12_1 = arg4;
                            
                            do
                            {
                                rbx_2 = rbx_2 + r13_1;
                                r14 += 1;
                                rax_18 += 1;
                            } while (rbx_2 <= rbp_1);
                        }
                        
                        uint64_t rax_19 = rax_18;
                        
                        if (rax_18 <= 0)
                            rax_19 = 0;
                        
                        if ((rdx_4 ^ 1) & 1)
                            rax_19 = 0;
                        
                        if (r12_1)
                            rax_19 = 0;
                        
                        r14 -= rax_19;
                        r15_3 = r14 > arg5;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_c8, var_c0_1);
                        
                        if (!(r12_1 & r15_3))
                            continue;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_f8);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(
                        var_100);
                    goto label_471409;
                }
            }
            else
            {
                label_47113e:
                char rax_11 = *(arg1 + 0xa1);
                _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h95c34a5c8d1a9d91(&var_78, arg3, arg1, rax_11);
                int64_t* r14_1 = var_78;
                uint64_t result_1;
                
                if (r14_1 != -0x8000000000000000)
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_f8);
                    var_98_1 = rdx_1;
                    var_f8 = r14_1;
                    uint64_t result_4 = result_1;
                    void** var_68;
                    void** var_e8_2 = var_68;
                    rdx_4 = rax_11;
                    goto label_4711d0;
                }
                
                result = result_1;
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_f8);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(var_100);
        }
        
        rsi = var_a8;
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        rsi = var_a8;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_b0, rsi);
    return result;
}
