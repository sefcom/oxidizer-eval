
  int64_t alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_columns::hda8ffb581183d2c1(int64_t* arg1, int32_t arg2, int64_t arg3)

{
    int64_t* rbp = arg1;
    char var_1b1 = arg2;
    int64_t var_140 = arg3;
    arg1[0x12] = arg3;
    int64_t rax;
    int64_t rdx;
    rax =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(arg1[5], 8, 0x20);
    int64_t var_180 = rax;
    int64_t var_170 = 0;
    
    if (arg2 && *(rbp + 0x5c))
    {
        *(rbp + 0x5c) = 0;
        rbp[6] += 1;
    }
    
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(rbp);
    int64_t var_f8 = 0;
    int64_t var_f0 = 8;
    int64_t var_e8 = 0;
    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_f8, rbp);
    rbp[5] = 0;
    int64_t var_38 = var_e8;
    int128_t var_48 = var_f8;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf4265eba2e4a5c57(&var_f8, &var_48);
    int64_t var_d0 = 0;
    int32_t rax_2 = rbp[7];
    int64_t rbx_1 = rbp[0x14];
    int64_t r14 = 0;
    int64_t var_138 = rbp[6];
    int32_t var_184 = rax_2;
    int32_t var_1b8 = rax_2;
    int64_t* var_108 = rbp;
    int64_t var_1a8;
    int128_t var_c8;
    int64_t var_78;
    int64_t var_70;
    
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb40f1190552b9631(&var_78, &var_f8);
        
        if (var_70 == -0x8000000000000000)
            break;
        
        int64_t var_1b0_1 = rbx_1;
        int64_t rax_3 = var_78;
        int128_t var_168 = var_70;
        void* r13_3 = (var_170 << 5) + rdx;
        
        if (!(r13_3 == 0x20 | !var_170))
        {
            int64_t rbx_2 = *(r13_3 - 0x18);
            int64_t r14_1 = *(r13_3 - 0x10);
            
            if (alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_columns::_$u7b$$u7b$closure$u7d$$u7d$::h2385699e42aeb800(&var_1b1, &var_140, rbx_2, r14_1))
            {
                *(r13_3 - 8) = r14_1;
                
                if (!r14_1)
                    r14_1 = 0;
                else
                {
                    int64_t rdi_7 = rbx_2 + r14_1 * 0x18;
                    
                    if (rdi_7 != 0x18)
                    {
                        char* rax_7 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(rdi_7 - 0x18);
                        *rax_7 &= 0xef;
                        r14_1 = *(r13_3 - 0x10);
                    }
                    
                    if (rdi_7 != 0x18 && !r14_1)
                        r14_1 = 0;
                    else if (*(_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae((r14_1 - 1) * 0x18 + *(r13_3 - 0x18)) + 1) & 4)
                    {
                        alacritty_terminal::grid::row::Row$LT$T$GT$::shrink::hd1c482736534eb30(
                            &var_1a8, r13_3 - 0x20, r14_1 - 1);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::hd425794b6e9b2c11(&var_1a8);
                        r14_1 -= 1;
                    }
                }
                
                int64_t r12_5 = var_140 - r14_1;
                int128_t var_60;
                int64_t rbp_1 = var_60;
                int64_t rax_9 = core::cmp::Ord::min::h7c13e9bfb8ea3862(rbp_1, r12_5);
                
                if (rax_9 - 1 >= rbp_1)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rax_9 - 1, rbp_1);
                    /* no return */
                }
                
                rbp = var_108;
                int128_t var_1a0;
                int128_t var_158_1;
                int128_t var_128;
                int64_t var_118_1;
                
                if (*_$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags::hcae42e2ab580f7ae((rax_9 - 1) * 0x18 + *var_168[8]) & 0x20)
                {
                    int64_t rax_14 = *var_60[8];
                    int64_t rcx_6 = 0;
                    
                    if (rax_14 >= rax_9 - 1)
                        rcx_6 = rax_14 - (rax_9 - 1);
                    
                    *var_158_1[8] = rcx_6;
                    alloc::vec::Vec$LT$T$C$A$GT$::split_off::h4284604988914e8f(&var_1a8, &var_168, 
                        rax_9 - 1);
                    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_1a8, 
                        &var_168);
                    int64_t rax_16 = *var_1a0[8];
                    int128_t var_a8 = var_1a8;
                    _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_c8);
                    void* rax_17 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(&var_c8);
                    *(rax_17 + 1) |= 4;
                    int64_t var_b8;
                    *var_1a0[8] = var_b8;
                    var_1a8 = var_c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hbddf951762aec067(&var_a8, &var_1a8);
                    r12_5 -= 1;
                    var_128 = var_a8;
                    var_118_1 = rax_16;
                }
                else
                {
                    int64_t rax_11 = *var_60[8];
                    int64_t rcx_4 = 0;
                    
                    if (rax_11 >= rax_9)
                        rcx_4 = rax_11 - rax_9;
                    
                    *var_158_1[8] = rcx_4;
                    alloc::vec::Vec$LT$T$C$A$GT$::split_off::h4284604988914e8f(&var_1a8, &var_168, 
                        rax_9);
                    core::intrinsics::typed_swap_nonoverlapping::h0a04095f3d754e5f(&var_1a8, 
                        &var_168);
                    var_118_1 = *var_1a0[8];
                    var_128 = var_1a8;
                }
                
                *(r13_3 - 8) += var_118_1;
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3cb2cc92e418e783(r13_3 - 0x20, 
                    *var_128[8], var_118_1);
                int64_t var_118_2 = 0;
                int64_t rbx_5 = ~var_1b8 + rbp[0x13];
                int64_t rax_34;
                
                if (rax_3 != rbx_5 || var_1b1 != 1)
                {
                    int64_t rax_25 = *var_168[8];
                    var_1a8 = rax_25;
                    var_1a0 = rax_25 + var_158_1 * 0x18;
                    
                    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h4877859599ecbfec(&var_1a8))
                    {
                        if (rax_3 < var_1b0_1)
                        {
                            int64_t rax_28 = var_1b0_1 - 1;
                            var_1b0_1 = rax_28;
                            rbp[0x14] = rax_28;
                        }
                        
                        if (rax_3 < rbx_5)
                        {
                            int32_t rax_30 = var_1b8 + 1;
                            rbp[7] = rax_30;
                            var_1b8 = rax_30;
                            var_184 = rax_30;
                        }
                        
                        rbx_1 = var_1b0_1;
                        goto label_76dc70;
                    }
                    
                    rbx_1 = var_1b0_1;
                    rax_34 = *(r13_3 - 0x10);
                    *(r13_3 - 8) = rax_34;
                    
                    if (rax_34)
                    {
                        label_76dcb7:
                        int64_t rdi_34 = rax_34 * 0x18 + *(r13_3 - 0x18);
                        
                        if (rdi_34 != 0x18)
                        {
                            char* rax_38 = _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::flags_mut::hf1ec2b73cb1258e3(rdi_34 - 0x18);
                            *rax_38 |= 0x10;
                        }
                    }
                }
                else
                {
                    int64_t rax_22;
                    int32_t rdx_8;
                    rax_22 = alacritty_terminal::index::Point::sub::h2a90a9a53ccead04(var_138, 
                        var_1b8, rbp, r12_5);
                    rbx_1 = var_1b0_1;
                    int32_t r12_6 = rdx_8;
                    
                    if (!rax_22)
                    {
                        int64_t rax_23 = *var_168[8];
                        var_1a8 = rax_23;
                        var_1a0 = rax_23 + var_158_1 * 0x18;
                        
                        if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h4877859599ecbfec(&var_1a8))
                            rax_22 = 0;
                        else
                        {
                            *(rbp + 0x5c) = 1;
                            int32_t rdx_10;
                            rax_22 = alacritty_terminal::index::Point::sub::h2a90a9a53ccead04(0, 
                                r12_6, rbp, 1);
                            r12_6 = rdx_10;
                        }
                    }
                    
                    var_138 = rax_22;
                    rbp[6] = rax_22;
                    int32_t rcx_15 = var_1b8;
                    
                    if (var_1b8 == r12_6)
                    {
                        label_76dc9f:
                        r14 += var_1b8 - rcx_15;
                        rax_34 = *(r13_3 - 0x10);
                        *(r13_3 - 8) = rax_34;
                        
                        if (rax_34)
                            goto label_76dcb7;
                    }
                    else
                    {
                        int64_t rax_32 = *var_168[8];
                        var_1a8 = rax_32;
                        var_1a0 = rax_32 + var_158_1 * 0x18;
                        rcx_15 = r12_6;
                        
                        if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h4877859599ecbfec(&var_1a8))
                            goto label_76dc9f;
                        
                        label_76dc70:
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
    int64_t r14_3 = var_170;
    int64_t rbx_6 = rbp[0x13];
    
    if (r14_3 < rbx_6)
    {
        int32_t rax_41 = core::cmp::Ord::max::h3396bb7148673668(var_1b8 + r14_3 - rbx_6, 0);
        var_1b8 = rax_41;
        rbp[7] = rax_41;
        alloc::vec::Vec$LT$T$C$A$GT$::resize_with::hc66dcacd0408d3ff(&var_180, rbx_6, &var_140);
        r14_3 = var_170;
    }
    
    if (r14)
    {
        int64_t rax_44 = core::cmp::Ord::min::h7c13e9bfb8ea3862(~var_1b8 + rbx_6, r14_3 - rbx_6);
        int64_t rbx_7 = 0;
        
        if (r14 >= rax_44)
            rbx_7 = r14 - rax_44;
        
        int64_t rcx_21 = r14_3 - r14 + rbx_7;
        
        if (r14_3 >= rcx_21)
        {
            core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$u5d$$GT$::hbdfa2dfef87806d4((rcx_21 << 5) + rdx, r14_3 - rcx_21);
            r14_3 = rcx_21;
        }
        
        rbp[7] = core::cmp::Ord::max::h3396bb7148673668(var_1b8 - rbx_7, 0);
    }
    
    int64_t rax_46;
    int64_t rdx_13;
    rax_46 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(r14_3, 8, 0x20);
    int64_t var_90 = rax_46;
    int64_t var_88 = rdx_13;
    int64_t var_80 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::hf4265eba2e4a5c57(&var_f8, &var_180);
    
    for (int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb6b908aca71d9116(&var_f8); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb6b908aca71d9116(&var_f8))
    {
        int64_t rcx_23 = *i;
        int64_t rdx_14 = i[3];
        var_c8 = *(i + 8);
        
        if (rcx_23 == -0x8000000000000000)
            break;
        
        var_1a8 = rcx_23;
        int64_t var_190_1 = rdx_14;
        int128_t zmm0_5 = var_c8;
        int64_t rsi_22 = var_140;
        
        if (*zmm0_5[8] < rsi_22)
            alloc::vec::Vec$LT$T$C$A$GT$::resize_with::hc60038c151f2bd82(&var_1a8, rsi_22);
        
        int128_t var_68_1 = zmm0_5;
        var_78 = var_1a8;
        var_70 = zmm0_5;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h8eb7f3e47ff8baf3(&var_90, &var_78);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..rev..Rev$LT$alloc..vec..drain..Drain$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$$GT$::h0a661189e2851256(&var_f8);
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::replace_inner::h4bb3a9570b781689(var_108, 
        &var_90);
    int64_t rax_49 = var_108[5];
    int64_t rsi_25 = 0;
    
    if (rax_49 >= var_108[0x13])
        rsi_25 = rax_49 - var_108[0x13];
    
    var_108[0x14] = core::cmp::Ord::min::h7c13e9bfb8ea3862(var_108[0x14], rsi_25);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(&var_48);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(&var_180);
}
