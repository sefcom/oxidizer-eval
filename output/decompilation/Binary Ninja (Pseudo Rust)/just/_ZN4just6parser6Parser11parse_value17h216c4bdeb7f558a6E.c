
  fn just::parser::Parser::parse_value::h216c4bdeb7f558a6(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let rax: i8 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x21);
    let mut rax_1: i8;
    
    if rax == 0
    {
        rax_1 = just::parser::Parser::next_is_shell_expanded_string::h8493042b5ebe3556(arg2);
    }
    
    let mut result: u64;
    let mut var_3b8: i128;
    let mut var_3a8_2: i128;
    let mut var_398_2: i128;
    let mut var_388_1: i128;
    let mut result_1: u64;
    let mut var_360: i128;
    let var_350: i128;
    let var_340: i128;
    let var_330: i128;
    let result_4: u64;
    let result_2: i8;
    let var_317: i32;
    let var_314: i32;
    let mut rcx_11: i32;
    let mut zmm0_1: i128;
    
    if rax == 0 && rax_1 == 0
    {
        let mut var_2b8: i128;
        
        if just::parser::Parser::next_is::hc7c4171067e02951(arg2, 3) == 0
        {
            let mut var_3a8_4: i128;
            let mut var_398_4: i128;
            let mut var_388_3: i128;
            let var_308: i128;
            let var_2f8: i128;
            let var_2e8: i64;
            let mut zmm0_7: i128;
            
            if just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18) == 0
            {
                let rdi_18: *mut i64 = &var_360;
                
                if just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x1c) == 0
                {
                    result =
                        just::parser::Parser::unexpected_token::hbee08644eef5d075(rdi_18, arg2);
                    let zmm0_8: i128 = result_2;
                    result_1 = zmm0_8;
                    let zmm1_7: i128 = var_360;
                    let var_388_4: i128 = var_330;
                    let var_398_5: i128 = var_340;
                    let var_3a8_5: i128 = var_350;
                    var_3b8 = zmm1_7;
                    *arg1.byte_offset(0x48) = zmm0_8;
                    *arg1.byte_offset(0x38) = var_330;
                    *arg1.byte_offset(0x28) = var_340;
                    *arg1.byte_offset(0x18) = var_350;
                    *arg1.byte_offset(8) = zmm1_7;
                    *arg1 = 0x12;
                }
                else
                {
                    just::parser::Parser::presume::he2055272497a907b(rdi_18, arg2, 0x1c);
                    result = result_2;
                    
                    if result != 0x25
                    {
                        'label_67d1c6:
                        let rcx_6: i64 = var_360;
                        let zmm0_4: i128 = var_360;
                        var_3b8 = *result_4[1];
                        *var_3b8[3] = *result_4[4];
                        *arg1.byte_offset(0x54) = var_314;
                        *arg1.byte_offset(0x51) = var_317;
                        let rdi_24: i32 = var_3b8;
                        *arg1.byte_offset(0x4c) = *var_3b8[3];
                        *arg1.byte_offset(0x49) = rdi_24;
                        arg1[1] = rcx_6;
                        *arg1.byte_offset(0x10) = zmm0_4;
                        *arg1.byte_offset(0x20) = var_350;
                        *arg1.byte_offset(0x30) = var_340;
                        arg1[8] = *var_330[8];
                        arg1[9] = result_4;
                        arg1[0xa] = result;
                        *arg1 = 0x12;
                    }
                    else
                    {
                        just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_360, arg2);
                        result = var_360;
                        var_3b8 = var_360;
                        var_3a8_4 = var_350;
                        var_398_4 = var_340;
                        var_388_3 = var_330;
                        result_1 = result_2;
                        
                        if result != 0x12
                        {
                            let var_38_1: i64 = var_2e8;
                            let var_48_1: i128 = var_2f8;
                            let var_58_1: i128 = var_308;
                            let mut result_3: u64 = result;
                            let var_a8_1: i128 = var_3b8;
                            let var_98_1: i128 = var_3a8_4;
                            let var_88_1: i128 = var_398_4;
                            let var_78_1: i128 = var_388_3;
                            let var_68_1: i128 = result_1;
                            let rax_19: u64 =
                                alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&result_3);
                            var_2b8 = rax_19;
                            just::parser::Parser::expect::h35e1151927597ac7(&var_360, arg2, 0x1d);
                            result = result_2;
                            
                            if result != 0x25
                            {
                                let rcx_14: i64 = var_360;
                                let zmm0_11: i128 = var_360;
                                var_3b8 = *result_4[1];
                                *var_3b8[3] = *result_4[4];
                                *arg1.byte_offset(0x54) = var_314;
                                *arg1.byte_offset(0x51) = var_317;
                                let rdi_41: i32 = var_3b8;
                                *arg1.byte_offset(0x4c) = *var_3b8[3];
                                *arg1.byte_offset(0x49) = rdi_41;
                                arg1[1] = rcx_14;
                                *arg1.byte_offset(0x10) = zmm0_11;
                                *arg1.byte_offset(0x20) = var_350;
                                *arg1.byte_offset(0x30) = var_340;
                                arg1[8] = *var_330[8];
                                arg1[9] = result_4;
                                arg1[0xa] = result;
                                *arg1 = 0x12;
                                return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_2b8);
                            }
                            
                            *arg1 = 0xd;
                            arg1[1] = rax_19;
                        }
                        else
                        {
                            'label_67d08a:
                            *arg1.byte_offset(0x48) = result_1;
                            zmm0_7 = var_3b8;
                            *arg1.byte_offset(0x38) = var_388_3;
                            *arg1.byte_offset(0x28) = var_398_4;
                            *arg1.byte_offset(0x18) = var_3a8_4;
                            *arg1.byte_offset(8) = zmm0_7;
                            *arg1 = 0x12;
                        }
                    }
                }
            }
            else
            {
                just::parser::Parser::accepted_keyword::h41084b1fcaf79f7b(&var_360, arg2, 3);
                result = var_360;
                
                if result_2 != 0x25
                {
                    arg1[9] = result_4;
                    let zmm0_3: i128 = var_360;
                    *arg1.byte_offset(0x39) = var_330;
                    *arg1.byte_offset(0x29) = var_340;
                    *arg1.byte_offset(0x19) = var_350;
                    *arg1.byte_offset(9) = zmm0_3;
                    *arg1.byte_offset(0x51) = var_317;
                    *arg1.byte_offset(0x54) = var_314;
                    arg1[1] = result;
                    arg1[0xa] = result_2;
                    *arg1 = 0x12;
                }
                else
                {
                    let rdi_13: *mut i128 = &var_360;
                    let mut var_268: i128;
                    
                    if (result & 1) == 0
                    {
                        just::parser::Parser::parse_name::he2804e36e47b7e10(rdi_13, arg2);
                        result = result_2;
                        var_3b8 = var_360;
                        var_3a8_2 = var_350;
                        var_398_2 = var_340;
                        var_388_1 = var_330;
                        result_1 = result_4;
                        
                        if result != 0x25
                        {
                            goto 'label_67d501;
                        }
                        
                        zmm0_1 = var_3b8;
                        let mut var_218: i128 = zmm0_1;
                        var_2b8 = zmm0_1;
                        let var_2a8_2: i128 = var_3a8_2;
                        let var_298_2: i128 = var_398_2;
                        let var_288_2: i128 = var_388_1;
                        let result_6: u64 = result_1;
                        
                        if just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x1c) == 0
                        {
                            result = result_1;
                            arg1[9] = result;
                            let zmm0_9: i128 = var_218;
                            *arg1.byte_offset(0x38) = var_388_1;
                            *arg1.byte_offset(0x28) = var_398_2;
                            *arg1.byte_offset(0x18) = var_3a8_2;
                            *arg1.byte_offset(8) = zmm0_9;
                            *arg1 = 0x11;
                        }
                        else
                        {
                            just::parser::Parser::parse_sequence::h30bb3b312b01651e(&var_360, arg2);
                            result = result_2;
                            
                            if result != 0x25
                            {
                                goto 'label_67d471;
                            }
                            
                            zmm0_1 = var_360;
                            let mut rax_16: *mut c_void;
                            let mut rdx_11: u64;
                            rax_16 = just::token::Token::lexeme::h66587cdf67f63270(&var_2b8);
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_16, rdx_11, "whichwithout_extensioncacheconfi…", 5) != 0
                            {
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(arg2.byte_offset(0x68), 4);
                            }
                            
                            let var_258_1: i64 = var_350;
                            var_268 = zmm0_1;
                            just::thunk::Thunk::resolve::h571e6f3d582c322b(&var_360, &var_218, 
                                &var_268);
                            result = var_360;
                            var_3b8 = var_360;
                            var_3a8_4 = var_350;
                            var_398_4 = var_340;
                            var_388_3 = var_330;
                            result_1 = result_2;
                            
                            if result == 7
                            {
                                goto 'label_67d08a;
                            }
                            
                            arg1[0xf] = var_2e8;
                            *arg1.byte_offset(0x68) = var_2f8;
                            *arg1.byte_offset(0x58) = var_308;
                            *arg1.byte_offset(0x48) = result_1;
                            zmm0_7 = var_3b8;
                            *arg1.byte_offset(0x38) = var_388_3;
                            *arg1.byte_offset(0x28) = var_398_4;
                            *arg1.byte_offset(0x18) = var_3a8_4;
                            *arg1.byte_offset(8) = zmm0_7;
                            *arg1 = result;
                        }
                    }
                    else
                    {
                        just::parser::Parser::expect::h35e1151927597ac7(rdi_13, arg2, 0x1c);
                        result = result_2;
                        
                        if result != 0x25
                        {
                            goto 'label_67d1c6;
                        }
                        
                        just::parser::Parser::parse_condition::h084dccdf2ccc72f1(&var_360, arg2);
                        result = result_2;
                        
                        if result != 0x25
                        {
                            goto 'label_67d471;
                        }
                        
                        var_2b8 = var_360;
                        just::parser::Parser::expect::h35e1151927597ac7(&var_360, arg2, 0xf);
                        
                        if result_2 != 0x25
                        {
                            let rcx_15: i64 = var_360;
                            let zmm0_5: i128 = var_360;
                            var_3b8 = *result_4[1];
                            *var_3b8[3] = *result_4[4];
                            *arg1.byte_offset(0x54) = var_314;
                            *arg1.byte_offset(0x51) = var_317;
                            let rdi_47: i32 = var_3b8;
                            *arg1.byte_offset(0x4c) = *var_3b8[3];
                            *arg1.byte_offset(0x49) = rdi_47;
                            arg1[1] = rcx_15;
                            *arg1.byte_offset(0x10) = zmm0_5;
                            *arg1.byte_offset(0x20) = var_350;
                            *arg1.byte_offset(0x30) = var_340;
                            arg1[8] = *var_330[8];
                            arg1[9] = result_4;
                            arg1[0xa] = result_2;
                            *arg1 = 0x12;
                            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(&var_2b8);
                        }
                        
                        just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_360, arg2);
                        let rax_11: i64 = var_360;
                        var_3b8 = var_360;
                        result_1 = result_2;
                        
                        if rax_11 == 0x12
                        {
                            *arg1.byte_offset(0x48) = result_1;
                            let zmm0_6: i128 = var_3b8;
                            *arg1.byte_offset(0x38) = var_330;
                            *arg1.byte_offset(0x28) = var_340;
                            *arg1.byte_offset(0x18) = var_350;
                            *arg1.byte_offset(8) = zmm0_6;
                            *arg1 = 0x12;
                            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(&var_2b8);
                        }
                        
                        let var_b8_1: i64 = var_2e8;
                        let var_c8_1: i128 = var_2f8;
                        let var_d8_1: i128 = var_308;
                        let mut var_130: i64 = rax_11;
                        let var_128_1: i128 = var_3b8;
                        let var_118_1: i128 = var_350;
                        let var_108_1: i128 = var_340;
                        let var_f8_1: i128 = var_330;
                        let var_e8_1: i128 = result_1;
                        let rax_22: u64 =
                            alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_130);
                        var_268 = rax_22;
                        just::parser::Parser::expect::h35e1151927597ac7(&var_360, arg2, 0x1d);
                        
                        if result_2 != 0x25
                        {
                            let rcx_17: i64 = var_360;
                            let zmm0_14: i128 = var_360;
                            var_3b8 = *result_4[1];
                            *var_3b8[3] = *result_4[4];
                            *arg1.byte_offset(0x54) = var_314;
                            *arg1.byte_offset(0x51) = var_317;
                            let rdi_55: i32 = var_3b8;
                            *arg1.byte_offset(0x4c) = *var_3b8[3];
                            *arg1.byte_offset(0x49) = rdi_55;
                            arg1[1] = rcx_17;
                            *arg1.byte_offset(0x10) = zmm0_14;
                            *arg1.byte_offset(0x20) = var_350;
                            *arg1.byte_offset(0x30) = var_340;
                            arg1[8] = *var_330[8];
                            arg1[9] = result_4;
                            arg1[0xa] = result_2;
                            *arg1 = 0x12;
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_268);
                            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(&var_2b8);
                        }
                        
                        result = var_350;
                        arg1[4] = result;
                        *arg1.byte_offset(0x10) = var_2b8;
                        *arg1 = 8;
                        arg1[1] = rax_22;
                    }
                }
            }
        }
        else
        {
            just::parser::Parser::next::h26f20bd451ef506f(&var_360, arg2);
            result = result_2;
            var_3b8 = var_360;
            var_3a8_2 = var_350;
            var_398_2 = var_340;
            var_388_1 = var_330;
            result_1 = result_4;
            
            if result != 0x25
            {
                'label_67d501:
                rcx_11 = var_317;
                *arg1.byte_offset(0x54) = var_314;
                goto 'label_67d4b5;
            }
            
            zmm0_1 = var_3b8;
            let mut var_178: i128 = zmm0_1;
            let var_168_1: i128 = var_3a8_2;
            let var_158_1: i128 = var_398_2;
            let var_148_1: i128 = var_388_1;
            let result_7: u64 = result_1;
            var_2b8 = zmm0_1;
            let var_2a8_1: i128 = var_3a8_2;
            let var_298_1: i128 = var_398_2;
            let var_288_1: i128 = var_388_1;
            let result_5: u64 = result_1;
            just::string_kind::StringKind::from_string_or_backtick::h6eb193e734499b6a(&var_360, 
                &var_178);
            let r12_1: i8 = var_360;
            result = result_2;
            
            if result != 0x25
            {
                let rcx_5: i8 = *var_360[1];
                arg1[9] = result_4;
                *arg1.byte_offset(0x3a) = var_330;
                *arg1.byte_offset(0x2a) = var_340;
                *arg1.byte_offset(0x1a) = var_350;
                *arg1.byte_offset(0xa) = var_360;
                *arg1.byte_offset(0x51) = var_317;
                *arg1.byte_offset(0x54) = var_314;
                arg1[1] = r12_1;
                *arg1.byte_offset(9) = rcx_5;
                arg1[0xa] = result;
                *arg1 = 0x12;
            }
            else
            {
                let mut rax_4: *mut c_void;
                let mut rdx_1: i64;
                rax_4 = just::token::Token::lexeme::h66587cdf67f63270(&var_2b8);
                let rax_5: u64 = r12_1;
                let r15_3: i64 = ((rax_5 - 1) | 0xfffffffffffffffd)
                    + just::token::Token::lexeme::h66587cdf67f63270(&var_2b8);
                let mut rax_6: *mut c_void;
                let mut rdx_4: u64;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f((rax_5 << 1) + 1, r15_3, rax_4, rdx_1);
                
                if rax_6 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(rax_4, rdx_1, (rax_5 << 1) + 1, 
                        r15_3);
                    /* no return */
                }
                
                just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_360, arg2);
                result = result_2;
                var_3b8 = var_360;
                var_3a8_2 = var_350;
                var_398_2 = var_340;
                var_388_1 = var_330;
                result_1 = result_4;
                
                if result != 0x25
                {
                    goto 'label_67d501;
                }
                
                zmm0_1 = var_3b8;
                let mut var_2d0: i128;
                
                if (r12_1 & 1) == 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_2d0, rax_6, rdx_4);
                }
                else
                {
                    just::unindent::unindent::h52c9ed21e4a911ea(&var_2d0, rax_6, rdx_4);
                }
                
                let var_2c8: i64;
                let var_2c0: i64;
                
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(
                    var_2c8, var_2c0, "#!internal error: entered unreac…", 2) != 0
                {
                    var_360 = -0x7fffffffffffffea;
                    just::token::Token::error::h986494da066a4455(&var_3b8, &var_2b8, &var_360);
                    *arg1.byte_offset(0x48) = result_1;
                    let zmm0_13: i128 = var_3b8;
                    *arg1.byte_offset(0x38) = var_388_1;
                    *arg1.byte_offset(0x28) = var_398_2;
                    *arg1.byte_offset(0x18) = var_3a8_2;
                    *arg1.byte_offset(8) = zmm0_13;
                    *arg1 = 0x12;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_2d0);
                }
                
                arg1[3] = var_2c0;
                *arg1.byte_offset(8) = var_2d0;
                *arg1.byte_offset(0x20) = zmm0_1;
                *arg1.byte_offset(0x30) = var_3a8_2;
                *arg1.byte_offset(0x40) = var_398_2;
                *arg1.byte_offset(0x50) = var_388_1;
                result = result_1;
                arg1[0xc] = result;
                *arg1 = 9;
            }
        }
    }
    else
    {
        just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_360, arg2);
        result = result_2;
        
        if result != 0x25
        {
            'label_67d471:
            result_1 = result_4;
            var_388_1 = var_330;
            var_398_2 = var_340;
            var_3a8_2 = var_350;
            var_3b8 = var_360;
            *arg1.byte_offset(0x54) = var_314;
            rcx_11 = var_317;
            'label_67d4b5:
            *arg1.byte_offset(0x51) = rcx_11;
            arg1[9] = result_1;
            zmm0_1 = var_3b8;
            *arg1.byte_offset(0x38) = var_388_1;
            *arg1.byte_offset(0x28) = var_398_2;
            *arg1.byte_offset(0x18) = var_3a8_2;
            *arg1.byte_offset(8) = zmm0_1;
            arg1[0xa] = result;
            *arg1 = 0x12;
        }
        else
        {
            zmm0_1 = var_360;
            let var_398_1: i128 = var_340;
            let var_3a8_1: i128 = var_350;
            var_3b8 = zmm0_1;
            *arg1.byte_offset(0x28) = var_340;
            *arg1.byte_offset(0x18) = var_350;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = 0x10;
        }
    }
    result
}
