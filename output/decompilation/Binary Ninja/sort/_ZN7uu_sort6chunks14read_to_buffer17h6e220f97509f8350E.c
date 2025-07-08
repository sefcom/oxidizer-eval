
  int64_t* uu_sort::chunks::read_to_buffer::h6e220f97509f8350(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4, int64_t arg5, int64_t arg6, char arg7)

{
    int64_t rsi = arg3[2];
    int64_t rbx_1 = rsi - arg6;
    
    if (rsi < arg6)
    {
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(arg6, rsi);
        /* no return */
    }
    
    int64_t rbp_1 = arg6 + arg3[1];
    
    while (true)
    {
        int64_t var_a8_1 = rbx_1;
        int64_t var_78;
        int64_t rbx_5;
        int64_t r13_1;
        int64_t* r14_2;
        int64_t r15_2;
        
        while (true)
        {
            int64_t rax_1;
            int64_t rdx_1;
            rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb06b12a83684c07d(*arg2, arg2[1], rbp_1, rbx_1);
            int64_t r15_1 = rdx_1;
            int128_t var_88;
            int32_t var_70;
            
            if (!rax_1)
            {
                r13_1 = *arg2;
                r14_2 = arg2[1];
                int64_t rbp_2;
                
                if (arg4 == 1)
                {
                    while (true)
                    {
                        if (r15_1)
                            goto label_55d7e1;
                        
                        if (rbx_1)
                            goto label_55d890;
                        
                        rbp_2 = arg3[2];
                        
                        if (rbp_2 >= arg5)
                            break;
                        
                        int64_t rsi_2 = rbp_2 << 1;
                        
                        if (rbp_2 >= arg5 >> 1)
                            rsi_2 = arg5;
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(arg3, rsi_2, 0);
                        int64_t rsi_3 = arg3[2];
                        rbx_1 = rsi_3 - rbp_2;
                        
                        if (rsi_3 < rbp_2)
                        {
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                rbp_2, rsi_3);
                            /* no return */
                        }
                        
                        rbp_1 = rbp_2 + arg3[1];
                        int64_t rax_4;
                        rax_4 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb06b12a83684c07d(r13_1, r14_2, rbp_1, rbx_1);
                        r15_1 = rdx_1;
                        
                        if (rax_4)
                            goto label_55d742;
                    }
                    
                    goto label_55d803;
                }
                
                int64_t* result;
                
                if (r15_1)
                {
                    label_55d7e1:
                    int64_t rsi_5 = rbx_1;
                    int64_t temp1_1 = rbx_1;
                    rbx_1 -= r15_1;
                    
                    if (temp1_1 >= r15_1)
                    {
                        rbp_1 += r15_1;
                        continue;
                    }
                    
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r15_1, rsi_5);
                    /* no return */
                }
                else if (rbx_1)
                {
                    label_55d890:
                    r15_2 = var_a8_1;
                    
                    if (r15_2 != rbx_1)
                    {
                        int64_t rsi_10 = arg3[2];
                        int64_t rbp_6 = rsi_10 - rbx_1;
                        
                        if (rbp_6 - 1 >= rsi_10)
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(rbp_6 - 1, 
                                rsi_10);
                            /* no return */
                        }
                        
                        char* rax_9 = arg3[1];
                        
                        if (rax_9[rbp_6 - 1] != arg7)
                        {
                            if (rsi_10 < rbx_1)
                            {
                                core::panicking::panic_bounds_check::h25a5330941572dd1(rbp_6, 
                                    rsi_10);
                                /* no return */
                            }
                            
                            rax_9[rbp_6] = arg7;
                            rbx_1 -= 1;
                            rsi_10 = arg3[2];
                            rbp_6 = rsi_10 - rbx_1;
                        }
                        
                        r15_2 = rbx_1;
                        
                        if (rbx_1 > rsi_10)
                        {
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                rbp_6, rsi_10);
                            /* no return */
                        }
                        
                        rbp_1 = rbp_6 + arg3[1];
                    }
                    
                    _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h10cf04d28d342b4e(&var_88);
                    int64_t rax_10 = var_88;
                    int64_t* rcx_6;
                    
                    if (rax_10 == 2)
                    {
                        rcx_6 = arg1;
                        rcx_6[1] = arg3[2] - r15_2;
                        rcx_6[2] = 0;
                        result = nullptr;
                    }
                    else
                    {
                        rbx_5 = *var_88[8];
                        
                        if (!rax_10)
                            break;
                        
                        rcx_6 = arg1;
                        rcx_6[1] = rbx_5;
                        rcx_6[2] = var_78;
                        result = 1;
                    }
                    
                    *rcx_6 = result;
                }
                else
                {
                    rbp_2 = arg3[2];
                    label_55d803:
                    int64_t rax_5 = arg3[1];
                    var_88 = rax_5;
                    *var_88[8] = rax_5;
                    var_78 = rbp_2 + rax_5;
                    var_70 = arg7;
                    int64_t rax_7;
                    int64_t rdx_3;
                    rax_7 = memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(
                        &var_88, &var_70);
                    
                    if (memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(&var_88, 
                        &var_70) == 1)
                    {
                        if (!rax_7)
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        result = arg1;
                        result[1] = rdx_3 + 1;
                        result[2] = 1;
                        *result = 0;
                    }
                    else
                    {
                        int64_t rbp_4 = arg3[2];
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(arg3, 
                            rbp_4 + 0x2800, 0);
                        int64_t rsi_9 = arg3[2];
                        rbx_1 = rsi_9 - rbp_4;
                        
                        if (rsi_9 >= rbp_4)
                        {
                            rbp_1 = rbp_4 + arg3[1];
                            continue;
                        }
                        
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(rbp_4, 
                            rsi_9);
                        /* no return */
                    }
                }
                
                return result;
            }
            
            label_55d742:
            
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(r15_1) != 0x23)
            {
                int64_t var_90 = r15_1;
                int128_t var_48;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha0e369c0360be1c1(
                    &var_48, &var_90, rdx_1);
                var_70 = 2;
                var_88 = var_48;
                int64_t var_38;
                int64_t var_78_1 = var_38;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7a4ce38e59829aec(&var_88);
                arg1[2] = &data_601a40;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd(
                    var_90);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd(r15_1);
        }
        
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(r13_1, r14_2);
        *arg2 = rbx_5;
        arg2[1] = var_78;
        rbx_1 = r15_2;
    }
}
