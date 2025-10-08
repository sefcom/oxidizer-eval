
  int64_t just::parser::Parser::parse_recipe::h69ed0cc8c966bc5b(int64_t* arg1, void* arg2, int64_t* arg3, int64_t arg4, uint64_t arg5, char arg6)

{
    int128_t var_528;
    just::parser::Parser::parse_name::he2804e36e47b7e10(&var_528, arg2);
    int128_t var_438 = var_528;
    int128_t var_4f8;
    int128_t var_408 = var_4f8;
    int64_t var_4e8;
    int64_t var_3f8 = var_4e8;
    char var_4e0;
    int128_t var_518;
    int128_t var_508;
    int32_t var_4df;
    int128_t zmm0;
    
    if (var_4e0 != 0x25)
    {
        *(arg1 + 0x54) = var_4df;
        *(arg1 + 0x51) = var_4df;
        arg1[9] = var_3f8;
        zmm0 = var_438;
        *(arg1 + 0x38) = var_408;
        *(arg1 + 0x28) = var_508;
        *(arg1 + 0x18) = var_518;
        *(arg1 + 8) = zmm0;
        arg1[0xa] = var_4e0;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        zmm0 = var_438;
        int128_t var_208_1 = var_518;
        int128_t var_1f8_1 = var_508;
        int128_t var_1e8_1 = var_408;
        int64_t var_1d8_1 = var_3f8;
        int128_t var_278 = zmm0;
        int128_t var_268_1 = var_518;
        int128_t var_258_1 = var_508;
        int128_t var_248_1 = var_408;
        int64_t var_238_1 = var_3f8;
        int64_t var_2a8 = 0;
        int64_t var_2a0_1 = 8;
        int64_t var_298_1 = 0;
        
        while (true)
        {
            char rax_2 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18);
            char rax_3;
            
            if (!rax_2)
                rax_3 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x12);
            
            int64_t* rcx_4;
            int128_t zmm0_1;
            int128_t zmm1_1;
            int128_t zmm2_1;
            int128_t zmm3_1;
            int128_t var_4d0;
            int128_t var_4c0;
            int128_t var_4b0;
            int128_t var_4a0;
            int128_t var_490;
            int128_t var_480;
            int128_t var_470;
            int64_t var_460;
            
            if (!rax_2 && !rax_3)
            {
                just::parser::Parser::accepted::h762a87b5f98dff30(&var_528, arg2, 0x1e);
                char rax_5 = var_528;
                char rcx_5 = var_4e0;
                
                if (rcx_5 != 0x25)
                {
                    label_67f24c:
                    arg1[9] = var_4e8;
                    int128_t zmm0_2 = var_528;
                    *(arg1 + 0x39) = var_4f8;
                    *(arg1 + 0x29) = var_508;
                    *(arg1 + 0x19) = var_518;
                    *(arg1 + 9) = zmm0_2;
                    *(arg1 + 0x51) = var_4df;
                    *(arg1 + 0x54) = var_4df;
                    arg1[1] = rax_5;
                    arg1[0xa] = rcx_5;
                    *arg1 = -0x8000000000000000;
                    break;
                }
                
                int128_t var_338;
                int128_t var_328;
                int64_t var_1d0;
                
                if (!(rax_5 & 1))
                {
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_528, arg2, 1);
                    rax_5 = var_528;
                    rcx_5 = var_4e0;
                    
                    if (rcx_5 != 0x25)
                        goto label_67f24c;
                    
                    rcx_5 = 2;
                    
                    if (rax_5 & 1)
                        goto label_67f17b;
                    
                    var_1d0 = 0x13;
                    label_67f3d5:
                    just::parser::Parser::expect::h35e1151927597ac7(&var_528, arg2, 0xc);
                    
                    if (var_4e0 != 0x25)
                    {
                        int64_t rcx_9 = var_528;
                        int128_t zmm0_4 = var_528;
                        var_438 = *var_4e8[1];
                        *var_438[3] = *var_4e8[4];
                        *(arg1 + 0x54) = var_4df;
                        *(arg1 + 0x51) = var_4df;
                        int32_t rdi_21 = var_438;
                        *(arg1 + 0x4c) = *var_438[3];
                        *(arg1 + 0x49) = rdi_21;
                        arg1[1] = rcx_9;
                        *(arg1 + 0x10) = zmm0_4;
                        *(arg1 + 0x20) = var_518;
                        *(arg1 + 0x30) = var_508;
                        arg1[8] = *var_4f8[8];
                        arg1[9] = var_4e8;
                        arg1[0xa] = var_4e0;
                        *arg1 = -0x8000000000000000;
                    }
                    else
                    {
                        int64_t var_350 = 0;
                        int64_t var_348_1 = 8;
                        int64_t var_340_1 = 0;
                        
                        while (true)
                        {
                            just::parser::Parser::accept_dependency::ha1ca7da38a60e6d1(&var_528, 
                                arg2);
                            char rax_10 = var_4e0;
                            
                            if (rax_10 == 0x25)
                            {
                                int128_t var_418_1 = var_508;
                                int128_t var_428_1 = var_518;
                                var_438 = var_528;
                                
                                if (var_438 == -0x8000000000000000)
                                {
                                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::he4ab9e4d6ad45d88(&var_438);
                                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_528, 
                                        arg2, 0);
                                    char rax_11 = var_528;
                                    
                                    if (var_4e0 != 0x25)
                                    {
                                        arg1[9] = var_4e8;
                                        int128_t zmm0_6 = var_528;
                                        *(arg1 + 0x39) = var_4f8;
                                        *(arg1 + 0x29) = var_508;
                                        *(arg1 + 0x19) = var_518;
                                        *(arg1 + 9) = zmm0_6;
                                        *(arg1 + 0x51) = var_4df;
                                        *(arg1 + 0x54) = var_4df;
                                        arg1[1] = rax_11;
                                        arg1[0xa] = var_4e0;
                                        *arg1 = -0x8000000000000000;
                                        break;
                                    }
                                    
                                    if (rax_11 & 1)
                                    {
                                        var_338 = 0;
                                        *var_338[8] = 8;
                                        var_328 = 0;
                                        
                                        while (true)
                                        {
                                            just::parser::Parser::accept_dependency::ha1ca7da38a60e6d1(&var_528, arg2);
                                            
                                            if (var_4e0 != 0x25)
                                            {
                                                var_438 = var_528;
                                                *(arg1 + 0x54) = var_4df;
                                                *(arg1 + 0x51) = var_4df;
                                                arg1[9] = var_4e8;
                                                int128_t zmm0_7 = var_438;
                                                *(arg1 + 0x38) = var_4f8;
                                                *(arg1 + 0x28) = var_508;
                                                *(arg1 + 0x18) = var_518;
                                                *(arg1 + 8) = zmm0_7;
                                                arg1[0xa] = var_4e0;
                                                *arg1 = -0x8000000000000000;
                                                goto label_67f9c7;
                                            }
                                            
                                            var_418_1 = var_508;
                                            var_428_1 = var_518;
                                            var_438 = var_528;
                                            
                                            if (var_438 == -0x8000000000000000)
                                                break;
                                            
                                            alloc::vec::Vec$LT$T$C$A$GT$::push::h248473822e51be95(
                                                &var_338, &var_438);
                                        }
                                        
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::he4ab9e4d6ad45d88(&var_438);
                                        int64_t rdx_11 = var_328;
                                        
                                        if (!rdx_11)
                                        {
                                            just::parser::Parser::unexpected_token::hbee08644eef5d075(&var_528, arg2);
                                            int128_t zmm0_10 = var_4e0;
                                            var_3f8 = zmm0_10;
                                            int128_t zmm1_10 = var_528;
                                            int128_t var_408_3 = var_4f8;
                                            int128_t var_418_4 = var_508;
                                            int128_t var_428_4 = var_518;
                                            var_438 = zmm1_10;
                                            *(arg1 + 0x48) = zmm0_10;
                                            *(arg1 + 0x38) = var_4f8;
                                            *(arg1 + 0x28) = var_508;
                                            *(arg1 + 0x18) = var_518;
                                            *(arg1 + 8) = zmm1_10;
                                            *arg1 = -0x8000000000000000;
                                            label_67f9c7:
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::hffe81f456170349f(&var_338);
                                            break;
                                        }
                                        
                                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::heec1071cb36b2fdf(&var_350, *var_338[8], rdx_11);
                                        var_328 = 0;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::hffe81f456170349f(&var_338);
                                    }
                                    
                                    just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_528, 
                                        arg2);
                                    
                                    if (var_4e0 != 0x25)
                                    {
                                        arg1[9] = var_4e8;
                                        int128_t zmm0_8 = var_528;
                                        *(arg1 + 0x38) = var_4f8;
                                        *(arg1 + 0x28) = var_508;
                                        *(arg1 + 0x18) = var_518;
                                        *(arg1 + 8) = zmm0_8;
                                        *(arg1 + 0x51) = var_4df;
                                        *(arg1 + 0x54) = var_4df;
                                        arg1[0xa] = var_4e0;
                                        *arg1 = -0x8000000000000000;
                                        break;
                                    }
                                    
                                    just::parser::Parser::parse_body::h8d13522a5ff247cf(&var_528, 
                                        arg2);
                                    rax_10 = var_4e0;
                                    
                                    if (rax_10 == 0x25)
                                    {
                                        int64_t rax_14 = var_518;
                                        int128_t var_2e8 = var_528;
                                        char var_541_1;
                                        char var_52c_1;
                                        
                                        if (!rax_14)
                                        {
                                            var_541_1 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0x10);
                                            var_52c_1 = 0;
                                            label_67f9f6:
                                            char rax_22 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0x13);
                                            char rax_23;
                                            
                                            if (rax_22)
                                                rax_23 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 9);
                                            
                                            if (!rax_22 || !rax_23)
                                            {
                                                char rax_25 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 3);
                                                char rax_26;
                                                
                                                if (rax_25)
                                                    rax_26 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0xa);
                                                
                                                if (!rax_25 || !rax_26)
                                                {
                                                    void* rax_29;
                                                    int64_t rdx_20;
                                                    rax_29 = just::token::Token::lexeme::h66587cdf67f63270(&var_278);
                                                    var_528 = 0;
                                                    char* rax_30;
                                                    uint64_t rdx_21;
                                                    rax_30 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5f, &var_528);
                                                    void* rbx_1;
                                                    rbx_1 = 1;
                                                    
                                                    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_29, rdx_20, rax_30, rdx_21))
                                                        rbx_1 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0xf);
                                                    
                                                    int64_t var_2c8;
                                                    
                                                    if (!arg4)
                                                        var_2c8 = -0x8000000000000000;
                                                    else
                                                    {
                                                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_528, arg4, arg5);
                                                        int64_t var_2b8_1 = var_518;
                                                        var_2c8 = var_528;
                                                    }
                                                    
                                                    uint64_t var_368_1;
                                                    var_368_1 = rbx_1;
                                                    int64_t rax_34 = *arg3;
                                                    int64_t rcx_23 = arg3[1];
                                                    int64_t rsi_30 = rax_34;
                                                    
                                                    if (rax_34)
                                                        rsi_30 = arg3[2];
                                                    
                                                    int64_t rdx_24;
                                                    rdx_24 = rax_34;
                                                    var_528 = rdx_24;
                                                    *var_528[8] = 0;
                                                    var_518 = rax_34;
                                                    *var_518[8] = rcx_23;
                                                    var_508 = rdx_24;
                                                    *var_508[8] = 0;
                                                    var_4f8 = rax_34;
                                                    *var_4f8[8] = rcx_23;
                                                    int64_t var_4e8_1 = rsi_30;
                                                    
                                                    while (true)
                                                    {
                                                        int64_t* rax_35 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_528);
                                                        
                                                        if (!rax_35)
                                                            break;
                                                        
                                                        if (*rax_35 == -0x7ffffffffffffffd)
                                                        {
                                                            int64_t rbp_1 = -0x8000000000000000;
                                                            
                                                            if (rax_35[1] != -0x8000000000000000)
                                                            {
                                                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_438, &rax_35[1]);
                                                                rbp_1 = var_438;
                                                                var_338 = var_438;
                                                            }
                                                            
                                                            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_2c8);
                                                            var_2c8 = rbp_1;
                                                            int128_t var_2c0_1 = var_338;
                                                        }
                                                    }
                                                    
                                                    int128_t var_230;
                                                    core::option::Option$LT$T$GT$::filter::h45f0602a68689dd2(&var_230, &var_2c8);
                                                    int32_t rbp_2 = *(arg2 + 0x80);
                                                    int128_t var_290;
                                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h76b75c009ea05d96(&var_290, *(arg2 + 8), *(arg2 + 0x10));
                                                    var_338 = -0x8000000000000000;
                                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h5f6a46902c0efe8a(&var_438, &var_2a8);
                                                    core::iter::traits::iterator::Iterator::chain::h6d05814085ed3495(&var_528, &var_438, &var_1d0);
                                                    core::iter::traits::iterator::Iterator::collect::h13e6de0284408168(&var_438, &var_528);
                                                    int128_t var_450_1 = *arg3;
                                                    int64_t var_440_1 = arg3[2];
                                                    var_528 = var_2e8;
                                                    var_518 = rax_14;
                                                    var_518 = var_350;
                                                    *var_508[8] = var_340_1;
                                                    var_4d0 = var_230;
                                                    int64_t var_220;
                                                    *var_4c0[8] = var_220;
                                                    int64_t var_280;
                                                    int64_t var_4e8_2 = var_280;
                                                    int128_t var_4f8_1 = var_290;
                                                    int64_t var_458_1 = var_1d8_1;
                                                    var_470 = var_1e8_1;
                                                    var_480 = var_1f8_1;
                                                    var_490 = var_208_1;
                                                    var_4a0 = zmm0;
                                                    var_4a0 = var_328;
                                                    int128_t var_4b0_1 = var_338;
                                                    var_4d0 = var_428_1;
                                                    var_4e0 = var_438;
                                                    memcpy(arg1, &var_528, 0xf0);
                                                    arg1[0x1e] = var_340_1;
                                                    arg1[0x1f] = rbp_2;
                                                    *(arg1 + 0xfc) = var_368_1;
                                                    *(arg1 + 0xfd) = arg6;
                                                    *(arg1 + 0xfe) = var_52c_1 | var_541_1;
                                                    return arg6;
                                                }
                                                
                                                void* rax_27;
                                                int64_t rdx_18;
                                                rax_27 =
                                                    just::token::Token::lexeme::h66587cdf67f63270(
                                                    &var_278);
                                                *var_528[8] = rax_27;
                                                var_518 = rdx_18;
                                                var_528 = -0x7fffffffffffffe0;
                                                just::token::Token::error::h986494da066a4455(
                                                    &var_438, &var_278, &var_528);
                                            }
                                            else
                                            {
                                                void* rax_24;
                                                int64_t rdx_16;
                                                rax_24 =
                                                    just::token::Token::lexeme::h66587cdf67f63270(
                                                    &var_278);
                                                *var_528[8] = rax_24;
                                                var_518 = rdx_16;
                                                var_528 = -0x7fffffffffffffd3;
                                                just::token::Token::error::h986494da066a4455(
                                                    &var_438, &var_278, &var_528);
                                            }
                                        }
                                        else
                                        {
                                            void* rax_15 = *var_2e8[8];
                                            var_52c_1 =
                                                just::line::Line::is_shebang::h85dfa5042413650f(
                                                *(rax_15 + 8), *(rax_15 + 0x10));
                                            var_541_1 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0x10);
                                            
                                            if ((var_52c_1 & var_541_1) != 1)
                                                goto label_67f9f6;
                                            
                                            void* rax_19;
                                            int64_t rdx_12;
                                            rax_19 = just::token::Token::lexeme::h66587cdf67f63270(
                                                &var_278);
                                            *var_528[8] = rax_19;
                                            var_518 = rdx_12;
                                            var_528 = -0x7fffffffffffffce;
                                            just::token::Token::error::h986494da066a4455(&var_438, 
                                                &var_278, &var_528);
                                        }
                                        *(arg1 + 0x48) = var_3f8;
                                        int128_t zmm0_9 = var_438;
                                        *(arg1 + 0x38) = var_408;
                                        *(arg1 + 0x28) = var_418_1;
                                        *(arg1 + 0x18) = var_428_1;
                                        *(arg1 + 8) = zmm0_9;
                                        *arg1 = -0x8000000000000000;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..line..Line$GT$$GT$::hfb7be3c1bcd7265c(&var_2e8);
                                        break;
                                    }
                                }
                                else
                                {
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::h248473822e51be95(&var_350, 
                                        &var_438);
                                    continue;
                                }
                            }
                            
                            var_438 = var_528;
                            *(arg1 + 0x54) = var_4df;
                            *(arg1 + 0x51) = var_4df;
                            arg1[9] = var_4e8;
                            int128_t zmm0_5 = var_438;
                            *(arg1 + 0x38) = var_4f8;
                            *(arg1 + 0x28) = var_508;
                            *(arg1 + 0x18) = var_518;
                            *(arg1 + 8) = zmm0_5;
                            arg1[0xa] = rax_10;
                            *arg1 = -0x8000000000000000;
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::hffe81f456170349f(&var_350);
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..parameter..Parameter$GT$$GT$::hd87e6f0a725b58d5(&var_1d0);
                    break;
                }
                
                rcx_5 = 0;
                label_67f17b:
                just::parser::Parser::parse_parameter::h2e23104b2386c6b5(&var_528, arg2, rcx_5);
                int64_t rax_6 = var_528;
                var_338 = var_528;
                var_328 = var_518;
                int128_t var_2f8_1 = var_4e0;
                
                if (rax_6 != 0x13)
                {
                    int64_t var_370_1 = var_460;
                    int128_t var_380_1 = var_470;
                    int128_t var_390_1 = var_480;
                    int128_t var_3a0_1 = var_490;
                    int128_t var_3b0_1 = var_4a0;
                    int128_t var_3c0_1 = var_4b0;
                    int128_t var_3d0_1 = var_4c0;
                    int128_t var_3e0_1 = var_4d0;
                    var_438 = var_338;
                    int128_t var_428 = var_328;
                    int128_t var_418 = var_508;
                    var_408 = var_4f8;
                    int128_t var_3f0_1 = var_2f8_1;
                    var_438 = rax_6;
                    just::parser::Parser::forbid::h3395c9dfac3fe700(&var_528, arg2);
                    
                    if (var_4e0 == 0x25)
                    {
                        memcpy(&var_1d0, &var_438, 0xd0);
                        goto label_67f3d5;
                    }
                    
                    arg1[9] = var_4e8;
                    int128_t zmm0_3 = var_528;
                    *(arg1 + 0x38) = var_4f8;
                    *(arg1 + 0x28) = var_508;
                    *(arg1 + 0x18) = var_518;
                    *(arg1 + 8) = zmm0_3;
                    *(arg1 + 0x51) = var_4df;
                    *(arg1 + 0x54) = var_4df;
                    arg1[0xa] = var_4e0;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$just..parameter..Parameter$GT$::h59e077086333883a(
                        &var_438);
                    break;
                }
                
                rcx_4 = arg1;
                *(rcx_4 + 0x48) = var_2f8_1;
                zmm0_1 = var_338;
                zmm1_1 = var_328;
                zmm2_1 = var_508;
                zmm3_1 = var_4f8;
            }
            else
            {
                just::parser::Parser::parse_parameter::h2e23104b2386c6b5(&var_528, arg2, 1);
                int64_t rax_4 = var_528;
                var_438 = var_528;
                var_408 = var_4f8;
                var_3f8 = var_4e0;
                
                if (rax_4 == 0x13)
                {
                    rcx_4 = arg1;
                    *(rcx_4 + 0x48) = var_3f8;
                    zmm0_1 = var_438;
                    zmm1_1 = var_518;
                    zmm2_1 = var_508;
                    zmm3_1 = var_408;
                }
                else
                {
                    int64_t var_38_1 = var_460;
                    int128_t var_48_1 = var_470;
                    int128_t var_58_1 = var_480;
                    int128_t var_68_1 = var_490;
                    int128_t var_78_1 = var_4a0;
                    int128_t var_88_1 = var_4b0;
                    int128_t var_98_1 = var_4c0;
                    int128_t var_a8_1 = var_4d0;
                    int64_t var_100 = rax_4;
                    int128_t var_b8_1 = var_3f8;
                    int128_t var_c8_1 = var_408;
                    int128_t var_d8_1 = var_508;
                    int128_t var_e8_1 = var_518;
                    int128_t var_f8_1 = var_438;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb918924c84f3e1ad(&var_2a8, &var_100);
                    continue;
                }
            }
            *(rcx_4 + 0x38) = zmm3_1;
            *(rcx_4 + 0x28) = zmm2_1;
            *(rcx_4 + 0x18) = zmm1_1;
            *(rcx_4 + 8) = zmm0_1;
            *rcx_4 = -0x8000000000000000;
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..parameter..Parameter$GT$$GT$::hfa61b517cecc91d9(&var_2a8);
    }
    return core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(
        arg3);
}
