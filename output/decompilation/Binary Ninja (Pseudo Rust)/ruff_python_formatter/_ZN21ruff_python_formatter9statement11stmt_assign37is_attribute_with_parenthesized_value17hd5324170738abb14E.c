
  fn ruff_python_formatter::statement::stmt_assign::is_attribute_with_parenthesized_value::hd5324170738abb14(arg1: *mut i32, arg2: *mut *mut i8) -> u64

{
    let mut rbx: *mut i32 = arg1;
    let mut i: i32 = *rbx;
    let mut rbp: i64;
    rbp = 1;
    
    while i == 0x19
    {
        if ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(
            *rbx.byte_offset(0x30), arg2) != 2
        {
            return rbp;
        }
        
        rbx = *rbx.byte_offset(0x30);
        i = *rbx;
        rbp = 1;
    }
    
    if i != 0x1a
    {
        if i != 0x10
        {
            rbp = 0;
        }
        else
        {
            *rbx.byte_offset(0x28);
            rbp = *rbx.byte_offset(0x18) != -(*rbx.byte_offset(0x28));
        }
    }
    
    rbp
}
