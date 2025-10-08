
  fn alacritty_terminal::vi_mode::ViModeCursor::scroll::h910be6a18dfbf6a9(arg1: i32, arg2: *mut c_void, arg3: i32) -> i64

{
    let mut var_28: i8;
    alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_28, arg2, 
        alacritty_terminal::index::Line::grid_clamp::h7a533a4686eb6d93(arg1 - arg3, 
            *arg2.byte_offset(0x50), *arg2.byte_offset(0xc0), 1));
    
    if var_28 == 0
    {
        return 0;
    }
    
    let result: i64;
    result
}
