
  fn uu_join::State::print_first_line::h3e0e204aedad6bbe(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x10) != 0
    {
        /* tailcall */
        return uu_join::State::print_line::h3e032f5a71a0aaa7(arg1, arg2, *arg1.byte_offset(8), 
            arg3);
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
    /* no return */
}
