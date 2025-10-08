
  void ruff_python_formatter::other::arguments::is_huggable_string_argument::h99ab76b549babcdc(int64_t arg1, int64_t* arg2, void* arg3, int64_t* arg4)

{
    int64_t var_58 = arg1;
    
    switch (arg1)
    {
        case 0:
        {
            if (0 + -(*arg2))
            {
                label_711200:
                
                if (_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_58, arg4))
                {
                    void var_38;
                    ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&var_38, 
                        &var_58);
                    uint64_t rax_2;
                    int64_t rdx;
                    rax_2 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&var_38);
                    
                    if (rax_2 != 4)
                    {
                        uint64_t var_48 = rax_2;
                        int64_t var_40_1 = rdx;
                        
                        if (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(
                            &var_48) & 2)
                        {
                            int32_t rdi_5 = *(arg3 + 0x20) + 1;
                            int32_t rsi_2 = *(arg2 + *(&data_488f20 + (arg1 << 3)));
                            
                            if (rdi_5 > rsi_2)
                            {
                                core::panicking::panic::h85d6dd562679980c(
                                    "assertion failed: start.raw <= e…");
                                /* no return */
                            }
                            
                            char* rbx_1 = *arg4;
                            int64_t r14_2 = arg4[1];
                            uint64_t rax_5;
                            int64_t rdx_1;
                            rax_5 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rdi_5, rsi_2);
                            void* rax_6;
                            int64_t rdx_3;
                            rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_5, rdx_1, rbx_1, r14_2);
                            
                            if (!rax_6)
                            {
                                core::str::slice_error_fail::h1a2885084e28d077(rbx_1, r14_2, rax_5, 
                                    rdx_1);
                                /* no return */
                            }
                            
                            int64_t rax_7;
                            int64_t rdx_4;
                            rax_7 = _$LT$str$u20$as$u20$ruff_python_trivia..whitespace..PythonWhitespace$GT$::trim_whitespace_end::h00cfedb6aec28166(rax_6, rdx_3);
                            core::str::pattern::Pattern::is_suffix_of::had5512fe1fd6436b(rax_7, 
                                rdx_4);
                        }
                    }
                }
            }
            break;
        }
        case 1:
        {
            if (*arg2)
                goto label_711200;
            break;
        }
        case 2:
        {
            if (*arg2 != -0x7fffffffffffffff)
                goto label_711200;
            break;
        }
        case 3:
        {
            if (!(0 + -(*arg2)))
                goto label_711200;
            break;
        }
    }
}
