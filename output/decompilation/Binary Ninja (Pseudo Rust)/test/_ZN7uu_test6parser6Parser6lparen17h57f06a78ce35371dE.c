
  fn uu_test::parser::Parser::lparen::h57f06a78ce35371d(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut var_58: ();
    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h86ce5a051be3bc0b(&var_58, &arg2[3]);
    let var_20: i64 = 3;
    let mut var_128: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he3027531f5f490a6(&var_128, &var_58);
    let var_118: i64;
    let mut var_148: i32;
    let var_138: i128;
    let var_120: *mut i64;
    let mut var_110: *mut i32;
    let mut var_178: *mut c_void;
    let mut var_170: i128;
    let mut rax_10: *mut c_void;
    
    if var_118 > 3
    {
        'label_4af38c:
        uu_test::parser::Parser::expr::h14b244d6254724ab(&var_178, arg2);
        rax_10 = var_178;
        
        if rax_10 != 7
        {
            'label_4af3be:
            let var_160: i64;
            *arg1.byte_offset(0x18) = var_160;
            *arg1.byte_offset(8) = var_170;
            *arg1 = rax_10;
        }
        else
        {
            uu_test::parser::Parser::expect::h264bdd99a51ab46d(&var_178);
            'label_4af3a6:
            rax_10 = var_178;
            
            if rax_10 != 7
            {
                goto 'label_4af3be;
            }
            
            *arg1 = 7;
        }
    }
    else
    {
        match var_118
        {
            0 =>
            {
                var_178 = nullptr;
                uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_110, &var_178);
                uu_test::parser::Parser::literal::h487831028acf0989(&var_148, arg2, &var_110);
                
                if var_148 == 7
                {
                    *arg1 = 7;
                }
                else
                {
                    let zmm0_1: i128 = var_148;
                    arg1[1] = var_138;
                    *arg1 = zmm0_1;
                }
            }
            1 =>
            {
                var_148 = var_120;
                var_110 = &var_148;
                let var_108_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf994b1777394cd57;
                var_178 = &data_413dc0;
                var_170 = 1;
                let var_158_1: i64 = 0;
                *var_170[8] = &var_110;
                let var_160_1: i64 = 1;
                let mut var_e8: i128;
                core::option::Option$LT$T$GT$::map_or_else::ha47e44f34eb359bd(&var_e8, &var_178);
                let var_d8: i64;
                *arg1.byte_offset(0x18) = var_d8;
                *arg1.byte_offset(8) = var_e8;
                *arg1 = 3;
            }
            2 =>
            {
                if *var_120 != 4 || var_120[5] != 3
                {
                    'label_4af142:
                    
                    if var_120[5] == 3 && _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[7], var_120[8]) != 0
                    {
                        'label_4af30b:
                        let mut var_a8: ();
                        uu_test::parser::Parser::next_token::hec2da245067de41f(&var_a8, arg2);
                        uu_test::parser::Parser::literal::h487831028acf0989(&var_178, arg2, 
                            &var_a8);
                        rax_10 = var_178;
                        
                        if rax_10 != 7
                        {
                            goto 'label_4af3be;
                        }
                        
                        uu_test::parser::Parser::expect::h264bdd99a51ab46d(&var_178);
                        goto 'label_4af3a6;
                    }
                    
                    if *var_120 != 4
                    {
                        goto 'label_4af38c;
                    }
                    
                    'label_4af344:
                    var_178 = nullptr;
                    uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_110, &var_178);
                    uu_test::parser::Parser::literal::h487831028acf0989(&var_148, arg2, &var_110);
                    goto 'label_4af36b;
                }
                
                if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[7], var_120[8]) == 0
                {
                    goto 'label_4af142;
                }
                
                'label_4af265:
                var_178 = nullptr;
                uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_110, &var_178);
                uu_test::parser::Parser::literal::h487831028acf0989(&var_148, arg2, &var_110);
                'label_4af36b:
                rax_10 = var_148;
                
                if rax_10 == 7
                {
                    *arg1 = 7;
                }
                else
                {
                    *arg1.byte_offset(0x18) = *var_138[8];
                    let var_140: i128;
                    *arg1.byte_offset(8) = var_140;
                    *arg1 = rax_10;
                }
            }
            3 =>
            {
                let rax_5: i64 = *var_120;
                
                if rax_5 != 4
                {
                    if rax_5 != 5 || var_120[0xa] != 3
                    {
                        goto 'label_4af291;
                    }
                    
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[0xc], var_120[0xd]) == 0
                    {
                        goto 'label_4af291;
                    }
                    
                    let mut var_d0: ();
                    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_d0, arg2);
                    uu_test::parser::Parser::uop::h62a6f0e931485a3c(arg2, &var_d0);
                    uu_test::parser::Parser::expect::h264bdd99a51ab46d(&var_178);
                    goto 'label_4af3a6;
                }
                
                if var_120[5] == 3
                {
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[7], var_120[8]) == 0
                    {
                        goto 'label_4af291;
                    }
                    
                    goto 'label_4af265;
                }
                
                'label_4af291:
                let rax_9: i64 = var_120[5];
                
                if rax_9 == 3
                {
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(var_120[7], var_120[8]) != 0
                    {
                        goto 'label_4af30b;
                    }
                }
                else if rax_9 == 4
                {
                    if *var_120 != 4
                    {
                        goto 'label_4af38c;
                    }
                    
                    let mut var_80: ();
                    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_80, arg2);
                    uu_test::parser::Parser::literal::h487831028acf0989(&var_178, arg2, &var_80);
                    rax_10 = var_178;
                    
                    if rax_10 != 7
                    {
                        goto 'label_4af3be;
                    }
                    
                    uu_test::parser::Parser::expect::h264bdd99a51ab46d(&var_178);
                    goto 'label_4af3a6;
                }
                
                if *var_120 != 4
                {
                    goto 'label_4af38c;
                }
                
                goto 'label_4af344;
            }
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h8be5e6021bc91ab2(&var_128)
}
