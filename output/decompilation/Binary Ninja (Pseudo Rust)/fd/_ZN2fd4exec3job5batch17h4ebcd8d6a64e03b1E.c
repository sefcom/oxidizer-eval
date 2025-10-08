
  fn fd::exec::job::batch::h4ebcd8d6a64e03b1(arg1: *mut i128, arg2: *mut *mut i64, arg3: i64, arg4: *mut c_void) -> u64

{
    let mut var_d0: ();
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he05ad75fcea55ffb(
        &var_d0, arg1);
    let mut var_80: ();
    core::iter::traits::iterator::Iterator::filter_map::hbc857f8ae2340044(&var_80, &var_d0, arg4);
    let mut r8: i64 = 0;
    
    if !(0 + -(*arg4.byte_offset(0x168)))
    {
        r8 = *arg4.byte_offset(0x170);
    }
    
    fd::exec::CommandSet::execute_batch::h9ec3434f1d6afbca(arg2, arg3, &var_80, 
        *arg4.byte_offset(0x1d0), r8, *arg4.byte_offset(0x178))
}
