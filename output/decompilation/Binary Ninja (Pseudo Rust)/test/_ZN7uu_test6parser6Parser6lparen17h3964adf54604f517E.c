
  fn uu_test::parser::Parser::lparen::h3964adf54604f517(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_150: *mut c_void;
    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h51d9b9dc2856ac23(&var_150, &arg2[3]);
    let var_118: i64 = 3;
    let mut var_c8: ();
    core::iter::traits::iterator::Iterator::collect::h07229457d4e30845(&var_c8, &var_150);
    let var_b8: i64;
    let mut var_110: *mut c_void;
    let mut var_f0: *mut i64;
    let var_c0: *mut i64;
    let mut var_148: i128;
    let mut rax_11: *mut c_void;
    
    if var_b8 > 3
    {
        'label_457b2e:
        uu_test::parser::Parser::expr::hea95ff6631384a05(&var_150, arg2);
        rax_11 = var_150;
        
        if rax_11 != 7
        {
            'label_457b64:
            let var_138: i64;
            arg1[3] = var_138;
            *arg1.byte_offset(8) = var_148;
            *arg1 = rax_11;
        }
        else
        {
            uu_test::parser::Parser::expect::h104d0740cf1283ee(&var_150);
            'label_457b4b:
            rax_11 = var_150;
            
            if rax_11 != 7
            {
                goto 'label_457b64;
            }
            
            *arg1 = 7;
        }
    }
    else
    {
        match var_b8
        {
            0 =>
            {
                var_150 = nullptr;
                uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_f0, &var_150);
                uu_test::parser::Parser::literal::hbd84cf521357194c(&var_110, arg2, &var_f0);
                'label_457b0b:
                rax_11 = var_110;
                
                if rax_11 == 7
                {
                    *arg1 = 7;
                }
                else
                {
                    let var_f8: i64;
                    arg1[3] = var_f8;
                    let var_108: i128;
                    *arg1.byte_offset(8) = var_108;
                    *arg1 = rax_11;
                }
            }
            1 =>
            {
                var_110 = var_c0;
                var_f0 = &var_110;
                let var_e8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc473e96781e0b048;
                var_150 = &data_417330;
                var_148 = 1;
                let var_130_1: i64 = 0;
                *var_148[8] = &var_f0;
                let var_138_1: i64 = 1;
                let mut var_b0: i128;
                core::option::Option$LT$T$GT$::map_or_else::h1762a7ae3f8b5d38(&var_b0, &var_150);
                let var_a0: i64;
                arg1[3] = var_a0;
                *arg1.byte_offset(8) = var_b0;
                *arg1 = 3;
            }
            2 =>
            {
                let rax_3: i64 = var_c0[5];
                
                if *var_c0 != 4
                {
                    if rax_3 != 3
                    {
                        goto 'label_457b2e;
                    }
                    
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]) == 0
                    {
                        goto 'label_457b2e;
                    }
                    
                    'label_457aa3:
                    let mut var_70: ();
                    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_70, arg2);
                    uu_test::parser::Parser::literal::hbd84cf521357194c(&var_150, arg2, &var_70);
                    rax_11 = var_150;
                    
                    if rax_11 != 7
                    {
                        goto 'label_457b64;
                    }
                    
                    uu_test::parser::Parser::expect::h104d0740cf1283ee(&var_150);
                    goto 'label_457b4b;
                }
                
                if rax_3 != 3
                {
                    'label_457ae1:
                    var_150 = nullptr;
                    uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_f0, &var_150);
                    uu_test::parser::Parser::literal::hbd84cf521357194c(&var_110, arg2, &var_f0);
                    goto 'label_457b0b;
                }
                
                if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]) != 0
                {
                    'label_4579f5:
                    var_150 = nullptr;
                    uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_f0, &var_150);
                    uu_test::parser::Parser::literal::hbd84cf521357194c(&var_110, arg2, &var_f0);
                    goto 'label_457b0b;
                }
                
                if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]) != 0
                {
                    goto 'label_457aa3;
                }
                
                goto 'label_457ae1;
            }
            3 =>
            {
                let r12_1: i64 = *var_c0;
                
                if r12_1 != 4
                {
                    if r12_1 != 5 || var_c0[0xa] != 3
                    {
                        goto 'label_457a24;
                    }
                    
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[0xc], var_c0[0xd]) == 0
                    {
                        goto 'label_457a24;
                    }
                    
                    let mut var_98: ();
                    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_98, arg2);
                    uu_test::parser::Parser::uop::h1b444c1c0da3bc2d(arg2, &var_98);
                    uu_test::parser::Parser::expect::h104d0740cf1283ee(&var_150);
                    goto 'label_457b4b;
                }
                
                if var_c0[5] == 3
                {
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]) == 0
                    {
                        goto 'label_457a24;
                    }
                    
                    goto 'label_4579f5;
                }
                
                'label_457a24:
                let rax_10: i64 = var_c0[5];
                
                if rax_10 == 3
                {
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]) != 0
                    {
                        goto 'label_457aa3;
                    }
                }
                else if rax_10 == 4
                {
                    if r12_1 != 4
                    {
                        goto 'label_457b2e;
                    }
                    
                    let mut var_48: ();
                    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_48, arg2);
                    uu_test::parser::Parser::literal::hbd84cf521357194c(&var_150, arg2, &var_48);
                    rax_11 = var_150;
                    
                    if rax_11 != 7
                    {
                        goto 'label_457b64;
                    }
                    
                    uu_test::parser::Parser::expect::h104d0740cf1283ee(&var_150);
                    goto 'label_457b4b;
                }
                
                if r12_1 != 4
                {
                    goto 'label_457b2e;
                }
                
                goto 'label_457ae1;
            }
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h9359e9a929ed7bbe(&var_c8)
}
