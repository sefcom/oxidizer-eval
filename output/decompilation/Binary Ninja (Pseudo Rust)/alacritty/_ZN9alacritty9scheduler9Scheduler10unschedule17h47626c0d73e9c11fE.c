
  fn alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_48: i64 = arg3;
    let rcx: i8;
    let var_40: i8 = rcx;
    let mut var_38: ();
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h6161f52003526c91(&var_38, 
        arg2.byte_offset(0x20));
    let var_50: i64 = 0;
    let mut result: i8;
    let mut rdx: i64;
    result = _$LT$alloc..collections..vec_deque..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hdd31d0ab13d4ed33(&var_38, &var_48);
    
    if (result & 1) != 0
    {
        return alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::remove::he23600ef9ffacdc5(
            arg1, arg2.byte_offset(0x20), rdx);
    }
    
    *arg1 = 2;
    result
}
