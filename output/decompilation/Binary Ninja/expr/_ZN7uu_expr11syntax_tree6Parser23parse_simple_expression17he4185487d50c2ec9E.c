
  int128_t* uu_expr::syntax_tree::Parser::parse_simple_expression::he4185487d50c2ec9(int64_t* arg1, int64_t* arg2)

{
    int128_t* result_1;
    uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&result_1, arg2);
    int128_t* result = result_1;
    int128_t* result_2;
    uint64_t var_108;
    int64_t var_100;
    int64_t rcx_1;
    
    if (result != 7)
    {
        rcx_1 = var_100;
        arg1[1] = result;
        arg1[2] = result_2;
        arg1[3] = var_108;
        label_530619:
        arg1[4] = rcx_1;
        *arg1 = 1;
        return result;
    }
    
    int128_t var_e8_2;
    int128_t var_d8_2;
    int128_t var_98;
    int128_t var_e8_1;
    int128_t var_d8_1;
    int128_t var_c8;
    int32_t var_a0;
    char var_9c;
    uint64_t rcx_2;
    char rdx_1;
    char rsi_9;
    char rdi_13;
    int128_t* result_4;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "matchsubstrindexlength()", 5))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "substrindexlength()", 6))
        {
            result =
                uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
            var_e8_1 = result_2;
            var_d8_1 = var_100;
            
            if (result_1)
                goto label_530819;
            
            int128_t var_68 = var_e8_1;
            uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
            int128_t zmm0_3 = result_2;
            int128_t zmm1_3 = var_100;
            
            if (result_1)
            {
                *(arg1 + 0x18) = zmm1_3;
                *(arg1 + 8) = zmm0_3;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_68);
            }
            
            var_98 = zmm0_3;
            uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
            int128_t zmm0_6 = result_2;
            int128_t zmm1_6 = var_100;
            
            if (result_1)
            {
                *(arg1 + 0x18) = zmm1_6;
                *(arg1 + 8) = zmm0_6;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(
                    &var_98);
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_68);
            }
            
            var_c8 = zmm0_6;
            var_108 = var_d8_1;
            result_1 = var_68;
            int128_t* result_7 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            result_4 = result_7;
            int128_t* result_10 = result_7;
            var_108 = zmm1_3;
            result_1 = var_98;
            int128_t* result_3 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            int128_t var_e8_4;
            var_e8_4 = result_3;
            var_108 = zmm1_6;
            result_1 = var_c8;
            uint64_t rax_9;
            rax_9 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            rcx_2 = rax_9;
            rdx_1 = 2;
            result = result_3;
            goto label_530b17;
        }
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "indexlength()", 5))
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "length()", 6))
            {
                result = uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(
                    &result_1, arg2);
                var_e8_1 = result_2;
                var_d8_1 = var_100;
                
                if (!result_1)
                {
                    int128_t var_38_1 = var_d8_1;
                    int128_t var_48 = var_e8_1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&var_48);
                    result_4 = result;
                    rdx_1 = 3;
                    goto label_530b17;
                }
                
                goto label_530819;
            }
            
            uint64_t rdx_2;
            int128_t* result_9;
            int64_t* rdi_20;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "+-*/%:matchsubstrindexlength()", 1))
            {
                uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&result_1, arg2);
                result = result_1;
                result_9 = result_2;
                rdx_2 = var_108;
                
                if (result != 7)
                {
                    rcx_1 = var_100;
                    arg1[1] = result;
                    arg1[2] = result_9;
                    arg1[3] = rdx_2;
                    goto label_530619;
                }
                
                rdi_20 = &result_1;
                goto label_530a71;
            }
            
            rdi_20 = &result_1;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "()", 1))
            {
                result_9 = result_2;
                rdx_2 = var_108;
                label_530a71:
                rsi_9 =
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(
                    rdi_20, result_9, rdx_2);
                result_4 = result_1;
                result = result_2;
                rcx_2 = var_108;
                rdx_1 = 0;
                goto label_530b17;
            }
            
            result =
                uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(rdi_20, arg2);
            var_e8_1 = result_2;
            var_d8_1 = var_100;
            
            if (result_1)
                goto label_530819;
            
            var_c8 = var_e8_1;
            uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&result_1, arg2);
            int128_t* result_8 = result_1;
            int64_t rax_10;
            int64_t rcx_3;
            
            if (result_8 != 7)
            {
                rax_10 = var_100;
                arg1[1] = result_8;
                arg1[2] = result_2;
                arg1[3] = var_108;
                rcx_3 = 0x20;
            }
            else
            {
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, ")", 1))
                {
                    rdx_1 = var_c8;
                    rdi_13 = *var_c8[1];
                    rsi_9 = *var_c8[2];
                    var_a0 = *var_c8[3];
                    var_9c = *var_c8[7];
                    result_4 = *var_c8[8];
                    result = var_d8_1;
                    rcx_2 = *var_d8_1[8];
                    goto label_530b17;
                }
                
                int64_t rsi_19 = arg2[1];
                int64_t rdi_31 = arg2[2] - 1;
                
                if (rdi_31 >= rsi_19)
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_31, rsi_19);
                    /* no return */
                }
                
                int64_t* rax_11 = *arg2;
                int64_t rdi_32 = rdi_31 << 4;
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(
                    &result_1, *(rax_11 + rdi_32), *(rax_11 + rdi_32 + 8));
                arg1[4] = var_108;
                *(arg1 + 0x10) = result_1;
                rax_10 = 6;
                rcx_3 = 8;
            }
            
            *(arg1 + rcx_3) = rax_10;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(
                &var_c8);
        }
        
        result = uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
        var_e8_1 = result_2;
        var_d8_1 = var_100;
        
        if (result_1)
            goto label_530819;
        
        var_98 = var_e8_1;
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
        var_e8_2 = result_2;
        var_d8_2 = var_100;
        
        if (!result_1)
        {
            var_c8 = var_e8_2;
            var_108 = var_d8_1;
            result_1 = var_98;
            int128_t* result_5 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            result_4 = result_5;
            var_e8_2 = result_5;
            var_108 = var_d8_2;
            result_1 = var_c8;
            result = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            rdi_13 = 2;
            rsi_9 = 1;
            rdx_1 = 1;
            goto label_530b17;
        }
    }
    else
    {
        result = uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
        var_e8_1 = result_2;
        var_d8_1 = var_100;
        
        if (result_1)
        {
            label_530819:
            *(arg1 + 0x18) = var_d8_1;
            *(arg1 + 8) = var_e8_1;
            *arg1 = 1;
            return result;
        }
        
        var_98 = var_e8_1;
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
        var_e8_2 = result_2;
        var_d8_2 = var_100;
        
        if (!result_1)
        {
            var_c8 = var_e8_2;
            var_108 = var_d8_1;
            result_1 = var_98;
            int128_t* result_6 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            result_4 = result_6;
            var_e8_2 = result_6;
            var_108 = var_d8_2;
            result_1 = var_c8;
            result = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            rdx_1 = 1;
            rdi_13 = 2;
            rsi_9 = 0;
            label_530b17:
            arg1[1] = rdx_1;
            *(arg1 + 9) = rdi_13;
            *(arg1 + 0xa) = rsi_9;
            *(arg1 + 0xb) = var_a0;
            *(arg1 + 0xf) = var_9c;
            arg1[2] = result_4;
            arg1[3] = result;
            arg1[4] = rcx_2;
            *arg1 = 0;
            return result;
        }
    }
    *(arg1 + 0x18) = var_d8_2;
    *(arg1 + 8) = var_e8_2;
    *arg1 = 1;
    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(
        &var_98);
}
