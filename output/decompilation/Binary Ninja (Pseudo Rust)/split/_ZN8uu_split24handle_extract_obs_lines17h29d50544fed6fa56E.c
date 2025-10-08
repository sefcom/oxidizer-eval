
  fn uu_split::handle_extract_obs_lines::h29d50544fed6fa56(arg1: *mut i128, arg2: i64, arg3: u64, arg4: *mut i128) -> i64

{
    let mut var_a0: i64 = 0;
    let var_98: i64 = 4;
    let var_90: i64 = 0;
    let mut var_a1: i8 = 0;
    let mut var_70: i64 = arg2;
    let var_68: i64 = arg2 + arg3;
    let var_60: *mut i8 = &var_a1;
    let var_58: *mut i64 = &var_a0;
    let mut var_88: i64;
    core::iter::traits::iterator::Iterator::collect::h7ad22d5ebc8d4397(&var_88, &var_70);
    let var_80: i64;
    
    if var_90 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_70, arg2, arg3);
        arg1[1] = var_60;
        *arg1 = var_70;
    }
    else
    {
        let mut var_50: i128;
        core::iter::traits::iterator::Iterator::collect::h52fe2ecd3228eeac(&var_50, var_98);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hdcaffe84f2735cf8(arg4);
        let var_40: i64;
        arg4[1] = var_40;
        *arg4 = var_50;
        let var_78: i64;
        
        if var_78 < 2
        {
            *arg1 = -0x8000000000000000;
        }
        else
        {
            let mut var_38: i128;
            core::iter::traits::iterator::Iterator::collect::h52fe2ecd3228eeac(&var_38, var_80);
            let var_28: i64;
            arg1[1] = var_28;
            *arg1 = var_38;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h8f4b49139bd30d2f(var_88, var_80);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h8f4b49139bd30d2f(var_a0, var_98)
}
