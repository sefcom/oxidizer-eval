
  int64_t ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::h22a878cc97ca14d5(void* arg1, int64_t* arg2)

{
    int64_t var_30 = 0;
    int128_t s;
    __builtin_memset(&s, 0, 0x11);
    ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern::he68f7da45c4f1f30(&var_30, arg1, arg2);
    char result = 0;
    char var_10;
    
    if (var_10 == 1 && s < 2)
    {
        int64_t* rdi_1 = *s[8];
        char rcx_1;
        
        if (rdi_1)
        {
            rcx_1 = ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty::h58b3de22f38e758c(rdi_1, arg2);
            result = 1;
        }
        
        if (!rdi_1 || !rcx_1)
        {
            int64_t* var_28;
            
            if (var_30 >= 2)
                /* tailcall */
                return ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty::h58b3de22f38e758c(var_28, arg2);
            return 0;
        }
    }
    
    return result;
}
