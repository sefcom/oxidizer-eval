
  fn uu_join::State::get_current_key::hb0aa7b8c555c38dc(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x10) != 0
    {
        /* tailcall */
        return uu_join::Line::get_field::h5172ba7928bd7492(*arg1.byte_offset(8), 
            *arg1.byte_offset(0x40));
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
    /* no return */
}
