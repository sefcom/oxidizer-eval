
  uint64_t just::parser::Parser::parse_value::h216c4bdeb7f558a6(int64_t* arg1, void* arg2)

{
    char rax = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x21);
    char rax_1;
    
    if (!rax)
        rax_1 = just::parser::Parser::next_is_shell_expanded_string::h8493042b5ebe3556(arg2);
    
    uint64_t result;
    int128_t var_3b8;
    int128_t var_3a8_2;
    int128_t var_398_2;
    int128_t var_388_1;
    uint64_t result_1;
    int128_t var_360;
    int128_t var_350;
    int128_t var_340;
    int128_t var_330;
    uint64_t result_4;
    char result_2;
    int32_t var_317;
    int32_t var_314;
    int32_t rcx_11;
    int128_t zmm0_1;
    
    if (!rax && !rax_1)
    {
        int128_t var_2b8;
        
        if (!just::parser::Parser::next_is::hc7c4171067e02951(arg2, 3))
        {
            int128_t var_3a8_4;
            int128_t var_398_4;
            int128_t var_388_3;
            int128_t var_308;
            int128_t var_2f8;
            int64_t var_2e8;
            int128_t zmm0_7;
            
            if (!just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18))
            {
                int64_t* rdi_18 = &var_360;
                
                if (!just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x1c))
                {
                    result =
                        just::parser::Parser::unexpected_token::hbee08644eef5d075(rdi_18, arg2);
                    int128_t zmm0_8 = result_2;
                    result_1 = zmm0_8;
                    int128_t zmm1_7 = var_360;
                    int128_t var_388_4 = var_330;
                    int128_t var_398_5 = var_340;
                    int128_t var_3a8_5 = var_350;
                    var_3b8 = zmm1_7;
                    *(arg1 + 0x48) = zmm0_8;
                    *(arg1 + 0x38) = var_330;
                    *(arg1 + 0x28) = var_340;
                    *(arg1 + 0x18) = var_350;
                    *(arg1 + 8) = zmm1_7;
                    *arg1 = 0x12;
                }
                else
                {
                    just::parser::Parser::presume::he2055272497a907b(rdi_18, arg2, 0x1c);
                    result = result_2;
                    
                    if (result != 0x25)
                    {
                        label_67d1c6:
                        int64_t rcx_6 = var_360;
                        int128_t zmm0_4 = var_360;
                        var_3b8 = *result_4[1];
                        *var_3b8[3] = *result_4[4];
                        *(arg1 + 0x54) = var_314;
                        *(arg1 + 0x51) = var_317;
                        int32_t rdi_24 = var_3b8;
                        *(arg1 + 0x4c) = *var_3b8[3];
                        *(arg1 + 0x49) = rdi_24;
                        arg1[1] = rcx_6;
                        *(arg1 + 0x10) = zmm0_4;
                        *(arg1 + 0x20) = var_350;
                        *(arg1 + 0x30) = var_340;
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
                        
                        if (result != 0x12)
                        {
                            int64_t var_38_1 = var_2e8;
                            int128_t var_48_1 = var_2f8;
                            int128_t var_58_1 = var_308;
                            uint64_t result_3 = result;
                            int128_t var_a8_1 = var_3b8;
                            int128_t var_98_1 = var_3a8_4;
                            int128_t var_88_1 = var_398_4;
                            int128_t var_78_1 = var_388_3;
                            int128_t var_68_1 = result_1;
                            uint64_t rax_19 =
                                alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&result_3);
                            var_2b8 = rax_19;
                            just::parser::Parser::expect::h35e1151927597ac7(&var_360, arg2, 0x1d);
                            result = result_2;
                            
                            if (result != 0x25)
                            {
                                int64_t rcx_14 = var_360;
                                int128_t zmm0_11 = var_360;
                                var_3b8 = *result_4[1];
                                *var_3b8[3] = *result_4[4];
                                *(arg1 + 0x54) = var_314;
                                *(arg1 + 0x51) = var_317;
                                int32_t rdi_41 = var_3b8;
                                *(arg1 + 0x4c) = *var_3b8[3];
                                *(arg1 + 0x49) = rdi_41;
                                arg1[1] = rcx_14;
                                *(arg1 + 0x10) = zmm0_11;
                                *(arg1 + 0x20) = var_350;
                                *(arg1 + 0x30) = var_340;
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
                            label_67d08a:
                            *(arg1 + 0x48) = result_1;
                            zmm0_7 = var_3b8;
                            *(arg1 + 0x38) = var_388_3;
                            *(arg1 + 0x28) = var_398_4;
                            *(arg1 + 0x18) = var_3a8_4;
                            *(arg1 + 8) = zmm0_7;
                            *arg1 = 0x12;
                        }
                    }
                }
            }
            else
            {
                just::parser::Parser::accepted_keyword::h41084b1fcaf79f7b(&var_360, arg2, 3);
                result = var_360;
                
                if (result_2 != 0x25)
                {
                    arg1[9] = result_4;
                    int128_t zmm0_3 = var_360;
                    *(arg1 + 0x39) = var_330;
                    *(arg1 + 0x29) = var_340;
                    *(arg1 + 0x19) = var_350;
                    *(arg1 + 9) = zmm0_3;
                    *(arg1 + 0x51) = var_317;
                    *(arg1 + 0x54) = var_314;
                    arg1[1] = result;
                    arg1[0xa] = result_2;
                    *arg1 = 0x12;
                }
                else
                {
                    int128_t* rdi_13 = &var_360;
                    int128_t var_268;
                    
                    if (!(result & 1))
                    {
                        just::parser::Parser::parse_name::he2804e36e47b7e10(rdi_13, arg2);
                        result = result_2;
                        var_3b8 = var_360;
                        var_3a8_2 = var_350;
                        var_398_2 = var_340;
                        var_388_1 = var_330;
                        result_1 = result_4;
                        
                        if (result != 0x25)
                            goto label_67d501;
                        
                        zmm0_1 = var_3b8;
                        int128_t var_218 = zmm0_1;
                        var_2b8 = zmm0_1;
                        int128_t var_2a8_2 = var_3a8_2;
                        int128_t var_298_2 = var_398_2;
                        int128_t var_288_2 = var_388_1;
                        uint64_t result_6 = result_1;
                        
                        if (!just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x1c))
                        {
                            result = result_1;
                            arg1[9] = result;
                            int128_t zmm0_9 = var_218;
                            *(arg1 + 0x38) = var_388_1;
                            *(arg1 + 0x28) = var_398_2;
                            *(arg1 + 0x18) = var_3a8_2;
                            *(arg1 + 8) = zmm0_9;
                            *arg1 = 0x11;
                        }
                        else
                        {
                            just::parser::Parser::parse_sequence::h30bb3b312b01651e(&var_360, arg2);
                            result = result_2;
                            
                            if (result != 0x25)
                                goto label_67d471;
                            
                            zmm0_1 = var_360;
                            void* rax_16;
                            uint64_t rdx_11;
                            rax_16 = just::token::Token::lexeme::h66587cdf67f63270(&var_2b8);
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_16, rdx_11, "whichwithout_extensioncacheconfi…", 5))
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(arg2 + 0x68, 4);
                            
                            int64_t var_258_1 = var_350;
                            var_268 = zmm0_1;
                            just::thunk::Thunk::resolve::h571e6f3d582c322b(&var_360, &var_218, 
                                &var_268);
                            result = var_360;
                            var_3b8 = var_360;
                            var_3a8_4 = var_350;
                            var_398_4 = var_340;
                            var_388_3 = var_330;
                            result_1 = result_2;
                            
                            if (result == 7)
                                goto label_67d08a;
                            
                            arg1[0xf] = var_2e8;
                            *(arg1 + 0x68) = var_2f8;
                            *(arg1 + 0x58) = var_308;
                            *(arg1 + 0x48) = result_1;
                            zmm0_7 = var_3b8;
                            *(arg1 + 0x38) = var_388_3;
                            *(arg1 + 0x28) = var_398_4;
                            *(arg1 + 0x18) = var_3a8_4;
                            *(arg1 + 8) = zmm0_7;
                            *arg1 = result;
                        }
                    }
                    else
                    {
                        just::parser::Parser::expect::h35e1151927597ac7(rdi_13, arg2, 0x1c);
                        result = result_2;
                        
                        if (result != 0x25)
                            goto label_67d1c6;
                        
                        just::parser::Parser::parse_condition::h084dccdf2ccc72f1(&var_360, arg2);
                        result = result_2;
                        
                        if (result != 0x25)
                            goto label_67d471;
                        
                        var_2b8 = var_360;
                        just::parser::Parser::expect::h35e1151927597ac7(&var_360, arg2, 0xf);
                        
                        if (result_2 != 0x25)
                        {
                            int64_t rcx_15 = var_360;
                            int128_t zmm0_5 = var_360;
                            var_3b8 = *result_4[1];
                            *var_3b8[3] = *result_4[4];
                            *(arg1 + 0x54) = var_314;
                            *(arg1 + 0x51) = var_317;
                            int32_t rdi_47 = var_3b8;
                            *(arg1 + 0x4c) = *var_3b8[3];
                            *(arg1 + 0x49) = rdi_47;
                            arg1[1] = rcx_15;
                            *(arg1 + 0x10) = zmm0_5;
                            *(arg1 + 0x20) = var_350;
                            *(arg1 + 0x30) = var_340;
                            arg1[8] = *var_330[8];
                            arg1[9] = result_4;
                            arg1[0xa] = result_2;
                            *arg1 = 0x12;
                            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(&var_2b8);
                        }
                        
                        just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_360, arg2);
                        int64_t rax_11 = var_360;
                        var_3b8 = var_360;
                        result_1 = result_2;
                        
                        if (rax_11 == 0x12)
                        {
                            *(arg1 + 0x48) = result_1;
                            int128_t zmm0_6 = var_3b8;
                            *(arg1 + 0x38) = var_330;
                            *(arg1 + 0x28) = var_340;
                            *(arg1 + 0x18) = var_350;
                            *(arg1 + 8) = zmm0_6;
                            *arg1 = 0x12;
                            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(&var_2b8);
                        }
                        
                        int64_t var_b8_1 = var_2e8;
                        int128_t var_c8_1 = var_2f8;
                        int128_t var_d8_1 = var_308;
                        int64_t var_130 = rax_11;
                        int128_t var_128_1 = var_3b8;
                        int128_t var_118_1 = var_350;
                        int128_t var_108_1 = var_340;
                        int128_t var_f8_1 = var_330;
                        int128_t var_e8_1 = result_1;
                        uint64_t rax_22 =
                            alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_130);
                        var_268 = rax_22;
                        just::parser::Parser::expect::h35e1151927597ac7(&var_360, arg2, 0x1d);
                        
                        if (result_2 != 0x25)
                        {
                            int64_t rcx_17 = var_360;
                            int128_t zmm0_14 = var_360;
                            var_3b8 = *result_4[1];
                            *var_3b8[3] = *result_4[4];
                            *(arg1 + 0x54) = var_314;
                            *(arg1 + 0x51) = var_317;
                            int32_t rdi_55 = var_3b8;
                            *(arg1 + 0x4c) = *var_3b8[3];
                            *(arg1 + 0x49) = rdi_55;
                            arg1[1] = rcx_17;
                            *(arg1 + 0x10) = zmm0_14;
                            *(arg1 + 0x20) = var_350;
                            *(arg1 + 0x30) = var_340;
                            arg1[8] = *var_330[8];
                            arg1[9] = result_4;
                            arg1[0xa] = result_2;
                            *arg1 = 0x12;
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_268);
                            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(&var_2b8);
                        }
                        
                        result = var_350;
                        arg1[4] = result;
                        *(arg1 + 0x10) = var_2b8;
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
            
            if (result != 0x25)
            {
                label_67d501:
                rcx_11 = var_317;
                *(arg1 + 0x54) = var_314;
                goto label_67d4b5;
            }
            
            zmm0_1 = var_3b8;
            int128_t var_178 = zmm0_1;
            int128_t var_168_1 = var_3a8_2;
            int128_t var_158_1 = var_398_2;
            int128_t var_148_1 = var_388_1;
            uint64_t result_7 = result_1;
            var_2b8 = zmm0_1;
            int128_t var_2a8_1 = var_3a8_2;
            int128_t var_298_1 = var_398_2;
            int128_t var_288_1 = var_388_1;
            uint64_t result_5 = result_1;
            just::string_kind::StringKind::from_string_or_backtick::h6eb193e734499b6a(&var_360, 
                &var_178);
            char r12_1 = var_360;
            result = result_2;
            
            if (result != 0x25)
            {
                char rcx_5 = *var_360[1];
                arg1[9] = result_4;
                *(arg1 + 0x3a) = var_330;
                *(arg1 + 0x2a) = var_340;
                *(arg1 + 0x1a) = var_350;
                *(arg1 + 0xa) = var_360;
                *(arg1 + 0x51) = var_317;
                *(arg1 + 0x54) = var_314;
                arg1[1] = r12_1;
                *(arg1 + 9) = rcx_5;
                arg1[0xa] = result;
                *arg1 = 0x12;
            }
            else
            {
                void* rax_4;
                int64_t rdx_1;
                rax_4 = just::token::Token::lexeme::h66587cdf67f63270(&var_2b8);
                uint64_t rax_5 = r12_1;
                int64_t r15_3 = ((rax_5 - 1) | 0xfffffffffffffffd)
                    + just::token::Token::lexeme::h66587cdf67f63270(&var_2b8);
                void* rax_6;
                uint64_t rdx_4;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f((rax_5 << 1) + 1, r15_3, rax_4, rdx_1);
                
                if (!rax_6)
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
                
                if (result != 0x25)
                    goto label_67d501;
                
                zmm0_1 = var_3b8;
                int128_t var_2d0;
                
                if (!(r12_1 & 1))
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_2d0, rax_6, rdx_4);
                else
                    just::unindent::unindent::h52c9ed21e4a911ea(&var_2d0, rax_6, rdx_4);
                
                int64_t var_2c8;
                int64_t var_2c0;
                
                if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(
                    var_2c8, var_2c0, "#!internal error: entered unreac…", 2))
                {
                    var_360 = -0x7fffffffffffffea;
                    just::token::Token::error::h986494da066a4455(&var_3b8, &var_2b8, &var_360);
                    *(arg1 + 0x48) = result_1;
                    int128_t zmm0_13 = var_3b8;
                    *(arg1 + 0x38) = var_388_1;
                    *(arg1 + 0x28) = var_398_2;
                    *(arg1 + 0x18) = var_3a8_2;
                    *(arg1 + 8) = zmm0_13;
                    *arg1 = 0x12;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_2d0);
                }
                
                arg1[3] = var_2c0;
                *(arg1 + 8) = var_2d0;
                *(arg1 + 0x20) = zmm0_1;
                *(arg1 + 0x30) = var_3a8_2;
                *(arg1 + 0x40) = var_398_2;
                *(arg1 + 0x50) = var_388_1;
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
        
        if (result != 0x25)
        {
            label_67d471:
            result_1 = result_4;
            var_388_1 = var_330;
            var_398_2 = var_340;
            var_3a8_2 = var_350;
            var_3b8 = var_360;
            *(arg1 + 0x54) = var_314;
            rcx_11 = var_317;
            label_67d4b5:
            *(arg1 + 0x51) = rcx_11;
            arg1[9] = result_1;
            zmm0_1 = var_3b8;
            *(arg1 + 0x38) = var_388_1;
            *(arg1 + 0x28) = var_398_2;
            *(arg1 + 0x18) = var_3a8_2;
            *(arg1 + 8) = zmm0_1;
            arg1[0xa] = result;
            *arg1 = 0x12;
        }
        else
        {
            zmm0_1 = var_360;
            int128_t var_398_1 = var_340;
            int128_t var_3a8_1 = var_350;
            var_3b8 = zmm0_1;
            *(arg1 + 0x28) = var_340;
            *(arg1 + 0x18) = var_350;
            *(arg1 + 8) = zmm0_1;
            *arg1 = 0x10;
        }
    }
    return result;
}
