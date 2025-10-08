
  fn ruff_python_formatter::expression::expr_slice::is_simple_expr::h1a23473a822e8395(arg1: *mut i32) -> i64

{
    let mut i: i32;
    
    for i = *arg1; i == 3; i = *arg1
    {
        if arg1[7] == 1
        {
            i = 3;
            break;
        }
        
        arg1 = *arg1.byte_offset(8);
    }
    
    let mut rcx: i32;
    rcx = i - 0x13 < 6;
    i = i == 0x1c;
    i |= rcx;
    i
}
