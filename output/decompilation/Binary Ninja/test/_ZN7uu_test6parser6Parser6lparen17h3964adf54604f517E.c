
  int64_t uu_test::parser::Parser::lparen::h3964adf54604f517(int64_t* arg1, int64_t* arg2)

{
    void* const var_150;
    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h51d9b9dc2856ac23(&var_150, &arg2[3]);
    int64_t var_118 = 3;
    void var_c8;
    core::iter::traits::iterator::Iterator::collect::h07229457d4e30845(&var_c8, &var_150);
    int64_t var_b8;
    void* var_110;
    int64_t* var_f0;
    int64_t* var_c0;
    int128_t var_148;
    void* const rax_11;
    
    if (var_b8 > 3)
    {
        label_457b2e:
        uu_test::parser::Parser::expr::hea95ff6631384a05(&var_150, arg2);
        rax_11 = var_150;
        
        if (rax_11 != 7)
        {
            label_457b64:
            int64_t var_138;
            arg1[3] = var_138;
            *(arg1 + 8) = var_148;
            *arg1 = rax_11;
        }
        else
        {
            uu_test::parser::Parser::expect::h104d0740cf1283ee(&var_150);
            label_457b4b:
            rax_11 = var_150;
            
            if (rax_11 != 7)
                goto label_457b64;
            
            *arg1 = 7;
        }
    }
    else
        switch (var_b8)
        {
            case 0:
            {
                var_150 = nullptr;
                uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_f0, &var_150);
                uu_test::parser::Parser::literal::hbd84cf521357194c(&var_110, arg2, &var_f0);
                label_457b0b:
                rax_11 = var_110;
                
                if (rax_11 == 7)
                    *arg1 = 7;
                else
                {
                    int64_t var_f8;
                    arg1[3] = var_f8;
                    int128_t var_108;
                    *(arg1 + 8) = var_108;
                    *arg1 = rax_11;
                }
                break;
            }
            case 1:
            {
                var_110 = var_c0;
                var_f0 = &var_110;
                int64_t (* var_e8_1)(int64_t* arg1, int64_t* arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc473e96781e0b048;
                var_150 = &data_417330;
                var_148 = 1;
                int64_t var_130_1 = 0;
                *var_148[8] = &var_f0;
                int64_t var_138_1 = 1;
                int128_t var_b0;
                core::option::Option$LT$T$GT$::map_or_else::h1762a7ae3f8b5d38(&var_b0, &var_150);
                int64_t var_a0;
                arg1[3] = var_a0;
                *(arg1 + 8) = var_b0;
                *arg1 = 3;
                break;
            }
            case 2:
            {
                int64_t rax_3 = var_c0[5];
                
                if (*var_c0 != 4)
                {
                    if (rax_3 != 3)
                        goto label_457b2e;
                    
                    if (!_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]))
                        goto label_457b2e;
                    
                    label_457aa3:
                    void var_70;
                    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_70, arg2);
                    uu_test::parser::Parser::literal::hbd84cf521357194c(&var_150, arg2, &var_70);
                    rax_11 = var_150;
                    
                    if (rax_11 != 7)
                        goto label_457b64;
                    
                    uu_test::parser::Parser::expect::h104d0740cf1283ee(&var_150);
                    goto label_457b4b;
                }
                
                if (rax_3 != 3)
                {
                    label_457ae1:
                    var_150 = nullptr;
                    uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_f0, &var_150);
                    uu_test::parser::Parser::literal::hbd84cf521357194c(&var_110, arg2, &var_f0);
                    goto label_457b0b;
                }
                
                if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]))
                {
                    label_4579f5:
                    var_150 = nullptr;
                    uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_f0, &var_150);
                    uu_test::parser::Parser::literal::hbd84cf521357194c(&var_110, arg2, &var_f0);
                    goto label_457b0b;
                }
                
                if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]))
                    goto label_457aa3;
                
                goto label_457ae1;
            }
            case 3:
            {
                int64_t r12_1 = *var_c0;
                
                if (r12_1 != 4)
                {
                    if (r12_1 != 5 || var_c0[0xa] != 3)
                        goto label_457a24;
                    
                    if (!_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[0xc], var_c0[0xd]))
                        goto label_457a24;
                    
                    void var_98;
                    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_98, arg2);
                    uu_test::parser::Parser::uop::h1b444c1c0da3bc2d(arg2, &var_98);
                    uu_test::parser::Parser::expect::h104d0740cf1283ee(&var_150);
                    goto label_457b4b;
                }
                
                if (var_c0[5] == 3)
                {
                    if (!_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]))
                        goto label_457a24;
                    
                    goto label_4579f5;
                }
                
                label_457a24:
                int64_t rax_10 = var_c0[5];
                
                if (rax_10 == 3)
                {
                    if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(var_c0[7], var_c0[8]))
                        goto label_457aa3;
                }
                else if (rax_10 == 4)
                {
                    if (r12_1 != 4)
                        goto label_457b2e;
                    
                    void var_48;
                    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_48, arg2);
                    uu_test::parser::Parser::literal::hbd84cf521357194c(&var_150, arg2, &var_48);
                    rax_11 = var_150;
                    
                    if (rax_11 != 7)
                        goto label_457b64;
                    
                    uu_test::parser::Parser::expect::h104d0740cf1283ee(&var_150);
                    goto label_457b4b;
                }
                
                if (r12_1 != 4)
                    goto label_457b2e;
                
                goto label_457ae1;
            }
        }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h9359e9a929ed7bbe(&var_c8);
}
