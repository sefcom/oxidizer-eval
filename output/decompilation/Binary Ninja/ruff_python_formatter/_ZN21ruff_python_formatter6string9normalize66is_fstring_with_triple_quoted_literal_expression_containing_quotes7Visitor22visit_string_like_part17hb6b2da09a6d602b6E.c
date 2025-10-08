
  void* ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::visit_string_like_part::hb6b2da09a6d602b6(int64_t* arg1, int64_t arg2, void* arg3)

{
    int64_t var_50 = arg2;
    void* var_48 = arg3;
    void* result = ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_50);
    
    if (result & 2 && !arg1[1])
    {
        if (arg2 > 1)
        {
            int64_t rax_2 = *(arg3 + 8);
            int64_t rcx_2 = *(arg3 + 0x10);
            int64_t var_40 = rax_2;
            int64_t var_38_1 = rcx_2 * 0x50 + rax_2;
            int64_t* r15_1 = *arg1;
            
            do
            {
                result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find_map::hc0f6080590e40ea9(&var_40);
                
                if (!result)
                    return result;
                
                result = ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote::hcddbc126b8c2d61d(r15_1, *(result + 0x10), *(result + 0x14), 
                    _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$core..convert..From$LT$ruff_python_ast..nodes..FStringFlags$GT$$GT$::from::hf5c3807e34bef0f1(*(arg3 + 0x24)));
            } while (!result);
            
            arg1[1] = 1;
        }
        else
        {
            int32_t rax;
            int32_t rdx;
            rax = ruff_python_ast::expression::StringLikePart::content_range::he2557f5203d115c0(
                arg2, arg3);
            char rax_1 =
                ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_50);
            result = ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote::hcddbc126b8c2d61d(*arg1, rax, rdx, rax_1);
            
            if (result)
                arg1[1] = 1;
        }
    }
    
    return result;
}
