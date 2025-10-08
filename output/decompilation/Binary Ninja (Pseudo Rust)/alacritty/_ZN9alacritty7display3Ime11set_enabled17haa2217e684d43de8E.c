
  fn alacritty::display::Ime::set_enabled::haa2217e684d43de8(arg1: *mut i64, arg2: i32) -> i64

{
    let mut result: i8 = 1;
    
    if arg2 == 0
    {
        core::ptr::drop_in_place$LT$alacritty..display..Ime$GT$::he516603905b647f6(arg1);
        *arg1 = 2;
        result = 0;
    }
    
    arg1[9] = result;
    result
}
