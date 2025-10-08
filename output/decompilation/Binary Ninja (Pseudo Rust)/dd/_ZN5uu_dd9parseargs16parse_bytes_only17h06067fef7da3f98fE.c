
  fn uu_dd::parseargs::parse_bytes_only::h06067fef7da3f98f(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: i64) -> i64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg4, arg2, arg3);
    
    if rax == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, arg4);
        /* no return */
    }
    
    let mut var_30: i8;
    core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_30, rax, rdx);
    let mut result: i64;
    
    if var_30 == 0
    {
        let var_28: i64;
        arg1[1] = var_28;
        result = 0xe;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&arg1[1], arg2, arg3);
        result = 7;
    }
    
    *arg1 = result;
    result
}
