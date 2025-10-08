
  fn alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::shrink_columns::hf025751948d3172f(arg1: *mut i64, arg2: i32, arg3: i64) -> i64

{
    let mut r15: i64 = arg3;
    let mut rbx: *mut i64 = arg1;
    arg1[0x12] = arg3;
    let var_1cc: i8 = arg2;
    
    if arg2 != 0 && *rbx.byte_offset(0x5c) != 0
    {
        *rbx.byte_offset(0x5c) = 0;
        rbx[6] += 1;
    }
    
    let mut rax: i64;
    let mut rdx: i64;
    rax =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(rbx[5], 8, 0x20);
    let mut var_130: i64 = rax;
    let var_120: i64 = 0;
    let mut var_148: i64 = -0x8000000000000000;
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(rbx);
    let mut var_100: i64 = 0;
    let var_f8: i64 = 8;
    let var_f0: i64 = 0;
    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_100, rbx);
    rbx[5] = 0;
    let var_a8: i64 = var_f0;
    let mut var_b8: i128 = var_100;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf4265eba2e4a5c57(&var_100, &var_b8);
    let var_d8: i64 = 0;
    let mut var_1a0: i64 = rbx[6];
    let rax_3: i64 = r15 - 1;
    let mut var_1dc: i32 = rbx[7];
    let mut var_110: i64 = rbx[0x14];
    let rax_6: i64 = rbx[0x13];
    let mut var_118: *mut *mut c_void = &data_c775a8;
    let var_1d8: *mut i64 = rbx;
    let var_180: i64 = r15;
    
    loop
    {
        let mut var_58: i64;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb40f1190552b9631(&var_58, &var_100);
        let var_50: i64;
        
        if var_50 == -0x8000000000000000
        {
            break;
        }
        
        let mut r13_1: i64 = var_58;
        let mut var_178: i128 = var_50;
        let var_40: i128;
        let mut var_168_1: i128 = var_40;
        let mut var_1c8: i128 = var_148;
        var_148 = -0x8000000000000000;
        let mut var_138: i64;
        
        if var_1c8 != -0x8000000000000000
        {
            let mut var_98: i128 = var_1c8;
            
            if r13_1 == !var_1dc + rax_6
            {
                let rax_14: i64 = var_1a0 + var_138;
                var_1a0 = rax_14;
                rbx[6] = rax_14;
            }
            
            alacritty_terminal::grid::row::Row$LT$T$GT$::append_front::he840b6ebdfbe10d4(&var_178, 
                &var_98);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_1c8);
        }
        
        let var_108_1: i64 = r13_1;
        
        loop
        {
            alacritty_terminal::grid::row::Row$LT$T$GT$::shrink::hd1c482736534eb30(&var_1c8, 
                &var_178, r15);
            let r14_2: i32 = !var_1dc;
            let mut var_198: i128;
            let mut var_188_1: i64;
            let mut r12_1: i64;
            
            if var_1c8 != -0x8000000000000000
            {
                if var_1cc == 0
                {
                    'label_76e734:
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_130, &var_178);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_1c8);
                    break;
                    break;
                }
                
                var_188_1 = var_138;
                var_198 = var_1c8;
                r12_1 = var_168_1;
                
                if r12_1 >= r15
                {
                    'label_76e470:
                    
                    if rax_3 >= r12_1
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, r12_1);
                        /* no return */
                    }
                    
                    let rbp_3: *mut i128 = rax_3 * 0x18 + *var_178[8];
                    
                    if (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae(rbp_3) & 0x20) != 0
                    {
                        _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_1c8);
                        let rax_20: *mut c_void = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(&var_1c8);
                        *rax_20.byte_offset(1) |= 4;
                        *var_168_1[8] = core::cmp::Ord::max::h20b6d33cbe488162(*var_168_1[8], r15);
                        let var_68_1: i64 = rbp_3[1];
                        let mut var_78: i128 = *rbp_3;
                        *rbp_3 = var_1c8;
                        rbp_3[1] = var_138;
                        alloc::vec::Vec$LT$T$C$A$GT$::insert::h4455ac7c1c6c20ed(&var_198, &var_78);
                    }
                }
            }
            else
            {
                if var_1cc == 0 || r13_1 != r14_2 + rax_6 || var_1a0 <= r15
                {
                    goto 'label_76e734;
                }
                
                var_198 = 0;
                *var_198[8] = 8;
                var_188_1 = 0;
                r12_1 = var_168_1;
                
                if r12_1 >= r15
                {
                    goto 'label_76e470;
                }
            }
            
            if var_188_1 != 0
            {
                let r15_1: i64 = *var_198[8];
                let rbp_5: i64 = (var_188_1 - 1) * 3;
                
                if (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae(r15_1 + (rbp_5 << 3)).byte_offset(1) & 4) != 0
                {
                    if var_188_1 == 1
                    {
                        r15 = var_180;
                        *var_168_1[8] = core::cmp::Ord::max::h20b6d33cbe488162(*var_168_1[8], r15);
                        
                        if rax_3 >= r12_1
                        {
                            var_118 = &data_c775d8;
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, r12_1);
                            /* no return */
                        }
                        
                        let rax_44: *mut i8 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(rax_3 * 0x18 + *var_178[8]);
                        *rax_44 |= 0x10;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_130, &var_178);
                        rbx = var_1d8;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::h3a26ff64830026d7(&var_198);
                        break;
                    }
                    
                    let rax_26: *mut i8 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(r15_1 + var_188_1 * 0x18 - 0x30);
                    *rax_26 |= 0x10;
                    let rsi_8: i64 = var_188_1 * 0 + 1;
                    
                    if var_188_1 >= var_188_1 - 1
                    {
                        var_188_1 -= 1;
                        r12_1 = 1;
                        core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..term..cell..Cell$u5d$$GT$::hee3a2d0d3617f058((rbp_5 << 3) + *var_198[8], rsi_8);
                    }
                }
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_130, &var_178);
            let mut rcx_1: i64;
            rcx_1 = var_120 == 0;
            let mut rax_29: *mut i8 = (var_120 << 5) + rdx;
            
            if (rax_29 == 0x20 | rcx_1) == 0
            {
                rcx_1 = *rax_29.byte_offset(-0x10);
                *rax_29.byte_offset(-8) = rcx_1;
                
                if rcx_1 != 0
                {
                    let rdi_21: i64 = rcx_1 * 0x18 + *rax_29.byte_offset(-0x18);
                    
                    if rdi_21 != 0x18
                    {
                        rax_29 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(rdi_21 - 0x18);
                        *rax_29 |= 0x10;
                    }
                }
            }
            
            rax_29 = var_188_1 == 0;
            let r12_6: i64 = var_188_1 * 0x18 + *var_198[8];
            rcx_1 = r12_6 == 0x18;
            rcx_1 |= rax_29;
            r15 = var_180;
            
            if rcx_1 == 0 && var_108_1 != 0 && (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae(r12_6 - 0x18) & 0x10) != 0 && var_188_1 < r15
            {
                let rax_45: *mut i8 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(r12_6 - 0x18);
                *rax_45 &= 0xef;
                var_1c8 = var_198;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_148);
                var_138 = var_188_1;
                var_148 = var_1c8;
                rbx = var_1d8;
                break;
            }
            
            let rax_34: i64 = r14_2 + rax_6;
            
            if var_108_1 == rax_34
            {
                if var_1a0 < r15
                {
                    let rax_35: i32 = core::cmp::Ord::max::h3396bb7148673668(var_1dc - 1, 0);
                    var_1dc = rax_35;
                    var_1d8[7] = rax_35;
                }
                
                let rax_38: i64 = var_1a0 - r15;
                
                if var_1a0 >= r15
                {
                    var_1d8[6] = rax_38;
                    var_1a0 = rax_38;
                }
            }
            else if var_108_1 < rax_34
            {
                let rax_39: i32 = core::cmp::Ord::max::h3396bb7148673668(var_1dc - 1, 0);
                var_1dc = rax_39;
                var_1d8[7] = rax_39;
            }
            
            if var_188_1 < r15
            {
                alloc::vec::Vec$LT$T$C$A$GT$::resize_with::hc60038c151f2bd82(&var_198, var_180);
            }
            
            var_168_1 = var_188_1;
            var_178 = var_198;
            *var_168_1[8] = var_188_1;
            r13_1 = var_108_1;
            
            if r13_1 < var_110
            {
                let rax_15: i64 = var_110 + 1;
                rbx = var_1d8;
                var_110 = rax_15;
                rbx[0x14] = rax_15;
            }
            else
            {
                rbx = var_1d8;
            }
            
            r15 = var_180;
        }
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..rev..Rev$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..drain..Drain$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$$GT$$GT$::h2f52a59d6e4f951b(&var_100);
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf4265eba2e4a5c57(&var_100, &var_130);
    let mut var_d0: ();
    core::iter::traits::iterator::Iterator::collect::hf931c5f72349fc14(&var_d0, &var_100);
    let rax_49: i64 = rbx[0x13] + rbx[0x15];
    let var_c0: i64;
    
    if var_c0 >= rax_49
    {
        let var_c0_1: i64 = rax_49;
        let var_c8: i64;
        core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$u5d$$GT$::hbdfa2dfef87806d4((rax_49 << 5) + var_c8, var_c0 - rax_49);
    }
    
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::replace_inner::h4bb3a9570b781689(rbx, 
        &var_d0);
    let rax_50: i64 = rbx[5];
    let mut rsi_19: i64 = 0;
    
    if rax_50 >= rbx[0x13]
    {
        rsi_19 = rax_50 - rbx[0x13];
    }
    
    rbx[0x14] = core::cmp::Ord::min::h7c13e9bfb8ea3862(rbx[0x14], rsi_19);
    let r14_3: i64 = rbx[6];
    let mut r14_4: i64;
    
    if var_1cc == 0
    {
        r14_4 = rax_3;
        rbx[6] = core::cmp::Ord::min::hffab314b5e6491b1(r14_3, r14_4);
    }
    else
    {
        let rbp_9: i32 = rbx[7];
        
        if r14_3 != r15
        {
            'label_76e937:
            let mut rax_56: i64;
            let mut rdx_9: i32;
            rax_56 =
                alacritty_terminal::index::Point::grid_clamp::h0af70e6c7939b3f8(r14_3, rbp_9, rbx);
            rbx[6] = rax_56;
            rbx[7] = rdx_9;
            r14_4 = rax_3;
        }
        else
        {
            let rax_53: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(rbx, rbp_9);
            let rsi_21: i64 = *rax_53.byte_offset(0x10);
            
            if rax_3 >= rsi_21
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, rsi_21);
                /* no return */
            }
            
            rbx = var_1d8;
            
            if (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae(rax_3 * 0x18 + *rax_53.byte_offset(8)) & 0x10) != 0
            {
                goto 'label_76e937;
            }
            
            *rbx.byte_offset(0x5c) = 1;
            r14_4 = rax_3;
            rbx[6] = r14_4;
        }
    }
    
    rbx[0xc] = core::cmp::Ord::min::hffab314b5e6491b1(rbx[0xc], r14_4);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(&var_b8);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_148);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(&var_130)
}
