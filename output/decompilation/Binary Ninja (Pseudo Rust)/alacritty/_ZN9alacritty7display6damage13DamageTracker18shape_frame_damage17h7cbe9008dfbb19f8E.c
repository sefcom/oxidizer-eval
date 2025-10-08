
  fn alacritty::display::damage::DamageTracker::shape_frame_damage::h7cbe9008dfbb19f8(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> u64

{
    if *arg2.byte_offset(0x48) == 0
    {
        let mut var_88: ();
        alacritty_terminal::term::TermDamageIterator::new::h9c507061ce1d7d92(&var_88, 
            *arg2.byte_offset(0x20), *arg2.byte_offset(0x28), 0);
        let mut var_a8: i64 = 2;
        let var_70_1: *mut c_void = arg3;
        *arg2.byte_offset(0x40);
        let mut var_68: ();
        core::iter::traits::iterator::Iterator::chain::hff1f0321ff3c8de1(&var_68, &var_a8, 
            *arg2.byte_offset(0x38));
        return core::iter::traits::iterator::Iterator::collect::h56adc802e5caf7e3(arg1, &var_68);
    }
    
    let result: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 0x10, 0);
    
    if result == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *result = 0;
    *(result + 8) = *arg3.byte_offset(0x10);
    *arg1 = 1;
    arg1[1] = result;
    arg1[2] = 1;
    result
}
