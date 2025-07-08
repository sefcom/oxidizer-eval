
  fn uu_expr::syntax_tree::Parser::parse_simple_expression::he4185487d50c2ec9(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let mut result_1: *mut i128;
    uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&result_1, arg2);
    let mut result: *mut i128 = result_1;
    let result_2: *mut i128;
    let mut var_108: u64;
    let var_100: i64;
    let mut rcx_1: i64;
    
    if result != 7
    {
        rcx_1 = var_100;
        arg1[1] = result;
        arg1[2] = result_2;
        arg1[3] = var_108;
        'label_530619:
        arg1[4] = rcx_1;
        *arg1 = 1;
        return result;
    }
    
    let mut var_e8_2: i128;
    let mut var_d8_2: i128;
    let mut var_98: i128;
    let mut var_e8_1: i128;
    let mut var_d8_1: i128;
    let mut var_c8: i128;
    let mut var_a0: i32;
    let mut var_9c: i8;
    let mut rcx_2: u64;
    let mut rdx_1: i8;
    let mut rsi_9: i8;
    let mut rdi_13: i8;
    let mut result_4: *mut i128;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "matchsubstrindexlength()", 5) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "substrindexlength()", 6) != 0
        {
            result =
                uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
            var_e8_1 = result_2;
            var_d8_1 = var_100;
            
            if result_1 != 0
            {
                goto 'label_530819;
            }
            
            let mut var_68: i128 = var_e8_1;
            uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
            let zmm0_3: i128 = result_2;
            let zmm1_3: i128 = var_100;
            
            if result_1 != 0
            {
                *arg1.byte_offset(0x18) = zmm1_3;
                *arg1.byte_offset(8) = zmm0_3;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_68);
            }
            
            var_98 = zmm0_3;
            uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
            let zmm0_6: i128 = result_2;
            let zmm1_6: i128 = var_100;
            
            if result_1 != 0
            {
                *arg1.byte_offset(0x18) = zmm1_6;
                *arg1.byte_offset(8) = zmm0_6;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(
                    &var_98);
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_68);
            }
            
            var_c8 = zmm0_6;
            var_108 = var_d8_1;
            result_1 = var_68;
            let result_7: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            result_4 = result_7;
            let result_10: *mut i128 = result_7;
            var_108 = zmm1_3;
            result_1 = var_98;
            let result_3: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            let mut var_e8_4: i128;
            var_e8_4 = result_3;
            var_108 = zmm1_6;
            result_1 = var_c8;
            let mut rax_9: u64;
            rax_9 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            rcx_2 = rax_9;
            rdx_1 = 2;
            result = result_3;
            goto 'label_530b17;
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "indexlength()", 5) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "length()", 6) != 0
            {
                result = uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(
                    &result_1, arg2);
                var_e8_1 = result_2;
                var_d8_1 = var_100;
                
                if result_1 == 0
                {
                    let var_38_1: i128 = var_d8_1;
                    let mut var_48: i128 = var_e8_1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&var_48);
                    result_4 = result;
                    rdx_1 = 3;
                    goto 'label_530b17;
                }
                
                goto 'label_530819;
            }
            
            let mut rdx_2: u64;
            let mut result_9: *mut i128;
            let mut rdi_20: *mut i64;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "+-*/%:matchsubstrindexlength()", 1) != 0
            {
                uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&result_1, arg2);
                result = result_1;
                result_9 = result_2;
                rdx_2 = var_108;
                
                if result != 7
                {
                    rcx_1 = var_100;
                    arg1[1] = result;
                    arg1[2] = result_9;
                    arg1[3] = rdx_2;
                    goto 'label_530619;
                }
                
                rdi_20 = &result_1;
                goto 'label_530a71;
            }
            
            rdi_20 = &result_1;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, "()", 1) == 0
            {
                result_9 = result_2;
                rdx_2 = var_108;
                'label_530a71:
                rsi_9 =
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(
                    rdi_20, result_9, rdx_2);
                result_4 = result_1;
                result = result_2;
                rcx_2 = var_108;
                rdx_1 = 0;
                goto 'label_530b17;
            }
            
            result =
                uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(rdi_20, arg2);
            var_e8_1 = result_2;
            var_d8_1 = var_100;
            
            if result_1 != 0
            {
                goto 'label_530819;
            }
            
            var_c8 = var_e8_1;
            uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&result_1, arg2);
            let result_8: *mut i128 = result_1;
            let mut rax_10: i64;
            let mut rcx_3: i64;
            
            if result_8 != 7
            {
                rax_10 = var_100;
                arg1[1] = result_8;
                arg1[2] = result_2;
                arg1[3] = var_108;
                rcx_3 = 0x20;
            }
            else
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(result_2, var_108, ")", 1) != 0
                {
                    rdx_1 = var_c8;
                    rdi_13 = *var_c8[1];
                    rsi_9 = *var_c8[2];
                    var_a0 = *var_c8[3];
                    var_9c = *var_c8[7];
                    result_4 = *var_c8[8];
                    result = var_d8_1;
                    rcx_2 = *var_d8_1[8];
                    goto 'label_530b17;
                }
                
                let rsi_19: i64 = arg2[1];
                let rdi_31: i64 = arg2[2] - 1;
                
                if rdi_31 >= rsi_19
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_31, rsi_19);
                    /* no return */
                }
                
                let rax_11: *mut i64 = *arg2;
                let rdi_32: i64 = rdi_31 << 4;
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(
                    &result_1, *rax_11.byte_offset(rdi_32), 
                    *rax_11.byte_offset(rdi_32).byte_offset(8));
                arg1[4] = var_108;
                *arg1.byte_offset(0x10) = result_1;
                rax_10 = 6;
                rcx_3 = 8;
            }
            
            *arg1.byte_offset(rcx_3) = rax_10;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(
                &var_c8);
        }
        
        result = uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
        var_e8_1 = result_2;
        var_d8_1 = var_100;
        
        if result_1 != 0
        {
            goto 'label_530819;
        }
        
        var_98 = var_e8_1;
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
        var_e8_2 = result_2;
        var_d8_2 = var_100;
        
        if result_1 == 0
        {
            var_c8 = var_e8_2;
            var_108 = var_d8_1;
            result_1 = var_98;
            let result_5: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            result_4 = result_5;
            var_e8_2 = result_5;
            var_108 = var_d8_2;
            result_1 = var_c8;
            result = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            rdi_13 = 2;
            rsi_9 = 1;
            rdx_1 = 1;
            goto 'label_530b17;
        }
    }
    else
    {
        result = uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
        var_e8_1 = result_2;
        var_d8_1 = var_100;
        
        if result_1 != 0
        {
            'label_530819:
            *arg1.byte_offset(0x18) = var_d8_1;
            *arg1.byte_offset(8) = var_e8_1;
            *arg1 = 1;
            return result;
        }
        
        var_98 = var_e8_1;
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&result_1, arg2);
        var_e8_2 = result_2;
        var_d8_2 = var_100;
        
        if result_1 == 0
        {
            var_c8 = var_e8_2;
            var_108 = var_d8_1;
            result_1 = var_98;
            let result_6: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            result_4 = result_6;
            var_e8_2 = result_6;
            var_108 = var_d8_2;
            result_1 = var_c8;
            result = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&result_1);
            rdx_1 = 1;
            rdi_13 = 2;
            rsi_9 = 0;
            'label_530b17:
            arg1[1] = rdx_1;
            *arg1.byte_offset(9) = rdi_13;
            *arg1.byte_offset(0xa) = rsi_9;
            *arg1.byte_offset(0xb) = var_a0;
            *arg1.byte_offset(0xf) = var_9c;
            arg1[2] = result_4;
            arg1[3] = result;
            arg1[4] = rcx_2;
            *arg1 = 0;
            return result;
        }
    }
    *arg1.byte_offset(0x18) = var_d8_2;
    *arg1.byte_offset(8) = var_e8_2;
    *arg1 = 1;
    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_98)
}
