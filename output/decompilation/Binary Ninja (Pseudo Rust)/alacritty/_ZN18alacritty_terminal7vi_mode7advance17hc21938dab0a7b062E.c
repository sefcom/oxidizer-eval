
  fn alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1: *mut c_void, arg2: i64, arg3: i32, arg4: i32) -> i64

{
    if arg4 == 0
    {
        /* tailcall */
        return alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(arg2, arg3, arg1, 1);
    }
    
    /* tailcall */
    alacritty_terminal::index::Point::add::h870632f29f948f48(arg2, arg3, arg1, 1, 1)
}
