
  int64_t uu_test::parser::Parser::lparen::h57f06a78ce35371d(int128_t* arg1, int64_t* arg2)

{
    void var_58;
    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h86ce5a051be3bc0b(&var_58, &arg2[3]);
    int64_t var_20 = 3;
    void var_128;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he3027531f5f490a6(&var_128, &var_58);
    int64_t var_118;
    int32_t var_148;
    int128_t var_138;
    int64_t* var_120;
    int32_t* var_110;
    void* const var_178;
    int128_t var_170;
    void* const rax_10;
    
    if (var_118 > 3)
    {
        label_4af38c:
        uu_test::parser::Parser::expr::h14b244d6254724ab(&var_178, arg2);
        rax_10 = var_178;
        
        if (rax_10 != 7)
        {
            label_4af3be:
            int64_t var_160;
            *(arg1 + 0x18) = var_160;
            *(arg1 + 8) = var_170;
            *arg1 = rax_10;
        }
        else
        {
            uu_test::parser::Parser::expect::h264bdd99a51ab46d(&var_178);
            label_4af3a6:
            rax_10 = var_178;
            
            if (rax_10 != 7)
                goto label_4af3be;
            
            *arg1 = 7;
        }
    }
    else
        switch (var_118)
        {
            case 0:
            {
                var_178 = nullptr;
                uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_110, &var_178);
                uu_test::parser::Parser::literal::h487831028acf0989(&var_148, arg2, &var_110);
                
                if (var_148 == 7)
                    *arg1 = 7;
                else
                {
                    int128_t zmm0_1 = var_148;
                    arg1[1] = var_138;
                    *arg1 = zmm0_1;
                }
                break;
            }
            case 1:
            {
                var_148 = var_120;
                var_110 = &var_148;
                int64_t (* var_108_1)(int64_t* arg1, void* arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf994b1777394cd57;
                var_178 = &data_413dc0;
                var_170 = 1;
                int64_t var_158_1 = 0;
                *var_170[8] = &var_110;
                int64_t var_160_1 = 1;
                int128_t var_e8;
                core::option::Option$LT$T$GT$::map_or_else::ha47e44f34eb359bd(&var_e8, &var_178);
                int64_t var_d8;
                *(arg1 + 0x18) = var_d8;
                *(arg1 + 8) = var_e8;
                *arg1 = 3;
                break;
            }
            case 2:
            {
                if (*var_120 != 4 || var_120[5] != 3)
                {
                    label_4af142:
                    
                    if (var_120[5] == 3 && _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[7], var_120[8]))
                    {
                        label_4af30b:
                        void var_a8;
                        uu_test::parser::Parser::next_token::hec2da245067de41f(&var_a8, arg2);
                        uu_test::parser::Parser::literal::h487831028acf0989(&var_178, arg2, 
                            &var_a8);
                        rax_10 = var_178;
                        
                        if (rax_10 != 7)
                            goto label_4af3be;
                        
                        uu_test::parser::Parser::expect::h264bdd99a51ab46d(&var_178);
                        goto label_4af3a6;
                    }
                    
                    if (*var_120 != 4)
                        goto label_4af38c;
                    
                    label_4af344:
                    var_178 = nullptr;
                    uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_110, &var_178);
                    uu_test::parser::Parser::literal::h487831028acf0989(&var_148, arg2, &var_110);
                    goto label_4af36b;
                }
                
                if (!_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[7], var_120[8]))
                    goto label_4af142;
                
                label_4af265:
                var_178 = nullptr;
                uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_110, &var_178);
                uu_test::parser::Parser::literal::h487831028acf0989(&var_148, arg2, &var_110);
                label_4af36b:
                rax_10 = var_148;
                
                if (rax_10 == 7)
                    *arg1 = 7;
                else
                {
                    *(arg1 + 0x18) = *var_138[8];
                    int128_t var_140;
                    *(arg1 + 8) = var_140;
                    *arg1 = rax_10;
                }
                break;
            }
            case 3:
            {
                int64_t rax_5 = *var_120;
                
                if (rax_5 != 4)
                {
                    if (rax_5 != 5 || var_120[0xa] != 3)
                        goto label_4af291;
                    
                    if (!_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[0xc], var_120[0xd]))
                        goto label_4af291;
                    
                    void var_d0;
                    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_d0, arg2);
                    uu_test::parser::Parser::uop::h62a6f0e931485a3c(arg2, &var_d0);
                    uu_test::parser::Parser::expect::h264bdd99a51ab46d(&var_178);
                    goto label_4af3a6;
                }
                
                if (var_120[5] == 3)
                {
                    if (!_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[7], var_120[8]))
                        goto label_4af291;
                    
                    goto label_4af265;
                }
                
                label_4af291:
                int64_t rax_9 = var_120[5];
                
                if (rax_9 == 3)
                {
                    if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[7], var_120[8]))
                        goto label_4af30b;
                }
                else if (rax_9 == 4)
                {
                    if (*var_120 != 4)
                        goto label_4af38c;
                    
                    void var_80;
                    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_80, arg2);
                    uu_test::parser::Parser::literal::h487831028acf0989(&var_178, arg2, &var_80);
                    rax_10 = var_178;
                    
                    if (rax_10 != 7)
                        goto label_4af3be;
                    
                    uu_test::parser::Parser::expect::h264bdd99a51ab46d(&var_178);
                    goto label_4af3a6;
                }
                
                if (*var_120 != 4)
                    goto label_4af38c;
                
                goto label_4af344;
            }
        }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h8be5e6021bc91ab2(&var_128);
}
