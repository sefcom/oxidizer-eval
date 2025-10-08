
  fn ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::visit_string_like_part::hb6b2da09a6d602b6(arg1: *mut i64, arg2: i64, arg3: *mut c_void) -> *mut c_void

{
    let mut var_50: i64 = arg2;
    let var_48: *mut c_void = arg3;
    let mut result: *mut c_void =
        ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_50);
    
    if (result & 2) != 0 && arg1[1] == 0
    {
        if arg2 > 1
        {
            let rax_2: i64 = *arg3.byte_offset(8);
            let rcx_2: i64 = *arg3.byte_offset(0x10);
            let mut var_40: i64 = rax_2;
            let var_38_1: i64 = rcx_2 * 0x50 + rax_2;
            let r15_1: *mut i64 = *arg1;
            
            do
            {
                result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find_map::hc0f6080590e40ea9(&var_40);
                
                if result == 0
                {
                    return result;
                }
                
                result = ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote::hcddbc126b8c2d61d(r15_1, *result.byte_offset(0x10), *result.byte_offset(0x14), 
                    _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*arg3.byte_offset(0x24)));
            } while result == 0;
            
            arg1[1] = 1;
        }
        else
        {
            let mut rax: i32;
            let mut rdx: i32;
            rax = ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(
                arg2, arg3);
            let rax_1: i8 =
                ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_50);
            result = ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote::hcddbc126b8c2d61d(*arg1, rax, rdx, rax_1);
            
            if result != 0
            {
                arg1[1] = 1;
            }
        }
    }
    
    result
}
