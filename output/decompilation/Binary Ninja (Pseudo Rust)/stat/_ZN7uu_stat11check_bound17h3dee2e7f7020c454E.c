
  fn uu_stat::check_bound::h3dee2e7f7020c454(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> u64

{
    if arg5 < arg3
    {
        return 0;
    }
    
    let mut rax_1: *mut c_void;
    let mut rdx_1: i64;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(arg4, arg5, arg1, arg2);
    
    if rax_1 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, arg4, arg5);
        /* no return */
    }
    
    let mut var_90: i64 = 0;
    let var_88_1: *mut c_void = rax_1;
    let var_80_1: i64 = rdx_1;
    let var_78_1: i8 = 1;
    let mut var_a0: *mut i64 = &var_90;
    let var_98_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    let mut var_70: *mut c_void = &data_5199e0;
    let var_68_1: i64 = 2;
    let var_50_1: i64 = 0;
    let var_60_1: *mut *mut i64 = &var_a0;
    let var_58_1: i64 = 1;
    let mut var_40: ();
    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_40, &var_70);
    let var_28_1: i32 = 1;
    alloc::boxed::Box$LT$T$GT$::new::h173a34a4352a059d(&var_40)
}
