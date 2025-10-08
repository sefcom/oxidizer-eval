
  fn just::unindent::indentation::h998e2ef8eff8af48(arg1: *mut i8, arg2: i64) -> i64

{
    let mut var_38: *mut i8 = arg1;
    let var_30: *mut c_void = &arg1[arg2];
    let var_28: i64 = 0;
    let var_20: i8 = 0;
    let mut rax_1: i8;
    let mut rdx: i64;
    rax_1 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h21f770c47876451d(&var_38);
    let mut r15: i64 = 0;
    
    if (rax_1 & 1) != 0
    {
        r15 = rdx;
    }
    
    let result: i64 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15, arg1, arg2);
    
    if result != 0
    {
        return result;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, 0, r15);
    /* no return */
}
