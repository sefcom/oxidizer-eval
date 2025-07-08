
  int64_t* uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(int64_t* arg1, char* arg2)

{
    int64_t var_120;
    int128_t var_118;
    int128_t var_108;
    int128_t var_f8;
    int128_t var_d8;
    int128_t var_c8;
    int64_t rdx;
    int128_t zmm0_1;
    int128_t zmm1_1;
    
    switch (*arg2)
    {
        case 0:
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &arg1[2], &arg2[8]);
            arg1[1] = -0x8000000000000000;
            *arg1 = 0;
            break;
        }
        case 1:
        {
            uu_expr::syntax_tree::BinOp::eval::h63e87d3d608dec64(arg1, arg2[1], arg2[2], 
                *(arg2 + 8), *(arg2 + 0x10));
            break;
        }
        case 2:
        {
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_120, *(arg2 + 8), rdx, 
                &jump_table_45f090);
            bool cond:0_1 = !var_120;
            int128_t var_98 = var_118;
            
            if (cond:0_1)
            {
                void var_b0;
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_b0, &var_98);
                uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_120, *(arg2 + 0x10));
                bool cond:2_1 = !var_120;
                int128_t var_78 = var_118;
                int128_t zmm0_2;
                int128_t zmm1_2;
                
                if (cond:2_1)
                {
                    uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(&var_d8, 
                        &var_78);
                    int64_t var_b8;
                    int64_t r15_1;
                    
                    if (!var_d8)
                    {
                        int64_t rax_4 = *var_d8[8];
                        var_f8 = var_c8;
                        
                        if (rax_4 == -0x8000000000000000)
                            r15_1 = 0;
                        else
                        {
                            var_108 = var_b8;
                            var_118 = var_f8;
                            var_120 = rax_4;
                            uint64_t rax_5;
                            int64_t rdx_2;
                            rax_5 = uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::he3a282c97ff7c67e(&var_120);
                            
                            if (!rax_5)
                                r15_1 = 0;
                            else
                                r15_1 = rdx_2;
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$uu_expr..ExprError$GT$$GT$::hec85356ab7c1c7ab(&var_d8);
                        r15_1 = 0;
                    }
                    
                    uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_120, 
                        *(arg2 + 0x18));
                    bool cond:3_1 = !var_120;
                    int128_t var_58 = var_118;
                    
                    if (!cond:3_1)
                    {
                        zmm0_2 = var_58;
                        zmm1_2 = var_108;
                        goto label_52fe26;
                    }
                    
                    uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(&var_d8, 
                        &var_58);
                    
                    if (!var_d8)
                    {
                        int64_t rax_7 = *var_d8[8];
                        var_f8 = var_c8;
                        
                        if (rax_7 == -0x8000000000000000)
                            goto label_52ff27;
                        
                        var_108 = var_b8;
                        int128_t var_118_1 = var_f8;
                        var_120 = rax_7;
                        uint64_t rax_8;
                        int64_t rdx_3;
                        rax_8 = uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::hb7c52e679da22dbe(&var_120);
                        
                        if (!rax_8 || !r15_1 || !rdx_3)
                            goto label_52ff27;
                        
                        int64_t var_a8;
                        var_120 = var_a8;
                        int64_t var_a0;
                        var_118_1 = var_a0 + var_a8;
                        *var_118_1[8] = r15_1 - 1;
                        var_108 = rdx_3;
                        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h47d68c55ae7506b8(&var_d8, &var_120);
                        arg1[4] = var_c8;
                        *(arg1 + 0x10) = var_d8;
                        arg1[1] = -0x8000000000000000;
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$uu_expr..ExprError$GT$$GT$::hec85356ab7c1c7ab(&var_d8);
                        label_52ff27:
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
                    label_52fe26:
                    *(arg1 + 0x18) = zmm1_2;
                    *(arg1 + 8) = zmm0_2;
                    *arg1 = 1;
                }
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_b0);
            }
            else
            {
                zmm0_1 = var_98;
                zmm1_1 = var_108;
                label_52fc8a:
                *(arg1 + 0x18) = zmm1_1;
                *(arg1 + 8) = zmm0_1;
                *arg1 = 1;
            }
            break;
        }
        case 3:
        {
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_120, *(arg2 + 8), rdx, 
                &jump_table_45f090);
            bool cond:1_1 = !var_120;
            int128_t var_38 = var_118;
            
            if (!cond:1_1)
            {
                zmm0_1 = var_38;
                zmm1_1 = var_108;
                goto label_52fc8a;
            }
            
            int64_t var_f0;
            int64_t var_e8;
            _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_d8, 
                _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(var_f0, var_e8 + var_f0, 
                    uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_f8, 
                        &var_38)));
            int128_t zmm0_4 = var_d8;
            *(arg1 + 0x18) = var_c8;
            *(arg1 + 8) = zmm0_4;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_f8);
            break;
        }
    }
    
    return arg1;
}
