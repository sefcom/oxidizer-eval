
  fn uu_cp::handle_no_preserve_mode::h5c03b58fbdc698a0(arg1: i8, arg2: i8, arg3: i32) -> u64

{
    let mut result: u64 = 0x1b6;
    
    if arg2 == 0
    {
        result = arg3 & 0x1ff;
    }
    
    if arg1 != 0
    {
        return arg3;
    }
    
    result
}
