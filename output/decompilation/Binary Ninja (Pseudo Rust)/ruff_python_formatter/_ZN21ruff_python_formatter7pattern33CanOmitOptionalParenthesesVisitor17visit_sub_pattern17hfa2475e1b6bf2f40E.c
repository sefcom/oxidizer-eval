
  fn ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_sub_pattern::hfa2475e1b6bf2f40(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    arg1[3] = arg2;
    let rax_1: *mut c_void = *(arg3[2] + 0x60);
    let mut result: i8 =
        ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(arg2, 
        *rax_1.byte_offset(8), *rax_1.byte_offset(0x10), *arg3, arg3[1]);
    
    if result == 0
    {
        result = ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern::he68f7da45c4f1f30(arg1, arg2, arg3);
        
        if *arg1 != 0
        {
            return result;
        }
    }
    else
    {
        arg1[4] = 1;
        
        if *arg1 != 0
        {
            return result;
        }
    }
    
    *arg1 = 2;
    arg1[1] = arg2;
    result
}
