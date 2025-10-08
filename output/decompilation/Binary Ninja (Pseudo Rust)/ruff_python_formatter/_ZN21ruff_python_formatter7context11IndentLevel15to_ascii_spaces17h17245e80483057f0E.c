
  fn ruff_python_formatter::context::IndentLevel::to_ascii_spaces::h17245e80483057f0(arg1: i16, arg2: i8) -> u16

{
    let rax: u16 = arg2;
    let temp0: i16 = arg1;
    arg1 -= 1;
    
    if temp0 < 1
    {
        arg1 = 0;
    }
    
    let mut temp1: i16;
    let mut result: u16;
    temp1 = HIGHW(rax * arg1);
    result = LOWW(rax * arg1);
    let mut rdx: i64;
    rdx = temp1;
    
    if (rax * arg1) >> 0x10 != 0
    {
        return 0xffff;
    }
    
    result
}
