
  fn alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1: *mut c_void, arg2: i64, arg3: i32, arg4: i32) -> i64

{
    let rax_1: i64 = *arg1.byte_offset(0x50);
    let r8: i64 = *arg1.byte_offset(0xc0);
    let mut r9: i32 = 0;
    
    if rax_1 >= r8
    {
        r9 = rax_1 - r8;
    }
    
    let mut result: i32;
    
    if arg4 == 0 && arg2 == 0
    {
        result = 1;
        
        if arg3 <= -(r9)
        {
            return result;
        }
    }
    
    if arg3 != r8 - 1
    {
        return 0;
    }
    
    result = arg2 + 1 >= *arg1.byte_offset(0xb8);
    result &= arg4;
    result
}
