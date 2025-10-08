
  fn alacritty::config::bindings::_::InternalBitFlags::set::h14601641b5933c70(arg1: *mut i8, arg2: i8, arg3: i32) -> i8

{
    let mut result: i8 = *arg1;
    let result_2: i8 = !arg2 & result;
    result |= arg2;
    let mut result_1: i8 = result_2;
    
    if arg3 != 0
    {
        result_1 = result;
    }
    
    *arg1 = result_1;
    result
}
