
  int128_t* uu_touch::shr2::h8714b431bd575308(int128_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_50;
    core::str::_$LT$impl$u20$str$GT$::split_at_checked::h496d55096ddfbaef(&var_50, arg2, arg3, 
        arg3 - 2);
    int64_t r14 = var_50;
    
    if (!r14)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, arg3 - 2);
        /* no return */
    }
    
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h5234b02e90494cc1(arg3, 1, 1);
    var_50 = rax;
    int64_t var_48_1 = rdx;
    int64_t var_40_1 = 0;
    int64_t var_40;
    int64_t var_38;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he55151bea8bec2a5(&var_50, var_40, var_38 + var_40);
    int64_t var_48;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he55151bea8bec2a5(&var_50, r14, var_48 + r14);
    arg1[1] = var_40_1;
    *arg1 = var_50;
    return arg1;
}
