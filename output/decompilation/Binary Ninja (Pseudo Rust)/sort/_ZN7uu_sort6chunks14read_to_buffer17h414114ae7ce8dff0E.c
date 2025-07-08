
  fn uu_sort::chunks::read_to_buffer::h414114ae7ce8dff0(arg1: *mut i64, arg2: *mut i32, arg3: *mut i64, arg4: i64, arg5: i64, arg6: i64, arg7: i8) -> *mut i64

{
    let rsi: i64 = arg3[2];
    let mut r12_1: u64 = rsi - arg6;
    
    if rsi < arg6
    {
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(arg6, rsi);
        /* no return */
    }
    
    let mut rbp_1: i64 = arg6 + arg3[1];
    
    loop
    {
        let mut rbx_1: u64 = r12_1;
        let mut var_78: i64;
        
        loop
        {
            let mut rax_2: i64;
            let mut rdx_1: i64;
            rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(arg2, 
                rbp_1, rbx_1);
            let mut r12_2: i64 = rdx_1;
            let mut var_88: i128;
            let mut var_70: i32;
            
            if rax_2 == 0
            {
                let mut rbp_2: i64;
                
                if arg4 == 1
                {
                    loop
                    {
                        if r12_2 != 0
                        {
                            goto 'label_55d437;
                        }
                        
                        if rbx_1 != 0
                        {
                            break;
                        }
                        
                        rbp_2 = arg3[2];
                        
                        if rbp_2 >= arg5
                        {
                            goto 'label_55d458;
                        }
                        
                        let mut rsi_2: i64 = rbp_2 << 1;
                        
                        if rbp_2 >= arg5 >> 1
                        {
                            rsi_2 = arg5;
                        }
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(arg3, rsi_2, 0);
                        let rsi_3: i64 = arg3[2];
                        rbx_1 = rsi_3 - rbp_2;
                        
                        if rsi_3 < rbp_2
                        {
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                rbp_2, rsi_3);
                            /* no return */
                        }
                        
                        rbp_1 = rbp_2 + arg3[1];
                        let mut rax_4: i64;
                        rax_4 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(arg2, rbp_1, rbx_1);
                        r12_2 = rdx_1;
                        
                        if rax_4 != 0
                        {
                            goto 'label_55d39a;
                        }
                    }
                    
                    goto 'label_55d4e8;
                }
                
                let mut result: *mut i64;
                
                if r12_2 != 0
                {
                    'label_55d437:
                    let rsi_5: u64 = rbx_1;
                    let temp1_1: u64 = rbx_1;
                    rbx_1 -= r12_2;
                    
                    if temp1_1 >= r12_2
                    {
                        rbp_1 += r12_2;
                        continue;
                    }
                    
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r12_2, rsi_5);
                    /* no return */
                }
                else if rbx_1 != 0
                {
                    'label_55d4e8:
                    
                    if r12_1 != rbx_1
                    {
                        let mut rsi_10: i64 = arg3[2];
                        let mut rbp_6: i64 = rsi_10 - rbx_1;
                        
                        if rbp_6 - 1 >= rsi_10
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(rbp_6 - 1, 
                                rsi_10);
                            /* no return */
                        }
                        
                        let rax_9: *mut i8 = arg3[1];
                        
                        if rax_9[rbp_6 - 1] != arg7
                        {
                            if rsi_10 < rbx_1
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
                        
                        if rbx_1 > rsi_10
                        {
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                rbp_6, rsi_10);
                            /* no return */
                        }
                        
                        rbp_1 = rbp_6 + arg3[1];
                    }
                    
                    _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8eccb4edd6a25a96(&var_88);
                    let mut rcx_2: *mut i64;
                    
                    if var_88 == 0
                    {
                        rcx_2 = arg1;
                        rcx_2[1] = arg3[2] - r12_1;
                        rcx_2[2] = 0;
                        result = nullptr;
                    }
                    else
                    {
                        let rax_10: i64 = *var_88[8];
                        
                        if rax_10 == 0
                        {
                            break;
                        }
                        
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
                    'label_55d458:
                    let rax_5: i64 = arg3[1];
                    var_88 = rax_5;
                    *var_88[8] = rax_5;
                    var_78 = rbp_2 + rax_5;
                    var_70 = arg7;
                    let mut rax_7: i64;
                    let mut rdx_3: i64;
                    rax_7 = memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(
                        &var_88, &var_70);
                    
                    if memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(&var_88, 
                        &var_70) == 1
                    {
                        if rax_7 == 0
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
                        let rbp_4: i64 = arg3[2];
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(arg3, 
                            rbp_4 + 0x2800, 0);
                        let rsi_9: i64 = arg3[2];
                        rbx_1 = rsi_9 - rbp_4;
                        
                        if rsi_9 >= rbp_4
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
            
            'label_55d39a:
            
            if std::io::error::Error::kind::hb2ff5fa058639b3d(r12_2) != 0x23
            {
                let mut var_90: i64 = r12_2;
                let mut var_48: i128;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha0e369c0360be1c1(
                    &var_48, &var_90, rdx_1);
                var_70 = 2;
                var_88 = var_48;
                let var_38: i64;
                let var_78_1: i64 = var_38;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7a4ce38e59829aec(&var_88);
                arg1[2] = &data_601a40;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd(
                    var_90);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd(r12_2);
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5(*arg2);
        *arg2 = var_78;
    }
}
