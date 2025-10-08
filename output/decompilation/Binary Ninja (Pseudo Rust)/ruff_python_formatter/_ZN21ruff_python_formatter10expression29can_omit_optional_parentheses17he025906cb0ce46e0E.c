
  fn ruff_python_formatter::expression::can_omit_optional_parentheses::he025906cb0ce46e0(arg1: *mut i32, arg2: *mut i64) -> u64

{
    let mut var_38: i64 = 0;
    let mut var_20: *mut i32 = nullptr;
    var_20 = 0;
    let var_28: *mut i64 = arg2;
    ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor::visit_subexpression::h8d70ca0c45844b66(&var_38, arg1);
    let mut rbp: i32 = 0;
    let var_18: i32;
    let var_14: i8;
    
    if var_14 == 1 && var_18 < 2
    {
        rbp = 1;
        let var_13: i8;
        
        if var_13 >= 2
        {
            if var_20 == 0
            {
                'label_70fe73:
                let var_30: *mut i32;
                
                if var_38 >= 2
                {
                    /* tailcall */
                    return ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized::h96a2abf8babbfaf8(var_30, arg2);
                }
                rbp = 0;
            }
            else if ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized::h96a2abf8babbfaf8(var_20, arg2) == 0
            {
                goto 'label_70fe73;
            }
        }
    }
    
    rbp
}
