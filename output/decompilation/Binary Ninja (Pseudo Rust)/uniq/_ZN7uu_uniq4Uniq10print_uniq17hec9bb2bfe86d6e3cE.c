
  fn uu_uniq::Uniq::print_uniq::hec9bb2bfe86d6e3c(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i64) -> u64

{
    let mut rbp: *mut *mut c_void;
    let var_8: *mut *mut c_void = rbp;
    let mut rcx: i8 = 0xa;
    
    if *arg1.byte_offset(0x35) != 0
    {
        rcx = 0;
    }
    
    let mut var_48: i64;
    std::io::BufRead::split::h1b3d1f8595d96889(&var_48, arg2, arg3, rcx);
    let mut var_80: i64;
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
    let rax: i64 = var_80;
    let var_68: i64 = -0x7fffffffffffffff;
    let mut result: u64;
    let var_40: *mut i64;
    
    if rax != -0x7fffffffffffffff
    {
        let mut var_a0_1: i64 = rax;
        
        if rax != -0x8000000000000000
        {
            let var_78: i64;
            let mut var_b0_1: i64 = var_78;
            let var_70: u64;
            let mut r14: u64 = var_70;
            let rax_2: i64 = var_48;
            let rcx_1: i8 = arg1[6];
            let rdx: i8 = *arg1.byte_offset(0x31);
            let mut r12_1: i64;
            let mut r15_1: i64;
            let mut r13_1: i64;
            
            if (*arg1.byte_offset(0x32) & 1) != 0
            {
                r13_1 = 1;
                rbp = nullptr;
                r12_1 = var_a0_1;
                
                loop
                {
                    var_a0_1 = r12_1;
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
                    r12_1 = var_80;
                    
                    if r12_1 == var_68
                    {
                        goto 'label_45d579;
                    }
                    
                    r15_1 = var_78;
                    
                    if r12_1 == -0x8000000000000000
                    {
                        goto 'label_45d5fe;
                    }
                    
                    if uu_uniq::Uniq::cmp_keys::h53e47a450c9b1869(arg1, var_b0_1, r14) == 0
                    {
                        let result_1: u64 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                            arg4, arg5, var_b0_1, r14, r13_1, rbp);
                        result = result_1;
                        
                        if result_1 != 0
                        {
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        r13_1 += 1;
                        rbp = 1;
                        var_b0_1 = r15_1;
                        r14 = var_70;
                    }
                    else
                    {
                        if r13_1 != 0
                        {
                            if r13_1 != 1
                            {
                                if (rdx & 1) == 0
                                {
                                    'label_45d256:
                                    let result_2: u64 =
                                        uu_uniq::Uniq::print_line::h83673033b9795089(arg1, arg4, 
                                        arg5, var_b0_1, r14, r13_1, rbp);
                                    result = result_2;
                                    rbp = 1;
                                    
                                    if result_2 != 0
                                    {
                                        break;
                                    }
                                }
                            }
                            else if (rcx_1 & 1) == 0
                            {
                                goto 'label_45d256;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        var_b0_1 = r15_1;
                        r14 = var_70;
                        r13_1 = 1;
                    }
                }
            }
            else if (rcx_1 & 1) != 0
            {
                r13_1 = 1;
                rbp = nullptr;
                
                loop
                {
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
                    r12_1 = var_80;
                    
                    if r12_1 == var_68
                    {
                        goto 'label_45d579;
                    }
                    
                    r15_1 = var_78;
                    
                    if r12_1 == -0x8000000000000000
                    {
                        goto 'label_45d5fe;
                    }
                    
                    if uu_uniq::Uniq::cmp_keys::h53e47a450c9b1869(arg1, var_b0_1, r14) == 0
                    {
                        r13_1 += 1;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(r12_1, r15_1);
                    }
                    else
                    {
                        if ((r13_1 < 2 | rdx) & 1) == 0
                        {
                            let result_3: u64 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                                arg4, arg5, var_b0_1, r14, r13_1, rbp);
                            result = result_3;
                            rbp = 1;
                            
                            if result_3 != 0
                            {
                                break;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        var_a0_1 = r12_1;
                        var_b0_1 = r15_1;
                        r14 = var_70;
                        r13_1 = 1;
                    }
                }
            }
            else if (rdx & 1) == 0
            {
                r13_1 = 1;
                rbp = nullptr;
                
                loop
                {
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
                    r12_1 = var_80;
                    
                    if r12_1 == var_68
                    {
                        goto 'label_45d579;
                    }
                    
                    r15_1 = var_78;
                    
                    if r12_1 == -0x8000000000000000
                    {
                        goto 'label_45d5fe;
                    }
                    
                    if uu_uniq::Uniq::cmp_keys::h53e47a450c9b1869(arg1, var_b0_1, r14) == 0
                    {
                        r13_1 += 1;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(r12_1, r15_1);
                    }
                    else
                    {
                        if r13_1 != 0
                        {
                            let result_5: u64 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                                arg4, arg5, var_b0_1, r14, r13_1, rbp);
                            result = result_5;
                            rbp = 1;
                            
                            if result_5 != 0
                            {
                                break;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        var_a0_1 = r12_1;
                        var_b0_1 = r15_1;
                        r14 = var_70;
                        r13_1 = 1;
                    }
                }
            }
            else
            {
                r13_1 = 1;
                rbp = nullptr;
                
                loop
                {
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
                    r12_1 = var_80;
                    
                    if r12_1 == var_68
                    {
                        'label_45d579:
                        core::ptr::drop_in_place$LT$std..io..error..Custom$GT$::h7819be45b555a90b(
                            rax_2, var_40);
                        
                        if r13_1 == 0
                        {
                            'label_45d59d:
                            let rax_15: u32 = *arg1.byte_offset(0x36);
                            
                            if (rax_15 == 0 || rax_15 == 3) && (rbp & 1) != 0
                            {
                                'label_45d5bc:
                                var_80 = rcx;
                                let result_6: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6fd0b16c849806eb(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg4, arg5, &var_80, 1));
                                result = result_6;
                                
                                if result_6 != 0
                                {
                                    goto 'label_45d695;
                                }
                            }
                        }
                        else
                        {
                            if r13_1 != 1
                            {
                                if (rdx & 1) != 0
                                {
                                    goto 'label_45d59d;
                                }
                            }
                            else if (rcx_1 & 1) != 0
                            {
                                goto 'label_45d59d;
                            }
                            
                            let result_7: u64 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                                arg4, arg5, var_b0_1, r14, r13_1, rbp);
                            result = result_7;
                            
                            if result_7 != 0
                            {
                                goto 'label_45d695;
                            }
                            
                            let rax_21: u32 = *arg1.byte_offset(0x36);
                            
                            if rax_21 == 3 || rax_21 == 0
                            {
                                goto 'label_45d5bc;
                            }
                        }
                        
                        let result_8: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8767c281263d92b0(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::flush::h3c65bab2438362f0(arg4, arg5));
                        result = result_8;
                        
                        if result_8 != 0
                        {
                            goto 'label_45d695;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        result = 0;
                        goto 'label_45d6a0;
                    }
                    
                    r15_1 = var_78;
                    
                    if r12_1 == -0x8000000000000000
                    {
                        'label_45d5fe:
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        goto 'label_45d60e;
                    }
                    
                    if uu_uniq::Uniq::cmp_keys::h53e47a450c9b1869(arg1, var_b0_1, r14) == 0
                    {
                        r13_1 += 1;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(r12_1, r15_1);
                    }
                    else
                    {
                        if r13_1 == 1
                        {
                            let result_4: u64 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                                arg4, arg5, var_b0_1, r14, 1, rbp);
                            result = result_4;
                            rbp = 1;
                            
                            if result_4 != 0
                            {
                                break;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        var_a0_1 = r12_1;
                        var_b0_1 = r15_1;
                        r14 = var_70;
                        r13_1 = 1;
                    }
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(r12_1, 
                r15_1);
            'label_45d60e:
            core::ptr::drop_in_place$LT$std..io..error..Custom$GT$::h7819be45b555a90b(rax_2, 
                var_40);
            'label_45d695:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, 
                var_b0_1);
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            core::ptr::drop_in_place$LT$std..io..error..Custom$GT$::h7819be45b555a90b(var_48, 
                var_40);
        }
    }
    else
    {
        result = 0;
        core::ptr::drop_in_place$LT$std..io..error..Custom$GT$::h7819be45b555a90b(var_48, var_40);
    }
    'label_45d6a0:
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h26f815af2d05ced1(arg4, arg5);
    result
}
