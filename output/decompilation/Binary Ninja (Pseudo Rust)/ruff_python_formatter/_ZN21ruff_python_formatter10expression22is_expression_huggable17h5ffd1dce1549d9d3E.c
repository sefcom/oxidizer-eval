
  fn ruff_python_formatter::expression::is_expression_huggable::h5ffd1dce1549d9d3(arg1: *mut i32, arg2: i8) -> i64

{
    let mut rax: i8 = arg2;
    let mut i: u64;
    
    for i = *arg1; i == 0x1b; i = *arg1
    {
        arg1 = *arg1.byte_offset(8);
    }
    
    if TEST_BITQ(0x197fff83f, i)
    {
        rax = 0;
    }
    
    rax & 1
}
