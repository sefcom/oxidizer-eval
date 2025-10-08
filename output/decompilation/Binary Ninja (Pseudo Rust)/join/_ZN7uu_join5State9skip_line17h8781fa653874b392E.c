
  fn uu_join::State::skip_line::h8781fa653874b392(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: *mut c_void) -> u64

{
    if *arg1.byte_offset(0x59) != 0
        && uu_join::State::print_first_line::h4753b74b852bc4d0(arg1, arg2, arg4) != 0
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    
    let mut var_40: i64;
    uu_join::State::reset_next_line::hbfb2e96ddca8a266(&var_40, arg1, arg3);
    
    if var_40 == -0x7fffffffffffffff
    {
        return 0;
    }
    
    let var_30: i64;
    let var_18: i64 = var_30;
    let mut var_28: i128 = var_40;
    alloc::boxed::Box$LT$T$GT$::new::hbde49e4af2e5852b(&var_28)
}
