
  int64_t just::parser::Parser::parse_attributes::hcab544f637ea62a1(int64_t* arg1, void* arg2)

{
    void* r14 = arg2;
    void* var_230 = nullptr;
    int64_t var_220 = 0;
    void* var_218 = nullptr;
    int64_t var_208 = 0;
    char var_38 = 0x25;
    int128_t var_2f8;
    int128_t* r15 = &var_2f8;
    label_681e4e:
    just::parser::Parser::accept::hbdbbefbcb8377711(r15, r14, 9);
    char var_2b0;
    char rcx_1 = var_2b0;
    int128_t zmm0_1 = var_2f8;
    int32_t var_2b7;
    int32_t rsi_1 = var_2b7;
    int32_t var_290_1 = var_2b7;
    int128_t var_2e8;
    int128_t var_2d8;
    int128_t var_2c8;
    char var_2b8;
    int32_t var_2af;
    int64_t* rdi_25;
    
    if (rcx_1 != 0x25)
    {
        rdi_25 = arg1;
        *(rdi_25 + 0x54) = var_2af;
        *(rdi_25 + 0x51) = var_2af;
        *(rdi_25 + 0x38) = var_2c8;
        *(rdi_25 + 0x28) = var_2d8;
        *(rdi_25 + 0x18) = var_2e8;
        *(rdi_25 + 8) = zmm0_1;
        *(rdi_25 + 0x4c) = rsi_1;
        *(rdi_25 + 0x49) = rsi_1;
        rdi_25[9] = var_2b8;
        label_68263e:
        rdi_25[0xa] = rcx_1;
        *rdi_25 = 1;
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$just..attribute..AttributeDiscriminant$C$usize$GT$$GT$::h2dcb5ec4a42af4f0(&var_218);
    }
    else
    {
        int128_t var_288;
        int128_t var_1e8;
        int64_t var_1d8;
        int32_t var_158;
        int128_t var_78;
        
        if (var_2b8 == 0x25)
        {
            if (var_220)
            {
                int32_t* rbp;
                rbp = var_38 == 0x25;
                
                if (var_38 == 0x25)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                var_288 = var_78;
                int32_t var_37;
                var_158 = var_37;
                var_158 = var_37;
                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_2f8, &var_230);
                core::iter::traits::iterator::Iterator::collect::hda226502b78086a0(&var_1e8, 
                    &var_2f8);
                int128_t zmm0_10 = var_288;
                int128_t var_48;
                *(arg1 + 0x38) = var_48;
                int128_t var_58;
                *(arg1 + 0x28) = var_58;
                int128_t var_68;
                *(arg1 + 0x18) = var_68;
                *(arg1 + 8) = zmm0_10;
                int32_t rax_17 = var_158;
                *(arg1 + 0x4c) = var_158;
                *(arg1 + 0x49) = rax_17;
                *(arg1 + 0x50) = var_1e8;
                arg1[0xc] = var_1d8;
                arg1[9] = var_38;
                *arg1 = 0;
                return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$just..attribute..AttributeDiscriminant$C$usize$GT$$GT$::h2dcb5ec4a42af4f0(&var_218);
            }
            
            arg1[9] = 0x25;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$just..attribute..AttributeDiscriminant$C$usize$GT$$GT$::h2dcb5ec4a42af4f0(&var_218);
        }
        else
        {
            var_2f8 = zmm0_1;
            var_2b7 = rsi_1;
            var_2b7 = rsi_1;
            core::option::Option$LT$T$GT$::get_or_insert_with::hf416d8a5bd11095f(&var_78, r15);
            
            while (true)
            {
                just::parser::Parser::parse_name::he2804e36e47b7e10(r15, r14);
                char rax_2 = var_2b0;
                var_288 = var_2f8;
                int64_t r13_1 = var_2c8;
                var_1e8 = var_2c8;
                int64_t* rsi_20;
                int128_t zmm0_2;
                
                if (rax_2 != 0x25)
                {
                    rsi_20 = arg1;
                    *(rsi_20 + 0x54) = var_2af;
                    *(rsi_20 + 0x51) = var_2af;
                    zmm0_2 = var_288;
                    *(rsi_20 + 0x28) = var_2d8;
                    *(rsi_20 + 0x18) = var_2e8;
                    *(rsi_20 + 8) = zmm0_2;
                    *(rsi_20 + 0x40) = var_1e8;
                    rsi_20[7] = r13_1;
                }
                else
                {
                    zmm0_2 = var_288;
                    int128_t zmm3_2 = var_1e8;
                    var_158 = zmm0_2;
                    int128_t var_148_1 = var_2e8;
                    int128_t var_138_1 = var_2d8;
                    int64_t var_128_1 = r13_1;
                    int128_t var_120_1 = zmm3_2;
                    int64_t var_200 = 0;
                    int64_t var_1f8_1 = 8;
                    int64_t var_1f0_1 = 0;
                    just::parser::Parser::accepted::h762a87b5f98dff30(r15, r14, 0xc);
                    char rax_3 = var_2f8;
                    char rcx_3 = var_2b0;
                    int128_t zmm0_3;
                    
                    if (rcx_3 != 0x25)
                    {
                        label_682367:
                        arg1[9] = var_2b8;
                        zmm0_3 = var_2f8;
                        *(arg1 + 0x39) = var_2c8;
                        *(arg1 + 0x29) = var_2d8;
                        *(arg1 + 0x19) = var_2e8;
                        *(arg1 + 9) = zmm0_3;
                        *(arg1 + 0x51) = var_2af;
                        *(arg1 + 0x54) = var_2af;
                        arg1[1] = rax_3;
                        arg1[0xa] = rcx_3;
                        *arg1 = 1;
                        label_682451:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..string_literal..StringLiteral$GT$$GT$::hdeab20929d510684(&var_200);
                        break;
                    }
                    
                    char rax_4;
                    
                    if (!(rax_3 & 1))
                    {
                        just::parser::Parser::accepted::h762a87b5f98dff30(r15, r14, 0x1c);
                        rax_3 = var_2f8;
                        rcx_3 = var_2b0;
                        
                        if (rcx_3 != 0x25)
                            goto label_682367;
                        
                        if (rax_3 & 1)
                        {
                            while (true)
                            {
                                just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(r15, 
                                    r14);
                                rax_4 = var_2b0;
                                
                                if (rax_4 != 0x25)
                                    goto label_6823e8;
                                
                                int128_t var_268_3 = var_2d8;
                                int128_t var_278_3 = var_2e8;
                                var_288 = var_2f8;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h0b203acee3eb68a4(&var_200, 
                                    &var_288);
                                just::parser::Parser::accepted::h762a87b5f98dff30(r15, r14, 0xf);
                                rax_3 = var_2f8;
                                rcx_3 = var_2b0;
                                
                                if (rcx_3 != 0x25)
                                    goto label_682367;
                                
                                if (!(rax_3 & 1))
                                {
                                    just::parser::Parser::expect::h35e1151927597ac7(r15, r14, 0x1d);
                                    
                                    if (var_2b0 == 0x25)
                                        break;
                                    
                                    int64_t rcx_16 = var_2f8;
                                    zmm0_3 = var_2f8;
                                    var_288 = var_2b7;
                                    *var_288[3] = var_2b7;
                                    *(arg1 + 0x54) = var_2af;
                                    *(arg1 + 0x51) = var_2af;
                                    int32_t rdi_35 = var_288;
                                    *(arg1 + 0x4c) = *var_288[3];
                                    *(arg1 + 0x49) = rdi_35;
                                    arg1[1] = rcx_16;
                                    *(arg1 + 0x10) = zmm0_3;
                                    *(arg1 + 0x20) = var_2e8;
                                    *(arg1 + 0x30) = var_2d8;
                                    arg1[8] = *var_2c8[8];
                                    arg1[9] = var_2b8;
                                    arg1[0xa] = var_2b0;
                                    *arg1 = 1;
                                    goto label_682451;
                                }
                            }
                        }
                    }
                    else
                    {
                        just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(r15, r14);
                        rax_4 = var_2b0;
                        
                        if (rax_4 != 0x25)
                        {
                            label_6823e8:
                            var_288 = var_2f8;
                            *(arg1 + 0x54) = var_2af;
                            *(arg1 + 0x51) = var_2af;
                            arg1[9] = var_2b8;
                            int128_t zmm0_4 = var_288;
                            *(arg1 + 0x38) = var_2c8;
                            *(arg1 + 0x28) = var_2d8;
                            *(arg1 + 0x18) = var_2e8;
                            *(arg1 + 8) = zmm0_4;
                            arg1[0xa] = rax_4;
                            *arg1 = 1;
                            goto label_682451;
                        }
                        
                        int128_t var_268_2 = var_2d8;
                        int128_t var_278_2 = var_2e8;
                        var_288 = var_2f8;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h0b203acee3eb68a4(&var_200, &var_288);
                    }
                    int128_t var_278_4 = var_2e8;
                    var_288 = zmm0_2;
                    int128_t var_258;
                    var_258 = r13_1;
                    r14 =
                        just::attribute::Attribute::new::h574660488f231a8b(r15, &var_288, &var_200);
                    rax_2 = var_2b0;
                    var_1e8 = var_2f8;
                    var_1d8 = var_2e8;
                    int64_t rcx_4 = var_2b8;
                    
                    if (rax_2 != 0x25)
                    {
                        rsi_20 = arg1;
                        *(rsi_20 + 0x54) = var_2af;
                        *(rsi_20 + 0x51) = var_2af;
                        rsi_20[9] = rcx_4;
                        int128_t zmm0_5 = var_1e8;
                        *(rsi_20 + 0x38) = var_2c8;
                        *(rsi_20 + 0x28) = var_2d8;
                        *(rsi_20 + 0x18) = var_1d8;
                        *(rsi_20 + 8) = zmm0_5;
                    }
                    else
                    {
                        int128_t var_108 = var_1e8;
                        int128_t var_f8_1 = var_1d8;
                        int128_t var_e8_1 = var_2d8;
                        int128_t var_d8_1 = var_2c8;
                        int64_t var_c8_1 = rcx_4;
                        int64_t var_228;
                        int64_t rax_7 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h69d24b3aac079f70(var_230, var_228, &var_108);
                        int64_t rbx_1 = var_108;
                        int64_t var_210;
                        int64_t* rax_8 = core::option::Option$LT$T$GT$::or_else::h0b0d543f49f48214(
                            rax_7, rbx_1, var_218, var_210);
                        
                        if (rax_8)
                        {
                            int64_t rbx_2 = *rax_8;
                            void* rax_12;
                            int64_t rdx_16;
                            rax_12 = just::token::Token::lexeme::h66587cdf67f63270(&var_158);
                            *var_2f8[8] = rax_12;
                            var_2e8 = rdx_16;
                            *var_2e8[8] = rbx_2;
                            var_2f8 = -0x7fffffffffffffe6;
                            just::token::Token::error::h986494da066a4455(&var_288, &var_158, 
                                &var_2f8);
                            int64_t var_248;
                            *(arg1 + 0x48) = var_248;
                            int128_t zmm0_9 = var_288;
                            *(arg1 + 0x38) = zmm3_2;
                            *(arg1 + 0x28) = var_2d8;
                            *(arg1 + 0x18) = var_278_4;
                            *(arg1 + 8) = zmm0_9;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$just..attribute..Attribute$GT$::h0286f94ea05206a8(&var_108);
                            break;
                        }
                        
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc79286431762467(&var_218, 
                            just::attribute::Attribute::discriminant::habfb87751dacf735(rbx_1), 
                            r13_1);
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc229674567a56a0a(&var_230, &var_108, r13_1);
                        just::parser::Parser::accepted::h762a87b5f98dff30(r15, r14, 0xf);
                        char rax_10 = var_2f8;
                        rcx_1 = var_2b0;
                        
                        if (rcx_1 != 0x25)
                        {
                            rdi_25 = arg1;
                            rdi_25[9] = var_2b8;
                            int128_t zmm0_6 = var_2f8;
                            *(rdi_25 + 0x39) = var_2c8;
                            *(rdi_25 + 0x29) = var_2d8;
                            *(rdi_25 + 0x19) = var_2e8;
                            *(rdi_25 + 9) = zmm0_6;
                            *(rdi_25 + 0x51) = var_2af;
                            *(rdi_25 + 0x54) = var_2af;
                            rdi_25[1] = rax_10;
                            goto label_68263e;
                        }
                        
                        if (rax_10 & 1)
                            continue;
                        else
                        {
                            just::parser::Parser::expect::h35e1151927597ac7(r15, r14, 0xa);
                            
                            if (var_2b0 != 0x25)
                            {
                                int64_t rcx_17 = var_2f8;
                                int128_t zmm0_7 = var_2f8;
                                var_288 = var_2b7;
                                *var_288[3] = var_2b7;
                                *(arg1 + 0x54) = var_2af;
                                *(arg1 + 0x51) = var_2af;
                                int32_t rdi_39 = var_288;
                                *(arg1 + 0x4c) = *var_288[3];
                                *(arg1 + 0x49) = rdi_39;
                                arg1[1] = rcx_17;
                                *(arg1 + 0x10) = zmm0_7;
                                *(arg1 + 0x20) = var_2e8;
                                *(arg1 + 0x30) = var_2d8;
                                arg1[8] = *var_2c8[8];
                                arg1[9] = var_2b8;
                                arg1[0xa] = var_2b0;
                                *arg1 = 1;
                                break;
                            }
                            
                            just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(r15, r14);
                            rax_2 = var_2b0;
                            
                            if (rax_2 == 0x25)
                                goto label_681e4e;
                            
                            rsi_20 = arg1;
                            rsi_20[9] = var_2b8;
                            int128_t zmm0_8 = var_2f8;
                            *(rsi_20 + 0x38) = var_2c8;
                            *(rsi_20 + 0x28) = var_2d8;
                            *(rsi_20 + 0x18) = var_2e8;
                            *(rsi_20 + 8) = zmm0_8;
                            *(rsi_20 + 0x51) = var_2af;
                            *(rsi_20 + 0x54) = var_2af;
                        }
                    }
                }
                rsi_20[0xa] = rax_2;
                *rsi_20 = 1;
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$just..attribute..AttributeDiscriminant$C$usize$GT$$GT$::h2dcb5ec4a42af4f0(&var_218);
        }
    }
    return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$just..attribute..Attribute$C$usize$GT$$GT$::h8130350472d3fd96(&var_230);
}
