
  fn ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::merge_flags::h859f9d81ac4b6b16(arg1: i64, arg2: i64, arg3: *mut *mut i8) -> i64

{
    let mut var_d0: i64 = arg1;
    let var_c8: i64 = arg2;
    
    if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_d0, arg3) == 0
    {
        let mut i_2: u64;
        ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&i_2, &var_d0);
        let mut rax_1: u64;
        let mut rdx: *mut c_void;
        rax_1 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&i_2);
        
        if rax_1 != 4
        {
            let mut var_68: u64 = rax_1;
            let var_60_1: *mut c_void = rdx;
            let mut var_58: i128;
            ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&var_58, &var_d0);
            let var_48: i64;
            let var_a8_1: i64 = var_48;
            let mut var_b8: i128 = var_58;
            let mut i: u64;
            let mut rdx_1: *mut c_void;
            i = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&var_b8);
            let mut rbp: u64;
            rbp = 2;
            let mut i_1: u64;
            let mut var_e0: *mut c_void;
            let mut var_d8: *mut c_void;
            
            if i != 4
            {
                let mut r13_2: *mut c_void = arg3[2];
                let temp0_1: i8 = *arg3.byte_offset(0x2c);
                let mut rsi_3: bool = temp0_1 >= 3;
                
                if temp0_1 == 3
                {
                    rsi_3 = *arg3.byte_offset(0x2d) >= 0xc;
                }
                
                var_d8 = r13_2;
                
                do
                {
                    i_1 = i;
                    var_e0 = rdx_1;
                    
                    if (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&i_1)
                        & 2) != 0
                    {
                        return 0;
                    }
                    
                    if ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&i_1)
                        > 0x3f
                    {
                        return 0;
                    }
                    
                    ruff_python_formatter::comments::Comments::leading_trailing::h77e9c3813e95a5b3(
                        &i_2, r13_2, i_1);
                    let mut var_88: ();
                    
                    if core::option::Option$LT$T$GT$::or_else::h439f9799d1cf4c8b(
                        core::iter::adapters::chain::and_then_or_clear::h0306d9c31ffdfcfc(&i_2), 
                        &var_88) != 0
                    {
                        return 0;
                    }
                    
                    let i_3: u64 = i_1;
                    
                    if i_3 >= 2
                    {
                        let mut rax_10: i8;
                        let mut r13_3: *mut c_void;
                        
                        if i_3 != 2
                        {
                            r13_3 = var_e0;
                            rax_10 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..TStringFlags$GT$$GT$::from::h278c7bfd346f0e8c(*r13_3.byte_offset(0x24));
                            'label_72739d:
                            
                            if ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug::h75d1bb52bcbb9979(*r13_3.byte_offset(8), *r13_3.byte_offset(0x10), rax_10, arg3) != 0
                            {
                                'label_7273e4:
                                r13_2 = var_d8;
                                
                                if rbp != 2 && ((ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&i_1) ^ rbp) & 1) != 0
                                {
                                    return 0;
                                }
                                
                                rbp = ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&i_1) & 1;
                            }
                            else
                            {
                                r13_2 = var_d8;
                            }
                        }
                        else
                        {
                            if var_d0 == 3
                            {
                                return 0;
                            }
                            
                            r13_3 = var_e0;
                            
                            if rsi_3 != 0
                            {
                                rax_10 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*r13_3.byte_offset(0x24));
                                goto 'label_72739d;
                            }
                            
                            if ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression::h3c23dfe7f06b780a(r13_3, arg3) != 0
                            {
                                goto 'label_7273e4;
                            }
                            
                            if ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::h3e8a5c5d3145f36a(*r13_3.byte_offset(8), *r13_3.byte_offset(0x10), arg3) != 0
                            {
                                goto 'label_7273e4;
                            }
                            
                            r13_2 = var_d8;
                        }
                    }
                    
                    i = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&var_b8);
                } while i != 4;
            }
            
            let mut var_dc_1: i8 = 2;
            let r13_1: u8 = 0x2010003 >> var_d0 << 3;
            
            if rbp != 2
            {
                goto 'label_727530;
            }
            
            let rax_3: i8 = ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style::h4147ade4e9a8fab6(arg3, 3, rax_1, rdx);
            let mut rax_4: i32;
            
            if rax_3 == 2
            {
                rax_4 =
                    ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_68);
                'label_727519:
                rbp = rax_4;
                'label_727530:
                ruff_python_ast::nodes::AnyStringFlags::new::he3ffcae652934894(r13_1, 2, rbp & 1, 
                    1);
                let mut result: i32;
                result = 1;
                return result;
            }
            
            var_d8 = rax_3;
            ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&i_2, &var_d0);
            let mut rax_15: u64;
            let mut rdx_6: *mut c_void;
            rax_15 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&i_2);
            let mut var_db: i16;
            let mut var_d9: i8;
            
            if rax_15 != 4
            {
                loop
                {
                    let mut var_40: u128;
                    let zmm0_2: u128 = ruff_python_formatter::string::normalize::QuoteMetadata::from_part::h0afa9ff01e69dd98(&var_40, rax_15, rdx_6, arg3, var_d8);
                    
                    if var_dc_1 == 2
                    {
                        i_1 = var_40;
                        rax_15 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&i_2);
                        
                        if rax_15 == 4
                        {
                            break;
                        }
                    }
                    else
                    {
                        ruff_python_formatter::string::normalize::QuoteMetadata::merge::h66c204295fe4e704(&var_b8, &var_40, &i_1, zmm0_2);
                        let rax_16: i8 = *var_b8[0xc];
                        
                        if rax_16 == 2
                        {
                            return 0;
                        }
                        
                        var_e0 = *var_b8[8];
                        i_1 = var_b8;
                        var_d9 = *var_b8[0xf];
                        var_db = *var_b8[0xd];
                        var_dc_1 = rax_16;
                        rax_15 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&i_2);
                        
                        if rax_15 == 4
                        {
                            break;
                        }
                    }
                }
            }
            
            if var_dc_1 != 2
            {
                let var_90_1: i32 = var_e0;
                i_2 = i_1;
                let var_8b_1: i16 = var_db;
                let var_89_1: i8 = var_d9;
                let var_8c_1: i8 = var_dc_1;
                rax_4 = ruff_python_formatter::string::normalize::QuoteMetadata::choose::hb1a9d58975495a88(&i_2, var_d8);
                goto 'label_727519;
            }
        }
    }
    
    0
}
