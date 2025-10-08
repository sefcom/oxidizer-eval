
  int64_t just::lexer::Lexer::lex_line_start::hecba8e7aed370233(int128_t* arg1, int64_t* arg2)

{
    void* rax;
    void* rdx;
    rax = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    void* var_d0 = rax;
    void* var_c8 = rdx + rax;
    int64_t var_c0 = 0;
    char var_b8 = 0;
    int64_t rax_1;
    int32_t rdx_2;
    rax_1 = core::iter::traits::iterator::Iterator::try_fold::hf62f6fd0d9e5fd48(&var_d0, &var_b8);
    int64_t r13;
    
    if (rdx_2 != 0x110000)
        r13 = rax_1;
    else
        r13 = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    
    void* rax_2;
    int64_t rdx_4;
    rax_2 = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    void* rax_3;
    int64_t rdx_5;
    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r13, rax_2, rdx_4);
    
    if (!rax_3)
    {
        core::str::slice_error_fail::h1a2885084e28d077(rax_2, rdx_4, r13, rdx_4);
        /* no return */
    }
    
    void* rax_4;
    int64_t rdx_6;
    rax_4 = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    void* rax_5;
    uint64_t rdx_7;
    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r13, rax_4, rdx_6);
    
    if (!rax_5)
    {
        core::str::slice_error_fail::h1a2885084e28d077(rax_4, rdx_6, 0, r13);
        /* no return */
    }
    
    void* r12_1 = rax_5;
    void* var_40 = rax_5;
    uint64_t var_38 = rdx_7;
    uint64_t rbx_3 = rax_5 + rdx_7;
    char* rax_6;
    void* rdx_8;
    rax_6 = just::lexer::Lexer::indentation::h1c13882849a7ef63(arg2[1], arg2[2]);
    int32_t zmm0[0x4];
    int64_t rax_7 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax_6, rdx_8 + rax_6, zmm0);
    var_d0 = r12_1;
    uint64_t var_c8_1 = rbx_3;
    int64_t var_c0_1 = 0;
    var_b8 = rax_7;
    int64_t r15_2;
    
    if (!rax_7)
        r15_2 = 0;
    else
    {
        var_b8 = rax_7 - 1;
        int64_t rax_9;
        int32_t rdx_9;
        rax_9 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_d0);
        r15_2 = 0;
        
        if (rdx_9 != 0x110000)
            r15_2 = rax_9;
    }
    
    void* rax_10;
    uint64_t rdx_11;
    rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_2, r12_1, rdx_7);
    
    if (!rax_10)
    {
        core::str::slice_error_fail::h1a2885084e28d077(r12_1, rdx_7, 0, r15_2);
        /* no return */
    }
    
    var_d0 = r12_1;
    uint64_t var_c8_2 = rbx_3;
    char rax_12 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h31816f8f857b3b2c(core::iter::traits::iterator::Iterator::try_fold::h49829121f50a107b(&var_d0), 1);
    var_d0 = r12_1;
    uint64_t var_c8_3 = rbx_3;
    char rax_14 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h31816f8f857b3b2c(core::iter::traits::iterator::Iterator::try_fold::h606f9253f65e4406(&var_d0), 1);
    void* r15_4 = rax_10 + rdx_11;
    var_d0 = rax_10;
    void* var_c8_4 = r15_4;
    char rax_16 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h31816f8f857b3b2c(core::iter::traits::iterator::Iterator::try_fold::h49829121f50a107b(&var_d0), 1);
    var_d0 = rax_10;
    void* var_c8_5 = r15_4;
    char rax_18 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h31816f8f857b3b2c(core::iter::traits::iterator::Iterator::try_fold::h606f9253f65e4406(&var_d0), 1);
    var_d0 = 0;
    char* rax_19;
    uint64_t rdx_12;
    rax_19 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &var_d0);
    char i = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_3, 
        rdx_5, rax_19, rdx_12);
    int128_t var_b0;
    int128_t var_a0;
    int64_t var_90;
    char i_2;
    int32_t var_87;
    int128_t* r15_6;
    
    if (i)
    {
        label_6713b6:
        r15_6 = arg1;
        
        if (!rdx_7)
        {
            *(r15_6 + 0x48) = 0x25;
            return i;
        }
        
        if (!just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]))
        {
            label_671410:
            i = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            *(r15_6 + 0x48) = 0x25;
            return i;
        }
        
        while (true)
        {
            just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
            i = i_2;
            
            if (i != 0x25)
                break;
            
            if (!just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]))
                goto label_671410;
        }
        
        label_6717f2:
        r15_6[4] = var_90;
        int128_t zmm0_1 = var_d0;
        r15_6[3] = var_a0;
        r15_6[2] = var_b0;
        r15_6[1] = var_c0_1;
        *r15_6 = zmm0_1;
        *(r15_6 + 0x49) = var_87;
        *(r15_6 + 0x4c) = var_87;
        *(r15_6 + 0x48) = i;
        return i;
    }
    
    i = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_3, rdx_5, 
        "\r\nsrc/compilation.rsUnterminat…", 2);
    
    if (!rdx_5 || i)
        goto label_6713b6;
    
    int64_t rbp_3 = arg2[1];
    int64_t r15_7 = arg2[2];
    int64_t rax_22;
    int64_t rdx_14;
    rax_22 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
    void* var_68;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(r12_1, rdx_7, rax_22, rdx_14))
    {
        if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::he7e5eaa90c4f1895(&var_40, rbp_3, r15_7))
        {
            int64_t rax_28;
            uint64_t rdx_20;
            rax_28 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
            int64_t rax_29;
            uint64_t rdx_22;
            
            for (i = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_28, rdx_20, r12_1, rdx_7); !i; i = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_29, rdx_22, r12_1, rdx_7))
            {
                just::lexer::Lexer::lex_dedent::hd3d59812e389acd6(arg2);
                rax_29 = just::lexer::Lexer::indentation::h1c13882849a7ef63(arg2[1], arg2[2]);
            }
            
            r15_6 = arg1;
            
            if (!rdx_7)
            {
                *(r15_6 + 0x48) = 0x25;
                return i;
            }
            
            if (!just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]))
                goto label_671410;
            
            while (true)
            {
                just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                i = i_2;
                
                if (i != 0x25)
                    break;
                
                if (!just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]))
                    goto label_671410;
            }
            
            goto label_6717f2;
        }
        
        uint64_t r13_2;
        
        if (!*(arg2 + 0xc4))
        {
            if (rax_12 & rax_14)
            {
                r13_2 = rdx_7;
                label_671654:
                var_68 = r12_1;
                void* var_60_2 = r12_1 + r13_2;
                
                if (!(core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, rbx_3)
                    & 1))
                {
                    label_6716a6:
                    void* var_c8_6 = r12_1;
                    uint64_t var_c0_2 = r13_2;
                    var_d0 = -0x800000000000002c;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_d0);
                }
                
                while (true)
                {
                    just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                    i = i_2;
                    
                    if (i != 0x25)
                    {
                        label_6718f6:
                        arg1[4] = var_90;
                        int128_t zmm0_3 = var_d0;
                        arg1[3] = var_a0;
                        arg1[2] = var_b0;
                        arg1[1] = var_c0_1;
                        *arg1 = zmm0_3;
                        *(arg1 + 0x49) = var_87;
                        *(arg1 + 0x4c) = var_87;
                        *(arg1 + 0x48) = i;
                        break;
                    }
                    
                    if (!(core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, 
                            &var_d0) & 1))
                        goto label_6716a6;
                }
                
                return i;
            }
            
            if (rdx_7 < just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7))
            {
                label_67184c:
                var_68 = r12_1;
                uint64_t var_60_3 = rbx_3;
                
                if (core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, rbx_3) & 1)
                {
                    char rax_46;
                    
                    do
                    {
                        just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                        i = i_2;
                        
                        if (i != 0x25)
                            goto label_6718f6;
                        
                        rax_46 = core::str::validations::next_code_point::he89b2cd8a446aa48(
                            &var_68, &var_d0);
                    } while (rax_46 & 1);
                    rbp_3 = arg2[1];
                    r15_7 = arg2[2];
                }
                
                int64_t rax_47;
                int64_t rdx_34;
                rax_47 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
                int64_t var_c8_7 = rax_47;
                int64_t var_c0_3 = rdx_34;
                var_b8 = r12_1;
                var_b0 = rdx_7;
                var_d0 = -0x8000000000000027;
                return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_d0);
            }
            
            label_671730:
            int64_t rdx_28 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
            char rax_42;
            
            if (rdx_7 >= rdx_28)
            {
                int64_t rax_41;
                uint64_t rdx_29;
                rax_41 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
                rax_42 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(
                    r12_1, rdx_7, rax_41, rdx_29);
            }
            
            if (rdx_7 >= rdx_28 && !rax_42)
                goto label_67184c;
            
            r15_6 = arg1;
            
            if (just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]))
            {
                bool i_1;
                
                do
                {
                    just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                    i = i_2;
                    
                    if (i != 0x25)
                        goto label_6717f2;
                    
                    i_1 = just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]);
                } while (i_1);
            }
            
            if (arg2[8])
                goto label_671410;
            
            void* rax_44;
            int64_t rdx_31;
            rax_44 = just::lexer::Lexer::lexeme::h6f4e5a895dbfd937(arg2);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg2, rax_44, rdx_31);
            i = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            
            if (*(arg2 + 0xc5))
                *(arg2 + 0xc4) = 1;
            
            *(r15_6 + 0x48) = 0x25;
            return i;
        }
        
        int64_t rax_32;
        uint64_t rdx_24;
        rax_32 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
        
        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(r12_1, 
            rdx_7, rax_32, rdx_24))
        {
            if (rax_16 & rax_18)
            {
                r12_1 = rax_10;
                r13_2 = rdx_11;
                goto label_671654;
            }
            
            if (rdx_7 < just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7))
                goto label_67184c;
            
            if (rdx_11 < just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7))
                goto label_671730;
            
            int64_t rax_48;
            uint64_t rdx_38;
            rax_48 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_10, 
                    rdx_11, rax_48, rdx_38))
                goto label_671730;
            
            goto label_67184c;
        }
    }
    
    int64_t rdx_16;
    i = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
    
    if (!rdx_16)
        *(arg1 + 0x48) = 0x25;
    else
    {
        void* rax_24;
        void* rdx_17;
        rax_24 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
        var_68 = rax_24;
        void* var_60_1 = rdx_17 + rax_24;
        
        if (!(core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, rbx_3) & 1))
        {
            label_67150c:
            i = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            *(arg1 + 0x48) = 0x25;
        }
        else
        {
            while (true)
            {
                just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                i = i_2;
                
                if (i != 0x25)
                {
                    arg1[4] = var_90;
                    int128_t zmm0_2 = var_d0;
                    arg1[3] = var_a0;
                    arg1[2] = var_b0;
                    arg1[1] = var_c0_1;
                    *arg1 = zmm0_2;
                    *(arg1 + 0x49) = var_87;
                    *(arg1 + 0x4c) = var_87;
                    *(arg1 + 0x48) = i;
                    break;
                }
                
                if (!(core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, &var_d0)
                        & 1))
                    goto label_67150c;
            }
        }
    }
    
    return i;
}
