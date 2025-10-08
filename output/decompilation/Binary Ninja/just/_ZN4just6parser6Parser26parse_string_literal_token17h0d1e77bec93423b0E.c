
  uint64_t just::parser::Parser::parse_string_literal_token::h0d1e77bec93423b0(int64_t* arg1, void* arg2)

{
    char rax = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18);
    int128_t var_200;
    uint64_t result;
    
    if (rax)
        result = just::parser::Parser::expect_keyword::h29d7686c3c631ba9(&var_200, arg2, 0x1e);
    
    char result_1;
    int128_t var_1f0;
    int128_t var_1e0;
    int128_t var_1d0;
    int64_t var_1c0;
    
    if (rax && result_1 != 0x25)
    {
        *(arg1 + 0x48) = var_1c0;
        int128_t zmm0 = var_200;
        *(arg1 + 0x38) = var_1d0;
        *(arg1 + 0x28) = var_1e0;
        *(arg1 + 0x18) = var_1f0;
        *(arg1 + 8) = zmm0;
        *arg1 = 1;
    }
    else
    {
        just::parser::Parser::expect::h35e1151927597ac7(&var_200, arg2, 0x21);
        result = result_1;
        int128_t var_198 = var_200;
        int128_t var_188_1 = var_1f0;
        int128_t var_178_1 = var_1e0;
        int32_t var_1b7;
        int128_t zmm0_1;
        
        if (result != 0x25)
        {
            *(arg1 + 0x54) = var_1b7;
            *(arg1 + 0x51) = var_1b7;
            arg1[9] = var_1c0;
            zmm0_1 = var_198;
            *(arg1 + 0x38) = var_1d0;
            *(arg1 + 0x28) = var_178_1;
            *(arg1 + 0x18) = var_188_1;
            *(arg1 + 8) = zmm0_1;
            arg1[0xa] = result;
            *arg1 = 1;
        }
        else
        {
            zmm0_1 = var_198;
            int128_t var_128 = zmm0_1;
            int128_t var_78 = zmm0_1;
            int128_t var_68_1 = var_188_1;
            int128_t var_58_1 = var_178_1;
            int128_t var_48_1 = var_1d0;
            int64_t var_38_1 = var_1c0;
            just::string_kind::StringKind::from_string_or_backtick::h6eb193e734499b6a(&var_200, 
                &var_128);
            char r12_1 = var_200;
            result = result_1;
            
            if (result != 0x25)
            {
                char rcx_6 = *var_200[1];
                arg1[9] = var_1c0;
                *(arg1 + 0x3a) = var_1d0;
                *(arg1 + 0x2a) = var_1e0;
                *(arg1 + 0x1a) = var_1f0;
                *(arg1 + 0xa) = var_200;
                *(arg1 + 0x51) = var_1b7;
                *(arg1 + 0x54) = var_1b7;
                arg1[1] = r12_1;
                *(arg1 + 9) = rcx_6;
                arg1[0xa] = result;
                *arg1 = 1;
            }
            else
            {
                char rax_2 = *var_200[1];
                void* rax_4;
                int64_t rdx_1;
                rax_4 = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
                void* r15_2 =
                    just::token::Token::lexeme::h66587cdf67f63270(&var_78) - ((r12_1 << 1) + 1);
                void* rax_5;
                uint64_t rdx_4;
                rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f((r12_1 << 1) + 1, r15_2, rax_4, rdx_1);
                
                if (!rax_5)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(rax_4, rdx_1, (r12_1 << 1) + 1, 
                        r15_2);
                    /* no return */
                }
                
                int128_t var_140;
                int128_t* rdi_7 = &var_140;
                char r15_3;
                
                if (r12_1 & 1)
                {
                    just::unindent::unindent::h52c9ed21e4a911ea(rdi_7, rax_5, rdx_4);
                    r15_3 = rax_2;
                    
                    if (r15_3 == 1)
                        goto label_67ddd8;
                    
                    goto label_67dc4c;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(rdi_7, rax_5, rdx_4);
                r15_3 = rax_2;
                int128_t var_218;
                uint64_t result_2;
                
                if (r15_3 == 1)
                {
                    label_67ddd8:
                    just::parser::Parser::cook_string::hac60a0f07317bc6b(&var_200, &var_128, 
                        *var_140[8], result_2);
                    int128_t zmm0_4;
                    
                    if (result_1 != 0x25)
                    {
                        var_198 = var_200;
                        *(arg1 + 0x54) = var_1b7;
                        *(arg1 + 0x51) = var_1b7;
                        arg1[9] = var_1c0;
                        zmm0_4 = var_198;
                        *(arg1 + 0x38) = var_1d0;
                        *(arg1 + 0x28) = var_1e0;
                        *(arg1 + 0x18) = var_1f0;
                        *(arg1 + 8) = zmm0_4;
                        arg1[0xa] = result_1;
                        *arg1 = 1;
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_140);
                    }
                    
                    var_218 = var_200;
                    
                    if (rax)
                        goto label_67de10;
                    
                    zmm0_4 = var_218;
                    *(arg1 + 8) = var_128;
                    *(arg1 + 0x18) = var_188_1;
                    *(arg1 + 0x28) = var_178_1;
                    *(arg1 + 0x38) = var_1d0;
                    arg1[9] = var_1c0;
                    *(arg1 + 0x50) = zmm0_4;
                    arg1[0xc] = var_1f0;
                    arg1[0xd] = rax_5;
                    arg1[0xe] = rdx_4;
                    arg1[0xf] = r12_1;
                    *(arg1 + 0x79) = 1;
                    *arg1 = 0;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_140);
                }
                
                label_67dc4c:
                var_218 = var_140;
                
                if (rax)
                {
                    label_67de10:
                    int64_t var_d8;
                    shellexpand::strings::funcs::full_with_context::hb4629816e4775ea2(&var_d8, 
                        &var_218);
                    int128_t var_c8;
                    int64_t rax_9;
                    uint64_t rdx_9;
                    int64_t rsi_8;
                    
                    if (!(0 + -(var_d8)))
                    {
                        int128_t var_b8;
                        var_1e0 = var_b8;
                        var_1f0 = var_c8;
                        var_200 = var_d8;
                        var_200 = -0x7fffffffffffffcd;
                        just::token::Token::error::h986494da066a4455(&var_198, &var_78, &var_200);
                        rax_9 = var_198;
                        rsi_8 = *var_198[8];
                        rdx_9 = var_188_1;
                        int32_t var_14f;
                        int32_t var_220_1 = var_14f;
                        char var_150;
                        
                        if (var_150 == 0x25)
                        {
                            if (rax_9 != -0x8000000000000000)
                                goto label_67dfd8;
                            
                            goto label_67dfbc;
                        }
                        
                        *(arg1 + 0x40) = var_1d0;
                        *(arg1 + 0x30) = var_178_1;
                        *(arg1 + 0x20) = var_188_1;
                        *(arg1 + 0x51) = var_14f;
                        *(arg1 + 0x54) = var_14f;
                        arg1[1] = rax_9;
                        arg1[2] = rsi_8;
                        arg1[3] = rdx_9;
                        arg1[0xa] = var_150;
                        *arg1 = 1;
                        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_218);
                        
                        if (r15_3 == 1)
                            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_140);
                    }
                    else
                    {
                        int64_t var_d0;
                        rax_9 = var_d0;
                        rsi_8 = var_c8;
                        rdx_9 = *var_c8[8];
                        
                        if (rax_9 != -0x8000000000000000)
                            goto label_67dfd8;
                        
                        label_67dfbc:
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_200, rsi_8, rdx_9);
                        rax_9 = var_200;
                        rsi_8 = *var_200[8];
                        rdx_9 = var_1f0;
                        label_67dfd8:
                        arg1[9] = var_1c0;
                        int128_t zmm0_5 = var_128;
                        *(arg1 + 0x38) = var_1d0;
                        *(arg1 + 0x28) = var_178_1;
                        *(arg1 + 0x18) = var_188_1;
                        *(arg1 + 8) = zmm0_5;
                        arg1[0xa] = rax_9;
                        arg1[0xb] = rsi_8;
                        arg1[0xc] = rdx_9;
                        arg1[0xd] = rax_5;
                        arg1[0xe] = rdx_4;
                        arg1[0xf] = r12_1;
                        *(arg1 + 0x79) = r15_3;
                        *(arg1 + 0x7a) = rax;
                        *arg1 = 0;
                        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_218);
                        
                        if (r15_3 == 1)
                            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_140);
                    }
                }
                else
                {
                    int128_t zmm0_3 = var_218;
                    result = result_2;
                    *(arg1 + 8) = var_128;
                    *(arg1 + 0x18) = var_188_1;
                    *(arg1 + 0x28) = var_178_1;
                    *(arg1 + 0x38) = var_1d0;
                    arg1[9] = var_1c0;
                    *(arg1 + 0x50) = zmm0_3;
                    arg1[0xc] = result;
                    arg1[0xd] = rax_5;
                    arg1[0xe] = rdx_4;
                    arg1[0xf] = r12_1;
                    *(arg1 + 0x79) = r15_3;
                    *(arg1 + 0x7a) = 0;
                    *arg1 = 0;
                }
            }
        }
    }
    return result;
}
