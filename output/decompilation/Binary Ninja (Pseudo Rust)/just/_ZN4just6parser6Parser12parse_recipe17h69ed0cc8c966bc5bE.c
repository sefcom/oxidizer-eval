
  fn just::parser::Parser::parse_recipe::h69ed0cc8c966bc5b(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: u64, arg6: i8) -> i64

{
    let mut var_528: i128;
    just::parser::Parser::parse_name::he2804e36e47b7e10(&var_528, arg2);
    let mut var_438: i128 = var_528;
    let mut var_4f8: i128;
    let mut var_408: i128 = var_4f8;
    let var_4e8: i64;
    let mut var_3f8: i64 = var_4e8;
    let mut var_4e0: i8;
    let mut var_518: i128;
    let mut var_508: i128;
    let var_4df: i32;
    let mut zmm0: i128;
    
    if var_4e0 != 0x25
    {
        *arg1.byte_offset(0x54) = var_4df;
        *arg1.byte_offset(0x51) = var_4df;
        arg1[9] = var_3f8;
        zmm0 = var_438;
        *arg1.byte_offset(0x38) = var_408;
        *arg1.byte_offset(0x28) = var_508;
        *arg1.byte_offset(0x18) = var_518;
        *arg1.byte_offset(8) = zmm0;
        arg1[0xa] = var_4e0;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        zmm0 = var_438;
        let var_208_1: i128 = var_518;
        let var_1f8_1: i128 = var_508;
        let var_1e8_1: i128 = var_408;
        let var_1d8_1: i64 = var_3f8;
        let mut var_278: i128 = zmm0;
        let var_268_1: i128 = var_518;
        let var_258_1: i128 = var_508;
        let var_248_1: i128 = var_408;
        let var_238_1: i64 = var_3f8;
        let mut var_2a8: i64 = 0;
        let var_2a0_1: i64 = 8;
        let var_298_1: i64 = 0;
        
        loop
        {
            let rax_2: i8 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18);
            let mut rax_3: i8;
            
            if rax_2 == 0
            {
                rax_3 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x12);
            }
            
            let mut rcx_4: *mut i64;
            let mut zmm0_1: i128;
            let mut zmm1_1: i128;
            let mut zmm2_1: i128;
            let mut zmm3_1: i128;
            let mut var_4d0: i128;
            let mut var_4c0: i128;
            let var_4b0: i128;
            let mut var_4a0: i128;
            let mut var_490: i128;
            let mut var_480: i128;
            let mut var_470: i128;
            let var_460: i64;
            
            if rax_2 == 0 && rax_3 == 0
            {
                just::parser::Parser::accepted::h762a87b5f98dff30(&var_528, arg2, 0x1e);
                let mut rax_5: i8 = var_528;
                let mut rcx_5: i8 = var_4e0;
                
                if rcx_5 != 0x25
                {
                    'label_67f24c:
                    arg1[9] = var_4e8;
                    let zmm0_2: i128 = var_528;
                    *arg1.byte_offset(0x39) = var_4f8;
                    *arg1.byte_offset(0x29) = var_508;
                    *arg1.byte_offset(0x19) = var_518;
                    *arg1.byte_offset(9) = zmm0_2;
                    *arg1.byte_offset(0x51) = var_4df;
                    *arg1.byte_offset(0x54) = var_4df;
                    arg1[1] = rax_5;
                    arg1[0xa] = rcx_5;
                    *arg1 = -0x8000000000000000;
                    break;
                }
                
                let mut var_338: i128;
                let mut var_328: i128;
                let mut var_1d0: i64;
                
                if (rax_5 & 1) == 0
                {
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_528, arg2, 1);
                    rax_5 = var_528;
                    rcx_5 = var_4e0;
                    
                    if rcx_5 != 0x25
                    {
                        goto 'label_67f24c;
                    }
                    
                    rcx_5 = 2;
                    
                    if (rax_5 & 1) != 0
                    {
                        goto 'label_67f17b;
                    }
                    
                    var_1d0 = 0x13;
                    'label_67f3d5:
                    just::parser::Parser::expect::h35e1151927597ac7(&var_528, arg2, 0xc);
                    
                    if var_4e0 != 0x25
                    {
                        let rcx_9: i64 = var_528;
                        let zmm0_4: i128 = var_528;
                        var_438 = *var_4e8[1];
                        *var_438[3] = *var_4e8[4];
                        *arg1.byte_offset(0x54) = var_4df;
                        *arg1.byte_offset(0x51) = var_4df;
                        let rdi_21: i32 = var_438;
                        *arg1.byte_offset(0x4c) = *var_438[3];
                        *arg1.byte_offset(0x49) = rdi_21;
                        arg1[1] = rcx_9;
                        *arg1.byte_offset(0x10) = zmm0_4;
                        *arg1.byte_offset(0x20) = var_518;
                        *arg1.byte_offset(0x30) = var_508;
                        arg1[8] = *var_4f8[8];
                        arg1[9] = var_4e8;
                        arg1[0xa] = var_4e0;
                        *arg1 = -0x8000000000000000;
                    }
                    else
                    {
                        let mut var_350: i64 = 0;
                        let var_348_1: i64 = 8;
                        let var_340_1: i64 = 0;
                        
                        loop
                        {
                            just::parser::Parser::accept_dependency::ha1ca7da38a60e6d1(&var_528, 
                                arg2);
                            let mut rax_10: i8 = var_4e0;
                            
                            if rax_10 == 0x25
                            {
                                let mut var_418_1: i128 = var_508;
                                let mut var_428_1: i128 = var_518;
                                var_438 = var_528;
                                
                                if var_438 == -0x8000000000000000
                                {
                                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::he4ab9e4d6ad45d88(&var_438);
                                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_528, 
                                        arg2, 0);
                                    let rax_11: i8 = var_528;
                                    
                                    if var_4e0 != 0x25
                                    {
                                        arg1[9] = var_4e8;
                                        let zmm0_6: i128 = var_528;
                                        *arg1.byte_offset(0x39) = var_4f8;
                                        *arg1.byte_offset(0x29) = var_508;
                                        *arg1.byte_offset(0x19) = var_518;
                                        *arg1.byte_offset(9) = zmm0_6;
                                        *arg1.byte_offset(0x51) = var_4df;
                                        *arg1.byte_offset(0x54) = var_4df;
                                        arg1[1] = rax_11;
                                        arg1[0xa] = var_4e0;
                                        *arg1 = -0x8000000000000000;
                                        break;
                                    }
                                    
                                    if (rax_11 & 1) != 0
                                    {
                                        var_338 = 0;
                                        *var_338[8] = 8;
                                        var_328 = 0;
                                        
                                        loop
                                        {
                                            just::parser::Parser::accept_dependency::ha1ca7da38a60e6d1(&var_528, arg2);
                                            
                                            if var_4e0 != 0x25
                                            {
                                                var_438 = var_528;
                                                *arg1.byte_offset(0x54) = var_4df;
                                                *arg1.byte_offset(0x51) = var_4df;
                                                arg1[9] = var_4e8;
                                                let zmm0_7: i128 = var_438;
                                                *arg1.byte_offset(0x38) = var_4f8;
                                                *arg1.byte_offset(0x28) = var_508;
                                                *arg1.byte_offset(0x18) = var_518;
                                                *arg1.byte_offset(8) = zmm0_7;
                                                arg1[0xa] = var_4e0;
                                                *arg1 = -0x8000000000000000;
                                                goto 'label_67f9c7;
                                            }
                                            
                                            var_418_1 = var_508;
                                            var_428_1 = var_518;
                                            var_438 = var_528;
                                            
                                            if var_438 == -0x8000000000000000
                                            {
                                                break;
                                            }
                                            
                                            alloc::vec::Vec$LT$T$C$A$GT$::push::h248473822e51be95(
                                                &var_338, &var_438);
                                        }
                                        
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::he4ab9e4d6ad45d88(&var_438);
                                        let rdx_11: i64 = var_328;
                                        
                                        if rdx_11 == 0
                                        {
                                            just::parser::Parser::unexpected_token::hbee08644eef5d075(&var_528, arg2);
                                            let zmm0_10: i128 = var_4e0;
                                            var_3f8 = zmm0_10;
                                            let zmm1_10: i128 = var_528;
                                            let var_408_3: i128 = var_4f8;
                                            let var_418_4: i128 = var_508;
                                            let var_428_4: i128 = var_518;
                                            var_438 = zmm1_10;
                                            *arg1.byte_offset(0x48) = zmm0_10;
                                            *arg1.byte_offset(0x38) = var_4f8;
                                            *arg1.byte_offset(0x28) = var_508;
                                            *arg1.byte_offset(0x18) = var_518;
                                            *arg1.byte_offset(8) = zmm1_10;
                                            *arg1 = -0x8000000000000000;
                                            'label_67f9c7:
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::hffe81f456170349f(&var_338);
                                            break;
                                        }
                                        
                                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::heec1071cb36b2fdf(&var_350, *var_338[8], rdx_11);
                                        var_328 = 0;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::hffe81f456170349f(&var_338);
                                    }
                                    
                                    just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_528, 
                                        arg2);
                                    
                                    if var_4e0 != 0x25
                                    {
                                        arg1[9] = var_4e8;
                                        let zmm0_8: i128 = var_528;
                                        *arg1.byte_offset(0x38) = var_4f8;
                                        *arg1.byte_offset(0x28) = var_508;
                                        *arg1.byte_offset(0x18) = var_518;
                                        *arg1.byte_offset(8) = zmm0_8;
                                        *arg1.byte_offset(0x51) = var_4df;
                                        *arg1.byte_offset(0x54) = var_4df;
                                        arg1[0xa] = var_4e0;
                                        *arg1 = -0x8000000000000000;
                                        break;
                                    }
                                    
                                    just::parser::Parser::parse_body::h8d13522a5ff247cf(&var_528, 
                                        arg2);
                                    rax_10 = var_4e0;
                                    
                                    if rax_10 == 0x25
                                    {
                                        let rax_14: i64 = var_518;
                                        let mut var_2e8: i128 = var_528;
                                        let mut var_541_1: i8;
                                        let mut var_52c_1: i8;
                                        
                                        if rax_14 == 0
                                        {
                                            var_541_1 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0x10);
                                            var_52c_1 = 0;
                                            'label_67f9f6:
                                            let rax_22: i8 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0x13);
                                            let mut rax_23: i8;
                                            
                                            if rax_22 != 0
                                            {
                                                rax_23 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 9);
                                            }
                                            
                                            if rax_22 == 0 || rax_23 == 0
                                            {
                                                let rax_25: i8 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 3);
                                                let mut rax_26: i8;
                                                
                                                if rax_25 != 0
                                                {
                                                    rax_26 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0xa);
                                                }
                                                
                                                if rax_25 == 0 || rax_26 == 0
                                                {
                                                    let mut rax_29: *mut c_void;
                                                    let mut rdx_20: i64;
                                                    rax_29 = just::token::Token::lexeme::h66587cdf67f63270(&var_278);
                                                    var_528 = 0;
                                                    let mut rax_30: *mut i8;
                                                    let mut rdx_21: u64;
                                                    rax_30 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5f, &var_528);
                                                    let mut rbx_1: *mut c_void;
                                                    rbx_1 = 1;
                                                    
                                                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_29, rdx_20, rax_30, rdx_21) == 0
                                                    {
                                                        rbx_1 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0xf);
                                                    }
                                                    
                                                    let mut var_2c8: i64;
                                                    
                                                    if arg4 == 0
                                                    {
                                                        var_2c8 = -0x8000000000000000;
                                                    }
                                                    else
                                                    {
                                                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_528, arg4, arg5);
                                                        let var_2b8_1: i64 = var_518;
                                                        var_2c8 = var_528;
                                                    }
                                                    
                                                    let mut var_368_1: u64;
                                                    var_368_1 = rbx_1;
                                                    let rax_34: i64 = *arg3;
                                                    let rcx_23: i64 = arg3[1];
                                                    let mut rsi_30: i64 = rax_34;
                                                    
                                                    if rax_34 != 0
                                                    {
                                                        rsi_30 = arg3[2];
                                                    }
                                                    
                                                    let mut rdx_24: i64;
                                                    rdx_24 = rax_34 != 0;
                                                    var_528 = rdx_24;
                                                    *var_528[8] = 0;
                                                    var_518 = rax_34;
                                                    *var_518[8] = rcx_23;
                                                    var_508 = rdx_24;
                                                    *var_508[8] = 0;
                                                    var_4f8 = rax_34;
                                                    *var_4f8[8] = rcx_23;
                                                    let var_4e8_1: i64 = rsi_30;
                                                    
                                                    loop
                                                    {
                                                        let rax_35: *mut i64 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_528);
                                                        
                                                        if rax_35 == 0
                                                        {
                                                            break;
                                                        }
                                                        
                                                        if *rax_35 == -0x7ffffffffffffffd
                                                        {
                                                            let mut rbp_1: i64 =
                                                                -0x8000000000000000;
                                                            
                                                            if rax_35[1] != -0x8000000000000000
                                                            {
                                                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_438, &rax_35[1]);
                                                                rbp_1 = var_438;
                                                                var_338 = var_438;
                                                            }
                                                            
                                                            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_2c8);
                                                            var_2c8 = rbp_1;
                                                            let var_2c0_1: i128 = var_338;
                                                        }
                                                    }
                                                    
                                                    let mut var_230: i128;
                                                    core::option::Option$LT$T$GT$::filter::h45f0602a68689dd2(&var_230, &var_2c8);
                                                    let rbp_2: i32 = *arg2.byte_offset(0x80);
                                                    let mut var_290: i128;
                                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h76b75c009ea05d96(&var_290, *arg2.byte_offset(8), 
                                                        *arg2.byte_offset(0x10));
                                                    var_338 = -0x8000000000000000;
                                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h5f6a46902c0efe8a(&var_438, &var_2a8);
                                                    core::iter::traits::iterator::Iterator::chain::h6d05814085ed3495(&var_528, &var_438, &var_1d0);
                                                    core::iter::traits::iterator::Iterator::collect::h13e6de0284408168(&var_438, &var_528);
                                                    let var_450_1: i128 = *arg3;
                                                    let var_440_1: i64 = arg3[2];
                                                    var_528 = var_2e8;
                                                    var_518 = rax_14;
                                                    var_518 = var_350;
                                                    *var_508[8] = var_340_1;
                                                    var_4d0 = var_230;
                                                    let var_220: i64;
                                                    *var_4c0[8] = var_220;
                                                    let var_280: i64;
                                                    let var_4e8_2: i64 = var_280;
                                                    let var_4f8_1: i128 = var_290;
                                                    let var_458_1: i64 = var_1d8_1;
                                                    var_470 = var_1e8_1;
                                                    var_480 = var_1f8_1;
                                                    var_490 = var_208_1;
                                                    var_4a0 = zmm0;
                                                    var_4a0 = var_328;
                                                    let var_4b0_1: i128 = var_338;
                                                    var_4d0 = var_428_1;
                                                    var_4e0 = var_438;
                                                    memcpy(arg1, &var_528, 0xf0);
                                                    arg1[0x1e] = var_340_1;
                                                    arg1[0x1f] = rbp_2;
                                                    *arg1.byte_offset(0xfc) = var_368_1;
                                                    *arg1.byte_offset(0xfd) = arg6;
                                                    *arg1.byte_offset(0xfe) = var_52c_1 | var_541_1;
                                                    return arg6;
                                                }
                                                
                                                let mut rax_27: *mut c_void;
                                                let mut rdx_18: i64;
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
                                                let mut rax_24: *mut c_void;
                                                let mut rdx_16: i64;
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
                                            let rax_15: *mut c_void = *var_2e8[8];
                                            var_52c_1 =
                                                just::line::Line::is_shebang::h85dfa5042413650f(
                                                *rax_15.byte_offset(8), *rax_15.byte_offset(0x10));
                                            var_541_1 = just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg3, 0x10);
                                            
                                            if (var_52c_1 & var_541_1) != 1
                                            {
                                                goto 'label_67f9f6;
                                            }
                                            
                                            let mut rax_19: *mut c_void;
                                            let mut rdx_12: i64;
                                            rax_19 = just::token::Token::lexeme::h66587cdf67f63270(
                                                &var_278);
                                            *var_528[8] = rax_19;
                                            var_518 = rdx_12;
                                            var_528 = -0x7fffffffffffffce;
                                            just::token::Token::error::h986494da066a4455(&var_438, 
                                                &var_278, &var_528);
                                        }
                                        *arg1.byte_offset(0x48) = var_3f8;
                                        let zmm0_9: i128 = var_438;
                                        *arg1.byte_offset(0x38) = var_408;
                                        *arg1.byte_offset(0x28) = var_418_1;
                                        *arg1.byte_offset(0x18) = var_428_1;
                                        *arg1.byte_offset(8) = zmm0_9;
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
                            *arg1.byte_offset(0x54) = var_4df;
                            *arg1.byte_offset(0x51) = var_4df;
                            arg1[9] = var_4e8;
                            let zmm0_5: i128 = var_438;
                            *arg1.byte_offset(0x38) = var_4f8;
                            *arg1.byte_offset(0x28) = var_508;
                            *arg1.byte_offset(0x18) = var_518;
                            *arg1.byte_offset(8) = zmm0_5;
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
                'label_67f17b:
                just::parser::Parser::parse_parameter::h2e23104b2386c6b5(&var_528, arg2, rcx_5);
                let rax_6: i64 = var_528;
                var_338 = var_528;
                var_328 = var_518;
                let var_2f8_1: i128 = var_4e0;
                
                if rax_6 != 0x13
                {
                    let var_370_1: i64 = var_460;
                    let var_380_1: i128 = var_470;
                    let var_390_1: i128 = var_480;
                    let var_3a0_1: i128 = var_490;
                    let var_3b0_1: i128 = var_4a0;
                    let var_3c0_1: i128 = var_4b0;
                    let var_3d0_1: i128 = var_4c0;
                    let var_3e0_1: i128 = var_4d0;
                    var_438 = var_338;
                    let var_428: i128 = var_328;
                    let var_418: i128 = var_508;
                    var_408 = var_4f8;
                    let var_3f0_1: i128 = var_2f8_1;
                    var_438 = rax_6;
                    just::parser::Parser::forbid::h3395c9dfac3fe700(&var_528, arg2);
                    
                    if var_4e0 == 0x25
                    {
                        memcpy(&var_1d0, &var_438, 0xd0);
                        goto 'label_67f3d5;
                    }
                    
                    arg1[9] = var_4e8;
                    let zmm0_3: i128 = var_528;
                    *arg1.byte_offset(0x38) = var_4f8;
                    *arg1.byte_offset(0x28) = var_508;
                    *arg1.byte_offset(0x18) = var_518;
                    *arg1.byte_offset(8) = zmm0_3;
                    *arg1.byte_offset(0x51) = var_4df;
                    *arg1.byte_offset(0x54) = var_4df;
                    arg1[0xa] = var_4e0;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$just..parameter..Parameter$GT$::h59e077086333883a(
                        &var_438);
                    break;
                }
                
                rcx_4 = arg1;
                *rcx_4.byte_offset(0x48) = var_2f8_1;
                zmm0_1 = var_338;
                zmm1_1 = var_328;
                zmm2_1 = var_508;
                zmm3_1 = var_4f8;
            }
            else
            {
                just::parser::Parser::parse_parameter::h2e23104b2386c6b5(&var_528, arg2, 1);
                let rax_4: i64 = var_528;
                var_438 = var_528;
                var_408 = var_4f8;
                var_3f8 = var_4e0;
                
                if rax_4 == 0x13
                {
                    rcx_4 = arg1;
                    *rcx_4.byte_offset(0x48) = var_3f8;
                    zmm0_1 = var_438;
                    zmm1_1 = var_518;
                    zmm2_1 = var_508;
                    zmm3_1 = var_408;
                }
                else
                {
                    let var_38_1: i64 = var_460;
                    let var_48_1: i128 = var_470;
                    let var_58_1: i128 = var_480;
                    let var_68_1: i128 = var_490;
                    let var_78_1: i128 = var_4a0;
                    let var_88_1: i128 = var_4b0;
                    let var_98_1: i128 = var_4c0;
                    let var_a8_1: i128 = var_4d0;
                    let mut var_100: i64 = rax_4;
                    let var_b8_1: i128 = var_3f8;
                    let var_c8_1: i128 = var_408;
                    let var_d8_1: i128 = var_508;
                    let var_e8_1: i128 = var_518;
                    let var_f8_1: i128 = var_438;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb918924c84f3e1ad(&var_2a8, &var_100);
                    continue;
                }
            }
            *rcx_4.byte_offset(0x38) = zmm3_1;
            *rcx_4.byte_offset(0x28) = zmm2_1;
            *rcx_4.byte_offset(0x18) = zmm1_1;
            *rcx_4.byte_offset(8) = zmm0_1;
            *rcx_4 = -0x8000000000000000;
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..parameter..Parameter$GT$$GT$::hfa61b517cecc91d9(&var_2a8);
    }
    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(arg3)
}
