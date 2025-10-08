
  fn uu_expr::syntax_tree::check_posix_regex_errors::h83c506dd31e4b1f6(arg1: u64, arg2: i64, arg3: i64) -> i64

{
    let mut rbx: u64 = arg1;
    let mut var_a8: i64 = 0;
    let var_a0: *mut i8 = 1;
    let mut var_98: i64 = 0;
    let mut var_b8: i64 = arg2;
    let var_b0: i64 = arg3 + arg2;
    let mut rax: i8;
    let mut rdx_1: i32;
    rax = core::str::validations::next_code_point::h84659763701eb288(&var_b8, rbx);
    
    if (rdx_1 != 0x110000 & rax) != 1
    {
        'label_4a5381:
        *rbx = 0xd;
    }
    else
    {
        let mut r14_1: i32 = rdx_1;
        let var_90_1: u64 = rbx;
        let mut rbp_1: i8 = 0;
        let mut var_d0_1: u32 = 0;
        let mut var_c0_1: i64 = 0;
        let mut r15_1: i64 = 0;
        
        loop
        {
            if (rbp_1 & 1) != 0
            {
                let mut var_80: i64;
                let mut var_78: i64;
                let mut rax_22: i64;
                let mut rcx_3: i64;
                
                if r14_1 > 0x7a
                {
                    if r14_1 == 0x7b
                    {
                        r15_1 += 1;
                        goto 'label_4a52f4;
                    }
                    
                    if r14_1 != 0x7d
                    {
                        goto 'label_4a51e0;
                    }
                    
                    var_80 = 0xb;
                    
                    if r15_1 < 1
                    {
                        rax_22 = var_78;
                        rcx_3 = 0xb;
                        'label_4a53db:
                        *var_90_1 = rcx_3;
                        *(var_90_1 + 8) = rax_22;
                        break;
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$uu_expr..ExprError$GT$::ha53fef2dd7d5e585(&var_80);
                    let mut rax_3: i64;
                    let mut rdx_3: i64;
                    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(var_98 - 1, var_a0, var_98);
                    
                    if rax_3 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(var_a0, var_98, 0, 
                            var_98 - 1);
                        /* no return */
                    }
                    
                    let mut var_68: ();
                    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, rax_3, rdx_3);
                    var_78 = 0;
                    let var_70_1: i64 = rdx_3;
                    let var_38_1: i16 = 1;
                    var_80 = 1;
                    let mut rax_4: *mut i8;
                    let mut rdx_4: u64;
                    rax_4 =
                        core::str::iter::SplitInternal$LT$P$GT$::next::h44b185a3022aee78(&var_78);
                    
                    if rax_4 == 0
                    {
                        core::option::expect_failed::h3f620cfb8545dc61(
                            "splitn always returns at least o…");
                        /* no return */
                    }
                    
                    let rax_5: i64 = var_80;
                    let mut rcx_1: u32;
                    let mut rsi_6: u64;
                    let mut rdi_13: *mut i8;
                    
                    if rax_5 == 0
                    {
                        let mut rax_8: i8;
                        rax_8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h697c4080279ccd7a(rax_4, rdx_4, 1, 0);
                        rcx_1 = 1;
                        
                        if rax_8 == 0
                        {
                            'label_4a52bc:
                            rdi_13 = rax_4;
                            rsi_6 = rdx_4;
                            'label_4a52c7:
                            rcx_1 = var_d0_1;
                            
                            if (core::num::_$LT$impl$u20$i16$GT$::from_ascii_radix::h41bd775cd1f6bef0(rdi_13, rsi_6) & 1) != 0
                            {
                                rcx_1 = 1;
                            }
                        }
                    }
                    else
                    {
                        let mut var_c8_1: u64;
                        let mut r13_2: *mut i8;
                        
                        if rax_5 != 1
                        {
                            var_80 = rax_5 - 1;
                            let mut rax_10: *mut i8;
                            let mut rdx_6: u64;
                            rax_10 =
                                core::str::iter::SplitInternal$LT$P$GT$::next::h44b185a3022aee78(
                                &var_78);
                            var_c8_1 = rdx_6;
                            r13_2 = rax_10;
                        }
                        else
                        {
                            var_80 = 0;
                            let mut rax_6: *mut i8;
                            let mut rdx_5: u64;
                            rax_6 =
                                core::str::iter::SplitInternal$LT$P$GT$::get_end::hc19ffeadbe7d30ed(
                                &var_78);
                            r13_2 = rax_6;
                            var_c8_1 = rdx_5;
                        }
                        
                        let mut rax_11: i32;
                        rax_11 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h697c4080279ccd7a(rax_4, rdx_4, 1, 0);
                        
                        if rax_11 == 0
                        {
                            if r13_2 == 0
                            {
                                goto 'label_4a52bc;
                            }
                            
                            'label_4a52b3:
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h697c4080279ccd7a(r13_2, var_c8_1, 1, 0) != 0
                            {
                                goto 'label_4a52bc;
                            }
                            
                            if rax_11 != 0
                            {
                                rdi_13 = r13_2;
                                rsi_6 = var_c8_1;
                                goto 'label_4a52c7;
                            }
                            
                            rbx = core::num::_$LT$impl$u20$i16$GT$::from_ascii_radix::h41bd775cd1f6bef0(rax_4, rdx_4);
                            let mut rax_17: i32;
                            rax_17 = core::num::_$LT$impl$u20$i16$GT$::from_ascii_radix::h41bd775cd1f6bef0(r13_2, var_c8_1);
                            rcx_1 = 1;
                            
                            if (rbx & 1) == 0 && (rax_17 & 1) == 0
                            {
                                let mut rax_18: u16;
                                rax_18 = (rbx >> 0x10) > rax_17 >> 0x10;
                                rcx_1 = var_d0_1 | rax_18;
                                rcx_1 &= 1;
                            }
                        }
                        else
                        {
                            if r13_2 != 0
                            {
                                goto 'label_4a52b3;
                            }
                            
                            rcx_1 = 1;
                        }
                    }
                    var_98 = 0;
                    var_d0_1 = rcx_1;
                    r15_1 -= 1;
                    goto 'label_4a52f4;
                }
                
                if r14_1 == 0x28
                {
                    var_c0_1 += 1;
                    goto 'label_4a52f4;
                }
                
                if r14_1 == 0x29
                {
                    var_80 = 9;
                    
                    if var_c0_1 != 0
                    {
                        var_c0_1 -= 1;
                        core::ptr::drop_in_place$LT$uu_expr..ExprError$GT$::ha53fef2dd7d5e585(
                            &var_80);
                        goto 'label_4a52f4;
                    }
                    
                    rax_22 = var_78;
                    rcx_3 = 9;
                    goto 'label_4a53db;
                }
            }
            
            'label_4a51e0:
            
            if r15_1 != 0
            {
                if var_98 <= 0xd
                {
                    alloc::string::String::push::h0ede46164189e411(&var_a8, r14_1);
                }
                
                if r14_1 - 0x30 >= 0xa && r14_1 != 0x2c && r14_1 != 0x5c
                {
                    let mut rax_7: u32;
                    rax_7 = 1;
                    var_d0_1 = rax_7;
                }
                
                goto 'label_4a52f4;
            }
            
            r15_1 = 0;
            'label_4a52f4:
            rbx = r14_1 == 0x5c;
            let mut rax_15: i8;
            let mut rdx_7: i32;
            rax_15 = core::str::validations::next_code_point::h84659763701eb288(&var_b8, rbx);
            
            if (rax_15 & 1) != 0
            {
                r14_1 = rdx_7;
                rbp_1 = !rbp_1 & rbx;
                
                if rdx_7 != 0x110000
                {
                    continue;
                }
            }
            
            rbx = var_90_1;
            
            if (var_c0_1 | r15_1) == 0 && (var_d0_1 & 1) == 0
            {
                goto 'label_4a5381;
            }
            
            if r15_1 != 0
            {
                *rbx = 0xa;
                goto 'label_4a53a3;
            }
            
            if var_c0_1 == 0
            {
                *rbx = 0xc;
            }
            else
            {
                *rbx = 8;
            }
            
            goto 'label_4a53a3;
        }
    }
    
    'label_4a53a3:
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_a8)
}
