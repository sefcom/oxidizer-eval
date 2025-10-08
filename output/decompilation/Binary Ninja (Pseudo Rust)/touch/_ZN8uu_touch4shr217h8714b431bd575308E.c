
  fn uu_touch::shr2::h8714b431bd575308(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> *mut i128

{
    let mut var_50: i64;
    core::str::_$LT$impl$u20$str$GT$::split_at_checked::h496d55096ddfbaef(&var_50, arg2, arg3, 
        arg3 - 2);
    let r14: i64 = var_50;
    
    if r14 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, arg3 - 2);
        /* no return */
    }
    
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h5234b02e90494cc1(arg3, 1, 1);
    var_50 = rax;
    let var_48_1: i64 = rdx;
    let var_40_1: i64 = 0;
    let var_40: i64;
    let var_38: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he55151bea8bec2a5(&var_50, var_40, var_38 + var_40);
    let var_48: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he55151bea8bec2a5(&var_50, r14, var_48 + r14);
    arg1[1] = var_40_1;
    *arg1 = var_50;
    arg1
}
