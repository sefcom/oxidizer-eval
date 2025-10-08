
  fn alacritty_terminal::term::_::InternalBitFlags::set::hd6f96cdfac5820c3(arg1: *mut i32, arg2: i32, arg3: i32) -> i64

{
    let rax: i32 = *arg1;
    let mut result: i32 = rax | arg2;
    
    if arg3 == 0
    {
        result = !arg2 & rax;
    }
    
    *arg1 = result;
    result
}
