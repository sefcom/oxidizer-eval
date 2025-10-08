
  fn uu_sort::chunks::read_to_buffer::h115edbd649f55de6(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64, arg4: i64, arg5: i8) -> *mut i64

{
    let rsi: i64 = arg3[2];
    let mut r14_1: i64 = rsi - arg4;
    
    if rsi < arg4
    {
        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(arg4, rsi);
        /* no return */
    }
    
    let mut rbx_1: i64 = arg4 + arg3[1];
    let mut var_60: *mut *mut c_void = &data_58c600;
    
    loop
    {
        let mut rbp_1: i64 = r14_1;
        
        loop
        {
            let mut rax_1: i64;
            let mut rdx_1: i64;
            rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h7f9eb14cd913115d(*arg2, arg2[1], rbx_1, rbp_1);
            let var_58_1: i64 = rax_1;
            let mut var_88: i128;
            let mut var_70: i32;
            
            if (rax_1 & 1) == 0
            {
                let mut rbx_3: i64;
                
                if rdx_1 == 0
                {
                    let mut var_78: i64;
                    
                    if rbp_1 != 0
                    {
                        if r14_1 == rbp_1
                        {
                            goto 'label_4c284f;
                        }
                        
                        let mut rsi_5: i64 = arg3[2];
                        rbx_3 = rsi_5 - rbp_1;
                        let rdi_6: i64 = rbx_3 - 1;
                        
                        if rdi_6 >= rsi_5
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_6, rsi_5);
                            /* no return */
                        }
                        
                        let rax_11: *mut i8 = arg3[1];
                        
                        if rax_11[rdi_6] != arg5
                        {
                            if rsi_5 < rbp_1
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
                        
                        if rbp_1 <= rsi_5
                        {
                            rbx_1 = rbx_3 + arg3[1];
                            'label_4c284f:
                            _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h161b7b8bfd4e684c(&var_88);
                            let rax_12: i64 = var_88;
                            let mut rax_16: *mut i64;
                            
                            if rax_12 == 2
                            {
                                core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::h1157f0d3cb3c2437(&var_88);
                                rax_16 = arg3[2] - r14_1;
                                arg1[1] = rax_16;
                                arg1[2] = 0;
                                *arg1 = 0;
                            }
                            else
                            {
                                let rbp_4: i64 = *var_88[8];
                                
                                if (rax_12 & 1) == 0
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
                        let rax_6: i64 = arg3[1];
                        var_88 = rax_6;
                        *var_88[8] = rax_6;
                        var_78 = arg3[2] + rax_6;
                        var_70 = arg5;
                        let mut rax_8: i8;
                        let mut rdx_2: i64;
                        rax_8 = memchr::arch::generic::memchr::Iter::next_back::ha685b7d06b3ac29d(
                            &var_88, &var_70);
                        
                        if memchr::arch::generic::memchr::Iter::next_back::ha685b7d06b3ac29d(
                            &var_88, &var_70) == 1
                        {
                            if (rax_8 & 1) == 0
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
                        let rax_10: i64 = arg3[2];
                        rbp_1 = rax_10 - rbx_3;
                        
                        if rax_10 < rbx_3
                        {
                            rbp_1 = rax_10;
                        }
                        else
                        {
                            rbx_1 = rbx_3 + arg3[1];
                            continue;
                        }
                    }
                }
                else if rbp_1 < rdx_1
                {
                    rbx_3 = rdx_1;
                }
                else
                {
                    rbx_1 += rdx_1;
                    rbp_1 -= rdx_1;
                    continue;
                }
                
                core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rbx_3, rbp_1);
                /* no return */
            }
            
            if std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1) != 0x23
            {
                let mut var_68: i64 = rdx_1;
                let mut var_48: i128;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hfed7642166309176(&var_48, &var_68, rdx_1);
                var_70 = 2;
                var_88 = var_48;
                let var_38: i64;
                let var_78_1: i64 = var_38;
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
