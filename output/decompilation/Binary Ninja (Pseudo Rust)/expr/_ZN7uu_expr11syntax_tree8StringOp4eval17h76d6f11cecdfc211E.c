
  fn uu_expr::syntax_tree::StringOp::eval::h76d6f11cecdfc211(arg1: *mut i64, arg2: i8, arg3: *mut i8, arg4: *mut i8) -> i64

{
    let rbx: u64;
    let var_30: u64 = rbx;
    let mut var_158: i64;
    let mut var_138: i64;
    let mut var_128: i128;
    let mut var_f8: i128;
    let mut var_c8: i64;
    let mut var_b0: i64;
    let mut var_88: i128;
    let var_78: i64;
    let mut r12_1: *mut c_void;
    let mut zmm0: i128;
    
    match arg2
    {
        0 =>
        {
            if (*arg3 & 1) == 0
            {
                let mut var_e0: ();
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_e0, 
                    &arg3[8]);
                
                if (*arg4 & 1) == 0
                {
                    uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_c8, 
                        &arg4[8]);
                    let var_c0: i64;
                    let var_b8: i64;
                    uu_expr::syntax_tree::check_posix_regex_errors::h83c506dd31e4b1f6(&var_138, 
                        var_c0, var_b8);
                    let rax_14: i64 = var_138;
                    
                    if rax_14 != 0xd
                    {
                        arg1[4] = *var_128[8];
                        let var_130: i128;
                        *arg1.byte_offset(0x10) = var_130;
                        arg1[1] = rax_14;
                        *arg1 = 1;
                    }
                    else
                    {
                        let mut rax_15: i64;
                        let mut rdx_2: i64;
                        rax_15 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h1bcad2531ed7b92a(var_b8 + 1, 1, 1);
                        var_158 = rax_15;
                        let var_148_1: i64 = 0;
                        alloc::string::String::push::h0ede46164189e411(&var_158, 0x5e);
                        let mut var_98: i64 = var_c0;
                        let var_90_1: i64 = var_b8 + var_c0;
                        let mut rax_16: i8;
                        let mut rdx_3: i32;
                        rax_16 = core::str::validations::next_code_point::h84659763701eb288(
                            &var_98, rbx);
                        let mut r14_2: i32 = 0x110000;
                        
                        if (rax_16 & 1) != 0
                        {
                            r14_2 = rdx_3;
                        }
                        
                        if r14_2 == 0x2a
                        {
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he36b228b683b60fd(&var_158, "\*\^0splitn always returns at le…", 
                                "\^0splitn always returns at leas…");
                            'label_4a4c02:
                            var_138 = var_98;
                            let mut r13_1: i8 = 0;
                            
                            loop
                            {
                                let mut rax_30: i8;
                                let mut rdx_9: i32;
                                rax_30 = core::str::validations::next_code_point::h84659763701eb288(
                                    &var_138, 0x110000);
                                let mut r12_2: i32 = rdx_9;
                                
                                if (rax_30 & 1) == 0
                                {
                                    r12_2 = 0x110000;
                                }
                                
                                if r12_2 == 0x5e
                                {
                                    let mut rax_31: i32;
                                    rax_31 = r14_2 - 0x5d < 0xfffffffe;
                                    rax_31 |= r13_1;
                                    
                                    if (rax_31 & 1) != 0
                                    {
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he36b228b683b60fd(&var_158, "\^0splitn always returns at leas…", 
                                            "0splitn always returns at least …");
                                    }
                                    else
                                    {
                                        alloc::string::String::push::h0ede46164189e411(&var_158, 
                                            r12_2);
                                    }
                                }
                                else
                                {
                                    if r12_2 == 0x110000
                                    {
                                        break;
                                    }
                                    
                                    alloc::string::String::push::h0ede46164189e411(&var_158, r12_2);
                                }
                                
                                r13_1 = (r13_1 ^ 1) & r14_2 == 0x5c;
                                r14_2 = r12_2;
                            }
                            
                            let mut var_50: i64;
                            onig::Regex::with_options::h89d1b975e89c8f9f(&var_50, rdx_2, var_148_1, 
                                8, &OnigSyntaxGrep);
                            
                            if !(0 + -(var_50))
                            {
                                core::ptr::drop_in_place$LT$onig..Error$GT$::hf7fa5a0a586a9cf4(
                                    &var_50);
                                arg1[1] = 5;
                                *arg1 = 1;
                            }
                            else
                            {
                                let var_48: i64;
                                let mut var_140: i64 = var_48;
                                let mut var_e8: i64;
                                let var_d8: i64;
                                let var_d0: i64;
                                
                                if onig::Regex::captures_len::h214af1c8012253d5(&var_140) == 0
                                {
                                    onig::Regex::find::h355dc042883af91c(&var_b0, &var_140, var_d8, 
                                        var_d0);
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9513cad8dee9a7f6(&var_138, "0splitn always returns at least …", 1);
                                    let var_78_1: i64 = var_128;
                                    var_88 = var_138;
                                    core::option::Option$LT$T$GT$::map_or::h190a8db1175ac8ec(
                                        &var_f8, &var_b0, &var_88);
                                }
                                else
                                {
                                    let mut rdx_12: u64 = onig::find::_$LT$impl$u20$onig..Regex$GT$::captures::h7fd9814b3e784e9b(&var_88, &var_140, var_d8, var_d0);
                                    let mut rax_35: *mut c_void;
                                    
                                    if var_88 == 0
                                    {
                                        rax_35 = nullptr;
                                    }
                                    else
                                    {
                                        let var_58: i64;
                                        let var_108_1: i64 = var_58;
                                        let var_68: i128;
                                        let var_118_1: i128 = var_68;
                                        var_128 = var_78;
                                        var_138 = var_88;
                                        rax_35 = uu_expr::syntax_tree::StringOp::eval::_$u7b$$u7b$closure$u7d$$u7d$::h3636dcc8514b00e4(&var_138);
                                    }
                                    
                                    if rax_35 == 0
                                    {
                                        rdx_12 = rax_35;
                                    }
                                    
                                    let mut rsi_15: *mut c_void = 1;
                                    
                                    if rax_35 != 0
                                    {
                                        rsi_15 = rax_35;
                                    }
                                    
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9513cad8dee9a7f6(&var_138, rsi_15, rdx_12);
                                    var_e8 = var_128;
                                    var_f8 = var_138;
                                }
                                arg1[4] = var_e8;
                                *arg1.byte_offset(0x10) = var_f8;
                                arg1[1] = -0x8000000000000000;
                                *arg1 = 0;
                                core::ptr::drop_in_place$LT$onig..Regex$GT$::hf1676455564f5d2b(
                                    &var_140);
                            }
                        }
                        else
                        {
                            if r14_2 == 0x5e
                            {
                                goto 'label_4a4c02;
                            }
                            
                            if r14_2 != 0x110000
                            {
                                alloc::string::String::push::h0ede46164189e411(&var_158, r14_2);
                                goto 'label_4a4c02;
                            }
                            
                            _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
                            let zmm0_8: i128 = var_138;
                            *arg1.byte_offset(0x18) = var_128;
                            *arg1.byte_offset(8) = zmm0_8;
                            *arg1 = 0;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                            &var_158);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                        &var_c8);
                }
                else
                {
                    let zmm0_1: i128 = *arg4.byte_offset(8);
                    *arg1.byte_offset(0x18) = *arg4.byte_offset(0x18);
                    *arg1.byte_offset(8) = zmm0_1;
                    *arg1 = 1;
                }
                
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                    &var_e0);
            }
            
            'label_4a47d2:
            zmm0 = *arg3.byte_offset(8);
            *arg1.byte_offset(0x18) = *arg3.byte_offset(0x18);
            *arg1.byte_offset(8) = zmm0;
            *arg1 = 1;
        }
        1 =>
        {
            if (*arg3 & 1) != 0
            {
                goto 'label_4a47d2;
            }
            
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_158, &arg3[8]);
            let mut rdi_6: *mut i64;
            
            if (*arg4 & 1) == 0
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_f8, 
                    &arg4[8]);
                let var_150: i64;
                var_b0 = var_150;
                let var_148: i64;
                let var_a8_1: i64 = var_148 + var_150;
                let var_a0_1: i64 = 0;
                let mut rax_19: u64;
                let mut rdx_4: i32;
                rax_19 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2cd4ce92fdece041(&var_b0);
                
                if rdx_4 != 0x110000
                {
                    let mut r14_3: u64 = rax_19;
                    let mut rbp_1: i32 = rdx_4;
                    'label_4a4a8f:
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_88, &var_f8);
                    let var_80: i64;
                    var_c8 = var_80;
                    let var_c0_1: i64 = var_78 + var_80;
                    
                    loop
                    {
                        let mut rax_24: i8;
                        let mut rdx_5: i32;
                        rax_24 = core::str::validations::next_code_point::h84659763701eb288(
                            &var_c8, 
                        
                        if (rax_24 & 1) == 0 || rdx_5 == 0x110000
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_88);
                            let mut rax_25: u64;
                            let mut rdx_6: i32;
                            rax_25 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2cd4ce92fdece041(&var_b0);
                            r14_3 = rax_25;
                            rbp_1 = rdx_6;
                            
                            if rdx_6 != 0x110000
                            {
                                goto 'label_4a4a8f;
                            }
                            
                            goto 'label_4a4a09;
                        }
                        
                        if rdx_5 != rbp_1
                        {
                            continue;
                        }
                        
                        _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, r14_3 + 1);
                        let zmm0_11: i128 = var_138;
                        *arg1.byte_offset(0x18) = var_128;
                        *arg1.byte_offset(8) = zmm0_11;
                        *arg1 = 0;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                            &var_88);
                        break;
                    }
                }
                else
                {
                    'label_4a4a09:
                    _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
                    let zmm0_9: i128 = var_138;
                    *arg1.byte_offset(0x18) = var_128;
                    *arg1.byte_offset(8) = zmm0_9;
                    *arg1 = 0;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_f8);
                rdi_6 = &var_158;
            }
            else
            {
                let zmm0_4: i128 = *arg4.byte_offset(8);
                *arg1.byte_offset(0x18) = *arg4.byte_offset(0x18);
                *arg1.byte_offset(8) = zmm0_4;
                *arg1 = 1;
                rdi_6 = &var_158;
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(rdi_6);
        }
        2 =>
        {
            if (*arg3 & 1) != 0
            {
                goto 'label_4a47d2;
            }
            
            if uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(&arg3[8]) != 0
            {
                r12_1 = &arg4[8];
                
                if (*arg4 & 1) != 0
                {
                    let zmm0_2: i128 = *r12_1;
                    *arg1.byte_offset(0x18) = *r12_1.byte_offset(0x10);
                    *arg1.byte_offset(8) = zmm0_2;
                    *arg1 = 1;
                    /* tailcall */
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(&arg3[8]);
                }
                
                if uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(r12_1) != 0
                {
                    let zmm0_10: i128 = *arg3.byte_offset(8);
                    *arg1.byte_offset(0x18) = *arg3.byte_offset(0x18);
                    *arg1.byte_offset(8) = zmm0_10;
                    *arg1 = 0;
                    /* tailcall */
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(r12_1);
                }
                
                _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
                'label_4a4b94:
                let zmm0_12: i128 = var_138;
                *arg1.byte_offset(0x18) = var_128;
                *arg1.byte_offset(8) = zmm0_12;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(
                    r12_1);
                /* tailcall */
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(&arg3[8]);
            }
            
            _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
            let zmm0_5: i128 = var_138;
            *arg1.byte_offset(0x18) = var_128;
            *arg1.byte_offset(8) = zmm0_5;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(
                &arg3[8]);
        }
        3 =>
        {
            let mut rax_6: i64 = 1;
            
            if (*arg3 & 1) != 0
            {
                goto 'label_4a47b2;
            }
            
            if uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(&arg3[8]) == 0
            {
                r12_1 = &arg4[8];
                let mut rax_12: i64 = 1;
                
                if (*arg4 & 1) != 0
                {
                    goto 'label_4a48a3;
                }
                
                if uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(r12_1) == 0
                {
                    _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
                    goto 'label_4a4b94;
                }
                
                rax_12 = 0;
                'label_4a48a3:
                zmm0 = *r12_1;
                *arg1.byte_offset(0x18) = *r12_1.byte_offset(0x10);
                *arg1.byte_offset(8) = zmm0;
                *arg1 = rax_12;
                /* tailcall */
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(&arg3[8]);
            }
            
            rax_6 = 0;
            'label_4a47b2:
            zmm0 = *arg3.byte_offset(8);
            *arg1.byte_offset(0x18) = *arg3.byte_offset(0x18);
            *arg1.byte_offset(8) = zmm0;
            *arg1 = rax_6;
        }
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(arg4)
}
