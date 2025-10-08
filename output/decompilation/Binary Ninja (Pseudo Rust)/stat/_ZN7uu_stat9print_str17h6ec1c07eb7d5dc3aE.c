
  fn uu_stat::print_str::h6ec1c07eb7d5dc3a(arg1: *mut i8, arg2: i64, arg3: bool, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let mut rbx: i64 = arg2;
    let mut r14: *mut i8 = arg1;
    
    if (arg6 < arg2 & arg5 == 2) == 1
    {
        let mut rax_1: *mut i8;
        let mut rdx_1: i64;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg6, r14, rbx);
        
        if rax_1 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, rbx, 0, arg6);
            /* no return */
        }
        
        rbx = rdx_1;
        r14 = rax_1;
    }
    
    /* tailcall */
    uu_stat::pad_and_print::h4c659c1797f3ded6(r14, rbx, arg3, arg4, 1)
}
