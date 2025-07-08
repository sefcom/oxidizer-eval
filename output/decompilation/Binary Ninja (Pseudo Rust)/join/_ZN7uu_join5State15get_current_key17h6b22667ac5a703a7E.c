
  fn uu_join::State::get_current_key::h6b22667ac5a703a7(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x10) != 0
    {
        /* tailcall */
        return uu_join::Line::get_field::h7dd14bed39768627(*arg1.byte_offset(8), 
            *arg1.byte_offset(0x40));
    }
    
    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
    /* no return */
}
