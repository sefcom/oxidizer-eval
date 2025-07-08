
  fn uu_join::State::skip_line::h623909881d2af289(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: *mut c_void) -> *mut i128

{
    if *arg1.byte_offset(0x59) != 0
        && uu_join::State::print_first_line::he96d1b069c026077(arg1, arg2, arg4) != 0
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    }
    
    let mut var_40: i64;
    uu_join::State::reset_next_line::hdffe12cfae3f9f25(&var_40, arg1, arg3);
    
    if var_40 == -0x7fffffffffffffff
    {
        return 0;
    }
    
    let var_30: i64;
    let var_18: i64 = var_30;
    let mut var_28: i128 = var_40;
    alloc::boxed::Box$LT$T$GT$::new::h06a7bb4fb867f987(&var_28)
}
