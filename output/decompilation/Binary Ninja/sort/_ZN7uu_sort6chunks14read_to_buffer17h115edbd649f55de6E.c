
  int64_t* uu_sort::chunks::read_to_buffer::h115edbd649f55de6(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4, char arg5)

{
    int64_t rsi = arg3[2];
    int64_t r14_1 = rsi - arg4;
    
    if (rsi < arg4)
    {
        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(arg4, rsi);
        /* no return */
    }
    
    int64_t rbx_1 = arg4 + arg3[1];
    void** const var_60 = &data_58c600;
    
    while (true)
    {
        int64_t rbp_1 = r14_1;
        
        while (true)
        {
            int64_t rax_1;
            int64_t rdx_1;
            rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h7f9eb14cd913115d(*arg2, arg2[1], rbx_1, rbp_1);
            int64_t var_58_1 = rax_1;
            int128_t var_88;
            int32_t var_70;
            
            if (!(rax_1 & 1))
            {
                int64_t rbx_3;
                
                if (!rdx_1)
                {
                    int64_t var_78;
                    
                    if (rbp_1)
                    {
                        if (r14_1 == rbp_1)
                            goto label_4c284f;
                        
                        int64_t rsi_5 = arg3[2];
                        rbx_3 = rsi_5 - rbp_1;
                        int64_t rdi_6 = rbx_3 - 1;
                        
                        if (rdi_6 >= rsi_5)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_6, rsi_5);
                            /* no return */
                        }
                        
                        char* rax_11 = arg3[1];
                        
                        if (rax_11[rdi_6] != arg5)
                        {
                            if (rsi_5 < rbp_1)
                            {
                                var_60 = &data_58c618;
                                core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_3, 
                                    rsi_5);
                                /* no return */
                            }
                            
                            rax_11[rbx_3] = arg5;
                            rbp_1 -= 1;
                            rsi_5 = arg3[2];
                            rbx_3 = rsi_5 - rbp_1;
                        }
                        
                        r14_1 = rbp_1;
                        
                        if (rbp_1 <= rsi_5)
                        {
                            rbx_1 = rbx_3 + arg3[1];
                            label_4c284f:
                            _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h161b7b8bfd4e684c(&var_88);
                            int64_t rax_12 = var_88;
                            int64_t* rax_16;
                            
                            if (rax_12 == 2)
                            {
                                core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::h1157f0d3cb3c2437(&var_88);
                                rax_16 = arg3[2] - r14_1;
                                arg1[1] = rax_16;
                                arg1[2] = 0;
                                *arg1 = 0;
                            }
                            else
                            {
                                int64_t rbp_4 = *var_88[8];
                                
                                if (!(rax_12 & 1))
                                {
                                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hcc69def0910ab351(*arg2, arg2[1]);
                                    *arg2 = rbp_4;
                                    arg2[1] = var_78;
                                    break;
                                }
                                
                                rax_16 = arg1;
                                rax_16[1] = rbp_4;
                                rax_16[2] = var_78;
                                *rax_16 = 1;
                            }
                            
                            return rax_16;
                        }
                        
                        rbp_1 = rsi_5;
                    }
                    else
                    {
                        int64_t rax_6 = arg3[1];
                        var_88 = rax_6;
                        *var_88[8] = rax_6;
                        var_78 = arg3[2] + rax_6;
                        var_70 = arg5;
                        char rax_8;
                        int64_t rdx_2;
                        rax_8 = memchr::arch::generic::memchr::Iter::next_back::ha685b7d06b3ac29d(
                            &var_88, &var_70);
                        
                        if (memchr::arch::generic::memchr::Iter::next_back::ha685b7d06b3ac29d(
                            &var_88, &var_70) == 1)
                        {
                            if (!(rax_8 & 1))
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            arg1[1] = rdx_2 + 1;
                            arg1[2] = 1;
                            *arg1 = 0;
                            return arg1;
                        }
                        
                        rbx_3 = arg3[2];
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::hd0b7699f012edafb(arg3, 
                            rbx_3 + 0x2800);
                        int64_t rax_10 = arg3[2];
                        rbp_1 = rax_10 - rbx_3;
                        
                        if (rax_10 < rbx_3)
                            rbp_1 = rax_10;
                        else
                        {
                            rbx_1 = rbx_3 + arg3[1];
                            continue;
                        }
                    }
                }
                else if (rbp_1 < rdx_1)
                    rbx_3 = rdx_1;
                else
                {
                    rbx_1 += rdx_1;
                    rbp_1 -= rdx_1;
                    continue;
                }
                
                core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rbx_3, rbp_1);
                /* no return */
            }
            
            if (std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1) != 0x23)
            {
                int64_t var_68 = rdx_1;
                int128_t var_48;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hfed7642166309176(&var_48, &var_68, rdx_1);
                var_70 = 2;
                var_88 = var_48;
                int64_t var_38;
                int64_t var_78_1 = var_38;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h36d410590b50ab7f(&var_88);
                arg1[2] = &data_58c680;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2e4f5e96971ff0c8(
                    &var_68);
            }
            
            var_88 = rdx_1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2e4f5e96971ff0c8(&var_88);
        }
    }
}
