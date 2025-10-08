
  int64_t ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::merge_flags::h859f9d81ac4b6b16(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_d0 = arg1;
    int64_t var_c8 = arg2;
    
    if (!_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_d0, arg3))
    {
        uint64_t i_2;
        ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&i_2, &var_d0);
        uint64_t rax_1;
        void* rdx;
        rax_1 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&i_2);
        
        if (rax_1 != 4)
        {
            uint64_t var_68 = rax_1;
            void* var_60_1 = rdx;
            int128_t var_58;
            ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&var_58, &var_d0);
            int64_t var_48;
            int64_t var_a8_1 = var_48;
            int128_t var_b8 = var_58;
            uint64_t i;
            void* rdx_1;
            i = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&var_b8);
            uint64_t rbp;
            rbp = 2;
            uint64_t i_1;
            void* var_e0;
            void* var_d8;
            
            if (i != 4)
            {
                void* r13_2 = arg3[2];
                char temp0_1 = *(arg3 + 0x2c);
                bool rsi_3 = temp0_1 >= 3;
                
                if (temp0_1 == 3)
                    rsi_3 = *(arg3 + 0x2d) >= 0xc;
                
                var_d8 = r13_2;
                
                do
                {
                    i_1 = i;
                    var_e0 = rdx_1;
                    
                    if (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&i_1)
                            & 2)
                        return 0;
                    
                    if (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&i_1)
                            > 0x3f)
                        return 0;
                    
                    ruff_python_formatter::comments::Comments::leading_trailing::h77e9c3813e95a5b3(
                        &i_2, r13_2, i_1);
                    void var_88;
                    
                    if (core::option::Option$LT$T$GT$::or_else::h439f9799d1cf4c8b(
                            core::iter::adapters::chain::and_then_or_clear::h0306d9c31ffdfcfc(
                                &i_2), 
                            &var_88))
                        return 0;
                    
                    uint64_t i_3 = i_1;
                    
                    if (i_3 >= 2)
                    {
                        char rax_10;
                        void* r13_3;
                        
                        if (i_3 != 2)
                        {
                            r13_3 = var_e0;
                            rax_10 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..TStringFlags$GT$$GT$::from::h278c7bfd346f0e8c(*(r13_3 + 0x24));
                            label_72739d:
                            
                            if (ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug::h75d1bb52bcbb9979(*(r13_3 + 8), *(r13_3 + 0x10), rax_10, arg3))
                            {
                                label_7273e4:
                                r13_2 = var_d8;
                                
                                if (rbp != 2 && (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&i_1) ^ rbp) & 1)
                                    return 0;
                                
                                rbp = ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&i_1) & 1;
                            }
                            else
                                r13_2 = var_d8;
                        }
                        else
                        {
                            if (var_d0 == 3)
                                return 0;
                            
                            r13_3 = var_e0;
                            
                            if (rsi_3)
                            {
                                rax_10 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*(r13_3 + 0x24));
                                goto label_72739d;
                            }
                            
                            if (ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression::h3c23dfe7f06b780a(r13_3, arg3))
                                goto label_7273e4;
                            
                            if (ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::h3e8a5c5d3145f36a(*(r13_3 + 8), *(r13_3 + 0x10), arg3))
                                goto label_7273e4;
                            
                            r13_2 = var_d8;
                        }
                    }
                    
                    i = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&var_b8);
                } while (i != 4);
            }
            
            char var_dc_1 = 2;
            uint8_t r13_1 = 0x2010003 >> var_d0 << 3;
            
            if (rbp != 2)
                goto label_727530;
            
            char rax_3 = ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style::h4147ade4e9a8fab6(arg3, 3, rax_1, rdx);
            int32_t rax_4;
            
            if (rax_3 == 2)
            {
                rax_4 =
                    ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_68);
                label_727519:
                rbp = rax_4;
                label_727530:
                ruff_python_ast::nodes::AnyStringFlags::new::he3ffcae652934894(r13_1, 2, rbp & 1, 
                    1);
                int32_t result;
                result = 1;
                return result;
            }
            
            var_d8 = rax_3;
            ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&i_2, &var_d0);
            uint64_t rax_15;
            void* rdx_6;
            rax_15 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&i_2);
            int16_t var_db;
            char var_d9;
            
            if (rax_15 != 4)
            {
                while (true)
                {
                    uint128_t var_40;
                    uint128_t zmm0_2 = ruff_python_formatter::string::normalize::QuoteMetadata::from_part::h0afa9ff01e69dd98(&var_40, rax_15, rdx_6, arg3, var_d8);
                    
                    if (var_dc_1 == 2)
                    {
                        i_1 = var_40;
                        rax_15 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&i_2);
                        
                        if (rax_15 == 4)
                            break;
                    }
                    else
                    {
                        ruff_python_formatter::string::normalize::QuoteMetadata::merge::h66c204295fe4e704(&var_b8, &var_40, &i_1, zmm0_2);
                        char rax_16 = *var_b8[0xc];
                        
                        if (rax_16 == 2)
                            return 0;
                        
                        var_e0 = *var_b8[8];
                        i_1 = var_b8;
                        var_d9 = *var_b8[0xf];
                        var_db = *var_b8[0xd];
                        var_dc_1 = rax_16;
                        rax_15 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&i_2);
                        
                        if (rax_15 == 4)
                            break;
                    }
                }
            }
            
            if (var_dc_1 != 2)
            {
                int32_t var_90_1 = var_e0;
                i_2 = i_1;
                int16_t var_8b_1 = var_db;
                char var_89_1 = var_d9;
                char var_8c_1 = var_dc_1;
                rax_4 = ruff_python_formatter::string::normalize::QuoteMetadata::choose::hb1a9d58975495a88(&i_2, var_d8);
                goto label_727519;
            }
        }
    }
    
    return 0;
}
