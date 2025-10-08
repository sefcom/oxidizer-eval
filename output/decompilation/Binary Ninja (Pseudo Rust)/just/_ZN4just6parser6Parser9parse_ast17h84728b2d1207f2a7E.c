
  fn just::parser::Parser::parse_ast::h84728b2d1207f2a7(arg1: *mut i64, arg2: u64) -> i64

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut var_370: i64 = 0;
    let var_368: i64 = 8;
    let var_360: i64 = 0;
    let mut var_478: i128;
    just::parser::Parser::accept::hbdbbefbcb8377711(&var_478, arg2, 0xb);
    let mut var_430: i8;
    let mut var_468: i128;
    let mut var_458: i128;
    let mut var_448: i128;
    let mut var_438: i64;
    let mut var_42f: i32;
    let var_42c: i32;
    let mut var_328: i128;
    
    if var_430 != 0x25
    {
        var_328 = var_478;
        *arg1.byte_offset(0x54) = var_42c;
        *arg1.byte_offset(0x51) = var_42f;
        arg1[9] = var_438;
        let zmm0_1: i128 = var_328;
        *arg1.byte_offset(0x38) = var_448;
        *arg1.byte_offset(0x28) = var_458;
        *arg1.byte_offset(0x18) = var_468;
        *arg1.byte_offset(8) = zmm0_1;
        arg1[0xa] = var_430;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut r13_1: i32 = 0;
        
        loop
        {
            just::parser::Parser::parse_attributes::hcab544f637ea62a1(&var_478, arg2);
            let mut var_2e8: i64;
            let mut zmm1_2: i128;
            
            if var_478 == 1
            {
                let zmm0_2: i128 = var_430;
                var_2e8 = zmm0_2;
                zmm1_2 = var_478;
                let var_2f8_4: i128 = var_448;
                let var_308_3: i128 = var_458;
                let var_318_3: i128 = var_468;
                var_328 = zmm1_2;
                *arg1.byte_offset(0x48) = zmm0_2;
                *arg1.byte_offset(0x38) = var_448;
                *arg1.byte_offset(0x28) = var_458;
                *arg1.byte_offset(0x18) = var_468;
                *arg1.byte_offset(8) = zmm1_2;
            }
            else
            {
                let mut var_420: i128;
                let mut var_2d8: i128 = var_420;
                zmm1_2 = var_430;
                var_2e8 = zmm1_2;
                let var_2f8_1: i128 = var_448;
                let mut var_228: i128 = var_478;
                let mut var_218_1: i64 = var_468;
                let var_208_1: i128 = var_458;
                let var_1f8_1: i128 = var_448;
                let mut var_1e8: i128 = zmm1_2;
                let var_1d8_1: i128 = var_420;
                just::parser::Parser::next::h26f20bd451ef506f(&var_478, arg2);
                let mut rax_1: i8 = var_430;
                var_328 = var_478;
                let mut var_318_1: i128 = var_468;
                let mut var_308_1: i128 = var_458;
                let mut var_2f8_2: i128 = var_448;
                var_2e8 = var_438;
                let mut rcx_24: i32;
                let mut zmm0_3: i128;
                
                if rax_1 != 0x25
                {
                    'label_67964a:
                    rcx_24 = var_42f;
                    *arg1.byte_offset(0x54) = var_42c;
                    'label_67965c:
                    *arg1.byte_offset(0x51) = rcx_24;
                    arg1[9] = var_2e8;
                    zmm0_3 = var_328;
                    *arg1.byte_offset(0x38) = var_2f8_2;
                    *arg1.byte_offset(0x28) = var_308_1;
                    *arg1.byte_offset(0x18) = var_318_1;
                    *arg1.byte_offset(8) = zmm0_3;
                    'label_679855:
                    arg1[0xa] = rax_1;
                    goto 'label_679863;
                }
                
                let mut var_78: i128 = var_328;
                let var_68_1: i128 = var_318_1;
                let var_58_1: i128 = var_308_1;
                let var_48_1: i128 = var_2f8_2;
                let var_38_1: i64 = var_2e8;
                just::parser::Parser::accept::hbdbbefbcb8377711(&var_478, arg2, 0x10);
                let mut rcx_2: i8 = var_430;
                let zmm0_4: i128 = var_478;
                let rax_3: i8 = var_438;
                let rsi_3: i32 = *var_438[4];
                let var_378_1: i32 = *var_438[1];
                
                if rcx_2 != 0x25
                {
                    *arg1.byte_offset(0x54) = var_42c;
                    *arg1.byte_offset(0x51) = var_42f;
                    *arg1.byte_offset(0x38) = var_448;
                    *arg1.byte_offset(0x28) = var_458;
                    *arg1.byte_offset(0x18) = var_468;
                    *arg1.byte_offset(8) = zmm0_4;
                    *arg1.byte_offset(0x4c) = rsi_3;
                    *arg1.byte_offset(0x49) = rsi_3;
                    arg1[9] = rax_3;
                    'label_6797fc:
                    arg1[0xa] = rcx_2;
                    'label_679863:
                    *arg1 = -0x8000000000000000;
                    'label_679866:
                    
                    if var_1e8 == 0x25
                    {
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(&*var_1e8[8]);
                    break;
                }
                
                if rax_3 != 0x25
                {
                    var_2f8_2 = var_448;
                    var_308_1 = var_458;
                    var_318_1 = var_468;
                    var_328 = zmm0_4;
                    var_2e8 = rax_3;
                    *var_2e8[4] = rsi_3;
                    *var_2e8[1] = rsi_3;
                    let mut rax_14: *mut c_void;
                    let mut rdx_3: i64;
                    rax_14 = just::token::Token::lexeme::h66587cdf67f63270(&var_328);
                    let mut rax_15: i64;
                    let mut rdx_4: i64;
                    rax_15 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::he3fbcf3618bccae8(
                        rax_14, rdx_3);
                    *var_478[8] = rax_15;
                    var_468 = rdx_4;
                    var_478 = -0x7ffffffffffffffe;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, &var_478);
                    just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_478, arg2);
                    rax_1 = var_430;
                    
                    if rax_1 != 0x25
                    {
                        'label_67980a:
                        arg1[9] = var_438;
                        let zmm0_7: i128 = var_478;
                        *arg1.byte_offset(0x38) = var_448;
                        *arg1.byte_offset(0x28) = var_458;
                        *arg1.byte_offset(0x18) = var_468;
                        *arg1.byte_offset(8) = zmm0_7;
                        *arg1.byte_offset(0x51) = var_42f;
                        *arg1.byte_offset(0x54) = var_42c;
                        goto 'label_679855;
                    }
                    
                    rbp = 0;
                    'label_67844f:
                    
                    if var_1e8 == 0x25
                    {
                        'label_678465:
                        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$just..token..Token$C$just..attribute_set..AttributeSet$RP$$GT$$GT$::h2c68d15f2b7d15fb(&var_228);
                        r13_1 = rbp;
                        continue;
                    }
                    
                    'label_67971e:
                    *var_478[8] = *var_1d8_1[8];
                    var_478 = -0x7fffffffffffffdc;
                    just::token::Token::error::h986494da066a4455(&var_328, &var_228, &var_478);
                    *arg1.byte_offset(0x48) = var_2e8;
                    let zmm0_23: i128 = var_328;
                    *arg1.byte_offset(0x38) = var_2f8_2;
                    *arg1.byte_offset(0x28) = var_308_1;
                    *arg1.byte_offset(0x18) = var_318_1;
                    *arg1.byte_offset(8) = zmm0_23;
                    *arg1 = -0x8000000000000000;
                    rbp = 1;
                    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(&*var_1e8[8]);
                    break;
                }
                else
                {
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 0x14);
                    let mut rax_4: i8 = var_478;
                    rcx_2 = var_430;
                    
                    if rcx_2 != 0x25
                    {
                        'label_6797ad:
                        arg1[9] = var_438;
                        let zmm0_5: i128 = var_478;
                        *arg1.byte_offset(0x39) = var_448;
                        *arg1.byte_offset(0x29) = var_458;
                        *arg1.byte_offset(0x19) = var_468;
                        *arg1.byte_offset(9) = zmm0_5;
                        *arg1.byte_offset(0x51) = var_42f;
                        *arg1.byte_offset(0x54) = var_42c;
                        arg1[1] = rax_4;
                        goto 'label_6797fc;
                    }
                    
                    rbp = 1;
                    
                    if (rax_4 & 1) != 0
                    {
                        goto 'label_67844f;
                    }
                    
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 0x13);
                    rax_4 = var_478;
                    rcx_2 = var_430;
                    
                    if rcx_2 != 0x25
                    {
                        goto 'label_6797ad;
                    }
                    
                    let mut var_4d8: i128;
                    let mut var_2e0: i128;
                    
                    if (rax_4 & 1) != 0
                    {
                        let rdx_30: u64 = core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$just..token..Token$C$just..attribute_set..AttributeSet$RP$$GT$$GT$::h2c68d15f2b7d15fb(&var_228);
                        let rax_67: i64 = *(arg2 + 0x20);
                        
                        if rax_67 == *(arg2 + 0x58)
                        {
                            var_4d8 = var_370;
                            let rsi_53: *mut c_void = *(arg2 + 0x50);
                            let mut rax_70: i64;
                            
                            if rsi_53 != 0
                            {
                                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h4814849cf5941557(&var_478, rsi_53);
                                rax_70 = var_478;
                                var_328 = var_478;
                            }
                            
                            if rsi_53 != 0 && rax_70 != -0x8000000000000000
                            {
                                var_228 = var_328;
                                var_228 = rax_70;
                            }
                            else
                            {
                                var_228 = 0;
                                *var_228[8] = 1;
                                var_218_1 = 0;
                            }
                            
                            var_318_1 = *(arg2 + 0x78);
                            var_328 = *(arg2 + 0x68);
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_478, *(arg2 + 0x28), *(arg2 + 0x30));
                            arg1[0xb] = var_468;
                            *arg1.byte_offset(0x48) = var_478;
                            var_478 = var_4d8;
                            var_468 = var_360;
                            var_468 = var_228;
                            *var_458[8] = var_218_1;
                            arg1[0xe] = var_318_1;
                            *arg1.byte_offset(0x60) = var_328;
                            let zmm0_27: i128 = var_478;
                            arg1[4] = var_458;
                            arg1[5] = *var_458[8];
                            arg1[2] = var_468;
                            arg1[3] = *var_468[8];
                            *arg1 = zmm0_27;
                            arg1[6] = 0;
                            arg1[7] = 1;
                            arg1[8] = 0;
                            core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$just..unstable_feature..UnstableFeature$GT$$GT$::h9eaa1dd0bb003650(arg2 + 0x38);
                            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(*arg2, *(arg2 + 8));
                        }
                        
                        var_228 = rax_67 - *(arg2 + 0x58);
                        var_328 = &var_228;
                        *var_328[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        var_478 = &data_830760;
                        *var_478[8] = 2;
                        var_458 = 0;
                        var_468 = &var_328;
                        *var_468[8] = 1;
                        let mut var_90: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_90, 0, 
                            rdx_30, &var_478);
                        let var_80: i64;
                        *var_468[8] = var_80;
                        var_478 = var_90;
                        var_478 = -0x7fffffffffffffd8;
                        just::parser::Parser::error::hcfcee5ba02637174(&var_328, arg2, &var_478);
                        let zmm0_26: i128 = var_328;
                        var_478 = zmm0_26;
                        let var_468_1: i128 = var_318_1;
                        let var_458_1: i128 = var_308_1;
                        let var_448_1: i128 = var_2f8_2;
                        var_438 = var_2e0;
                        *arg1.byte_offset(0x48) = var_2e0;
                        *arg1.byte_offset(0x38) = var_2f8_2;
                        *arg1.byte_offset(0x28) = var_308_1;
                        *arg1.byte_offset(0x18) = var_318_1;
                        *arg1.byte_offset(8) = zmm0_26;
                    }
                    else
                    {
                        let mut var_4c8: i64;
                        let mut var_4b8: i128;
                        let mut var_4a8: i128;
                        let mut var_498: i128;
                        let mut var_428: i128;
                        let mut var_358: i128;
                        let mut var_348: i64;
                        let mut zmm0_12: i128;
                        let mut zmm1_10: i128;
                        let mut zmm2_10: i128;
                        let mut zmm3_10: i128;
                        let mut zmm4_2: i128;
                        
                        if just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18) == 0
                        {
                            just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 2);
                            rax_4 = var_478;
                            rcx_2 = var_430;
                            
                            if rcx_2 != 0x25
                            {
                                goto 'label_6797ad;
                            }
                            
                            if (rax_4 & 1) == 0
                            {
                                just::parser::Parser::unexpected_token::hbee08644eef5d075(&var_478, 
                                    arg2);
                                zmm0_12 = var_430;
                                var_2e8 = zmm0_12;
                                zmm1_10 = var_478;
                                zmm2_10 = var_468;
                                zmm3_10 = var_458;
                                zmm4_2 = var_448;
                                'label_679ad0:
                                let var_2f8_5: i128 = zmm4_2;
                                let var_308_4: i128 = zmm3_10;
                                let var_318_4: i128 = zmm2_10;
                                var_328 = zmm1_10;
                                'label_679af0:
                                *arg1.byte_offset(0x48) = zmm0_12;
                                *arg1.byte_offset(0x38) = zmm4_2;
                                *arg1.byte_offset(0x28) = zmm3_10;
                                *arg1.byte_offset(0x18) = zmm2_10;
                                *arg1.byte_offset(8) = zmm1_10;
                                goto 'label_679863;
                            }
                            
                            let mut rax_16: i64;
                            let mut rdx_6: u64;
                            rax_16 =
                                just::parser::Parser::parse_ast::pop_doc_comment::h6e6b0063e8da67d5(
                                &var_370, r13_1);
                            var_1e8 = 0x25;
                            
                            if var_1e8 != 0x25
                            {
                                var_348 = *var_1d8_1[8];
                                var_358 = var_1e8;
                            }
                            else
                            {
                                var_358 = 0;
                                var_348 = 0;
                            }
                            
                            just::parser::Parser::parse_recipe::h69ed0cc8c966bc5b(&var_478, arg2, 
                                &var_358, rax_16, rdx_6, 1);
                            let rbp_1: i64 = var_478;
                            var_4d8 = var_478;
                            var_4c8 = var_468;
                            var_4b8 = var_458;
                            var_4a8 = var_448;
                            var_498 = var_430;
                            
                            if rbp_1 == -0x8000000000000000
                            {
                                'label_679942:
                                *arg1.byte_offset(0x48) = var_498;
                                let zmm0_9: i128 = var_4d8;
                                *arg1.byte_offset(0x38) = var_4a8;
                                *arg1.byte_offset(0x28) = var_4b8;
                                *arg1.byte_offset(0x18) = var_4c8;
                                *arg1.byte_offset(8) = zmm0_9;
                                goto 'label_679863;
                            }
                            
                            memcpy(&*var_2d8[8], &*var_428[8], 0xa8);
                            var_2e0 = var_498;
                            var_2f8_2 = var_4a8;
                            var_308_1 = var_4b8;
                            var_318_1 = var_4c8;
                            var_328 = var_4d8;
                            var_328 = rbp_1;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                &var_328);
                            'label_6785da:
                            rbp = r13_1;
                            
                            if var_1e8 == 0x25
                            {
                                goto 'label_678465;
                            }
                            
                            goto 'label_67971e;
                        }
                        
                        let mut rax_6: *mut c_void;
                        let mut rdx_2: u64;
                        rax_6 = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
                        let rax_7: i8 =
                            just::keyword::Keyword::from_lexeme::h4f2cf9490352ebc3(rax_6, rdx_2);
                        let mut var_408: i128;
                        let mut var_3e8: i128;
                        let mut var_3b8: i128;
                        let mut var_2c0: i128;
                        let var_2b0: i128;
                        let var_2a0: i128;
                        let var_290: i128;
                        let var_280: i128;
                        let var_270: i128;
                        let var_260: i64;
                        
                        if rax_7 > 0x19
                        {
                            'label_678d3c:
                            
                            if just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                &data_4715ec, 2) == 0
                            {
                                let mut rax_46: i64;
                                let mut rdx_13: u64;
                                rax_46 = just::parser::Parser::parse_ast::pop_doc_comment::h6e6b0063e8da67d5(&var_370, r13_1);
                                var_1e8 = 0x25;
                                
                                if var_1e8 != 0x25
                                {
                                    var_348 = *var_1d8_1[8];
                                    var_358 = var_1e8;
                                }
                                else
                                {
                                    var_358 = 0;
                                    var_348 = 0;
                                }
                                
                                just::parser::Parser::parse_recipe::h69ed0cc8c966bc5b(&var_478, 
                                    arg2, &var_358, rax_46, rdx_13, 0);
                                let rbp_3: i64 = var_478;
                                var_4d8 = var_478;
                                var_4c8 = var_468;
                                var_4b8 = var_458;
                                var_4a8 = var_448;
                                var_498 = var_430;
                                
                                if rbp_3 == -0x8000000000000000
                                {
                                    goto 'label_679942;
                                }
                                
                                memcpy(&*var_2d8[8], &*var_428[8], 0xa8);
                                var_2e0 = var_498;
                                var_2f8_2 = var_4a8;
                                var_308_1 = var_4b8;
                                var_318_1 = var_4c8;
                                var_328 = var_4d8;
                                var_328 = rbp_3;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_328);
                                goto 'label_6785da;
                            }
                            
                            var_1e8 = 0x25;
                            
                            if var_1e8 != 0x25
                            {
                                var_348 = *var_1d8_1[8];
                                var_358 = var_1e8;
                            }
                            else
                            {
                                var_358 = 0;
                                var_348 = 0;
                            }
                            
                            just::parser::Parser::parse_assignment::h686a366a81169095(&var_328, 
                                arg2, 0, &var_358);
                            let rax_48: i64 = var_328;
                            var_4d8 = var_328;
                            var_4c8 = var_318_1;
                            var_4b8 = var_308_1;
                            var_4a8 = var_2f8_2;
                            var_498 = var_2e0;
                            
                            if rax_48 == 0x12
                            {
                                'label_679c26:
                                *arg1.byte_offset(0x48) = var_498;
                                let zmm0_16: i128 = var_4d8;
                                *arg1.byte_offset(0x38) = var_4a8;
                                *arg1.byte_offset(0x28) = var_4b8;
                                *arg1.byte_offset(0x18) = var_4c8;
                                *arg1.byte_offset(8) = zmm0_16;
                                goto 'label_679863;
                            }
                            
                            let var_3a8_1: i64 = var_260;
                            var_3b8 = var_270;
                            let var_3c8_1: i128 = var_280;
                            let var_3d8_1: i128 = var_290;
                            var_3e8 = var_2a0;
                            let var_3f8_3: i128 = var_2b0;
                            var_408 = var_2c0;
                            var_420 = var_2d8;
                            var_428 = var_498;
                            var_438 = var_4a8;
                            var_448 = var_4b8;
                            var_458 = var_4c8;
                            var_468 = var_4d8;
                            *var_478[8] = rax_48;
                            var_478 = -0x7fffffffffffffff;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                &var_478);
                            goto 'label_6785da;
                        }
                        
                        match rax_7
                        {
                            0 =>
                            {
                                if just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715d1, 3) == 0
                                {
                                    goto 'label_678d3c;
                                }
                                
                                var_1e8 = 0x25;
                                
                                if var_1e8 != 0x25
                                {
                                    var_348 = *var_1d8_1[8];
                                    var_358 = var_1e8;
                                }
                                else
                                {
                                    var_358 = 0;
                                    var_348 = 0;
                                }
                                
                                just::parser::Parser::parse_alias::h6cb13903fa7449d5(&var_328, 
                                    arg2, &var_358);
                                let rax_50: i64 = var_328;
                                var_4d8 = var_328;
                                var_4c8 = var_318_1;
                                
                                if rax_50 == -0x8000000000000000
                                {
                                    *arg1.byte_offset(0x48) = var_2e0;
                                    let zmm0_18: i128 = var_4d8;
                                    *arg1.byte_offset(0x38) = var_2f8_2;
                                    *arg1.byte_offset(0x28) = var_308_1;
                                    *arg1.byte_offset(0x18) = var_4c8;
                                    *arg1.byte_offset(8) = zmm0_18;
                                    *arg1 = -0x8000000000000000;
                                    goto 'label_679866;
                                }
                                
                                var_408 = var_2c0;
                                var_420 = var_2d8;
                                var_428 = var_2e0;
                                var_438 = var_2f8_2;
                                var_448 = var_308_1;
                                var_458 = var_4c8;
                                var_468 = var_4d8;
                                *var_478[8] = rax_50;
                                var_478 = -0x8000000000000000;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_478);
                                goto 'label_6785da;
                            }
                            1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xb | 0xc | 0xd | 0xe | 0x11 | 0x12
                                | 0x13 | 0x14 | 0x16 | 0x17 | 0x18 =>
                            {
                                goto 'label_678d3c;
                            }
                            0xa =>
                            {
                                if just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715d1, 3) == 0
                                {
                                    goto 'label_678d3c;
                                }
                                
                                just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_478, 
                                    arg2, 0xa);
                                rax_1 = var_430;
                                
                                if rax_1 != 0x25
                                {
                                    goto 'label_67980a;
                                }
                                
                                var_1e8 = 0x25;
                                
                                if var_1e8 != 0x25
                                {
                                    var_348 = *var_1d8_1[8];
                                    var_358 = var_1e8;
                                }
                                else
                                {
                                    var_358 = 0;
                                    var_348 = 0;
                                }
                                
                                just::parser::Parser::parse_assignment::h686a366a81169095(&var_328, 
                                    arg2, 1, &var_358);
                                let rax_52: i64 = var_328;
                                var_4d8 = var_328;
                                var_4c8 = var_318_1;
                                var_4b8 = var_308_1;
                                var_4a8 = var_2f8_2;
                                var_498 = var_2e0;
                                
                                if rax_52 == 0x12
                                {
                                    goto 'label_679c26;
                                }
                                
                                let var_3a8_2: i64 = var_260;
                                var_3b8 = var_270;
                                let var_3c8_2: i128 = var_280;
                                let var_3d8_2: i128 = var_290;
                                var_3e8 = var_2a0;
                                let var_3f8_4: i128 = var_2b0;
                                var_408 = var_2c0;
                                var_420 = var_2d8;
                                var_428 = var_498;
                                var_438 = var_4a8;
                                var_448 = var_4b8;
                                var_458 = var_4c8;
                                var_468 = var_4d8;
                                *var_478[8] = rax_52;
                                var_478 = -0x7fffffffffffffff;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_478);
                                goto 'label_6785da;
                            }
                            0xf =>
                            {
                                if just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715d4, 2) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715d6, 3) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715d9, 2) == 0
                                {
                                    goto 'label_678d3c;
                                }
                                
                                just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_478, 
                                    arg2, 0xf);
                                rax_1 = var_430;
                                
                                if rax_1 != 0x25
                                {
                                    goto 'label_67980a;
                                }
                                
                                just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 
                                    0x1f);
                                let rbp_2: i8 = var_478;
                                rax_1 = var_430;
                                
                                if rax_1 != 0x25
                                {
                                    arg1[9] = var_438;
                                    let zmm0_11: i128 = var_478;
                                    *arg1.byte_offset(0x39) = var_448;
                                    *arg1.byte_offset(0x29) = var_458;
                                    *arg1.byte_offset(0x19) = var_468;
                                    *arg1.byte_offset(9) = zmm0_11;
                                    *arg1.byte_offset(0x51) = var_42f;
                                    *arg1.byte_offset(0x54) = var_42c;
                                    arg1[1] = rbp_2;
                                    goto 'label_679855;
                                }
                                
                                just::parser::Parser::parse_string_literal_token::h0d1e77bec93423b0(
                                    &var_478, arg2);
                                
                                if var_478 == 1
                                {
                                    zmm0_12 = var_430;
                                    var_2e8 = zmm0_12;
                                    zmm1_10 = var_478;
                                    zmm2_10 = var_468;
                                    zmm3_10 = var_458;
                                    zmm4_2 = var_448;
                                    goto 'label_679ad0;
                                }
                                
                                *var_2c0[8] = *var_408[8];
                                let var_410: i128;
                                let var_2c8_1: i128 = var_410;
                                var_2d8 = var_420;
                                var_2e8 = var_430;
                                zmm0_12 = var_478;
                                var_2f8_2 = var_448;
                                var_308_1 = var_458;
                                var_318_1 = var_468;
                                var_328 = zmm0_12;
                                var_3e8 = var_2e8;
                                let var_3f8_1: i128 = var_448;
                                var_408 = var_458;
                                var_420 = var_468;
                                var_428 = zmm0_12;
                                var_458 = var_2c0;
                                var_468 = var_2d8;
                                var_478 = var_2e0;
                                *var_448[8] = -0x8000000000000000;
                                *var_3e8[8] = rbp_2;
                                var_478 = -0x7ffffffffffffffd;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_478);
                                goto 'label_6785da;
                            }
                            0x10 =>
                            {
                                if just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715db, 3) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715de, 3) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715e1, 3) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_467d98, 4) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715d6, 3) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715d9, 2) == 0
                                {
                                    goto 'label_678d3c;
                                }
                                
                                let mut rax_34: i64;
                                let mut rdx_11: u64;
                                rax_34 = just::parser::Parser::parse_ast::pop_doc_comment::h6e6b0063e8da67d5(&var_370, r13_1);
                                just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_478, 
                                    arg2, 0x10);
                                rax_1 = var_430;
                                
                                if rax_1 != 0x25
                                {
                                    goto 'label_67980a;
                                }
                                
                                just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 
                                    0x1f);
                                let rsi_27: i8 = var_478;
                                rax_1 = var_430;
                                
                                if rax_1 != 0x25
                                {
                                    arg1[9] = var_438;
                                    let zmm0_13: i128 = var_478;
                                    *arg1.byte_offset(0x39) = var_448;
                                    *arg1.byte_offset(0x29) = var_458;
                                    *arg1.byte_offset(0x19) = var_468;
                                    *arg1.byte_offset(9) = zmm0_13;
                                    *arg1.byte_offset(0x51) = var_42f;
                                    *arg1.byte_offset(0x54) = var_42c;
                                    arg1[1] = rsi_27;
                                    goto 'label_679855;
                                }
                                
                                just::parser::Parser::parse_name::he2804e36e47b7e10(&var_478, arg2);
                                rax_1 = var_430;
                                var_328 = var_478;
                                var_318_1 = var_468;
                                var_308_1 = var_458;
                                var_2f8_2 = var_448;
                                var_2e8 = var_438;
                                
                                if rax_1 != 0x25
                                {
                                    goto 'label_67964a;
                                }
                                
                                let mut var_128: i128 = var_328;
                                let var_118_1: i128 = var_318_1;
                                let var_108_1: i128 = var_308_1;
                                let var_f8_1: i128 = var_2f8_2;
                                let rax_36: i8 =
                                    just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x21);
                                let mut rax_37: i8;
                                
                                if rax_36 == 0
                                {
                                    rax_37 = just::parser::Parser::next_are::he794a8e7ca711dc5(
                                        arg2, &data_4715d4, 2);
                                }
                                
                                let mut var_338: i128;
                                
                                if rax_36 == 0 && rax_37 == 0
                                {
                                    var_358 = -0x8000000000000000;
                                }
                                else
                                {
                                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(
                                        &var_478, arg2);
                                    rax_1 = var_430;
                                    
                                    if rax_1 != 0x25
                                    {
                                        var_2e8 = var_438;
                                        var_2f8_2 = var_448;
                                        var_308_1 = var_458;
                                        var_318_1 = var_468;
                                        var_328 = var_478;
                                        *arg1.byte_offset(0x54) = var_42c;
                                        rcx_24 = var_42f;
                                        goto 'label_67965c;
                                    }
                                    
                                    var_358 = var_478;
                                    var_348 = var_468;
                                    var_338 = var_458;
                                }
                                
                                var_1e8 = 0x25;
                                let mut var_1c8: i128;
                                
                                if var_1e8 != 0x25
                                {
                                    let var_1b8_2: i64 = *var_1d8_1[8];
                                    var_1c8 = var_1e8;
                                }
                                else
                                {
                                    var_1c8 = 0;
                                    let var_1b8_1: i64 = 0;
                                }
                                
                                just::attribute_set::AttributeSet::ensure_valid_attributes::h6f0be17f12135348(&var_478, &var_1c8, &data_4715e6, 6, &var_128, &data_4715e4, 2);
                                
                                if var_430 != 0x25
                                {
                                    arg1[9] = var_438;
                                    let zmm0_19: i128 = var_478;
                                    *arg1.byte_offset(0x38) = var_448;
                                    *arg1.byte_offset(0x28) = var_458;
                                    *arg1.byte_offset(0x18) = var_468;
                                    *arg1.byte_offset(8) = zmm0_19;
                                    *arg1.byte_offset(0x51) = var_42f;
                                    *arg1.byte_offset(0x54) = var_42c;
                                    arg1[0xa] = var_430;
                                    *arg1 = -0x8000000000000000;
                                    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(&var_1c8);
                                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..string_literal..StringLiteral$GT$$GT$::h94f50fc937bb4763(&var_358);
                                    goto 'label_679866;
                                }
                                
                                let rax_56: *mut i64 =
                                    just::attribute_set::AttributeSet::get::h29ad4fd4e40977f3(
                                    &var_1c8, 2);
                                let mut var_1a8: i64;
                                let mut var_198: i64;
                                
                                if rax_56 != 0
                                {
                                    if *rax_56 != -0x7ffffffffffffffd
                                    {
                                        core::panicking::panic::h85d6dd562679980c(
                                            "internal error: entered unreacha…");
                                        /* no return */
                                    }
                                    
                                    if rax_56[1] != -0x8000000000000000
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_478, &rax_56[1]);
                                        var_198 = var_468;
                                        var_1a8 = var_478;
                                    }
                                    else
                                    {
                                        var_1a8 = -0x8000000000000000;
                                    }
                                }
                                else if rax_34 == 0
                                {
                                    var_1a8 = -0x8000000000000000;
                                }
                                else
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_478, rax_34, rdx_11);
                                    var_198 = var_468;
                                    var_1a8 = var_478;
                                }
                                
                                let mut var_190: i64 = 0;
                                let var_188_1: i64 = 8;
                                let var_180_1: i64 = 0;
                                _$LT$just..attribute_set..AttributeSet$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::had74f49292d56edb(&var_4d8, &var_1c8);
                                
                                loop
                                {
                                    _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h02784b14e61dc3b1(&var_478, &var_4d8);
                                    let rax_59: i64 = var_478;
                                    
                                    if rax_59 == -0x7fffffffffffffeb
                                    {
                                        break;
                                    }
                                    
                                    var_2f8_2 = var_448;
                                    var_308_1 = var_458;
                                    var_318_1 = var_468;
                                    var_328 = var_478;
                                    var_328 = rax_59;
                                    
                                    if rax_59 != -0x7ffffffffffffffa
                                    {
                                        core::ptr::drop_in_place$LT$just..attribute..Attribute$GT$::h0286f94ea05206a8(&var_328);
                                    }
                                    else
                                    {
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(
                                            &var_190, &*var_328[8]);
                                    }
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..collections..btree..set..IntoIter$LT$just..attribute..Attribute$GT$$GT$::hf36dddba5da63010(&var_4d8);
                                *var_468[8] = var_180_1;
                                var_478 = var_190;
                                var_430 = var_198;
                                var_448 = var_1a8;
                                var_408 = var_338;
                                var_420 = var_348;
                                var_428 = var_358;
                                var_458 = -0x8000000000000000;
                                var_3b8 = var_2e8;
                                let var_3c8_3: i128 = var_f8_1;
                                let var_3d8_3: i128 = var_108_1;
                                var_3e8 = var_118_1;
                                let var_3f8_5: i128 = var_128;
                                *var_3b8[8] = rsi_27;
                                var_478 = -0x7ffffffffffffffc;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_478);
                                goto 'label_6785da;
                            }
                            0x15 =>
                            {
                                if just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715d1, 3) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_467f04, 4) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_467d9c, 4) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715de, 3) == 0 &&
                                    just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                    &data_4715e1, 3) == 0
                                {
                                    goto 'label_678d3c;
                                }
                                
                                just::parser::Parser::parse_set::ha11a3ca6b0fbece6(&var_328, arg2);
                                let rax_43: i8 = var_328;
                                
                                if rax_43 == 0x14
                                {
                                    zmm0_12 = var_2e0;
                                    var_498 = zmm0_12;
                                    zmm1_10 = var_328;
                                    zmm2_10 = var_318_1;
                                    zmm3_10 = var_308_1;
                                    zmm4_2 = var_2f8_2;
                                    var_4a8 = zmm4_2;
                                    var_4b8 = zmm3_10;
                                    *var_4c8[7] = zmm2_10;
                                    var_4d8 = zmm1_10;
                                    goto 'label_679af0;
                                }
                                
                                *var_498[0xf] = var_2d8;
                                var_498 = *var_2e8[1];
                                var_4c8 = var_318_1;
                                var_4d8 = var_328;
                                var_3e8 = var_2a0;
                                let var_3f8_2: i128 = var_2b0;
                                var_408 = var_2c0;
                                var_420 = var_2d8;
                                var_420 = *var_498[0xf];
                                var_42f = var_498;
                                var_448 = var_2f8_2;
                                var_458 = var_308_1;
                                var_468 = var_4c8;
                                var_478 = var_4d8;
                                *var_478[8] = rax_43;
                                var_478 = -0x7ffffffffffffffa;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_478);
                                goto 'label_6785da;
                            }
                            0x19 =>
                            {
                                let rax_22: i8 = just::parser::Parser::next_are::he794a8e7ca711dc5(
                                    arg2, &data_4715de, 3);
                                let mut rax_23: i8;
                                
                                if rax_22 == 0
                                {
                                    rax_23 = just::parser::Parser::next_are::he794a8e7ca711dc5(
                                        arg2, &data_4715e1, 3);
                                }
                                
                                if rax_22 == 0 && rax_23 == 0
                                {
                                    goto 'label_678d3c;
                                }
                                
                                just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_478, 
                                    arg2, 0x19);
                                rax_1 = var_430;
                                
                                if rax_1 != 0x25
                                {
                                    goto 'label_67980a;
                                }
                                
                                just::parser::Parser::parse_name::he2804e36e47b7e10(&var_478, arg2);
                                rax_1 = var_430;
                                var_328 = var_478;
                                var_318_1 = var_468;
                                var_308_1 = var_458;
                                var_2f8_2 = var_448;
                                var_2e8 = var_438;
                                
                                if rax_1 != 0x25
                                {
                                    goto 'label_67964a;
                                }
                                
                                zmm0_3 = var_328;
                                just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_478, arg2);
                                rax_1 = var_430;
                                
                                if rax_1 != 0x25
                                {
                                    goto 'label_67980a;
                                }
                                
                                var_430 = var_2e8;
                                var_448 = var_2f8_2;
                                var_458 = var_308_1;
                                var_468 = var_318_1;
                                var_478 = zmm0_3;
                                var_478 = -0x7ffffffffffffff9;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_478);
                                goto 'label_6785da;
                            }
                        }
                    }
                }
            }
            *arg1 = -0x8000000000000000;
            break;
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..item..Item$GT$$GT$::h964fe82dcc63562e(
        &var_370);
    core::ptr::drop_in_place$LT$just..parser..Parser$GT$::hfea4cd7c191d0f90(arg2)
}
