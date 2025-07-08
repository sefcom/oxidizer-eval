
  int64_t* uu_sort::chunks::read_to_buffer::h9fbf6c8e152af272(int64_t* arg1, int32_t* arg2, int64_t* arg3, int64_t arg4, int64_t arg5, int64_t arg6, char arg7)

{
    int64_t rsi = arg3[2];
    uint64_t r12_1 = rsi - arg6;
    
    if (rsi < arg6)
    {
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(arg6, rsi);
        /* no return */
    }
    
    int64_t rbp_1 = arg6 + arg3[1];
    
    while (true)
    {
        uint64_t rbx_1 = r12_1;
        int64_t var_78;
        
        while (true)
        {
            int64_t rax_2;
            int64_t rdx_1;
            rax_2 = _$LT$std..process..ChildStderr$u20$as$u20$std..io..Read$GT$::read::h32246dfc537b2638(arg2, rbp_1, rbx_1);
            int64_t r12_2 = rdx_1;
            int128_t var_88;
            int32_t var_70;
            
            if (!rax_2)
            {
                int64_t rbp_2;
                
                if (arg4 == 1)
                {
                    while (true)
                    {
                        if (r12_2)
                            goto label_55dfb7;
                        
                        if (rbx_1)
                            break;
                        
                        rbp_2 = arg3[2];
                        
                        if (rbp_2 >= arg5)
                            goto label_55dfd8;
                        
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
                        rax_4 = _$LT$std..process..ChildStderr$u20$as$u20$std..io..Read$GT$::read::h32246dfc537b2638(arg2, rbp_1, rbx_1);
                        r12_2 = rdx_1;
                        
                        if (rax_4)
                            goto label_55df1a;
                    }
                    
                    goto label_55e068;
                }
                
                int64_t* result;
                
                if (r12_2)
                {
                    label_55dfb7:
                    uint64_t rsi_5 = rbx_1;
                    uint64_t temp1_1 = rbx_1;
                    rbx_1 -= r12_2;
                    
                    if (temp1_1 >= r12_2)
                    {
                        rbp_1 += r12_2;
                        continue;
                    }
                    
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r12_2, rsi_5);
                    /* no return */
                }
                else if (rbx_1)
                {
                    label_55e068:
                    
                    if (r12_1 != rbx_1)
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
                        
                        r12_1 = rbx_1;
                        
                        if (rbx_1 > rsi_10)
                        {
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                rbp_6, rsi_10);
                            /* no return */
                        }
                        
                        rbp_1 = rbp_6 + arg3[1];
                    }
                    
                    _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd44e082068a075a0(&var_88);
                    int64_t* rcx_2;
                    
                    if (!var_88)
                    {
                        rcx_2 = arg1;
                        rcx_2[1] = arg3[2] - r12_1;
                        rcx_2[2] = 0;
                        result = nullptr;
                    }
                    else
                    {
                        int64_t rax_10 = *var_88[8];
                        
                        if (!rax_10)
                            break;
                        
                        rcx_2 = arg1;
                        rcx_2[1] = rax_10;
                        rcx_2[2] = var_78;
                        result = 1;
                    }
                    
                    *rcx_2 = result;
                }
                else
                {
                    rbp_2 = arg3[2];
                    label_55dfd8:
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
            
            label_55df1a:
            
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(r12_2) != 0x23)
            {
                int64_t var_90 = r12_2;
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
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd(r12_2);
        }
        
        core::ptr::drop_in_place$LT$std..process..ChildStdout$GT$::h1576bcb3cdfb83b9(*arg2);
        *arg2 = var_78;
    }
}
