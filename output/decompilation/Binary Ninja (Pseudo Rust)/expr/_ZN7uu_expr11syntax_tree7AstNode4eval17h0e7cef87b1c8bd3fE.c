
  fn uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(arg1: *mut i64, arg2: *mut i8) -> *mut i64

{
    let mut var_120: i64;
    let mut var_118: i128;
    let mut var_108: i128;
    let mut var_f8: i128;
    let mut var_d8: i128;
    let var_c8: i128;
    let rdx: i64;
    let mut zmm0_1: i128;
    let mut zmm1_1: i128;
    
    match *arg2
    {
        0 =>
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &arg1[2], &arg2[8]);
            arg1[1] = -0x8000000000000000;
            *arg1 = 0;
        }
        1 =>
        {
            uu_expr::syntax_tree::BinOp::eval::h63e87d3d608dec64(arg1, arg2[1], arg2[2], 
                *arg2.byte_offset(8), *arg2.byte_offset(0x10));
        }
        2 =>
        {
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_120, *arg2.byte_offset(8), 
                rdx, &jump_table_45f090);
            let cond:0_1: bool = var_120 == 0;
            let mut var_98: i128 = var_118;
            
            if cond:0_1
            {
                let mut var_b0: ();
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_b0, &var_98);
                uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_120, 
                    *arg2.byte_offset(0x10));
                let cond:2_1: bool = var_120 == 0;
                let mut var_78: i128 = var_118;
                let mut zmm0_2: i128;
                let mut zmm1_2: i128;
                
                if cond:2_1
                {
                    uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(&var_d8, 
                        &var_78);
                    let var_b8: i64;
                    let mut r15_1: i64;
                    
                    if var_d8 == 0
                    {
                        let rax_4: i64 = *var_d8[8];
                        var_f8 = var_c8;
                        
                        if rax_4 == -0x8000000000000000
                        {
                            r15_1 = 0;
                        }
                        else
                        {
                            var_108 = var_b8;
                            var_118 = var_f8;
                            var_120 = rax_4;
                            let mut rax_5: u64;
                            let mut rdx_2: i64;
                            rax_5 = uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::he3a282c97ff7c67e(&var_120);
                            
                            if rax_5 == 0
                            {
                                r15_1 = 0;
                            }
                            else
                            {
                                r15_1 = rdx_2;
                            }
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$uu_expr..ExprError$GT$$GT$::hec85356ab7c1c7ab(&var_d8);
                        r15_1 = 0;
                    }
                    
                    uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_120, 
                        *arg2.byte_offset(0x18));
                    let cond:3_1: bool = var_120 == 0;
                    let mut var_58: i128 = var_118;
                    
                    if !cond:3_1
                    {
                        zmm0_2 = var_58;
                        zmm1_2 = var_108;
                        goto 'label_52fe26;
                    }
                    
                    uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(&var_d8, 
                        &var_58);
                    
                    if var_d8 == 0
                    {
                        let rax_7: i64 = *var_d8[8];
                        var_f8 = var_c8;
                        
                        if rax_7 == -0x8000000000000000
                        {
                            goto 'label_52ff27;
                        }
                        
                        var_108 = var_b8;
                        let mut var_118_1: i128 = var_f8;
                        var_120 = rax_7;
                        let mut rax_8: u64;
                        let mut rdx_3: i64;
                        rax_8 = uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::hb7c52e679da22dbe(&var_120);
                        
                        if rax_8 == 0 || r15_1 == 0 || rdx_3 == 0
                        {
                            goto 'label_52ff27;
                        }
                        
                        let var_a8: i64;
                        var_120 = var_a8;
                        let var_a0: i64;
                        var_118_1 = var_a0 + var_a8;
                        *var_118_1[8] = r15_1 - 1;
                        var_108 = rdx_3;
                        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h47d68c55ae7506b8(&var_d8, &var_120);
                        arg1[4] = var_c8;
                        *arg1.byte_offset(0x10) = var_d8;
                        arg1[1] = -0x8000000000000000;
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$uu_expr..ExprError$GT$$GT$::hec85356ab7c1c7ab(&var_d8);
                        'label_52ff27:
                        arg1[1] = -0x8000000000000000;
                        arg1[2] = 0;
                        arg1[3] = 1;
                        arg1[4] = 0;
                    }
                    
                    *arg1 = 0;
                }
                else
                {
                    zmm0_2 = var_78;
                    zmm1_2 = var_108;
                    'label_52fe26:
                    *arg1.byte_offset(0x18) = zmm1_2;
                    *arg1.byte_offset(8) = zmm0_2;
                    *arg1 = 1;
                }
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_b0);
            }
            else
            {
                zmm0_1 = var_98;
                zmm1_1 = var_108;
                'label_52fc8a:
                *arg1.byte_offset(0x18) = zmm1_1;
                *arg1.byte_offset(8) = zmm0_1;
                *arg1 = 1;
            }
        }
        3 =>
        {
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_120, *arg2.byte_offset(8), 
                rdx, &jump_table_45f090);
            let cond:1_1: bool = var_120 == 0;
            let mut var_38: i128 = var_118;
            
            if !cond:1_1
            {
                zmm0_1 = var_38;
                zmm1_1 = var_108;
                goto 'label_52fc8a;
            }
            
            let var_f0: i64;
            let var_e8: i64;
            _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_d8, 
                _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(var_f0, var_e8 + var_f0, 
                    uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_f8, 
                        &var_38)));
            let zmm0_4: i128 = var_d8;
            *arg1.byte_offset(0x18) = var_c8;
            *arg1.byte_offset(8) = zmm0_4;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_f8);
        }
    }
    
    arg1
}
