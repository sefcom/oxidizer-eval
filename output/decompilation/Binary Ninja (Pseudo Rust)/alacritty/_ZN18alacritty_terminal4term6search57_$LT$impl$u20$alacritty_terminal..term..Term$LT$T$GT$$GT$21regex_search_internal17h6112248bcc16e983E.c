
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_internal::h6112248bcc16e983(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i32, arg5: i64, arg6: i32, arg7: *mut c_void) -> *mut i64

{
    let r13: i64 = *arg2.byte_offset(0xc0);
    let rax: i64 = *arg2.byte_offset(0x50);
    let mut rax_1: i32 = rax - r13;
    let mut var_130: i32 = 0;
    
    if rax < r13
    {
        rax_1 = 0;
    }
    
    let rbp_1: i64 = *arg2.byte_offset(0xb8) - 1;
    let mut rcx: fn(arg1: *mut i64, arg2: *mut i64) -> *mut i64 = _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73;
    
    if *arg7.byte_offset(0x430) != 0
    {
        rcx = _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458;
    }
    
    let mut var_60: u32 = *arg7.byte_offset(0x431);
    let var_58: i64 = 1;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x19);
    let mut var_c8: *mut c_void;
    regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(&var_c8, arg7, 
        arg7.byte_offset(0x2d0), &var_60);
    let mut rbx: i32 = core::result::Result$LT$T$C$E$GT$::unwrap::h0c28f10e710e8b0c(&var_c8);
    let var_78: i32 = r13;
    let rax_4: i32 = r13 - 1;
    var_c8 = arg2.byte_offset(0x28);
    let mut var_c0: i64 = arg3;
    let mut var_b8: i32 = arg4;
    let var_b0: i64 = rbp_1;
    let var_a8: i32 = rax_4;
    let mut var_98: *mut c_void =
        alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_c8);
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::skip_fullwidth::h604d4a2591bbfa58(arg2, &var_c8, &var_98, *arg7.byte_offset(0x430));
    let mut rbp_2: i32 = *var_98.byte_offset(0x10);
    let mut var_e8: u8 =
        *alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_c8).
        byte_offset(0x14) >> 4;
    let mut r14_1: i64 = var_c0;
    let mut rcx_5: i32 = var_b8;
    let mut var_f8: i32 = rcx_5;
    let mut var_118: i32;
    var_118 = r14_1;
    let mut var_f0_1: i8 = 0;
    let mut var_138: i64 = 0;
    let mut result: *mut i64;
    
    loop
    {
        let mut r15_1: u64 = var_118;
        let mut r13_1: u64 = var_f8;
        var_f8 = rcx_5;
        var_118 = r14_1;
        let mut var_13c: i32 = 0;
        let rdx_3: i64 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rbp_2, &var_13c);
        let mut var_140: i32;
        let mut var_128: u64;
        let mut var_110: *mut c_void;
        let mut rax_16: i32;
        let mut r14_2: *mut c_void;
        
        if rdx_3 != 0
        {
            let mut r12_2: i64 = rdx_3;
            r14_2 = arg7;
            let mut rdi_7: i64;
            
            if *r14_2.byte_offset(0x430) == 0
            {
                rdi_7 = r12_2 - 1;
                
                if r12_2 <= 4
                {
                    goto 'label_7727ce;
                }
                
                'label_772f10:
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_7, 4);
                /* no return */
            }
            
            rdi_7 = 0;
            'label_7727ce:
            let mut rax_17: i8;
            let mut rdx_5: i32;
            rax_17 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                arg7.byte_offset(0x2d0), rbx, *(&var_13c).byte_offset(rdi_7));
            let mut rbx_2: *mut *mut c_void;
            
            if (rax_17 & 1) != 0
            {
                'label_772dd8:
                rbx_2 = &data_c77b88;
                result = alloc::boxed::Box$LT$T$GT$::new::h314575a5fb231377();
            }
            else
            {
                rbx = rdx_5;
                
                if (rdx_5 & 0x8000000) != 0
                {
                    var_130 += 1;
                    'label_77281a:
                    var_138 = 1;
                    'label_772824:
                    
                    if r12_2 == 1
                    {
                        rax_16 = r13_1;
                        r13_1 = r15_1;
                        goto 'label_772ae4;
                    }
                    
                    rdi_7 = 1;
                    
                    if *r14_2.byte_offset(0x430) == 0
                    {
                        rdi_7 = r12_2 - 2;
                    }
                    
                    if *r14_2.byte_offset(0x430) == 0 && rdi_7 > 3
                    {
                        goto 'label_772f10;
                    }
                    
                    let mut rax_20: i8;
                    let mut rdx_7: i32;
                    rax_20 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                        arg7.byte_offset(0x2d0), rbx, *(&var_13c).byte_offset(rdi_7));
                    
                    if (rax_20 & 1) != 0
                    {
                        goto 'label_772dd8;
                    }
                    
                    rbx = rdx_7;
                    
                    if (rdx_7 & 0x40000000) != 0
                    {
                        var_140 = r13_1;
                        var_128 = r15_1;
                        
                        if var_130 != 1
                        {
                            goto 'label_772eb1;
                        }
                        
                        regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(
                            &var_110, r14_2, arg7.byte_offset(0x2d0), &var_60);
                        
                        if (var_110 & 1) != 0
                        {
                            goto 'label_772deb;
                        }
                        
                        rbx = *var_110[4];
                        var_138 = 0;
                        var_130 = 0;
                        
                        if r12_2 == 2
                        {
                            rax_16 = var_140;
                            goto 'label_772ae4;
                        }
                    }
                    else
                    {
                        var_140 = r13_1;
                        r13_1 = r15_1;
                        var_130 += 1;
                        
                        if r12_2 == 2
                        {
                            rax_16 = var_140;
                            goto 'label_772ae4;
                        }
                    }
                    
                    var_128 = r13_1;
                    rdi_7 = 2;
                    
                    if *r14_2.byte_offset(0x430) == 0
                    {
                        rdi_7 = r12_2 - 3;
                    }
                    
                    if *r14_2.byte_offset(0x430) == 0 && rdi_7 > 3
                    {
                        goto 'label_772f10;
                    }
                    
                    let mut rax_25: i8;
                    let mut rdx_14: i32;
                    rax_25 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                        arg7.byte_offset(0x2d0), rbx, *(&var_13c).byte_offset(rdi_7));
                    
                    if (rax_25 & 1) != 0
                    {
                        goto 'label_772dd8;
                    }
                    
                    rbx = rdx_14;
                    
                    if (rdx_14 & 0x40000000) != 0
                    {
                        if var_130 != 1
                        {
                            goto 'label_772eb1;
                        }
                        
                        regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(
                            &var_110, r14_2, arg7.byte_offset(0x2d0), &var_60);
                        
                        if (var_110 & 1) != 0
                        {
                            goto 'label_772deb;
                        }
                        
                        rbx = *var_110[4];
                        var_138 = 0;
                        var_130 = 0;
                        
                        if r12_2 == 3
                        {
                            rax_16 = var_140;
                            goto 'label_772ae4;
                        }
                    }
                    else
                    {
                        r13_1 = var_128;
                        var_130 += 1;
                        
                        if r12_2 == 3
                        {
                            rax_16 = var_140;
                            goto 'label_772ae4;
                        }
                    }
                    
                    var_128 = r13_1;
                    rdi_7 = 3;
                    
                    if *r14_2.byte_offset(0x430) == 0
                    {
                        rdi_7 = r12_2 - 4;
                    }
                    
                    if *r14_2.byte_offset(0x430) == 0 && rdi_7 > 3
                    {
                        goto 'label_772f10;
                    }
                    
                    let mut rax_28: i8;
                    let mut rdx_17: i32;
                    rax_28 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                        arg7.byte_offset(0x2d0), rbx, *(&var_13c).byte_offset(rdi_7));
                    
                    if (rax_28 & 1) != 0
                    {
                        goto 'label_772dd8;
                    }
                    
                    rbx = rdx_17;
                    
                    if (rdx_17 & 0x40000000) != 0
                    {
                        if var_130 != 1
                        {
                            goto 'label_772eb1;
                        }
                        
                        regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(
                            &var_110, r14_2, arg7.byte_offset(0x2d0), &var_60);
                        
                        if (var_110 & 1) != 0
                        {
                            goto 'label_772deb;
                        }
                        
                        rbx = *var_110[4];
                        var_138 = 0;
                        var_130 = 0;
                        
                        if r12_2 == 4
                        {
                            rax_16 = var_140;
                            goto 'label_772ae4;
                        }
                    }
                    else
                    {
                        r13_1 = var_128;
                        var_130 += 1;
                        
                        if r12_2 == 4
                        {
                            rax_16 = var_140;
                            goto 'label_772ae4;
                        }
                    }
                    
                    let mut r12_3: i64 = r12_2 - 5;
                    let mut rbp_6: i64 = 4;
                    rax_16 = var_140;
                    
                    loop
                    {
                        if *r14_2.byte_offset(0x430) != 0
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_6, 4);
                            /* no return */
                        }
                        
                        var_128 = r13_1;
                        var_140 = rax_16;
                        
                        if r12_3 >= 4
                        {
                            rdi_7 = r12_3;
                            goto 'label_772f10;
                        }
                        
                        let mut rax_48: i8;
                        let mut rdx_24: i32;
                        rax_48 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(
                            r14_2, arg7.byte_offset(0x2d0), rbx, *(&var_13c).byte_offset(r12_3));
                        
                        if (rax_48 & 1) != 0
                        {
                            goto 'label_772dd8;
                        }
                        
                        rbx = rdx_24;
                        
                        if (rdx_24 & 0x40000000) == 0
                        {
                            var_130 += 1;
                            rax_16 = var_140;
                            r13_1 = var_128;
                            rbp_6 += 1;
                            let temp3_1: i64 = r12_3;
                            r12_3 -= 1;
                            
                            if temp3_1 < 1
                            {
                                goto 'label_772ae4;
                            }
                        }
                        else
                        {
                            if var_130 != 1
                            {
                                goto 'label_772eb1;
                            }
                            
                            rax_16 = regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(&var_110, r14_2, arg7.byte_offset(0x2d0), &var_60);
                            
                            if var_110 == 1
                            {
                                break;
                            }
                            
                            rbx = *var_110[4];
                            var_130 = 0;
                            var_138 = 0;
                            rbp_6 += 1;
                            let temp4_1: i64 = r12_3;
                            r12_3 -= 1;
                            
                            if temp4_1 < 1
                            {
                                goto 'label_772ae4;
                            }
                        }
                    }
                    
                    goto 'label_772deb;
                }
                
                if (rbx & 0x40000000) == 0
                {
                    var_130 += 1;
                    r13_1 = var_140;
                    r15_1 = var_128;
                    goto 'label_772824;
                }
                
                if var_130 != 1
                {
                    goto 'label_772eb1;
                }
                
                regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(&var_110, 
                    r14_2, arg7.byte_offset(0x2d0), &var_60);
                
                if (var_110 & 1) == 0
                {
                    rbx = *var_110[4];
                    var_13c = 0;
                    let mut rdx_9: i64;
                    rax_16 =
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rbp_2, &var_13c);
                    
                    if rdx_9 == 0
                    {
                        var_130 = 0;
                        var_138 = 0;
                        goto 'label_772ae4;
                    }
                    
                    r12_2 = rdx_9;
                    let temp1_1: i8 = *r14_2.byte_offset(0x430);
                    rdi_7 = rdx_9 - 1;
                    let mut rax_23: i64 = 0;
                    
                    if temp1_1 == 0
                    {
                        rax_23 = rdi_7;
                    }
                    
                    if temp1_1 == 0 && r12_2 > 4
                    {
                        goto 'label_772f10;
                    }
                    
                    let mut rax_24: i8;
                    let mut rdx_11: i32;
                    rax_24 = regex_automata::hybrid::dfa::DFA::next_state::hdd82322cf44e217b(r14_2, 
                        arg7.byte_offset(0x2d0), rbx, *(&var_13c).byte_offset(rax_23));
                    
                    if (rax_24 & 1) != 0
                    {
                        goto 'label_772dd8;
                    }
                    
                    rbx = rdx_11;
                    var_130 = 1;
                    
                    if (rdx_11 & 0x8000000) != 0
                    {
                        goto 'label_77281a;
                    }
                    
                    var_138 = 0;
                    
                    if (rbx & 0x40000000) == 0
                    {
                        goto 'label_772824;
                    }
                    
                    goto 'label_772eb1;
                }
                
                'label_772deb:
                let var_108: i64;
                result = alloc::boxed::Box$LT$T$GT$::new::h75a6ccb79f8e3d96(var_108);
                rbx_2 = &data_c77b10;
            }
            
            arg1[1] = result;
            arg1[2] = rbx_2;
            *arg1 = 2;
            break;
        }
        
        r14_2 = arg7;
        rax_16 = var_140;
        r13_1 = var_128;
        'label_772ae4:
        let mut r12_1: i64 = var_138;
        let mut rax_31: i32;
        rax_31 = var_f8 == arg6;
        let mut rcx_15: i64;
        rcx_15 = var_118 == arg5;
        rcx_15 &= rax_31;
        rcx_15 |= var_f0_1;
        
        if (rcx_15 & 1) != 0
        {
            let mut rax_51: i8;
            let mut rdx_27: i32;
            rax_51 = regex_automata::hybrid::dfa::DFA::next_eoi_state::h2ed661a61e1f79b1(r14_2, 
                arg7.byte_offset(0x2d0), rbx);
            
            if (rax_51 & 1) != 0
            {
                result = alloc::boxed::Box$LT$T$GT$::new::h314575a5fb231377();
                arg1[1] = result;
                arg1[2] = &data_c77b88;
                *arg1 = 2;
                break;
            }
            
            var_138 = 1;
            var_140 = var_f8;
            var_128 = var_118;
            
            if (rdx_27 & 0x8000000) != 0
            {
                goto 'label_772eb1;
            }
            
            if (rdx_27 & 0x40000000) != 0
            {
                var_140 = rax_16;
                var_128 = r13_1;
                var_138 = r12_1;
                
                if var_130 == 1
                {
                    var_138 = 0;
                }
                
                goto 'label_772eb1;
            }
            
            var_140 = rax_16;
            var_128 = r13_1;
            'label_772eac:
            var_138 = r12_1;
            'label_772eb1:
            result = arg1;
            *result = var_138;
            result[1] = var_128;
            result[2] = var_140;
            break;
        }
        
        rcx(&var_110, &var_c8);
        let mut rax_32: *mut c_void = var_110;
        
        if rax_32 == 0
        {
            var_c8 = arg2.byte_offset(0x28);
            var_c0 = rbp_1 - var_118;
            var_b8 = !(rax_1 + var_f8) + var_78;
            let var_b0_1: i64 = rbp_1;
            let var_a8_1: i32 = rax_4;
            rax_32 =
                alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_c8);
        }
        
        let mut var_90: *mut c_void = rax_32;
        let mut rax_38: i32;
        rax_38 = var_b8 == arg6;
        let var_f0_2: i8 = rax_38;
        var_138 = var_c0 == arg5;
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::skip_fullwidth::h604d4a2591bbfa58(arg2, &var_c8, &var_90, *r14_2.byte_offset(0x430));
        let rax_41: i32 = *var_90.byte_offset(0x10);
        let rbp_5: i16 =
            *alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_c8).
            byte_offset(0x14) & 0x10;
        r14_1 = var_c0;
        rcx_5 = var_b8;
        
        if (((rbp_1 ^ var_118) | r14_1) != 0 || (var_e8 & 1) != 0)
            && (var_118 != 0 || r14_1 != rbp_1 || rbp_5 != 0)
        {
            goto 'label_772717;
        }
        
        let mut rax_46: i8;
        let mut rdx_21: i32;
        rax_46 = regex_automata::hybrid::dfa::DFA::next_eoi_state::h2ed661a61e1f79b1(arg7, 
            arg7.byte_offset(0x2d0), rbx);
        
        if (rax_46 & 1) != 0
        {
            goto 'label_772dd8;
        }
        
        let rax_47: i32 = rdx_21;
        
        if (rax_47 & 0x8000000) != 0
        {
            r12_1 = 1;
        }
        
        if (r12_1 & 1) != 0
        {
            rdx_21 = var_130 < 2;
        }
        
        if (r12_1 & 1) != 0 && (rax_47 >> 0x1e & rdx_21) == 0 && var_130 != 0
        {
            let temp2_1: i32 = rax_47 & 0x8000000;
            let mut rax_53: i32 = var_f8;
            
            if temp2_1 == 0
            {
                rax_53 = rax_16;
            }
            
            let mut rcx_28: u64 = var_118;
            
            if temp2_1 == 0
            {
                rcx_28 = r13_1;
            }
            
            var_140 = rax_53;
            var_128 = rcx_28;
            goto 'label_772eac;
        }
        
        regex_automata::hybrid::dfa::DFA::start_state_forward::h8dd0a7b4d9c1667d(&var_110, arg7, 
            arg7.byte_offset(0x2d0), &var_60);
        
        if (var_110 & 1) != 0
        {
            goto 'label_772deb;
        }
        
        var_130 = 0;
        r12_1 = 0;
        rbx = *var_110[4];
        'label_772717:
        var_f0_1 = var_f0_2 & var_138;
        var_e8 = rbp_5 >> 4;
        var_140 = rax_16;
        var_128 = r13_1;
        var_138 = r12_1;
        rbp_2 = rax_41;
    }
    
    result
}
