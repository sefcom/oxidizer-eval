
  fn just::parser::Parser::parse_string_literal_token::h0d1e77bec93423b0(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let rax: i8 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18);
    let mut var_200: i128;
    let mut result: u64;
    
    if rax != 0
    {
        result = just::parser::Parser::expect_keyword::h29d7686c3c631ba9(&var_200, arg2, 0x1e);
    }
    
    let result_1: i8;
    let mut var_1f0: i128;
    let mut var_1e0: i128;
    let var_1d0: i128;
    let var_1c0: i64;
    
    if rax != 0 && result_1 != 0x25
    {
        *arg1.byte_offset(0x48) = var_1c0;
        let zmm0: i128 = var_200;
        *arg1.byte_offset(0x38) = var_1d0;
        *arg1.byte_offset(0x28) = var_1e0;
        *arg1.byte_offset(0x18) = var_1f0;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 1;
    }
    else
    {
        just::parser::Parser::expect::h35e1151927597ac7(&var_200, arg2, 0x21);
        result = result_1;
        let mut var_198: i128 = var_200;
        let var_188_1: i128 = var_1f0;
        let var_178_1: i128 = var_1e0;
        let var_1b7: i32;
        let mut zmm0_1: i128;
        
        if result != 0x25
        {
            *arg1.byte_offset(0x54) = var_1b7;
            *arg1.byte_offset(0x51) = var_1b7;
            arg1[9] = var_1c0;
            zmm0_1 = var_198;
            *arg1.byte_offset(0x38) = var_1d0;
            *arg1.byte_offset(0x28) = var_178_1;
            *arg1.byte_offset(0x18) = var_188_1;
            *arg1.byte_offset(8) = zmm0_1;
            arg1[0xa] = result;
            *arg1 = 1;
        }
        else
        {
            zmm0_1 = var_198;
            let mut var_128: i128 = zmm0_1;
            let mut var_78: i128 = zmm0_1;
            let var_68_1: i128 = var_188_1;
            let var_58_1: i128 = var_178_1;
            let var_48_1: i128 = var_1d0;
            let var_38_1: i64 = var_1c0;
            just::string_kind::StringKind::from_string_or_backtick::h6eb193e734499b6a(&var_200, 
                &var_128);
            let r12_1: i8 = var_200;
            result = result_1;
            
            if result != 0x25
            {
                let rcx_6: i8 = *var_200[1];
                arg1[9] = var_1c0;
                *arg1.byte_offset(0x3a) = var_1d0;
                *arg1.byte_offset(0x2a) = var_1e0;
                *arg1.byte_offset(0x1a) = var_1f0;
                *arg1.byte_offset(0xa) = var_200;
                *arg1.byte_offset(0x51) = var_1b7;
                *arg1.byte_offset(0x54) = var_1b7;
                arg1[1] = r12_1;
                *arg1.byte_offset(9) = rcx_6;
                arg1[0xa] = result;
                *arg1 = 1;
            }
            else
            {
                let rax_2: i8 = *var_200[1];
                let mut rax_4: *mut c_void;
                let mut rdx_1: i64;
                rax_4 = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
                let r15_2: *mut c_void =
                    just::token::Token::lexeme::h66587cdf67f63270(&var_78) - ((r12_1 << 1) + 1);
                let mut rax_5: *mut c_void;
                let mut rdx_4: u64;
                rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f((r12_1 << 1) + 1, r15_2, rax_4, rdx_1);
                
                if rax_5 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(rax_4, rdx_1, (r12_1 << 1) + 1, 
                        r15_2);
                    /* no return */
                }
                
                let mut var_140: i128;
                let rdi_7: *mut i128 = &var_140;
                let mut r15_3: i8;
                
                if (r12_1 & 1) != 0
                {
                    just::unindent::unindent::h52c9ed21e4a911ea(rdi_7, rax_5, rdx_4);
                    r15_3 = rax_2;
                    
                    if r15_3 == 1
                    {
                        goto 'label_67ddd8;
                    }
                    
                    goto 'label_67dc4c;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(rdi_7, rax_5, rdx_4);
                r15_3 = rax_2;
                let mut var_218: i128;
                let result_2: u64;
                
                if r15_3 == 1
                {
                    'label_67ddd8:
                    just::parser::Parser::cook_string::hac60a0f07317bc6b(&var_200, &var_128, 
                        *var_140[8], result_2);
                    let mut zmm0_4: i128;
                    
                    if result_1 != 0x25
                    {
                        var_198 = var_200;
                        *arg1.byte_offset(0x54) = var_1b7;
                        *arg1.byte_offset(0x51) = var_1b7;
                        arg1[9] = var_1c0;
                        zmm0_4 = var_198;
                        *arg1.byte_offset(0x38) = var_1d0;
                        *arg1.byte_offset(0x28) = var_1e0;
                        *arg1.byte_offset(0x18) = var_1f0;
                        *arg1.byte_offset(8) = zmm0_4;
                        arg1[0xa] = result_1;
                        *arg1 = 1;
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_140);
                    }
                    
                    var_218 = var_200;
                    
                    if rax != 0
                    {
                        goto 'label_67de10;
                    }
                    
                    zmm0_4 = var_218;
                    *arg1.byte_offset(8) = var_128;
                    *arg1.byte_offset(0x18) = var_188_1;
                    *arg1.byte_offset(0x28) = var_178_1;
                    *arg1.byte_offset(0x38) = var_1d0;
                    arg1[9] = var_1c0;
                    *arg1.byte_offset(0x50) = zmm0_4;
                    arg1[0xc] = var_1f0;
                    arg1[0xd] = rax_5;
                    arg1[0xe] = rdx_4;
                    arg1[0xf] = r12_1;
                    *arg1.byte_offset(0x79) = 1;
                    *arg1 = 0;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_140);
                }
                
                'label_67dc4c:
                var_218 = var_140;
                
                if rax != 0
                {
                    'label_67de10:
                    let mut var_d8: i64;
                    shellexpand::strings::funcs::full_with_context::hb4629816e4775ea2(&var_d8, 
                        &var_218);
                    let var_c8: i128;
                    let mut rax_9: i64;
                    let mut rdx_9: u64;
                    let mut rsi_8: i64;
                    
                    if !(0 + -(var_d8))
                    {
                        let var_b8: i128;
                        var_1e0 = var_b8;
                        var_1f0 = var_c8;
                        var_200 = var_d8;
                        var_200 = -0x7fffffffffffffcd;
                        just::token::Token::error::h986494da066a4455(&var_198, &var_78, &var_200);
                        rax_9 = var_198;
                        rsi_8 = *var_198[8];
                        rdx_9 = var_188_1;
                        let var_14f: i32;
                        let var_220_1: i32 = var_14f;
                        let var_150: i8;
                        
                        if var_150 == 0x25
                        {
                            if rax_9 != -0x8000000000000000
                            {
                                goto 'label_67dfd8;
                            }
                            
                            goto 'label_67dfbc;
                        }
                        
                        *arg1.byte_offset(0x40) = var_1d0;
                        *arg1.byte_offset(0x30) = var_178_1;
                        *arg1.byte_offset(0x20) = var_188_1;
                        *arg1.byte_offset(0x51) = var_14f;
                        *arg1.byte_offset(0x54) = var_14f;
                        arg1[1] = rax_9;
                        arg1[2] = rsi_8;
                        arg1[3] = rdx_9;
                        arg1[0xa] = var_150;
                        *arg1 = 1;
                        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_218);
                        
                        if r15_3 == 1
                        {
                            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_140);
                        }
                    }
                    else
                    {
                        let var_d0: i64;
                        rax_9 = var_d0;
                        rsi_8 = var_c8;
                        rdx_9 = *var_c8[8];
                        
                        if rax_9 != -0x8000000000000000
                        {
                            goto 'label_67dfd8;
                        }
                        
                        'label_67dfbc:
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_200, rsi_8, rdx_9);
                        rax_9 = var_200;
                        rsi_8 = *var_200[8];
                        rdx_9 = var_1f0;
                        'label_67dfd8:
                        arg1[9] = var_1c0;
                        let zmm0_5: i128 = var_128;
                        *arg1.byte_offset(0x38) = var_1d0;
                        *arg1.byte_offset(0x28) = var_178_1;
                        *arg1.byte_offset(0x18) = var_188_1;
                        *arg1.byte_offset(8) = zmm0_5;
                        arg1[0xa] = rax_9;
                        arg1[0xb] = rsi_8;
                        arg1[0xc] = rdx_9;
                        arg1[0xd] = rax_5;
                        arg1[0xe] = rdx_4;
                        arg1[0xf] = r12_1;
                        *arg1.byte_offset(0x79) = r15_3;
                        *arg1.byte_offset(0x7a) = rax;
                        *arg1 = 0;
                        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_218);
                        
                        if r15_3 == 1
                        {
                            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_140);
                        }
                    }
                }
                else
                {
                    let zmm0_3: i128 = var_218;
                    result = result_2;
                    *arg1.byte_offset(8) = var_128;
                    *arg1.byte_offset(0x18) = var_188_1;
                    *arg1.byte_offset(0x28) = var_178_1;
                    *arg1.byte_offset(0x38) = var_1d0;
                    arg1[9] = var_1c0;
                    *arg1.byte_offset(0x50) = zmm0_3;
                    arg1[0xc] = result;
                    arg1[0xd] = rax_5;
                    arg1[0xe] = rdx_4;
                    arg1[0xf] = r12_1;
                    *arg1.byte_offset(0x79) = r15_3;
                    *arg1.byte_offset(0x7a) = 0;
                    *arg1 = 0;
                }
            }
        }
    }
    result
}
