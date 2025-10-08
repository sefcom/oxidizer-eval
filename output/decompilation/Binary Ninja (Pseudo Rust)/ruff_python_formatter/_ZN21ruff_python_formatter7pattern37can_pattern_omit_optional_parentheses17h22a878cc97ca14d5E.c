
  fn ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::h22a878cc97ca14d5(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let mut var_30: i64 = 0;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x11);
    ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern::he68f7da45c4f1f30(&var_30, arg1, arg2);
    let mut result: i8 = 0;
    let var_10: i8;
    
    if var_10 == 1 && s < 2
    {
        let rdi_1: *mut i64 = *s[8];
        let mut rcx_1: i8;
        
        if rdi_1 != 0
        {
            rcx_1 = ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty::h58b3de22f38e758c(rdi_1, arg2);
            result = 1;
        }
        
        if rdi_1 == 0 || rcx_1 == 0
        {
            let var_28: *mut i64;
            
            if var_30 >= 2
            {
                /* tailcall */
                return ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty::h58b3de22f38e758c(var_28, arg2);
            }
            return 0;
        }
    }
    
    result
}
