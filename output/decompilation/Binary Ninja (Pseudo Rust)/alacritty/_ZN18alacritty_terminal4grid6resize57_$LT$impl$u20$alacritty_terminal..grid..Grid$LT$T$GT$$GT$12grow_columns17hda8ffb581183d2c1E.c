
  fn alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_columns::hda8ffb581183d2c1(arg1: *mut i64, arg2: i32, arg3: i64) -> i64

{
    let mut rbp: *mut i64 = arg1;
    let mut var_1b1: i8 = arg2;
    let mut var_140: i64 = arg3;
    arg1[0x12] = arg3;
    let mut rax: i64;
    let mut rdx: i64;
    rax =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(arg1[5], 8, 0x20);
    let mut var_180: i64 = rax;
    let var_170: i64 = 0;
    
    if arg2 != 0 && *rbp.byte_offset(0x5c) != 0
    {
        *rbp.byte_offset(0x5c) = 0;
        rbp[6] += 1;
    }
    
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(rbp);
    let mut var_f8: i64 = 0;
    let var_f0: i64 = 8;
    let var_e8: i64 = 0;
    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_f8, rbp);
    rbp[5] = 0;
    let var_38: i64 = var_e8;
    let mut var_48: i128 = var_f8;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf4265eba2e4a5c57(&var_f8, &var_48);
    let var_d0: i64 = 0;
    let rax_2: i32 = rbp[7];
    let mut rbx_1: i64 = rbp[0x14];
    let mut r14: i64 = 0;
    let mut var_138: i64 = rbp[6];
    let mut var_184: i32 = rax_2;
    let mut var_1b8: i32 = rax_2;
    let var_108: *mut i64 = rbp;
    let mut var_1a8: i64;
    let mut var_c8: i128;
    let mut var_78: i64;
    let mut var_70: i64;
    
    loop
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb40f1190552b9631(&var_78, &var_f8);
        
        if var_70 == -0x8000000000000000
        {
            break;
        }
        
        let mut var_1b0_1: i64 = rbx_1;
        let rax_3: i64 = var_78;
        let mut var_168: i128 = var_70;
        let r13_3: *mut c_void = (var_170 << 5) + rdx;
        
        if (r13_3 == 0x20 | var_170 == 0) == 0
        {
            let rbx_2: i64 = *r13_3.byte_offset(-0x18);
            let mut r14_1: i64 = *r13_3.byte_offset(-0x10);
            
            if alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_columns::_$u7b$$u7b$closure$u7d$$u7d$::h2385699e42aeb800(&var_1b1, &var_140, rbx_2, r14_1) != 0
            {
                *r13_3.byte_offset(-8) = r14_1;
                
                if r14_1 == 0
                {
                    r14_1 = 0;
                }
                else
                {
                    let rdi_7: i64 = rbx_2 + r14_1 * 0x18;
                    
                    if rdi_7 != 0x18
                    {
                        let rax_7: *mut i8 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(rdi_7 - 0x18);
                        *rax_7 &= 0xef;
                        r14_1 = *r13_3.byte_offset(-0x10);
                    }
                    
                    if rdi_7 != 0x18 && r14_1 == 0
                    {
                        r14_1 = 0;
                    }
                    else if (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae((r14_1 - 1) * 0x18 + *r13_3.byte_offset(-0x18)).byte_offset(1) & 4)
                        != 0
                    {
                        alacritty_terminal::grid::row::Row$LT$T$GT$::shrink::hd1c482736534eb30(
                            &var_1a8, r13_3.byte_offset(-0x20), r14_1 - 1);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_1a8);
                        r14_1 -= 1;
                    }
                }
                
                let mut r12_5: i64 = var_140 - r14_1;
                let var_60: i128;
                let rbp_1: i64 = var_60;
                let rax_9: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(rbp_1, r12_5);
                
                if rax_9 - 1 >= rbp_1
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rax_9 - 1, rbp_1);
                    /* no return */
                }
                
                rbp = var_108;
                let mut var_1a0: i128;
                let mut var_158_1: i128;
                let mut var_128: i128;
                let mut var_118_1: i64;
                
                if (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae((rax_9 - 1) * 0x18 + *var_168[8]) & 0x20) != 0
                {
                    let rax_14: i64 = *var_60[8];
                    let mut rcx_6: i64 = 0;
                    
                    if rax_14 >= rax_9 - 1
                    {
                        rcx_6 = rax_14 - (rax_9 - 1);
                    }
                    
                    *var_158_1[8] = rcx_6;
                    alloc::vec::Vec$LT$T$C$A$GT$::split_off::h4284604988914e8f(&var_1a8, &var_168, 
                        rax_9 - 1);
                    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_1a8, 
                        &var_168);
                    let rax_16: i64 = *var_1a0[8];
                    let mut var_a8: i128 = var_1a8;
                    _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_c8);
                    let rax_17: *mut c_void = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(&var_c8);
                    *rax_17.byte_offset(1) |= 4;
                    let var_b8: i64;
                    *var_1a0[8] = var_b8;
                    var_1a8 = var_c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hbddf951762aec067(&var_a8, &var_1a8);
                    r12_5 -= 1;
                    var_128 = var_a8;
                    var_118_1 = rax_16;
                }
                else
                {
                    let rax_11: i64 = *var_60[8];
                    let mut rcx_4: i64 = 0;
                    
                    if rax_11 >= rax_9
                    {
                        rcx_4 = rax_11 - rax_9;
                    }
                    
                    *var_158_1[8] = rcx_4;
                    alloc::vec::Vec$LT$T$C$A$GT$::split_off::h4284604988914e8f(&var_1a8, &var_168, 
                        rax_9);
                    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_1a8, 
                        &var_168);
                    var_118_1 = *var_1a0[8];
                    var_128 = var_1a8;
                }
                
                *r13_3.byte_offset(-8) += var_118_1;
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3cb2cc92e418e783(
                    r13_3.byte_offset(-0x20), *var_128[8], var_118_1);
                let var_118_2: i64 = 0;
                let rbx_5: i64 = !var_1b8 + rbp[0x13];
                let mut rax_34: i64;
                
                if rax_3 != rbx_5 || var_1b1 != 1
                {
                    let rax_25: i64 = *var_168[8];
                    var_1a8 = rax_25;
                    var_1a0 = rax_25 + var_158_1 * 0x18;
                    
                    if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h4877859599ecbfec(&var_1a8) != 0
                    {
                        if rax_3 < var_1b0_1
                        {
                            let rax_28: i64 = var_1b0_1 - 1;
                            var_1b0_1 = rax_28;
                            rbp[0x14] = rax_28;
                        }
                        
                        if rax_3 < rbx_5
                        {
                            let rax_30: i32 = var_1b8 + 1;
                            rbp[7] = rax_30;
                            var_1b8 = rax_30;
                            var_184 = rax_30;
                        }
                        
                        rbx_1 = var_1b0_1;
                        goto 'label_76dc70;
                    }
                    
                    rbx_1 = var_1b0_1;
                    rax_34 = *r13_3.byte_offset(-0x10);
                    *r13_3.byte_offset(-8) = rax_34;
                    
                    if rax_34 != 0
                    {
                        'label_76dcb7:
                        let rdi_34: i64 = rax_34 * 0x18 + *r13_3.byte_offset(-0x18);
                        
                        if rdi_34 != 0x18
                        {
                            let rax_38: *mut i8 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(rdi_34 - 0x18);
                            *rax_38 |= 0x10;
                        }
                    }
                }
                else
                {
                    let mut rax_22: i64;
                    let mut rdx_8: i32;
                    rax_22 = alacritty_terminal::index::Point::sub::h2a90a9a53ccead04(var_138, 
                        var_1b8, rbp, r12_5);
                    rbx_1 = var_1b0_1;
                    let mut r12_6: i32 = rdx_8;
                    
                    if rax_22 == 0
                    {
                        let rax_23: i64 = *var_168[8];
                        var_1a8 = rax_23;
                        var_1a0 = rax_23 + var_158_1 * 0x18;
                        
                        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h4877859599ecbfec(&var_1a8) == 0
                        {
                            rax_22 = 0;
                        }
                        else
                        {
                            *rbp.byte_offset(0x5c) = 1;
                            let mut rdx_10: i32;
                            rax_22 = alacritty_terminal::index::Point::sub::h2a90a9a53ccead04(0, 
                                r12_6, rbp, 1);
                            r12_6 = rdx_10;
                        }
                    }
                    
                    var_138 = rax_22;
                    rbp[6] = rax_22;
                    let mut rcx_15: i32 = var_1b8;
                    
                    if var_1b8 == r12_6
                    {
                        'label_76dc9f:
                        r14 += var_1b8 - rcx_15;
                        rax_34 = *r13_3.byte_offset(-0x10);
                        *r13_3.byte_offset(-8) = rax_34;
                        
                        if rax_34 != 0
                        {
                            goto 'label_76dcb7;
                        }
                    }
                    else
                    {
                        let rax_32: i64 = *var_168[8];
                        var_1a8 = rax_32;
                        var_1a0 = rax_32 + var_158_1 * 0x18;
                        rcx_15 = r12_6;
                        
                        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h4877859599ecbfec(&var_1a8) == 0
                        {
                            goto 'label_76dc9f;
                        }
                        
                        'label_76dc70:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::h3a26ff64830026d7(&var_128);
                        core::ptr::drop_in_place$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hef77f428462e73ab(&var_168);
                        continue;
                    }
                }
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_180, &var_168);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::h3a26ff64830026d7(&var_128);
                var_138 = rbp[6];
                var_1b8 = var_184;
                continue;
            }
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_180, &var_70);
        rbx_1 = var_1b0_1;
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..rev..Rev$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..drain..Drain$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$$GT$$GT$::h2f52a59d6e4f951b(&var_f8);
    let mut r14_3: i64 = var_170;
    let rbx_6: i64 = rbp[0x13];
    
    if r14_3 < rbx_6
    {
        let rax_41: i32 = core::cmp::Ord::max::h3396bb7148673668(var_1b8 + r14_3 - rbx_6, 0);
        var_1b8 = rax_41;
        rbp[7] = rax_41;
        alloc::vec::Vec$LT$T$C$A$GT$::resize_with::hc66dcacd0408d3ff(&var_180, rbx_6, &var_140);
        r14_3 = var_170;
    }
    
    if r14 != 0
    {
        let rax_44: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(!var_1b8 + rbx_6, r14_3 - rbx_6);
        let mut rbx_7: i64 = 0;
        
        if r14 >= rax_44
        {
            rbx_7 = r14 - rax_44;
        }
        
        let rcx_21: i64 = r14_3 - r14 + rbx_7;
        
        if r14_3 >= rcx_21
        {
            core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$u5d$$GT$::hbdfa2dfef87806d4((rcx_21 << 5) + rdx, r14_3 - rcx_21);
            r14_3 = rcx_21;
        }
        
        rbp[7] = core::cmp::Ord::max::h3396bb7148673668(var_1b8 - rbx_7, 0);
    }
    
    let mut rax_46: i64;
    let mut rdx_13: i64;
    rax_46 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(r14_3, 8, 0x20);
    let mut var_90: i64 = rax_46;
    let var_88: i64 = rdx_13;
    let var_80: i64 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf4265eba2e4a5c57(&var_f8, &var_180);
    
    for let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb6b908aca71d9116(&var_f8); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb6b908aca71d9116(&var_f8)
    {
        let rcx_23: i64 = *i;
        let rdx_14: i64 = i[3];
        var_c8 = *i.byte_offset(8);
        
        if rcx_23 == -0x8000000000000000
        {
            break;
        }
        
        var_1a8 = rcx_23;
        let var_190_1: i64 = rdx_14;
        let zmm0_5: i128 = var_c8;
        let rsi_22: i64 = var_140;
        
        if *zmm0_5[8] < rsi_22
        {
            alloc::vec::Vec$LT$T$C$A$GT$::resize_with::hc60038c151f2bd82(&var_1a8, rsi_22);
        }
        
        let var_68_1: i128 = zmm0_5;
        var_78 = var_1a8;
        var_70 = zmm0_5;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_90, &var_78);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..rev..Rev$LT$alloc..vec..drain..Drain$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$$GT$::h0a661189e2851256(&var_f8);
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::replace_inner::h4bb3a9570b781689(var_108, 
        &var_90);
    let rax_49: i64 = var_108[5];
    let mut rsi_25: i64 = 0;
    
    if rax_49 >= var_108[0x13]
    {
        rsi_25 = rax_49 - var_108[0x13];
    }
    
    var_108[0x14] = core::cmp::Ord::min::h7c13e9bfb8ea3862(var_108[0x14], rsi_25);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(&var_48);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(&var_180)
}
