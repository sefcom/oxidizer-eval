
  int64_t alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::shrink_columns::hf025751948d3172f(int64_t* arg1, int32_t arg2, int64_t arg3)

{
    int64_t r15 = arg3;
    int64_t* rbx = arg1;
    arg1[0x12] = arg3;
    char var_1cc = arg2;
    
    if (arg2 && *(rbx + 0x5c))
    {
        *(rbx + 0x5c) = 0;
        rbx[6] += 1;
    }
    
    int64_t rax;
    int64_t rdx;
    rax =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(rbx[5], 8, 0x20);
    int64_t var_130 = rax;
    int64_t var_120 = 0;
    int64_t var_148 = -0x8000000000000000;
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(rbx);
    int64_t var_100 = 0;
    int64_t var_f8 = 8;
    int64_t var_f0 = 0;
    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_100, rbx);
    rbx[5] = 0;
    int64_t var_a8 = var_f0;
    int128_t var_b8 = var_100;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf4265eba2e4a5c57(&var_100, &var_b8);
    int64_t var_d8 = 0;
    int64_t var_1a0 = rbx[6];
    int64_t rax_3 = r15 - 1;
    int32_t var_1dc = rbx[7];
    int64_t var_110 = rbx[0x14];
    int64_t rax_6 = rbx[0x13];
    void** const var_118 = &data_c775a8;
    int64_t* var_1d8 = rbx;
    int64_t var_180 = r15;
    
    while (true)
    {
        int64_t var_58;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb40f1190552b9631(&var_58, &var_100);
        int64_t var_50;
        
        if (var_50 == -0x8000000000000000)
            break;
        
        int64_t r13_1 = var_58;
        int128_t var_178 = var_50;
        int128_t var_40;
        int128_t var_168_1 = var_40;
        int128_t var_1c8 = var_148;
        var_148 = -0x8000000000000000;
        int64_t var_138;
        
        if (var_1c8 != -0x8000000000000000)
        {
            int128_t var_98 = var_1c8;
            
            if (r13_1 == ~var_1dc + rax_6)
            {
                int64_t rax_14 = var_1a0 + var_138;
                var_1a0 = rax_14;
                rbx[6] = rax_14;
            }
            
            alacritty_terminal::grid::row::Row$LT$T$GT$::append_front::he840b6ebdfbe10d4(&var_178, 
                &var_98);
        }
        else
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_1c8);
        
        int64_t var_108_1 = r13_1;
        
        while (true)
        {
            alacritty_terminal::grid::row::Row$LT$T$GT$::shrink::hd1c482736534eb30(&var_1c8, 
                &var_178, r15);
            int32_t r14_2 = ~var_1dc;
            int128_t var_198;
            int64_t var_188_1;
            int64_t r12_1;
            
            if (var_1c8 != -0x8000000000000000)
            {
                if (!var_1cc)
                {
                    label_76e734:
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_130, &var_178);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_1c8);
                    break;
                    break;
                }
                
                var_188_1 = var_138;
                var_198 = var_1c8;
                r12_1 = var_168_1;
                
                if (r12_1 >= r15)
                {
                    label_76e470:
                    
                    if (rax_3 >= r12_1)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, r12_1);
                        /* no return */
                    }
                    
                    int128_t* rbp_3 = rax_3 * 0x18 + *var_178[8];
                    
                    if (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae(rbp_3) & 0x20)
                    {
                        _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_1c8);
                        void* rax_20 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(&var_1c8);
                        *(rax_20 + 1) |= 4;
                        *var_168_1[8] = core::cmp::Ord::max::h20b6d33cbe488162(*var_168_1[8], r15);
                        int64_t var_68_1 = rbp_3[1];
                        int128_t var_78 = *rbp_3;
                        *rbp_3 = var_1c8;
                        rbp_3[1] = var_138;
                        alloc::vec::Vec$LT$T$C$A$GT$::insert::h4455ac7c1c6c20ed(&var_198, &var_78);
                    }
                }
            }
            else
            {
                if (!var_1cc || r13_1 != r14_2 + rax_6 || var_1a0 <= r15)
                    goto label_76e734;
                
                var_198 = 0;
                *var_198[8] = 8;
                var_188_1 = 0;
                r12_1 = var_168_1;
                
                if (r12_1 >= r15)
                    goto label_76e470;
            }
            
            if (var_188_1)
            {
                int64_t r15_1 = *var_198[8];
                int64_t rbp_5 = (var_188_1 - 1) * 3;
                
                if (*(_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae(r15_1 + (rbp_5 << 3)) + 1) & 4)
                {
                    if (var_188_1 == 1)
                    {
                        r15 = var_180;
                        *var_168_1[8] = core::cmp::Ord::max::h20b6d33cbe488162(*var_168_1[8], r15);
                        
                        if (rax_3 >= r12_1)
                        {
                            var_118 = &data_c775d8;
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, r12_1);
                            /* no return */
                        }
                        
                        char* rax_44 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(rax_3 * 0x18 + *var_178[8]);
                        *rax_44 |= 0x10;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_130, &var_178);
                        rbx = var_1d8;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::h3a26ff64830026d7(&var_198);
                        break;
                    }
                    
                    char* rax_26 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(r15_1 + var_188_1 * 0x18 - 0x30);
                    *rax_26 |= 0x10;
                    int64_t rsi_8 = var_188_1 * 0 + 1;
                    
                    if (var_188_1 >= var_188_1 - 1)
                    {
                        var_188_1 -= 1;
                        r12_1 = 1;
                        core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..term..cell..Cell$u5d$$GT$::hee3a2d0d3617f058((rbp_5 << 3) + *var_198[8], rsi_8);
                    }
                }
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_130, &var_178);
            int64_t rcx_1;
            rcx_1 = !var_120;
            char* rax_29 = (var_120 << 5) + rdx;
            
            if (!(rax_29 == 0x20 | rcx_1))
            {
                rcx_1 = *(rax_29 - 0x10);
                *(rax_29 - 8) = rcx_1;
                
                if (rcx_1)
                {
                    int64_t rdi_21 = rcx_1 * 0x18 + *(rax_29 - 0x18);
                    
                    if (rdi_21 != 0x18)
                    {
                        rax_29 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(rdi_21 - 0x18);
                        *rax_29 |= 0x10;
                    }
                }
            }
            
            rax_29 = !var_188_1;
            int64_t r12_6 = var_188_1 * 0x18 + *var_198[8];
            rcx_1 = r12_6 == 0x18;
            rcx_1 |= rax_29;
            r15 = var_180;
            
            if (!rcx_1 && var_108_1 && *_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae(r12_6 - 0x18) & 0x10 && var_188_1 < r15)
            {
                char* rax_45 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(r12_6 - 0x18);
                *rax_45 &= 0xef;
                var_1c8 = var_198;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_148);
                var_138 = var_188_1;
                var_148 = var_1c8;
                rbx = var_1d8;
                break;
            }
            
            int64_t rax_34 = r14_2 + rax_6;
            
            if (var_108_1 == rax_34)
            {
                if (var_1a0 < r15)
                {
                    int32_t rax_35 = core::cmp::Ord::max::h3396bb7148673668(var_1dc - 1, 0);
                    var_1dc = rax_35;
                    var_1d8[7] = rax_35;
                }
                
                int64_t rax_38 = var_1a0 - r15;
                
                if (var_1a0 >= r15)
                {
                    var_1d8[6] = rax_38;
                    var_1a0 = rax_38;
                }
            }
            else if (var_108_1 < rax_34)
            {
                int32_t rax_39 = core::cmp::Ord::max::h3396bb7148673668(var_1dc - 1, 0);
                var_1dc = rax_39;
                var_1d8[7] = rax_39;
            }
            
            if (var_188_1 < r15)
                alloc::vec::Vec$LT$T$C$A$GT$::resize_with::hc60038c151f2bd82(&var_198, var_180);
            
            var_168_1 = var_188_1;
            var_178 = var_198;
            *var_168_1[8] = var_188_1;
            r13_1 = var_108_1;
            
            if (r13_1 < var_110)
            {
                int64_t rax_15 = var_110 + 1;
                rbx = var_1d8;
                var_110 = rax_15;
                rbx[0x14] = rax_15;
            }
            else
                rbx = var_1d8;
            
            r15 = var_180;
        }
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..rev..Rev$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..drain..Drain$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$$GT$$GT$::h2f52a59d6e4f951b(&var_100);
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf4265eba2e4a5c57(&var_100, &var_130);
    void var_d0;
    core::iter::traits::iterator::Iterator::collect::hf931c5f72349fc14(&var_d0, &var_100);
    int64_t rax_49 = rbx[0x13] + rbx[0x15];
    int64_t var_c0;
    
    if (var_c0 >= rax_49)
    {
        int64_t var_c0_1 = rax_49;
        int64_t var_c8;
        core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$u5d$$GT$::hbdfa2dfef87806d4((rax_49 << 5) + var_c8, var_c0 - rax_49);
    }
    
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::replace_inner::h4bb3a9570b781689(rbx, 
        &var_d0);
    int64_t rax_50 = rbx[5];
    int64_t rsi_19 = 0;
    
    if (rax_50 >= rbx[0x13])
        rsi_19 = rax_50 - rbx[0x13];
    
    rbx[0x14] = core::cmp::Ord::min::h7c13e9bfb8ea3862(rbx[0x14], rsi_19);
    int64_t r14_3 = rbx[6];
    int64_t r14_4;
    
    if (!var_1cc)
    {
        r14_4 = rax_3;
        rbx[6] = core::cmp::Ord::min::hffab314b5e6491b1(r14_3, r14_4);
    }
    else
    {
        int32_t rbp_9 = rbx[7];
        
        if (r14_3 != r15)
        {
            label_76e937:
            int64_t rax_56;
            int32_t rdx_9;
            rax_56 =
                alacritty_terminal::index::Point::grid_clamp::h0af70e6c7939b3f8(r14_3, rbp_9, rbx);
            rbx[6] = rax_56;
            rbx[7] = rdx_9;
            r14_4 = rax_3;
        }
        else
        {
            void* rax_53 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(rbx, rbp_9);
            int64_t rsi_21 = *(rax_53 + 0x10);
            
            if (rax_3 >= rsi_21)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, rsi_21);
                /* no return */
            }
            
            rbx = var_1d8;
            
            if (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae(rax_3 * 0x18 + *(rax_53 + 8)) & 0x10)
                goto label_76e937;
            
            *(rbx + 0x5c) = 1;
            r14_4 = rax_3;
            rbx[6] = r14_4;
        }
    }
    
    rbx[0xc] = core::cmp::Ord::min::hffab314b5e6491b1(rbx[0xc], r14_4);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(&var_b8);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_148);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(&var_130);
}
