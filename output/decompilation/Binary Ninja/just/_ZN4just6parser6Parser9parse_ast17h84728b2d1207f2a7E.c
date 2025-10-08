
  int64_t just::parser::Parser::parse_ast::h84728b2d1207f2a7(int64_t* arg1, uint64_t arg2)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    int64_t var_370 = 0;
    int64_t var_368 = 8;
    int64_t var_360 = 0;
    int128_t var_478;
    just::parser::Parser::accept::hbdbbefbcb8377711(&var_478, arg2, 0xb);
    char var_430;
    int128_t var_468;
    int128_t var_458;
    int128_t var_448;
    int64_t var_438;
    int32_t var_42f;
    int32_t var_42c;
    int128_t var_328;
    
    if (var_430 != 0x25)
    {
        var_328 = var_478;
        *(arg1 + 0x54) = var_42c;
        *(arg1 + 0x51) = var_42f;
        arg1[9] = var_438;
        int128_t zmm0_1 = var_328;
        *(arg1 + 0x38) = var_448;
        *(arg1 + 0x28) = var_458;
        *(arg1 + 0x18) = var_468;
        *(arg1 + 8) = zmm0_1;
        arg1[0xa] = var_430;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int32_t r13_1 = 0;
        
        while (true)
        {
            just::parser::Parser::parse_attributes::hcab544f637ea62a1(&var_478, arg2);
            int64_t var_2e8;
            int128_t zmm1_2;
            
            if (var_478 == 1)
            {
                int128_t zmm0_2 = var_430;
                var_2e8 = zmm0_2;
                zmm1_2 = var_478;
                int128_t var_2f8_4 = var_448;
                int128_t var_308_3 = var_458;
                int128_t var_318_3 = var_468;
                var_328 = zmm1_2;
                *(arg1 + 0x48) = zmm0_2;
                *(arg1 + 0x38) = var_448;
                *(arg1 + 0x28) = var_458;
                *(arg1 + 0x18) = var_468;
                *(arg1 + 8) = zmm1_2;
            }
            else
            {
                int128_t var_420;
                int128_t var_2d8 = var_420;
                zmm1_2 = var_430;
                var_2e8 = zmm1_2;
                int128_t var_2f8_1 = var_448;
                int128_t var_228 = var_478;
                int64_t var_218_1 = var_468;
                int128_t var_208_1 = var_458;
                int128_t var_1f8_1 = var_448;
                int128_t var_1e8 = zmm1_2;
                int128_t var_1d8_1 = var_420;
                just::parser::Parser::next::h26f20bd451ef506f(&var_478, arg2);
                char rax_1 = var_430;
                var_328 = var_478;
                int128_t var_318_1 = var_468;
                int128_t var_308_1 = var_458;
                int128_t var_2f8_2 = var_448;
                var_2e8 = var_438;
                int32_t rcx_24;
                int128_t zmm0_3;
                
                if (rax_1 != 0x25)
                {
                    label_67964a:
                    rcx_24 = var_42f;
                    *(arg1 + 0x54) = var_42c;
                    label_67965c:
                    *(arg1 + 0x51) = rcx_24;
                    arg1[9] = var_2e8;
                    zmm0_3 = var_328;
                    *(arg1 + 0x38) = var_2f8_2;
                    *(arg1 + 0x28) = var_308_1;
                    *(arg1 + 0x18) = var_318_1;
                    *(arg1 + 8) = zmm0_3;
                    label_679855:
                    arg1[0xa] = rax_1;
                    goto label_679863;
                }
                
                int128_t var_78 = var_328;
                int128_t var_68_1 = var_318_1;
                int128_t var_58_1 = var_308_1;
                int128_t var_48_1 = var_2f8_2;
                int64_t var_38_1 = var_2e8;
                just::parser::Parser::accept::hbdbbefbcb8377711(&var_478, arg2, 0x10);
                char rcx_2 = var_430;
                int128_t zmm0_4 = var_478;
                char rax_3 = var_438;
                int32_t rsi_3 = *var_438[4];
                int32_t var_378_1 = *var_438[1];
                
                if (rcx_2 != 0x25)
                {
                    *(arg1 + 0x54) = var_42c;
                    *(arg1 + 0x51) = var_42f;
                    *(arg1 + 0x38) = var_448;
                    *(arg1 + 0x28) = var_458;
                    *(arg1 + 0x18) = var_468;
                    *(arg1 + 8) = zmm0_4;
                    *(arg1 + 0x4c) = rsi_3;
                    *(arg1 + 0x49) = rsi_3;
                    arg1[9] = rax_3;
                    label_6797fc:
                    arg1[0xa] = rcx_2;
                    label_679863:
                    *arg1 = -0x8000000000000000;
                    label_679866:
                    
                    if (var_1e8 == 0x25)
                        break;
                    
                    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(&*var_1e8[8]);
                    break;
                }
                
                if (rax_3 != 0x25)
                {
                    var_2f8_2 = var_448;
                    var_308_1 = var_458;
                    var_318_1 = var_468;
                    var_328 = zmm0_4;
                    var_2e8 = rax_3;
                    *var_2e8[4] = rsi_3;
                    *var_2e8[1] = rsi_3;
                    void* rax_14;
                    int64_t rdx_3;
                    rax_14 = just::token::Token::lexeme::h66587cdf67f63270(&var_328);
                    int64_t rax_15;
                    int64_t rdx_4;
                    rax_15 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::he3fbcf3618bccae8(
                        rax_14, rdx_3);
                    *var_478[8] = rax_15;
                    var_468 = rdx_4;
                    var_478 = -0x7ffffffffffffffe;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, &var_478);
                    just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_478, arg2);
                    rax_1 = var_430;
                    
                    if (rax_1 != 0x25)
                    {
                        label_67980a:
                        arg1[9] = var_438;
                        int128_t zmm0_7 = var_478;
                        *(arg1 + 0x38) = var_448;
                        *(arg1 + 0x28) = var_458;
                        *(arg1 + 0x18) = var_468;
                        *(arg1 + 8) = zmm0_7;
                        *(arg1 + 0x51) = var_42f;
                        *(arg1 + 0x54) = var_42c;
                        goto label_679855;
                    }
                    
                    rbp = 0;
                    label_67844f:
                    
                    if (var_1e8 == 0x25)
                    {
                        label_678465:
                        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$just..token..Token$C$just..attribute_set..AttributeSet$RP$$GT$$GT$::h2c68d15f2b7d15fb(&var_228);
                        r13_1 = rbp;
                        continue;
                    }
                    
                    label_67971e:
                    *var_478[8] = *var_1d8_1[8];
                    var_478 = -0x7fffffffffffffdc;
                    just::token::Token::error::h986494da066a4455(&var_328, &var_228, &var_478);
                    *(arg1 + 0x48) = var_2e8;
                    int128_t zmm0_23 = var_328;
                    *(arg1 + 0x38) = var_2f8_2;
                    *(arg1 + 0x28) = var_308_1;
                    *(arg1 + 0x18) = var_318_1;
                    *(arg1 + 8) = zmm0_23;
                    *arg1 = -0x8000000000000000;
                    rbp = 1;
                    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(&*var_1e8[8]);
                    break;
                }
                else
                {
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 0x14);
                    char rax_4 = var_478;
                    rcx_2 = var_430;
                    
                    if (rcx_2 != 0x25)
                    {
                        label_6797ad:
                        arg1[9] = var_438;
                        int128_t zmm0_5 = var_478;
                        *(arg1 + 0x39) = var_448;
                        *(arg1 + 0x29) = var_458;
                        *(arg1 + 0x19) = var_468;
                        *(arg1 + 9) = zmm0_5;
                        *(arg1 + 0x51) = var_42f;
                        *(arg1 + 0x54) = var_42c;
                        arg1[1] = rax_4;
                        goto label_6797fc;
                    }
                    
                    rbp = 1;
                    
                    if (rax_4 & 1)
                        goto label_67844f;
                    
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 0x13);
                    rax_4 = var_478;
                    rcx_2 = var_430;
                    
                    if (rcx_2 != 0x25)
                        goto label_6797ad;
                    
                    int128_t var_4d8;
                    int128_t var_2e0;
                    
                    if (rax_4 & 1)
                    {
                        uint64_t rdx_30 = core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$just..token..Token$C$just..attribute_set..AttributeSet$RP$$GT$$GT$::h2c68d15f2b7d15fb(&var_228);
                        int64_t rax_67 = *(arg2 + 0x20);
                        
                        if (rax_67 == *(arg2 + 0x58))
                        {
                            var_4d8 = var_370;
                            void* rsi_53 = *(arg2 + 0x50);
                            int64_t rax_70;
                            
                            if (rsi_53)
                            {
                                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h4814849cf5941557(&var_478, rsi_53);
                                rax_70 = var_478;
                                var_328 = var_478;
                            }
                            
                            if (rsi_53 && rax_70 != -0x8000000000000000)
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
                            *(arg1 + 0x48) = var_478;
                            var_478 = var_4d8;
                            var_468 = var_360;
                            var_468 = var_228;
                            *var_458[8] = var_218_1;
                            arg1[0xe] = var_318_1;
                            *(arg1 + 0x60) = var_328;
                            int128_t zmm0_27 = var_478;
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
                        int128_t var_90;
                        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_90, 0, 
                            rdx_30, &var_478);
                        int64_t var_80;
                        *var_468[8] = var_80;
                        var_478 = var_90;
                        var_478 = -0x7fffffffffffffd8;
                        just::parser::Parser::error::hcfcee5ba02637174(&var_328, arg2, &var_478);
                        int128_t zmm0_26 = var_328;
                        var_478 = zmm0_26;
                        int128_t var_468_1 = var_318_1;
                        int128_t var_458_1 = var_308_1;
                        int128_t var_448_1 = var_2f8_2;
                        var_438 = var_2e0;
                        *(arg1 + 0x48) = var_2e0;
                        *(arg1 + 0x38) = var_2f8_2;
                        *(arg1 + 0x28) = var_308_1;
                        *(arg1 + 0x18) = var_318_1;
                        *(arg1 + 8) = zmm0_26;
                    }
                    else
                    {
                        int64_t var_4c8;
                        int128_t var_4b8;
                        int128_t var_4a8;
                        int128_t var_498;
                        int128_t var_428;
                        int128_t var_358;
                        int64_t var_348;
                        int128_t zmm0_12;
                        int128_t zmm1_10;
                        int128_t zmm2_10;
                        int128_t zmm3_10;
                        int128_t zmm4_2;
                        
                        if (!just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18))
                        {
                            just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 2);
                            rax_4 = var_478;
                            rcx_2 = var_430;
                            
                            if (rcx_2 != 0x25)
                                goto label_6797ad;
                            
                            if (!(rax_4 & 1))
                            {
                                just::parser::Parser::unexpected_token::hbee08644eef5d075(&var_478, 
                                    arg2);
                                zmm0_12 = var_430;
                                var_2e8 = zmm0_12;
                                zmm1_10 = var_478;
                                zmm2_10 = var_468;
                                zmm3_10 = var_458;
                                zmm4_2 = var_448;
                                label_679ad0:
                                int128_t var_2f8_5 = zmm4_2;
                                int128_t var_308_4 = zmm3_10;
                                int128_t var_318_4 = zmm2_10;
                                var_328 = zmm1_10;
                                label_679af0:
                                *(arg1 + 0x48) = zmm0_12;
                                *(arg1 + 0x38) = zmm4_2;
                                *(arg1 + 0x28) = zmm3_10;
                                *(arg1 + 0x18) = zmm2_10;
                                *(arg1 + 8) = zmm1_10;
                                goto label_679863;
                            }
                            
                            int64_t rax_16;
                            uint64_t rdx_6;
                            rax_16 =
                                just::parser::Parser::parse_ast::pop_doc_comment::h6e6b0063e8da67d5(
                                &var_370, r13_1);
                            var_1e8 = 0x25;
                            
                            if (var_1e8 != 0x25)
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
                            int64_t rbp_1 = var_478;
                            var_4d8 = var_478;
                            var_4c8 = var_468;
                            var_4b8 = var_458;
                            var_4a8 = var_448;
                            var_498 = var_430;
                            
                            if (rbp_1 == -0x8000000000000000)
                            {
                                label_679942:
                                *(arg1 + 0x48) = var_498;
                                int128_t zmm0_9 = var_4d8;
                                *(arg1 + 0x38) = var_4a8;
                                *(arg1 + 0x28) = var_4b8;
                                *(arg1 + 0x18) = var_4c8;
                                *(arg1 + 8) = zmm0_9;
                                goto label_679863;
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
                            label_6785da:
                            rbp = r13_1;
                            
                            if (var_1e8 == 0x25)
                                goto label_678465;
                            
                            goto label_67971e;
                        }
                        
                        void* rax_6;
                        uint64_t rdx_2;
                        rax_6 = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
                        char rax_7 =
                            just::keyword::Keyword::from_lexeme::h4f2cf9490352ebc3(rax_6, rdx_2);
                        int128_t var_408;
                        int128_t var_3e8;
                        int128_t var_3b8;
                        int128_t var_2c0;
                        int128_t var_2b0;
                        int128_t var_2a0;
                        int128_t var_290;
                        int128_t var_280;
                        int128_t var_270;
                        int64_t var_260;
                        
                        if (rax_7 > 0x19)
                        {
                            label_678d3c:
                            
                            if (!just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                &data_4715ec, 2))
                            {
                                int64_t rax_46;
                                uint64_t rdx_13;
                                rax_46 = just::parser::Parser::parse_ast::pop_doc_comment::h6e6b0063e8da67d5(&var_370, r13_1);
                                var_1e8 = 0x25;
                                
                                if (var_1e8 != 0x25)
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
                                int64_t rbp_3 = var_478;
                                var_4d8 = var_478;
                                var_4c8 = var_468;
                                var_4b8 = var_458;
                                var_4a8 = var_448;
                                var_498 = var_430;
                                
                                if (rbp_3 == -0x8000000000000000)
                                    goto label_679942;
                                
                                memcpy(&*var_2d8[8], &*var_428[8], 0xa8);
                                var_2e0 = var_498;
                                var_2f8_2 = var_4a8;
                                var_308_1 = var_4b8;
                                var_318_1 = var_4c8;
                                var_328 = var_4d8;
                                var_328 = rbp_3;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_328);
                                goto label_6785da;
                            }
                            
                            var_1e8 = 0x25;
                            
                            if (var_1e8 != 0x25)
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
                            int64_t rax_48 = var_328;
                            var_4d8 = var_328;
                            var_4c8 = var_318_1;
                            var_4b8 = var_308_1;
                            var_4a8 = var_2f8_2;
                            var_498 = var_2e0;
                            
                            if (rax_48 == 0x12)
                            {
                                label_679c26:
                                *(arg1 + 0x48) = var_498;
                                int128_t zmm0_16 = var_4d8;
                                *(arg1 + 0x38) = var_4a8;
                                *(arg1 + 0x28) = var_4b8;
                                *(arg1 + 0x18) = var_4c8;
                                *(arg1 + 8) = zmm0_16;
                                goto label_679863;
                            }
                            
                            int64_t var_3a8_1 = var_260;
                            var_3b8 = var_270;
                            int128_t var_3c8_1 = var_280;
                            int128_t var_3d8_1 = var_290;
                            var_3e8 = var_2a0;
                            int128_t var_3f8_3 = var_2b0;
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
                            goto label_6785da;
                        }
                        
                        switch (rax_7)
                        {
                            case 0:
                            {
                                if (!just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715d1, 3))
                                    goto label_678d3c;
                                
                                var_1e8 = 0x25;
                                
                                if (var_1e8 != 0x25)
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
                                int64_t rax_50 = var_328;
                                var_4d8 = var_328;
                                var_4c8 = var_318_1;
                                
                                if (rax_50 == -0x8000000000000000)
                                {
                                    *(arg1 + 0x48) = var_2e0;
                                    int128_t zmm0_18 = var_4d8;
                                    *(arg1 + 0x38) = var_2f8_2;
                                    *(arg1 + 0x28) = var_308_1;
                                    *(arg1 + 0x18) = var_4c8;
                                    *(arg1 + 8) = zmm0_18;
                                    *arg1 = -0x8000000000000000;
                                    goto label_679866;
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
                                goto label_6785da;
                            }
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 0xb:
                            case 0xc:
                            case 0xd:
                            case 0xe:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            case 0x14:
                            case 0x16:
                            case 0x17:
                            case 0x18:
                            {
                                goto label_678d3c;
                            }
                            case 0xa:
                            {
                                if (!just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715d1, 3))
                                    goto label_678d3c;
                                
                                just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_478, 
                                    arg2, 0xa);
                                rax_1 = var_430;
                                
                                if (rax_1 != 0x25)
                                    goto label_67980a;
                                
                                var_1e8 = 0x25;
                                
                                if (var_1e8 != 0x25)
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
                                int64_t rax_52 = var_328;
                                var_4d8 = var_328;
                                var_4c8 = var_318_1;
                                var_4b8 = var_308_1;
                                var_4a8 = var_2f8_2;
                                var_498 = var_2e0;
                                
                                if (rax_52 == 0x12)
                                    goto label_679c26;
                                
                                int64_t var_3a8_2 = var_260;
                                var_3b8 = var_270;
                                int128_t var_3c8_2 = var_280;
                                int128_t var_3d8_2 = var_290;
                                var_3e8 = var_2a0;
                                int128_t var_3f8_4 = var_2b0;
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
                                goto label_6785da;
                            }
                            case 0xf:
                            {
                                if (!just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715d4, 2) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715d6, 3) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715d9, 2))
                                    goto label_678d3c;
                                
                                just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_478, 
                                    arg2, 0xf);
                                rax_1 = var_430;
                                
                                if (rax_1 != 0x25)
                                    goto label_67980a;
                                
                                just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 
                                    0x1f);
                                char rbp_2 = var_478;
                                rax_1 = var_430;
                                
                                if (rax_1 != 0x25)
                                {
                                    arg1[9] = var_438;
                                    int128_t zmm0_11 = var_478;
                                    *(arg1 + 0x39) = var_448;
                                    *(arg1 + 0x29) = var_458;
                                    *(arg1 + 0x19) = var_468;
                                    *(arg1 + 9) = zmm0_11;
                                    *(arg1 + 0x51) = var_42f;
                                    *(arg1 + 0x54) = var_42c;
                                    arg1[1] = rbp_2;
                                    goto label_679855;
                                }
                                
                                just::parser::Parser::parse_string_literal_token::h0d1e77bec93423b0(
                                    &var_478, arg2);
                                
                                if (var_478 == 1)
                                {
                                    zmm0_12 = var_430;
                                    var_2e8 = zmm0_12;
                                    zmm1_10 = var_478;
                                    zmm2_10 = var_468;
                                    zmm3_10 = var_458;
                                    zmm4_2 = var_448;
                                    goto label_679ad0;
                                }
                                
                                *var_2c0[8] = *var_408[8];
                                int128_t var_410;
                                int128_t var_2c8_1 = var_410;
                                var_2d8 = var_420;
                                var_2e8 = var_430;
                                zmm0_12 = var_478;
                                var_2f8_2 = var_448;
                                var_308_1 = var_458;
                                var_318_1 = var_468;
                                var_328 = zmm0_12;
                                var_3e8 = var_2e8;
                                int128_t var_3f8_1 = var_448;
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
                                goto label_6785da;
                            }
                            case 0x10:
                            {
                                if (!just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715db, 3) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715de, 3) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715e1, 3) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_467d98, 4) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715d6, 3) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715d9, 2))
                                    goto label_678d3c;
                                
                                int64_t rax_34;
                                uint64_t rdx_11;
                                rax_34 = just::parser::Parser::parse_ast::pop_doc_comment::h6e6b0063e8da67d5(&var_370, r13_1);
                                just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_478, 
                                    arg2, 0x10);
                                rax_1 = var_430;
                                
                                if (rax_1 != 0x25)
                                    goto label_67980a;
                                
                                just::parser::Parser::accepted::h762a87b5f98dff30(&var_478, arg2, 
                                    0x1f);
                                char rsi_27 = var_478;
                                rax_1 = var_430;
                                
                                if (rax_1 != 0x25)
                                {
                                    arg1[9] = var_438;
                                    int128_t zmm0_13 = var_478;
                                    *(arg1 + 0x39) = var_448;
                                    *(arg1 + 0x29) = var_458;
                                    *(arg1 + 0x19) = var_468;
                                    *(arg1 + 9) = zmm0_13;
                                    *(arg1 + 0x51) = var_42f;
                                    *(arg1 + 0x54) = var_42c;
                                    arg1[1] = rsi_27;
                                    goto label_679855;
                                }
                                
                                just::parser::Parser::parse_name::he2804e36e47b7e10(&var_478, arg2);
                                rax_1 = var_430;
                                var_328 = var_478;
                                var_318_1 = var_468;
                                var_308_1 = var_458;
                                var_2f8_2 = var_448;
                                var_2e8 = var_438;
                                
                                if (rax_1 != 0x25)
                                    goto label_67964a;
                                
                                int128_t var_128 = var_328;
                                int128_t var_118_1 = var_318_1;
                                int128_t var_108_1 = var_308_1;
                                int128_t var_f8_1 = var_2f8_2;
                                char rax_36 =
                                    just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x21);
                                char rax_37;
                                
                                if (!rax_36)
                                    rax_37 = just::parser::Parser::next_are::he794a8e7ca711dc5(
                                        arg2, &data_4715d4, 2);
                                
                                int128_t var_338;
                                
                                if (!rax_36 && !rax_37)
                                    var_358 = -0x8000000000000000;
                                else
                                {
                                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(
                                        &var_478, arg2);
                                    rax_1 = var_430;
                                    
                                    if (rax_1 != 0x25)
                                    {
                                        var_2e8 = var_438;
                                        var_2f8_2 = var_448;
                                        var_308_1 = var_458;
                                        var_318_1 = var_468;
                                        var_328 = var_478;
                                        *(arg1 + 0x54) = var_42c;
                                        rcx_24 = var_42f;
                                        goto label_67965c;
                                    }
                                    
                                    var_358 = var_478;
                                    var_348 = var_468;
                                    var_338 = var_458;
                                }
                                
                                var_1e8 = 0x25;
                                int128_t var_1c8;
                                
                                if (var_1e8 != 0x25)
                                {
                                    int64_t var_1b8_2 = *var_1d8_1[8];
                                    var_1c8 = var_1e8;
                                }
                                else
                                {
                                    var_1c8 = 0;
                                    int64_t var_1b8_1 = 0;
                                }
                                
                                just::attribute_set::AttributeSet::ensure_valid_attributes::h6f0be17f12135348(&var_478, &var_1c8, &data_4715e6, 6, &var_128, &data_4715e4, 2);
                                
                                if (var_430 != 0x25)
                                {
                                    arg1[9] = var_438;
                                    int128_t zmm0_19 = var_478;
                                    *(arg1 + 0x38) = var_448;
                                    *(arg1 + 0x28) = var_458;
                                    *(arg1 + 0x18) = var_468;
                                    *(arg1 + 8) = zmm0_19;
                                    *(arg1 + 0x51) = var_42f;
                                    *(arg1 + 0x54) = var_42c;
                                    arg1[0xa] = var_430;
                                    *arg1 = -0x8000000000000000;
                                    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(&var_1c8);
                                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..string_literal..StringLiteral$GT$$GT$::h94f50fc937bb4763(&var_358);
                                    goto label_679866;
                                }
                                
                                int64_t* rax_56 =
                                    just::attribute_set::AttributeSet::get::h29ad4fd4e40977f3(
                                    &var_1c8, 2);
                                int64_t var_1a8;
                                int64_t var_198;
                                
                                if (rax_56)
                                {
                                    if (*rax_56 != -0x7ffffffffffffffd)
                                    {
                                        core::panicking::panic::h85d6dd562679980c(
                                            "internal error: entered unreacha…");
                                        /* no return */
                                    }
                                    
                                    if (rax_56[1] != -0x8000000000000000)
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_478, &rax_56[1]);
                                        var_198 = var_468;
                                        var_1a8 = var_478;
                                    }
                                    else
                                        var_1a8 = -0x8000000000000000;
                                }
                                else if (!rax_34)
                                    var_1a8 = -0x8000000000000000;
                                else
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_478, rax_34, rdx_11);
                                    var_198 = var_468;
                                    var_1a8 = var_478;
                                }
                                
                                int64_t var_190 = 0;
                                int64_t var_188_1 = 8;
                                int64_t var_180_1 = 0;
                                _$LT$just..attribute_set..AttributeSet$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::had74f49292d56edb(&var_4d8, &var_1c8);
                                
                                while (true)
                                {
                                    _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h02784b14e61dc3b1(&var_478, &var_4d8);
                                    int64_t rax_59 = var_478;
                                    
                                    if (rax_59 == -0x7fffffffffffffeb)
                                        break;
                                    
                                    var_2f8_2 = var_448;
                                    var_308_1 = var_458;
                                    var_318_1 = var_468;
                                    var_328 = var_478;
                                    var_328 = rax_59;
                                    
                                    if (rax_59 != -0x7ffffffffffffffa)
                                        core::ptr::drop_in_place$LT$just..attribute..Attribute$GT$::h0286f94ea05206a8(&var_328);
                                    else
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(
                                            &var_190, &*var_328[8]);
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
                                int128_t var_3c8_3 = var_f8_1;
                                int128_t var_3d8_3 = var_108_1;
                                var_3e8 = var_118_1;
                                int128_t var_3f8_5 = var_128;
                                *var_3b8[8] = rsi_27;
                                var_478 = -0x7ffffffffffffffc;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_478);
                                goto label_6785da;
                            }
                            case 0x15:
                            {
                                if (!just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715d1, 3) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_467f04, 4) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_467d9c, 4) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715de, 3) && !
                                        just::parser::Parser::next_are::he794a8e7ca711dc5(arg2, 
                                        &data_4715e1, 3))
                                    goto label_678d3c;
                                
                                just::parser::Parser::parse_set::ha11a3ca6b0fbece6(&var_328, arg2);
                                char rax_43 = var_328;
                                
                                if (rax_43 == 0x14)
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
                                    goto label_679af0;
                                }
                                
                                *var_498[0xf] = var_2d8;
                                var_498 = *var_2e8[1];
                                var_4c8 = var_318_1;
                                var_4d8 = var_328;
                                var_3e8 = var_2a0;
                                int128_t var_3f8_2 = var_2b0;
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
                                goto label_6785da;
                            }
                            case 0x19:
                            {
                                char rax_22 = just::parser::Parser::next_are::he794a8e7ca711dc5(
                                    arg2, &data_4715de, 3);
                                char rax_23;
                                
                                if (!rax_22)
                                    rax_23 = just::parser::Parser::next_are::he794a8e7ca711dc5(
                                        arg2, &data_4715e1, 3);
                                
                                if (!rax_22 && !rax_23)
                                    goto label_678d3c;
                                
                                just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_478, 
                                    arg2, 0x19);
                                rax_1 = var_430;
                                
                                if (rax_1 != 0x25)
                                    goto label_67980a;
                                
                                just::parser::Parser::parse_name::he2804e36e47b7e10(&var_478, arg2);
                                rax_1 = var_430;
                                var_328 = var_478;
                                var_318_1 = var_468;
                                var_308_1 = var_458;
                                var_2f8_2 = var_448;
                                var_2e8 = var_438;
                                
                                if (rax_1 != 0x25)
                                    goto label_67964a;
                                
                                zmm0_3 = var_328;
                                just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_478, arg2);
                                rax_1 = var_430;
                                
                                if (rax_1 != 0x25)
                                    goto label_67980a;
                                
                                var_430 = var_2e8;
                                var_448 = var_2f8_2;
                                var_458 = var_308_1;
                                var_468 = var_318_1;
                                var_478 = zmm0_3;
                                var_478 = -0x7ffffffffffffff9;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h58699f5b71f34809(&var_370, 
                                    &var_478);
                                goto label_6785da;
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
    return core::ptr::drop_in_place$LT$just..parser..Parser$GT$::hfea4cd7c191d0f90(arg2);
}
