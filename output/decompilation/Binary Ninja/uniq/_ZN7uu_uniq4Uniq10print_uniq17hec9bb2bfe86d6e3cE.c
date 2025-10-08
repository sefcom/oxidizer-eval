
  uint64_t uu_uniq::Uniq::print_uniq::hec9bb2bfe86d6e3c(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t* arg5)

{
    void** const rbp;
    void** const var_8 = rbp;
    char rcx = 0xa;
    
    if (*(arg1 + 0x35))
        rcx = 0;
    
    int64_t var_48;
    std::io::BufRead::split::h1b3d1f8595d96889(&var_48, arg2, arg3, rcx);
    int64_t var_80;
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
    int64_t rax = var_80;
    int64_t var_68 = -0x7fffffffffffffff;
    uint64_t result;
    int64_t* var_40;
    
    if (rax != -0x7fffffffffffffff)
    {
        int64_t var_a0_1 = rax;
        
        if (rax != -0x8000000000000000)
        {
            int64_t var_78;
            int64_t var_b0_1 = var_78;
            uint64_t var_70;
            uint64_t r14 = var_70;
            int64_t rax_2 = var_48;
            char rcx_1 = arg1[6];
            char rdx = *(arg1 + 0x31);
            int64_t r12_1;
            int64_t r15_1;
            int64_t r13_1;
            
            if (*(arg1 + 0x32) & 1)
            {
                r13_1 = 1;
                rbp = nullptr;
                r12_1 = var_a0_1;
                
                while (true)
                {
                    var_a0_1 = r12_1;
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
                    r12_1 = var_80;
                    
                    if (r12_1 == var_68)
                        goto label_45d579;
                    
                    r15_1 = var_78;
                    
                    if (r12_1 == -0x8000000000000000)
                        goto label_45d5fe;
                    
                    if (!uu_uniq::Uniq::cmp_keys::h53e47a450c9b1869(arg1, var_b0_1, r14))
                    {
                        uint64_t result_1 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                            arg4, arg5, var_b0_1, r14, r13_1, rbp);
                        result = result_1;
                        
                        if (result_1)
                            break;
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        r13_1 += 1;
                        rbp = 1;
                        var_b0_1 = r15_1;
                        r14 = var_70;
                    }
                    else
                    {
                        if (r13_1)
                        {
                            if (r13_1 != 1)
                            {
                                if (!(rdx & 1))
                                {
                                    label_45d256:
                                    uint64_t result_2 =
                                        uu_uniq::Uniq::print_line::h83673033b9795089(arg1, arg4, 
                                        arg5, var_b0_1, r14, r13_1, rbp);
                                    result = result_2;
                                    rbp = 1;
                                    
                                    if (result_2)
                                        break;
                                }
                            }
                            else if (!(rcx_1 & 1))
                                goto label_45d256;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        var_b0_1 = r15_1;
                        r14 = var_70;
                        r13_1 = 1;
                    }
                }
            }
            else if (rcx_1 & 1)
            {
                r13_1 = 1;
                rbp = nullptr;
                
                while (true)
                {
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
                    r12_1 = var_80;
                    
                    if (r12_1 == var_68)
                        goto label_45d579;
                    
                    r15_1 = var_78;
                    
                    if (r12_1 == -0x8000000000000000)
                        goto label_45d5fe;
                    
                    if (!uu_uniq::Uniq::cmp_keys::h53e47a450c9b1869(arg1, var_b0_1, r14))
                    {
                        r13_1 += 1;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(r12_1, r15_1);
                    }
                    else
                    {
                        if (!((r13_1 < 2 | rdx) & 1))
                        {
                            uint64_t result_3 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                                arg4, arg5, var_b0_1, r14, r13_1, rbp);
                            result = result_3;
                            rbp = 1;
                            
                            if (result_3)
                                break;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        var_a0_1 = r12_1;
                        var_b0_1 = r15_1;
                        r14 = var_70;
                        r13_1 = 1;
                    }
                }
            }
            else if (!(rdx & 1))
            {
                r13_1 = 1;
                rbp = nullptr;
                
                while (true)
                {
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
                    r12_1 = var_80;
                    
                    if (r12_1 == var_68)
                        goto label_45d579;
                    
                    r15_1 = var_78;
                    
                    if (r12_1 == -0x8000000000000000)
                        goto label_45d5fe;
                    
                    if (!uu_uniq::Uniq::cmp_keys::h53e47a450c9b1869(arg1, var_b0_1, r14))
                    {
                        r13_1 += 1;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(r12_1, r15_1);
                    }
                    else
                    {
                        if (r13_1)
                        {
                            uint64_t result_5 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                                arg4, arg5, var_b0_1, r14, r13_1, rbp);
                            result = result_5;
                            rbp = 1;
                            
                            if (result_5)
                                break;
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
                
                while (true)
                {
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5420a7eb50f49386(&var_80, &var_48);
                    r12_1 = var_80;
                    
                    if (r12_1 == var_68)
                    {
                        label_45d579:
                        core::ptr::drop_in_place$LT$std..io..error..Custom$GT$::h7819be45b555a90b(
                            rax_2, var_40);
                        
                        if (!r13_1)
                        {
                            label_45d59d:
                            uint32_t rax_15 = *(arg1 + 0x36);
                            
                            if ((!rax_15 || rax_15 == 3) && rbp & 1)
                            {
                                label_45d5bc:
                                var_80 = rcx;
                                uint64_t result_6 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6fd0b16c849806eb(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg4, arg5, &var_80, 1));
                                result = result_6;
                                
                                if (result_6)
                                    goto label_45d695;
                            }
                        }
                        else
                        {
                            if (r13_1 != 1)
                            {
                                if (rdx & 1)
                                    goto label_45d59d;
                            }
                            else if (rcx_1 & 1)
                                goto label_45d59d;
                            
                            uint64_t result_7 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                                arg4, arg5, var_b0_1, r14, r13_1, rbp);
                            result = result_7;
                            
                            if (result_7)
                                goto label_45d695;
                            
                            uint32_t rax_21 = *(arg1 + 0x36);
                            
                            if (rax_21 == 3 || !rax_21)
                                goto label_45d5bc;
                        }
                        
                        uint64_t result_8 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8767c281263d92b0(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::flush::h3c65bab2438362f0(arg4, arg5));
                        result = result_8;
                        
                        if (result_8)
                            goto label_45d695;
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_a0_1, var_b0_1);
                        result = 0;
                        goto label_45d6a0;
                    }
                    
                    r15_1 = var_78;
                    
                    if (r12_1 == -0x8000000000000000)
                    {
                        label_45d5fe:
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        goto label_45d60e;
                    }
                    
                    if (!uu_uniq::Uniq::cmp_keys::h53e47a450c9b1869(arg1, var_b0_1, r14))
                    {
                        r13_1 += 1;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(r12_1, r15_1);
                    }
                    else
                    {
                        if (r13_1 == 1)
                        {
                            uint64_t result_4 = uu_uniq::Uniq::print_line::h83673033b9795089(arg1, 
                                arg4, arg5, var_b0_1, r14, 1, rbp);
                            result = result_4;
                            rbp = 1;
                            
                            if (result_4)
                                break;
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
            label_45d60e:
            core::ptr::drop_in_place$LT$std..io..error..Custom$GT$::h7819be45b555a90b(rax_2, 
                var_40);
            label_45d695:
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
    label_45d6a0:
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h26f815af2d05ced1(arg4, arg5);
    return result;
}
