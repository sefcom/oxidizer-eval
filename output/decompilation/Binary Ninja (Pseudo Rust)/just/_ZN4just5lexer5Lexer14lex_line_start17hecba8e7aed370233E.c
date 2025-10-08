
  fn just::lexer::Lexer::lex_line_start::hecba8e7aed370233(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: *mut c_void;
    rax = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    let mut var_d0: *mut c_void = rax;
    let var_c8: *mut c_void = rdx.byte_offset(rax);
    let var_c0: i64 = 0;
    let mut var_b8: i8 = 0;
    let mut rax_1: i64;
    let mut rdx_2: i32;
    rax_1 = core::iter::traits::iterator::Iterator::try_fold::hf62f6fd0d9e5fd48(&var_d0, &var_b8);
    let mut r13: i64;
    
    if rdx_2 != 0x110000
    {
        r13 = rax_1;
    }
    else
    {
        r13 = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    }
    
    let mut rax_2: *mut c_void;
    let mut rdx_4: i64;
    rax_2 = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    let mut rax_3: *mut c_void;
    let mut rdx_5: i64;
    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r13, rax_2, rdx_4);
    
    if rax_3 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(rax_2, rdx_4, r13, rdx_4);
        /* no return */
    }
    
    let mut rax_4: *mut c_void;
    let mut rdx_6: i64;
    rax_4 = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    let mut rax_5: *mut c_void;
    let mut rdx_7: u64;
    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r13, rax_4, rdx_6);
    
    if rax_5 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(rax_4, rdx_6, 0, r13);
        /* no return */
    }
    
    let mut r12_1: *mut c_void = rax_5;
    let mut var_40: *mut c_void = rax_5;
    let var_38: u64 = rdx_7;
    let rbx_3: u64 = rax_5.byte_offset(rdx_7);
    let mut rax_6: *mut i8;
    let mut rdx_8: *mut c_void;
    rax_6 = just::lexer::Lexer::indentation::h1c13882849a7ef63(arg2[1], arg2[2]);
    let zmm0: [i32; 0x4];
    let rax_7: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax_6, rdx_8.byte_offset(rax_6), zmm0);
    var_d0 = r12_1;
    let var_c8_1: u64 = rbx_3;
    let var_c0_1: i64 = 0;
    var_b8 = rax_7;
    let mut r15_2: i64;
    
    if rax_7 == 0
    {
        r15_2 = 0;
    }
    else
    {
        var_b8 = rax_7 - 1;
        let mut rax_9: i64;
        let mut rdx_9: i32;
        rax_9 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_d0);
        r15_2 = 0;
        
        if rdx_9 != 0x110000
        {
            r15_2 = rax_9;
        }
    }
    
    let mut rax_10: *mut c_void;
    let mut rdx_11: u64;
    rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_2, r12_1, rdx_7);
    
    if rax_10 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(r12_1, rdx_7, 0, r15_2);
        /* no return */
    }
    
    var_d0 = r12_1;
    let var_c8_2: u64 = rbx_3;
    let rax_12: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h31816f8f857b3b2c(core::iter::traits::iterator::Iterator::try_fold::h49829121f50a107b(&var_d0), 
        1);
    var_d0 = r12_1;
    let var_c8_3: u64 = rbx_3;
    let rax_14: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h31816f8f857b3b2c(core::iter::traits::iterator::Iterator::try_fold::h606f9253f65e4406(&var_d0), 
        1);
    let r15_4: *mut c_void = rax_10.byte_offset(rdx_11);
    var_d0 = rax_10;
    let var_c8_4: *mut c_void = r15_4;
    let rax_16: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h31816f8f857b3b2c(core::iter::traits::iterator::Iterator::try_fold::h49829121f50a107b(&var_d0), 
        1);
    var_d0 = rax_10;
    let var_c8_5: *mut c_void = r15_4;
    let rax_18: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h31816f8f857b3b2c(core::iter::traits::iterator::Iterator::try_fold::h606f9253f65e4406(&var_d0), 
        1);
    var_d0 = 0;
    let mut rax_19: *mut i8;
    let mut rdx_12: u64;
    rax_19 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &var_d0);
    let mut i: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(
        rax_3, rdx_5, rax_19, rdx_12);
    let mut var_b0: i128;
    let var_a0: i128;
    let var_90: i64;
    let i_2: i8;
    let var_87: i32;
    let mut r15_6: *mut i128;
    
    if i != 0
    {
        'label_6713b6:
        r15_6 = arg1;
        
        if rdx_7 == 0
        {
            *r15_6.byte_offset(0x48) = 0x25;
            return i;
        }
        
        if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]) == 0
        {
            'label_671410:
            i = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            *r15_6.byte_offset(0x48) = 0x25;
            return i;
        }
        
        loop
        {
            just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
            i = i_2;
            
            if i != 0x25
            {
                break;
            }
            
            if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]) == 0
            {
                goto 'label_671410;
            }
        }
        
        'label_6717f2:
        r15_6[4] = var_90;
        let zmm0_1: i128 = var_d0;
        r15_6[3] = var_a0;
        r15_6[2] = var_b0;
        r15_6[1] = var_c0_1;
        *r15_6 = zmm0_1;
        *r15_6.byte_offset(0x49) = var_87;
        *r15_6.byte_offset(0x4c) = var_87;
        *r15_6.byte_offset(0x48) = i;
        return i;
    }
    
    i = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_3, rdx_5, 
        "\r\nsrc/compilation.rsUnterminat…", 2);
    
    if rdx_5 == 0 || i != 0
    {
        goto 'label_6713b6;
    }
    
    let mut rbp_3: i64 = arg2[1];
    let mut r15_7: i64 = arg2[2];
    let mut rax_22: i64;
    let mut rdx_14: i64;
    rax_22 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
    let mut var_68: *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(r12_1, rdx_7, rax_22, rdx_14) == 0
    {
        if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::he7e5eaa90c4f1895(
            &var_40, rbp_3, r15_7) != 0
        {
            let mut rax_28: i64;
            let mut rdx_20: u64;
            rax_28 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
            let mut rax_29: i64;
            let mut rdx_22: u64;
            
            for i = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_28, rdx_20, r12_1, rdx_7); i == 0; i = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_29, rdx_22, r12_1, rdx_7)
            {
                just::lexer::Lexer::lex_dedent::hd3d59812e389acd6(arg2);
                rax_29 = just::lexer::Lexer::indentation::h1c13882849a7ef63(arg2[1], arg2[2]);
            }
            
            r15_6 = arg1;
            
            if rdx_7 == 0
            {
                *r15_6.byte_offset(0x48) = 0x25;
                return i;
            }
            
            if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]) == 0
            {
                goto 'label_671410;
            }
            
            loop
            {
                just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                i = i_2;
                
                if i != 0x25
                {
                    break;
                }
                
                if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]) == 0
                {
                    goto 'label_671410;
                }
            }
            
            goto 'label_6717f2;
        }
        
        let mut r13_2: u64;
        
        if *arg2.byte_offset(0xc4) == 0
        {
            if (rax_12 & rax_14) != 0
            {
                r13_2 = rdx_7;
                'label_671654:
                var_68 = r12_1;
                let var_60_2: *mut c_void = r12_1.byte_offset(r13_2);
                
                if (core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, rbx_3) & 1)
                    == 0
                {
                    'label_6716a6:
                    let var_c8_6: *mut c_void = r12_1;
                    let var_c0_2: u64 = r13_2;
                    var_d0 = -0x800000000000002c;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_d0);
                }
                
                loop
                {
                    just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                    i = i_2;
                    
                    if i != 0x25
                    {
                        'label_6718f6:
                        arg1[4] = var_90;
                        let zmm0_3: i128 = var_d0;
                        arg1[3] = var_a0;
                        arg1[2] = var_b0;
                        arg1[1] = var_c0_1;
                        *arg1 = zmm0_3;
                        *arg1.byte_offset(0x49) = var_87;
                        *arg1.byte_offset(0x4c) = var_87;
                        *arg1.byte_offset(0x48) = i;
                        break;
                    }
                    
                    if (core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, &var_d0)
                        & 1) == 0
                    {
                        goto 'label_6716a6;
                    }
                }
                
                return i;
            }
            
            if rdx_7 < just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7)
            {
                'label_67184c:
                var_68 = r12_1;
                let var_60_3: u64 = rbx_3;
                
                if (core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, rbx_3) & 1)
                    != 0
                {
                    let mut rax_46: i8;
                    
                    do
                    {
                        just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                        i = i_2;
                        
                        if i != 0x25
                        {
                            goto 'label_6718f6;
                        }
                        
                        rax_46 = core::str::validations::next_code_point::he89b2cd8a446aa48(
                            &var_68, &var_d0);
                    } while (rax_46 & 1) != 0;
                    rbp_3 = arg2[1];
                    r15_7 = arg2[2];
                }
                
                let mut rax_47: i64;
                let mut rdx_34: i64;
                rax_47 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
                let var_c8_7: i64 = rax_47;
                let var_c0_3: i64 = rdx_34;
                var_b8 = r12_1;
                var_b0 = rdx_7;
                var_d0 = -0x8000000000000027;
                return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_d0);
            }
            
            'label_671730:
            let rdx_28: i64 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
            let mut rax_42: i8;
            
            if rdx_7 >= rdx_28
            {
                let mut rax_41: i64;
                let mut rdx_29: u64;
                rax_41 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
                rax_42 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(
                    r12_1, rdx_7, rax_41, rdx_29);
            }
            
            if rdx_7 >= rdx_28 && rax_42 == 0
            {
                goto 'label_67184c;
            }
            
            r15_6 = arg1;
            
            if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]) != 0
            {
                let mut i_1: bool;
                
                do
                {
                    just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                    i = i_2;
                    
                    if i != 0x25
                    {
                        goto 'label_6717f2;
                    }
                    
                    i_1 = just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(arg2[0x18]);
                } while i_1 != 0;
            }
            
            if arg2[8] != 0
            {
                goto 'label_671410;
            }
            
            let mut rax_44: *mut c_void;
            let mut rdx_31: i64;
            rax_44 = just::lexer::Lexer::lexeme::h6f4e5a895dbfd937(arg2);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg2, rax_44, rdx_31);
            i = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            
            if *arg2.byte_offset(0xc5) != 0
            {
                *arg2.byte_offset(0xc4) = 1;
            }
            
            *r15_6.byte_offset(0x48) = 0x25;
            return i;
        }
        
        let mut rax_32: i64;
        let mut rdx_24: u64;
        rax_32 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(r12_1, rdx_7, 
            rax_32, rdx_24) == 0
        {
            if (rax_16 & rax_18) != 0
            {
                r12_1 = rax_10;
                r13_2 = rdx_11;
                goto 'label_671654;
            }
            
            if rdx_7 < just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7)
            {
                goto 'label_67184c;
            }
            
            if rdx_11 < just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7)
            {
                goto 'label_671730;
            }
            
            let mut rax_48: i64;
            let mut rdx_38: u64;
            rax_48 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_10, 
                rdx_11, rax_48, rdx_38) != 0
            {
                goto 'label_671730;
            }
            
            goto 'label_67184c;
        }
    }
    
    let mut rdx_16: i64;
    i = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
    
    if rdx_16 == 0
    {
        *arg1.byte_offset(0x48) = 0x25;
    }
    else
    {
        let mut rax_24: *mut c_void;
        let mut rdx_17: *mut c_void;
        rax_24 = just::lexer::Lexer::indentation::h1c13882849a7ef63(rbp_3, r15_7);
        var_68 = rax_24;
        let var_60_1: *mut c_void = rdx_17.byte_offset(rax_24);
        
        if (core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, rbx_3) & 1) == 0
        {
            'label_67150c:
            i = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            *arg1.byte_offset(0x48) = 0x25;
        }
        else
        {
            loop
            {
                just::lexer::Lexer::advance::hab928493b22c646a(&var_d0, arg2);
                i = i_2;
                
                if i != 0x25
                {
                    arg1[4] = var_90;
                    let zmm0_2: i128 = var_d0;
                    arg1[3] = var_a0;
                    arg1[2] = var_b0;
                    arg1[1] = var_c0_1;
                    *arg1 = zmm0_2;
                    *arg1.byte_offset(0x49) = var_87;
                    *arg1.byte_offset(0x4c) = var_87;
                    *arg1.byte_offset(0x48) = i;
                    break;
                }
                
                if (core::str::validations::next_code_point::he89b2cd8a446aa48(&var_68, &var_d0)
                    & 1) == 0
                {
                    goto 'label_67150c;
                }
            }
        }
    }
    
    i
}
