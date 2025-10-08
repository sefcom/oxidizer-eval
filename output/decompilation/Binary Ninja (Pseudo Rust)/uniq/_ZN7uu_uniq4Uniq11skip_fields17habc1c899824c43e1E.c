
  fn uu_uniq::Uniq::skip_fields::habc1c899824c43e1(arg1: *mut i64, arg2: i8, arg3: i64, arg4: i64, arg5: u64, arg6: i64 @ r15) -> i64

{
    let var_10: i64 = arg6;
    let mut rbx: i64 = arg4;
    
    if (arg2 & 1) == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(arg1, rbx, arg5);
    }
    
    let mut var_58: i64 = rbx;
    let var_50: i64 = arg5 + rbx;
    let mut result: i8;
    
    if arg3 == 0
    {
        'label_466792:
        result = core::iter::traits::iterator::Iterator::collect::haff871eb77765be1(arg1, rbx);
        
        if arg3 != 0
        {
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd495873f16042da(
                arg6, rbx);
        }
    }
    else
    {
        result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h2470b6c344d1905e(&var_58);
        
        if result == 0
        {
            let mut var_48: i64;
            core::iter::traits::iterator::Iterator::collect::h346062323deb9fff(&var_48, &var_58);
            arg6 = var_48;
            let var_40: i64;
            rbx = var_40;
            let var_38: i64;
            
            if var_38 != 0
            {
                var_58 = rbx;
                let var_50_1: i64 = var_38 + rbx;
                
                if arg3 == 1
                {
                    goto 'label_466792;
                }
                
                let mut rbp_1: i64 = arg3 - 1;
                
                while _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h2470b6c344d1905e(&var_58) == 0
                {
                    core::iter::traits::iterator::Iterator::collect::h346062323deb9fff(&var_48, 
                        &var_58);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd495873f16042da(
                        arg6, rbx);
                    arg6 = var_48;
                    rbx = var_40;
                    
                    if var_38 == 0
                    {
                        break;
                    }
                    
                    var_58 = rbx;
                    let var_50_2: i64 = var_38 + rbx;
                    let temp0_1: i64 = rbp_1;
                    rbp_1 -= 1;
                    
                    if temp0_1 == 1
                    {
                        goto 'label_466792;
                    }
                }
            }
            
            *arg1 = 0;
            arg1[1] = 1;
            arg1[2] = 0;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd495873f16042da(
                arg6, rbx);
        }
        
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
    }
    
    result
}
