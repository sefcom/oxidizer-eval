
  fn uu_pr::write_columns::h498c3fffc8cb79bc(arg1: *mut c_void, arg2: i64, arg3: *mut c_void, arg4: *mut i64) -> i64

{
    let rdi: i64 = *arg3.byte_offset(0x10);
    let r12_1: u64 = *arg3.byte_offset(0x138) >> *arg3.byte_offset(0x140);
    let mut var_188: i64;
    let mut rax_1: i64;
    
    if rdi != 1
    {
        rax_1 = *arg3.byte_offset(0x100);
        var_188 = 1;
        
        if rax_1 != -0x8000000000000000
        {
            var_188 = *arg3.byte_offset(0x120);
        }
    }
    else
    {
        var_188 = *arg3.byte_offset(0x18);
        rax_1 = *arg3.byte_offset(0x100);
    }
    
    let mut rcx_2: i8 = 0;
    
    if rax_1 != -0x8000000000000000
    {
        rcx_2 = *arg3.byte_offset(0x128);
    }
    
    let rax_2: i64 = *arg3.byte_offset(0x68);
    let rax_3: u64 = *arg3.byte_offset(0x70);
    let rax_4: i8 = *arg3.byte_offset(0x20);
    let rax_5: i64 = *arg3.byte_offset(0x28);
    let rax_6: i8 = *arg3.byte_offset(0x142);
    let mut var_108: i64 = 0;
    let var_100: i64 = 8;
    let var_f8: i64 = 0;
    
    if rdi != 0 && var_188 != 0
    {
        let mut i_5: i64 = 1;
        let mut r15_1: i64 = 0;
        let mut i: i64 = 0;
        let mut i_4: i64;
        
        do
        {
            if r15_1 > arg2
            {
                core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(r15_1, arg2);
                /* no return */
            }
            
            let mut r13_1: i64;
            
            if r15_1 != arg2
            {
                let rax_11: i64 = r15_1 << 6;
                let mut r15_2: *mut c_void = arg1.byte_offset(rax_11);
                let mut rbp_2: i64 = (arg2 << 6) - rax_11;
                r13_1 = 0;
                
                while *r15_2.byte_offset(0x18) == i
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h6f336ffbc5993d7a(&var_108, r15_2);
                    r13_1 += 1;
                    r15_2 += 0x40;
                    let temp1_1: i64 = rbp_2;
                    rbp_2 -= 0x40;
                    
                    if temp1_1 == 0x40
                    {
                        break;
                    }
                }
            }
            else
            {
                r13_1 = 0;
            }
            
            r15_1 += r13_1;
            let mut r13_2: i64 = r13_1 - 1;
            
            loop
            {
                r13_2 += 1;
                
                if r13_2 >= r12_1
                {
                    break;
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::h6f336ffbc5993d7a(&var_108, 0);
            }
            
            i_4 = i_5;
            i_5 = i_4 + 0;
            i = i_4;
        } while i_4 < var_188;
    }
    
    let var_c8: i64 = var_f8;
    let mut var_d8: i64 = var_108;
    let var_d0: i64 = var_100;
    let var_90: i64 = 0;
    let var_88: u64 = r12_1;
    let var_c0: *mut c_void = arg1;
    let var_b8: i64 = arg2;
    let var_b0: *mut c_void = arg3;
    let var_a8: i64 = var_188;
    let var_a0: u64 = r12_1;
    let var_98: i8 = rcx_2;
    let mut var_48: ();
    core::iter::traits::iterator::Iterator::collect::hb2811d645e461af0(&var_48, &var_d8);
    var_d8 = 0;
    let var_d0_1: i64 = 1;
    let mut s: i64;
    __builtin_memset(&s, 0, 0x30);
    let mut var_68: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h50f63d40442afdcf(&var_68, &var_48);
    let mut i_3: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&i_3, &var_68);
    let i_6: i64 = i_3;
    
    if i_6 != -0x8000000000000000
    {
        let mut i_2: i64 = i_6;
        let mut var_190_2: i64;
        let mut var_150: ();
        let var_148: i64;
        let var_140: u64;
        let var_130: i64;
        let var_128: i64;
        let mut var_f0: i64;
        let mut rbx_1: ssize_t;
        
        if rdi == 0
        {
            rbx_1 = 0;
            let mut r15_5: i8 = 0;
            let mut i_1: i64;
            
            do
            {
                var_190_2 = var_130;
                var_f0 = var_130;
                let var_e8_2: i64 = var_130 + (var_128 << 3);
                let var_e0_2: i64 = 0;
                let mut rax_27: i64;
                let mut j: *mut *mut i64;
                rax_27 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd7eb24b40152fb8(&var_f0);
                
                while j != 0
                {
                    let rdx_8: *mut i64 = *j;
                    
                    if rdx_8 == 0
                    {
                        r15_5 = 1;
                        
                        if rax_6 != 0
                        {
                            goto 'label_5377ce;
                        }
                        
                        goto 'label_537729;
                    }
                    
                    uu_pr::get_line_for_printing::hd1db5805a3293521(&var_150, arg3, rdx_8, var_188, 
                        rax_27, rax_4, rax_5, var_128);
                    
                    if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, var_148, var_140) != 0
                    {
                        goto 'label_53777c;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(
                        &var_150);
                    rbx_1 += 1;
                    rax_27 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd7eb24b40152fb8(&var_f0);
                }
                
                if (r15_5 & rax_6 & 1) != 0
                {
                    'label_5377ce:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::hba68b8d98b64866d(i_2, var_190_2);
                    break;
                }
                
                'label_537729:
                
                if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, rax_2, rax_3) != 0
                {
                    goto 'label_53778b;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::hba68b8d98b64866d(i_2, var_190_2);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&i_3, &var_68);
                i_1 = i_3;
                i_2 = i_1;
            } while i_1 != -0x8000000000000000;
        }
        else
        {
            rbx_1 = 0;
            
            loop
            {
                var_190_2 = var_130;
                var_f0 = var_130;
                let var_e8_1: i64 = var_130 + (var_128 << 3);
                let var_e0_1: i64 = 0;
                let mut i_7: i64;
                
                loop
                {
                    let mut rax_22: i64;
                    let mut rdx_2: *mut *mut i64;
                    rax_22 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd7eb24b40152fb8(&var_f0);
                    
                    if rdx_2 == 0
                    {
                        if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, rax_2, rax_3) == 0
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::hba68b8d98b64866d(i_2, var_190_2);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&i_3, &var_68);
                            i_7 = i_3;
                            i_2 = i_7;
                            break;
                        }
                    }
                    else
                    {
                        let rdx_3: *mut i64 = *rdx_2;
                        
                        if rdx_3 == 0
                        {
                            uu_pr::get_line_for_printing::hd1db5805a3293521(&var_150, arg3, 
                                &var_d8, var_188, rax_22, rax_4, rax_5, var_128);
                            let r13_3: ssize_t = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, var_148, var_140);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_150);
                            
                            if r13_3 == 0
                            {
                                continue;
                            }
                        }
                        else
                        {
                            uu_pr::get_line_for_printing::hd1db5805a3293521(&var_150, arg3, rdx_3, 
                                var_188, rax_22, rax_4, rax_5, var_128);
                            
                            if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, var_148, var_140) == 0
                            {
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_150);
                                rbx_1 += 1;
                                continue;
                            }
                            else
                            {
                                'label_53777c:
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_150);
                            }
                        }
                    }
                    
                    'label_53778b:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::hba68b8d98b64866d(i_2, var_190_2);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::he7e9f21517bd1d76(&var_68);
                    core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::hfc12aa566782b908(&var_d8);
                    return 1;
                }
                
                if i_7 == -0x8000000000000000
                {
                    break;
                }
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::he7e9f21517bd1d76(&var_68);
    core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::hfc12aa566782b908(&var_d8);
    0
}
