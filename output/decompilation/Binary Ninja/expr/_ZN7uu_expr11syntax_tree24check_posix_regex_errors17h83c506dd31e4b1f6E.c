
  int64_t uu_expr::syntax_tree::check_posix_regex_errors::h83c506dd31e4b1f6(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    uint64_t rbx = arg1;
    int64_t var_a8 = 0;
    char* var_a0 = 1;
    int64_t var_98 = 0;
    int64_t var_b8 = arg2;
    int64_t var_b0 = arg3 + arg2;
    char rax;
    int32_t rdx_1;
    rax = core::str::validations::next_code_point::h84659763701eb288(&var_b8, rbx);
    
    if ((rdx_1 != 0x110000 & rax) != 1)
    {
        label_4a5381:
        *rbx = 0xd;
    }
    else
    {
        int32_t r14_1 = rdx_1;
        uint64_t var_90_1 = rbx;
        char rbp_1 = 0;
        uint32_t var_d0_1 = 0;
        int64_t var_c0_1 = 0;
        int64_t r15_1 = 0;
        
        while (true)
        {
            if (rbp_1 & 1)
            {
                int64_t var_80;
                int64_t var_78;
                int64_t rax_22;
                int64_t rcx_3;
                
                if (r14_1 > 0x7a)
                {
                    if (r14_1 == 0x7b)
                    {
                        r15_1 += 1;
                        goto label_4a52f4;
                    }
                    
                    if (r14_1 != 0x7d)
                        goto label_4a51e0;
                    
                    var_80 = 0xb;
                    
                    if (r15_1 < 1)
                    {
                        rax_22 = var_78;
                        rcx_3 = 0xb;
                        label_4a53db:
                        *var_90_1 = rcx_3;
                        *(var_90_1 + 8) = rax_22;
                        break;
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$uu_expr..ExprError$GT$::ha53fef2dd7d5e585(&var_80);
                    int64_t rax_3;
                    int64_t rdx_3;
                    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(var_98 - 1, var_a0, var_98);
                    
                    if (!rax_3)
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(var_a0, var_98, 0, 
                            var_98 - 1);
                        /* no return */
                    }
                    
                    void var_68;
                    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, rax_3, rdx_3);
                    var_78 = 0;
                    int64_t var_70_1 = rdx_3;
                    int16_t var_38_1 = 1;
                    var_80 = 1;
                    char* rax_4;
                    uint64_t rdx_4;
                    rax_4 =
                        core::str::iter::SplitInternal$LT$P$GT$::next::h44b185a3022aee78(&var_78);
                    
                    if (!rax_4)
                    {
                        core::option::expect_failed::h3f620cfb8545dc61(
                            "splitn always returns at least o…");
                        /* no return */
                    }
                    
                    int64_t rax_5 = var_80;
                    uint32_t rcx_1;
                    uint64_t rsi_6;
                    char* rdi_13;
                    
                    if (!rax_5)
                    {
                        char rax_8;
                        rax_8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h697c4080279ccd7a(rax_4, rdx_4, 1, 0);
                        rcx_1 = 1;
                        
                        if (!rax_8)
                        {
                            label_4a52bc:
                            rdi_13 = rax_4;
                            rsi_6 = rdx_4;
                            label_4a52c7:
                            rcx_1 = var_d0_1;
                            
                            if (core::num::_$LT$impl$u20$i16$GT$::from_ascii_radix::h41bd775cd1f6bef0(rdi_13, rsi_6) & 1)
                                rcx_1 = 1;
                        }
                    }
                    else
                    {
                        uint64_t var_c8_1;
                        char* r13_2;
                        
                        if (rax_5 != 1)
                        {
                            var_80 = rax_5 - 1;
                            char* rax_10;
                            uint64_t rdx_6;
                            rax_10 =
                                core::str::iter::SplitInternal$LT$P$GT$::next::h44b185a3022aee78(
                                &var_78);
                            var_c8_1 = rdx_6;
                            r13_2 = rax_10;
                        }
                        else
                        {
                            var_80 = 0;
                            char* rax_6;
                            uint64_t rdx_5;
                            rax_6 =
                                core::str::iter::SplitInternal$LT$P$GT$::get_end::hc19ffeadbe7d30ed(
                                &var_78);
                            r13_2 = rax_6;
                            var_c8_1 = rdx_5;
                        }
                        
                        int32_t rax_11;
                        rax_11 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h697c4080279ccd7a(rax_4, rdx_4, 1, 0);
                        
                        if (!rax_11)
                        {
                            if (!r13_2)
                                goto label_4a52bc;
                            
                            label_4a52b3:
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h697c4080279ccd7a(r13_2, var_c8_1, 1, 0))
                                goto label_4a52bc;
                            
                            if (rax_11)
                            {
                                rdi_13 = r13_2;
                                rsi_6 = var_c8_1;
                                goto label_4a52c7;
                            }
                            
                            rbx = core::num::_$LT$impl$u20$i16$GT$::from_ascii_radix::h41bd775cd1f6bef0(rax_4, rdx_4);
                            int32_t rax_17;
                            rax_17 = core::num::_$LT$impl$u20$i16$GT$::from_ascii_radix::h41bd775cd1f6bef0(r13_2, var_c8_1);
                            rcx_1 = 1;
                            
                            if (!(rbx & 1) && !(rax_17 & 1))
                            {
                                uint16_t rax_18;
                                rax_18 = (rbx >> 0x10) > rax_17 >> 0x10;
                                rcx_1 = var_d0_1 | rax_18;
                                rcx_1 &= 1;
                            }
                        }
                        else
                        {
                            if (r13_2)
                                goto label_4a52b3;
                            
                            rcx_1 = 1;
                        }
                    }
                    var_98 = 0;
                    var_d0_1 = rcx_1;
                    r15_1 -= 1;
                    goto label_4a52f4;
                }
                
                if (r14_1 == 0x28)
                {
                    var_c0_1 += 1;
                    goto label_4a52f4;
                }
                
                if (r14_1 == 0x29)
                {
                    var_80 = 9;
                    
                    if (var_c0_1)
                    {
                        var_c0_1 -= 1;
                        core::ptr::drop_in_place$LT$uu_expr..ExprError$GT$::ha53fef2dd7d5e585(
                            &var_80);
                        goto label_4a52f4;
                    }
                    
                    rax_22 = var_78;
                    rcx_3 = 9;
                    goto label_4a53db;
                }
            }
            
            label_4a51e0:
            
            if (r15_1)
            {
                if (var_98 <= 0xd)
                    alloc::string::String::push::h0ede46164189e411(&var_a8, r14_1);
                
                if (r14_1 - 0x30 >= 0xa && r14_1 != 0x2c && r14_1 != 0x5c)
                {
                    uint32_t rax_7;
                    rax_7 = 1;
                    var_d0_1 = rax_7;
                }
                
                goto label_4a52f4;
            }
            
            r15_1 = 0;
            label_4a52f4:
            rbx = r14_1 == 0x5c;
            char rax_15;
            int32_t rdx_7;
            rax_15 = core::str::validations::next_code_point::h84659763701eb288(&var_b8, rbx);
            
            if (rax_15 & 1)
            {
                r14_1 = rdx_7;
                rbp_1 = ~rbp_1 & rbx;
                
                if (rdx_7 != 0x110000)
                    continue;
            }
            
            rbx = var_90_1;
            
            if (!(var_c0_1 | r15_1) && !(var_d0_1 & 1))
                goto label_4a5381;
            
            if (r15_1)
            {
                *rbx = 0xa;
                goto label_4a53a3;
            }
            
            if (!var_c0_1)
                *rbx = 0xc;
            else
                *rbx = 8;
            
            goto label_4a53a3;
        }
    }
    
    label_4a53a3:
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_a8);
}
