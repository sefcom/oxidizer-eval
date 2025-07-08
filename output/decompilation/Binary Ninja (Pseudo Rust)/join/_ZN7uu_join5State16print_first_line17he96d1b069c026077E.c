
  fn uu_join::State::print_first_line::he96d1b069c026077(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x10) != 0
    {
        /* tailcall */
        return uu_join::State::print_line::h5738688f2590ce02(arg1, arg2, *arg1.byte_offset(8), 
            arg3);
    }
    
    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
    /* no return */
}
