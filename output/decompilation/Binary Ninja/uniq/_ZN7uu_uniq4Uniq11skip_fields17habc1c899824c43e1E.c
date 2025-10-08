
  int64_t uu_uniq::Uniq::skip_fields::habc1c899824c43e1(int64_t* arg1, char arg2, int64_t arg3, int64_t arg4, uint64_t arg5, int64_t arg6 @ r15)

{
    int64_t var_10 = arg6;
    int64_t rbx = arg4;
    
    if (!(arg2 & 1))
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(arg1, rbx, arg5);
    
    int64_t var_58 = rbx;
    int64_t var_50 = arg5 + rbx;
    char result;
    
    if (!arg3)
    {
        label_466792:
        result = core::iter::traits::iterator::Iterator::collect::haff871eb77765be1(arg1, rbx);
        
        if (arg3)
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd495873f16042da(
                arg6, rbx);
    }
    else
    {
        result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h2470b6c344d1905e(&var_58);
        
        if (!result)
        {
            int64_t var_48;
            core::iter::traits::iterator::Iterator::collect::h346062323deb9fff(&var_48, &var_58);
            arg6 = var_48;
            int64_t var_40;
            rbx = var_40;
            int64_t var_38;
            
            if (var_38)
            {
                var_58 = rbx;
                int64_t var_50_1 = var_38 + rbx;
                
                if (arg3 == 1)
                    goto label_466792;
                
                int64_t rbp_1 = arg3 - 1;
                
                while (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::h2470b6c344d1905e(&var_58))
                {
                    core::iter::traits::iterator::Iterator::collect::h346062323deb9fff(&var_48, 
                        &var_58);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd495873f16042da(
                        arg6, rbx);
                    arg6 = var_48;
                    rbx = var_40;
                    
                    if (!var_38)
                        break;
                    
                    var_58 = rbx;
                    int64_t var_50_2 = var_38 + rbx;
                    int64_t temp0_1 = rbp_1;
                    rbp_1 -= 1;
                    
                    if (temp0_1 == 1)
                        goto label_466792;
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
    
    return result;
}
