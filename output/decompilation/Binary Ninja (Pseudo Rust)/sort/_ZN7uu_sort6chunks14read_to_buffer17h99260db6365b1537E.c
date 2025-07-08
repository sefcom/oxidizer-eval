
  fn uu_sort::chunks::read_to_buffer::h99260db6365b1537(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64, arg4: *mut i64, arg5: i64, arg6: i64, arg7: i64, arg8: i8) -> *mut i64

{
    let rsi: i64 = arg4[2];
    let mut rbx_1: i64 = rsi - arg7;
    
    if rsi < arg7
    {
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(arg7, rsi);
        /* no return */
    }
    
    let mut rbp_1: i64 = arg7 + arg4[1];
    
    loop
    {
        let var_a8_1: i64 = rbx_1;
        let mut var_78: i64;
        let mut rbx_5: i64;
        let mut r13_1: i64;
        let mut r14_2: *mut i64;
        let mut r15_2: i64;
        
        loop
        {
            let mut rax_1: i64;
            let mut rdx_1: i64;
            rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb06b12a83684c07d(*arg2, arg2[1], rbp_1, rbx_1);
            let mut r15_1: i64 = rdx_1;
            let mut var_88: i128;
            let mut var_70: i32;
            
            if rax_1 == 0
            {
                r13_1 = *arg2;
                r14_2 = arg2[1];
                let mut rbp_2: i64;
                
                if arg5 == 1
                {
                    loop
                    {
                        if r15_1 != 0
                        {
                            goto 'label_55dbd1;
                        }
                        
                        if rbx_1 != 0
                        {
                            goto 'label_55dc80;
                        }
                        
                        rbp_2 = arg4[2];
                        
                        if rbp_2 >= arg6
                        {
                            break;
                        }
                        
                        let mut rsi_2: i64 = rbp_2 << 1;
                        
                        if rbp_2 >= arg6 >> 1
                        {
                            rsi_2 = arg6;
                        }
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(arg4, rsi_2, 0);
                        let rsi_3: i64 = arg4[2];
                        rbx_1 = rsi_3 - rbp_2;
                        
                        if rsi_3 < rbp_2
                        {
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                rbp_2, rsi_3);
                            /* no return */
                        }
                        
                        rbp_1 = rbp_2 + arg4[1];
                        let mut rax_4: i64;
                        rax_4 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb06b12a83684c07d(r13_1, r14_2, rbp_1, rbx_1);
                        r15_1 = rdx_1;
                        
                        if rax_4 != 0
                        {
                            goto 'label_55db32;
                        }
                    }
                    
                    goto 'label_55dbf3;
                }
                
                let mut result: *mut i64;
                
                if r15_1 != 0
                {
                    'label_55dbd1:
                    let rsi_5: i64 = rbx_1;
                    let temp1_1: i64 = rbx_1;
                    rbx_1 -= r15_1;
                    
                    if temp1_1 >= r15_1
                    {
                        rbp_1 += r15_1;
                        continue;
                    }
                    
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r15_1, rsi_5);
                    /* no return */
                }
                else if rbx_1 != 0
                {
                    'label_55dc80:
                    r15_2 = var_a8_1;
                    
                    if r15_2 != rbx_1
                    {
                        let mut rsi_10: i64 = arg4[2];
                        let mut rbp_6: i64 = rsi_10 - rbx_1;
                        
                        if rbp_6 - 1 >= rsi_10
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(rbp_6 - 1, 
                                rsi_10);
                            /* no return */
                        }
                        
                        let rax_9: *mut i8 = arg4[1];
                        
                        if rax_9[rbp_6 - 1] != arg8
                        {
                            if rsi_10 < rbx_1
                            {
                                core::panicking::panic_bounds_check::h25a5330941572dd1(rbp_6, 
                                    rsi_10);
                                /* no return */
                            }
                            
                            rax_9[rbp_6] = arg8;
                            rbx_1 -= 1;
                            rsi_10 = arg4[2];
                            rbp_6 = rsi_10 - rbx_1;
                        }
                        
                        r15_2 = rbx_1;
                        
                        if rbx_1 > rsi_10
                        {
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(
                                rbp_6, rsi_10);
                            /* no return */
                        }
                        
                        rbp_1 = rbp_6 + arg4[1];
                    }
                    
                    _$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&var_88, arg3);
                    let rax_10: i64 = var_88;
                    let mut rcx_6: *mut i64;
                    
                    if rax_10 == 2
                    {
                        rcx_6 = arg1;
                        rcx_6[1] = arg4[2] - r15_2;
                        rcx_6[2] = 0;
                        result = nullptr;
                    }
                    else
                    {
                        rbx_5 = *var_88[8];
                        
                        if rax_10 == 0
                        {
                            break;
                        }
                        
                        rcx_6 = arg1;
                        rcx_6[1] = rbx_5;
                        rcx_6[2] = var_78;
                        result = 1;
                    }
                    
                    *rcx_6 = result;
                }
                else
                {
                    rbp_2 = arg4[2];
                    'label_55dbf3:
                    let rax_5: i64 = arg4[1];
                    var_88 = rax_5;
                    *var_88[8] = rax_5;
                    var_78 = rbp_2 + rax_5;
                    var_70 = arg8;
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
                        let rbp_4: i64 = arg4[2];
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(arg4, 
                            rbp_4 + 0x2800, 0);
                        let rsi_9: i64 = arg4[2];
                        rbx_1 = rsi_9 - rbp_4;
                        
                        if rsi_9 >= rbp_4
                        {
                            rbp_1 = rbp_4 + arg4[1];
                            continue;
                        }
                        
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(rbp_4, 
                            rsi_9);
                        /* no return */
                    }
                }
                
                return result;
            }
            
            'label_55db32:
            
            if std::io::error::Error::kind::hb2ff5fa058639b3d(r15_1) != 0x23
            {
                let mut var_90: i64 = r15_1;
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
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd(r15_1);
        }
        
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(r13_1, r14_2);
        *arg2 = rbx_5;
        arg2[1] = var_78;
        rbx_1 = r15_2;
    }
}
