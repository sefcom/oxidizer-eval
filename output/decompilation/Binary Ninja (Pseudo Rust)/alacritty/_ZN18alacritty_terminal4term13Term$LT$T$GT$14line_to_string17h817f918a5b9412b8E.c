
  fn alacritty_terminal::term::Term$LT$T$GT$::line_to_string::h817f918a5b9412b8(arg1: *mut i128, arg2: *mut c_void, arg3: i32, arg4: i64, arg5: i64, arg6: i8) -> i64

{
    let mut r15: i64 = arg4;
    let mut var_a0: i64 = 0;
    let var_98: i64 = 1;
    let result: i64 = 0;
    let rax_1: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2.byte_offset(0x28), arg3);
    let rax_3: i64 = core::cmp::Ord::min::hffab314b5e6491b1(
        _$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$u20$as$u20$alacritty_terminal..term..cell..LineLength$GT$::line_length::h2c5104173d85403b(rax_1), 
        arg5 + 1);
    let mut rsi_2: i64 = *rax_1.byte_offset(0x10);
    
    if r15 >= rsi_2
    {
        let mut var_b0: *mut *mut c_void = &data_c776e0;
    }
    else
    {
        r15 += *(*rax_1.byte_offset(8) + r15 * 0x18 + 0x14) << 9 >> 0xf;
        let mut r13_1: i64 = 0;
        var_b0 = &data_c77770;
        
        loop
        {
            let mut rbx_2: *mut i64;
            
            if (r13_1 & 1) == 0
            {
                if r15 >= rax_3
                {
                    'label_76f402:
                    let rbx_5: i64 = *arg2.byte_offset(0xb8);
                    
                    if arg5 < rbx_5 - 1
                    {
                        goto 'label_76f46a;
                    }
                    
                    if rax_3 == 0
                    {
                        'label_76f45e:
                        alloc::string::String::push::h0ede46164189e411(&var_a0, 0xa);
                        'label_76f46a:
                        let mut rax_17: i64;
                        rax_17 = rax_3 == rbx_5;
                        let mut rcx_4: i64;
                        rcx_4 = rax_3 >= 2;
                        
                        if (rcx_4 & rax_17) == 0
                        {
                            goto 'label_76f4e5;
                        }
                        
                        rsi_2 = *rax_1.byte_offset(0x10);
                        r15 = rax_3 - 1;
                        
                        if rax_3 - 1 >= rsi_2
                        {
                            var_b0 = &data_c77728;
                        }
                        else
                        {
                            if arg6 == 0
                                || (*(*rax_1.byte_offset(8) + r15 * 0x18 + 0x14) & 0x400) == 0
                            {
                                goto 'label_76f4e5;
                            }
                            
                            let rax_24: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2.byte_offset(0x28), arg3 - 1);
                            
                            if *rax_24.byte_offset(0x10) != 0
                            {
                                alloc::string::String::push::h0ede46164189e411(&var_a0, 
                                    *(*rax_24.byte_offset(8)).byte_offset(0x10));
                                'label_76f4e5:
                                arg1[1] = result;
                                *arg1 = var_a0;
                                return result;
                            }
                            
                            var_b0 = &data_c77758;
                            r15 = 0;
                            rsi_2 = 0;
                        }
                    }
                    else
                    {
                        let rax_18: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2.byte_offset(0x28), arg3);
                        r15 = rax_3 - 1;
                        rsi_2 = *rax_18.byte_offset(0x10);
                        
                        if r15 < rsi_2
                        {
                            if (*(*rax_18.byte_offset(8) + r15 * 0x18 + 0x14) & 0x10) != 0
                            {
                                goto 'label_76f46a;
                            }
                            
                            goto 'label_76f45e;
                        }
                        
                        var_b0 = &data_c77710;
                    }
                    
                    break;
                }
                
                rsi_2 = *rax_1.byte_offset(0x10);
                
                if r15 >= rsi_2
                {
                    break;
                }
                
                let rbx_3: i64 = r15 * 3;
                r15 += 1;
                rbx_2 = (rbx_3 << 3) + *rax_1.byte_offset(8);
            }
            else
            {
                let mut rax_11: i64 = r15 * 0x18;
                
                loop
                {
                    if r15 >= rax_3
                    {
                        goto 'label_76f402;
                    }
                    
                    let r13_2: i64 = r15;
                    rsi_2 = *rax_1.byte_offset(0x10);
                    
                    if r15 >= rsi_2
                    {
                        r15 = r13_2;
                        goto 'label_76f50e;
                    }
                    
                    let r14_1: i64 = rax_11;
                    let rbx_1: *mut c_void = *rax_1.byte_offset(8);
                    
                    if *_$LT$alacritty_terminal..term..TabStops$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Column$GT$$GT$::index::ha0d73bf41ca8aa9b(arg2.byte_offset(0x188), r13_2) == 0
                    {
                        rax_11 = r14_1 + 0x18;
                        r15 = r13_2 + 1;
                        
                        if *rbx_1.byte_offset(r14_1).byte_offset(0x10) == 0x20
                        {
                            continue;
                        }
                    }
                    
                    rbx_2 = rbx_1.byte_offset(r14_1);
                    r15 = r13_2 + 1;
                    break;
                }
            }
            
            let rsi_4: i32 = rbx_2[2];
            r13_1 = rsi_4 == 9;
            
            if (*rbx_2.byte_offset(0x14) & 0x440) == 0
            {
                alloc::string::String::push::h0ede46164189e411(&var_a0, rsi_4);
                let mut rax_14: *mut c_void = *rbx_2;
                let mut rcx_1: i64;
                
                if rax_14 == 0
                {
                    rcx_1 = 0;
                }
                else
                {
                    rcx_1 = *rax_14.byte_offset(0x18);
                    rax_14 = *rax_14.byte_offset(0x20);
                }
                
                let mut var_68: i64 = 1;
                let var_60_1: i64 = rcx_1;
                let var_58_1: *mut c_void = rax_14;
                let var_50_1: i64 = 0;
                let var_40_1: i64 = 0;
                
                loop
                {
                    let rax_15: *mut i32 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4ec7567faf38ffb(&var_68);
                    
                    if rax_15 == 0
                    {
                        break;
                    }
                    
                    alloc::string::String::push::h0ede46164189e411(&var_a0, *rax_15);
                }
            }
        }
    }
    
    'label_76f50e:
    core::panicking::panic_bounds_check::h025cadc56a971af7(r15, rsi_2);
    /* no return */
}
