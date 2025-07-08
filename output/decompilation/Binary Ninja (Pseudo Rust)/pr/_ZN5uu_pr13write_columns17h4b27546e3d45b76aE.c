
  fn uu_pr::write_columns::h4b27546e3d45b76a(arg1: i64, arg2: i64, arg3: *mut c_void, arg4: *mut i64) -> i64

{
    let rdi: i64 = *arg3.byte_offset(0x10);
    let rbx_1: u64 = *arg3.byte_offset(0x138) >> *arg3.byte_offset(0x140);
    let mut var_1e8: i64;
    let mut rax_1: i64;
    
    if rdi == 0
    {
        rax_1 = *arg3.byte_offset(0x100);
        var_1e8 = 1;
        
        if rax_1 != -0x8000000000000000
        {
            var_1e8 = *arg3.byte_offset(0x120);
        }
    }
    else
    {
        var_1e8 = *arg3.byte_offset(0x18);
        rax_1 = *arg3.byte_offset(0x100);
    }
    
    let mut rcx_2: i8 = 0;
    
    if rax_1 != -0x8000000000000000
    {
        rcx_2 = *arg3.byte_offset(0x128);
    }
    
    let rax_2: i64 = *arg3.byte_offset(0x68);
    let rax_3: u64 = *arg3.byte_offset(0x70);
    let rax_4: i64 = *arg3.byte_offset(0x20);
    let rax_5: i64 = *arg3.byte_offset(0x28);
    let rax_6: i8 = *arg3.byte_offset(0x142);
    let mut var_148: i64 = 0;
    let var_140: i64 = 8;
    let var_138: i64 = 0;
    let mut var_108: i64;
    
    if rdi != 0 && var_1e8 != 0
    {
        let mut r13_1: i64 = 0;
        let mut i: i64 = 0;
        let mut i_2: i64;
        
        do
        {
            i_2 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(i);
            
            if r13_1 > arg2
            {
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r13_1, arg2);
                /* no return */
            }
            
            var_108 = (r13_1 << 6) + arg1;
            let var_100_1: i64 = (arg2 << 6) + arg1;
            let mut rax_11: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a2e58434e90c9b0(&var_108);
            let mut r13_4: i64 = 0;
            
            if rax_11 != 0
            {
                while *rax_11.byte_offset(0x18) == i
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h131fd66e07e1516e(&var_148, rax_11);
                    r13_4 += 1;
                    rax_11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a2e58434e90c9b0(&var_108);
                    
                    if rax_11 == 0
                    {
                        break;
                    }
                }
            }
            
            let var_1d8_2: i64 = r13_1 + r13_4;
            
            while r13_4 < rbx_1
            {
                r13_4 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r13_4);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h131fd66e07e1516e(&var_148, 0);
            }
            
            i = i_2;
            r13_1 = var_1d8_2;
        } while i_2 < var_1e8;
    }
    
    let var_98: i64 = var_138;
    let mut var_a8: i64 = var_148;
    let var_a0: i64 = var_140;
    let var_60: i64 = 0;
    let var_58: u64 = rbx_1;
    let var_90: i64 = arg1;
    let var_88: i64 = arg2;
    let var_80: *mut c_void = arg3;
    let var_78: i64 = var_1e8;
    let var_70: u64 = rbx_1;
    let var_68: i8 = rcx_2;
    let mut var_48: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h13c086e7e35183b3(&var_48, &var_a8);
    var_108 = 0;
    let var_100_2: i64 = 1;
    let mut s: i64;
    __builtin_memset(&s, 0, 0x30);
    let mut var_c8: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::heff5ad2e73d336ad(&var_c8, &var_48);
    let mut i_1: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&i_1, &var_c8);
    
    if i_1 != -0x8000000000000000
    {
        let mut var_1a8: ();
        let var_1a0: i64;
        let var_198: u64;
        let mut var_188: i128;
        let var_160: i64;
        let mut var_130: i64;
        let mut r14: *mut *mut [i8; 0x9b];
        
        if rdi == 0
        {
            r14 = nullptr;
            let mut var_1d8_3: i8 = 0;
            
            do
            {
                var_188 = i_1;
                let var_178_2: i64 = var_160;
                let rax_27: i64 = *var_188[8];
                var_130 = rax_27;
                let var_128_2: i64 = rax_27 + (var_160 << 3);
                let var_120_2: i64 = 0;
                
                loop
                {
                    let mut rax_28: i64;
                    let mut rdx_6: *mut *mut i64;
                    rax_28 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc73c14a389155679(&var_130);
                    
                    if rdx_6 == 0
                    {
                        break;
                    }
                    
                    let rdx_7: *mut i64 = *rdx_6;
                    
                    if rdx_7 == 0
                    {
                        rax_28 = 1;
                        var_1d8_3 = rax_28;
                        
                        if rax_6 != 0
                        {
                            goto 'label_5c816c;
                        }
                        
                        goto 'label_5c80cc;
                    }
                    
                    uu_pr::get_line_for_printing::h8a9c61ca270edd26(&var_1a8, arg3, rdx_7, var_1e8, 
                        rax_28, rax_4, rax_5, var_160);
                    
                    if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, var_1a0, var_198) != 0
                    {
                        goto 'label_5c8118;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(
                        &var_1a8);
                    r14 += 1;
                }
                
                if rax_6 != 0 && (var_1d8_3 & 1) != 0
                {
                    'label_5c816c:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&var_188);
                    break;
                }
                
                'label_5c80cc:
                
                if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, rax_2, rax_3) != 0
                {
                    goto 'label_5c812e;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&var_188);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&i_1, &var_c8);
            } while i_1 != -0x8000000000000000;
        }
        else
        {
            r14 = nullptr;
            
            loop
            {
                var_188 = i_1;
                let var_178_1: i64 = var_160;
                let rax_22: i64 = *var_188[8];
                var_130 = rax_22;
                let var_128_1: i64 = rax_22 + (var_160 << 3);
                let var_120_1: i64 = 0;
                
                loop
                {
                    let mut rax_23: i64;
                    let mut rdx: *mut *mut i64;
                    rax_23 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc73c14a389155679(&var_130);
                    
                    if rdx == 0
                    {
                        if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, rax_2, rax_3) == 0
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&var_188);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&i_1, &var_c8);
                            break;
                        }
                    }
                    else
                    {
                        let rdx_1: *mut i64 = *rdx;
                        
                        if rdx_1 == 0
                        {
                            uu_pr::get_line_for_printing::h8a9c61ca270edd26(&var_1a8, arg3, 
                                &var_108, var_1e8, rax_23, rax_4, rax_5, var_160);
                            
                            if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, var_1a0, var_198) != 0
                            {
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
                                continue;
                            }
                        }
                        else
                        {
                            uu_pr::get_line_for_printing::h8a9c61ca270edd26(&var_1a8, arg3, rdx_1, 
                                var_1e8, rax_23, rax_4, rax_5, var_160);
                            
                            if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, var_1a0, var_198) != 0
                            {
                                'label_5c8118:
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
                                r14 += 1;
                                continue;
                            }
                        }
                    }
                    
                    'label_5c812e:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&var_188);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::hf9ce9c54c65d9cf1(&var_c8);
                    core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::h27cde15571da4c08(&var_108);
                    return 1;
                }
                
                if i_1 == -0x8000000000000000
                {
                    break;
                }
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::hf9ce9c54c65d9cf1(&var_c8);
    core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::h27cde15571da4c08(&var_108);
    0
}
