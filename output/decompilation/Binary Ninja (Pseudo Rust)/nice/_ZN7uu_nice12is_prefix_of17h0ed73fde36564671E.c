
  fn uu_nice::is_prefix_of::h0ed73fde36564671(arg1: i64, arg2: i64, arg3: *mut i8, arg4: i64, arg5: i64) -> i64

{
    let mut rax: i64;
    let var_28: i64 = rax;
    let rbx: i64 = arg2;
    rax = arg2 < arg5;
    arg2 = arg2 > arg4;
    arg2 |= rax;
    
    if arg2 != 0
    {
        return 0;
    }
    
    let mut rax_2: *mut i8;
    let mut rdx_1: u64;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbx, arg3, arg4);
    
    if rax_2 != 0
    {
        /* tailcall */
        return _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h33b9bdfe3107c6fa(rax_2, rdx_1, arg1, rbx);
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, 0, rbx);
    /* no return */
}
