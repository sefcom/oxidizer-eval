
  fn ruff_python_formatter::other::arguments::is_huggable_string_argument::h99ab76b549babcdc(arg1: i64, arg2: *mut i64, arg3: *mut c_void, arg4: *mut i64)

{
    let mut var_58: i64 = arg1;
    
    match arg1
    {
        0 =>
        {
            if 0 + -(*arg2)
            {
                'label_711200:
                
                if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_58, arg4) != 0
                {
                    let mut var_38: ();
                    ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&var_38, 
                        &var_58);
                    let mut rax_2: u64;
                    let mut rdx: i64;
                    rax_2 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&var_38);
                    
                    if rax_2 != 4
                    {
                        let mut var_48: u64 = rax_2;
                        let var_40_1: i64 = rdx;
                        
                        if (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(
                            &var_48) & 2) != 0
                        {
                            let rdi_5: i32 = *arg3.byte_offset(0x20) + 1;
                            let rsi_2: i32 =
                                *arg2.byte_offset(*(&data_488f20).byte_offset(arg1 << 3));
                            
                            if rdi_5 > rsi_2
                            {
                                core::panicking::panic::h85d6dd562679980c(
                                    "assertion failed: start.raw <= e…");
                                /* no return */
                            }
                            
                            let rbx_1: *mut i8 = *arg4;
                            let r14_2: i64 = arg4[1];
                            let mut rax_5: u64;
                            let mut rdx_1: i64;
                            rax_5 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rdi_5, rsi_2);
                            let mut rax_6: *mut c_void;
                            let mut rdx_3: i64;
                            rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_5, rdx_1, rbx_1, r14_2);
                            
                            if rax_6 == 0
                            {
                                core::str::slice_error_fail::h1a2885084e28d077(rbx_1, r14_2, rax_5, 
                                    rdx_1);
                                /* no return */
                            }
                            
                            let mut rax_7: i64;
                            let mut rdx_4: i64;
                            rax_7 = _$LT$str$u20$as$u20$ruff_python_trivia..whitespace..PythonWhitespace$GT$::trim_whitespace_end::h00cfedb6aec28166(rax_6, rdx_3);
                            core::str::pattern::Pattern::is_suffix_of::had5512fe1fd6436b(rax_7, 
                                rdx_4);
                        }
                    }
                }
            }
        }
        1 =>
        {
            if *arg2 != 0
            {
                goto 'label_711200;
            }
        }
        2 =>
        {
            if *arg2 != -0x7fffffffffffffff
            {
                goto 'label_711200;
            }
        }
        3 =>
        {
            if !(0 + -(*arg2))
            {
                goto 'label_711200;
            }
        }
    }
}
