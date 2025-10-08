
  fn uu_uniq::handle_extract_obs_skip_fields::h14d32fa87c099e4f(arg1: *mut i128, arg2: i64, arg3: u64, arg4: *mut i64) -> i64

{
    let mut var_a8: i64 = 0;
    let var_a0: i64 = 4;
    let var_98: i64 = 0;
    let mut var_a9: i8 = 0;
    let mut var_aa: i8 = 0;
    let mut var_78: i64 = arg2;
    let var_70: i64 = arg2 + arg3;
    let var_68: *mut i8 = &var_aa;
    let var_60: *mut i8 = &var_a9;
    let var_58: *mut i64 = &var_a8;
    let mut var_90: i64;
    core::iter::traits::iterator::Iterator::collect::h0975b431dfd15c94(&var_90, &var_78);
    let var_88: i64;
    
    if var_98 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_78, arg2, arg3);
        arg1[1] = var_68;
        *arg1 = var_78;
    }
    else
    {
        let var_80: i64;
        
        if var_aa == 0
        {
            let mut var_50: i128;
            core::iter::traits::iterator::Iterator::collect::h3b15c762db729d48(&var_50, var_a0);
            
            if *arg4 != -0x8000000000000000
            {
                let rsi_4: i64 = arg4[1];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hc93e8a66ab786634(&var_50, rsi_4, arg4[2] + rsi_4);
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
            let var_40: i64;
            arg4[2] = var_40;
            *arg4 = var_50;
            
            if var_80 > 1
            {
                goto 'label_4672d0;
            }
            
            *arg1 = -0x8000000000000000;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
            *arg4 = -0x8000000000000000;
            
            if var_80 <= 1
            {
                *arg1 = -0x8000000000000000;
            }
            else
            {
                'label_4672d0:
                let mut var_38: i128;
                core::iter::traits::iterator::Iterator::collect::h3b15c762db729d48(&var_38, var_88);
                let var_28: i64;
                arg1[1] = var_28;
                *arg1 = var_38;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h341dc4a29c957248(var_90, var_88);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h341dc4a29c957248(var_a8, var_a0)
}
