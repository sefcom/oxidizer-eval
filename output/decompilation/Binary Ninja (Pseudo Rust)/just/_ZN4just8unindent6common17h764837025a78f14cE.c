
  fn just::unindent::common::h764837025a78f14c(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> *mut c_void

{
    let var_68: i64 = 0;
    let mut var_78: *mut i8 = arg1;
    let var_70: *mut c_void = &arg1[arg2];
    let mut var_60: ();
    core::iter::traits::iterator::Iterator::zip::h6ddad77f76ac52eb(&var_60, &var_78, arg3);
    let var_20: i8 = 0;
    let mut rax_1: i8;
    let mut rdx: i64;
    rax_1 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha5ee18178f2ebd32(&var_60);
    let mut r15: i64 = rdx;
    
    if (rax_1 & 1) == 0
    {
        r15 = 0;
    }
    
    let result: *mut c_void = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(0, r15, arg1, arg2);
    
    if result != 0
    {
        return result;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, 0, r15);
    /* no return */
}
