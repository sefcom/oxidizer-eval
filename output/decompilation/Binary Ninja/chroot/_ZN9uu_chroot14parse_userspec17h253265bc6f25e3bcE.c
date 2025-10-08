
  int64_t* uu_chroot::parse_userspec::h253265bc6f25e3bc(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_68;
    int64_t* result =
        core::str::_$LT$impl$u20$str$GT$::split_once::ha5f14f7e36c5d4c1(&var_68, arg2, arg3);
    int64_t r14 = var_68;
    int64_t r14_1;
    
    if (!r14)
    {
        r14_1 = -0x8000000000000000;
        
        if (arg3)
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&arg1[1], arg2, arg3);
            r14_1 = -0x7fffffffffffffff;
        }
        
        *arg1 = r14_1;
    }
    else
    {
        uint64_t var_60;
        char rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h05bfd7e2261aa2d8(r14, var_60, 1, 0);
        int64_t var_58;
        uint64_t var_50;
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h05bfd7e2261aa2d8(var_58, var_50, 1, 0);
        
        if (rax)
        {
            r14_1 = -0x8000000000000000;
            
            if (!result)
            {
                result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&arg1[1], var_58, var_50);
                r14_1 = -0x7ffffffffffffffe;
            }
            
            *arg1 = r14_1;
        }
        else if (!result)
        {
            int128_t var_80;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_80, r14, var_60);
            int128_t var_48;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_48, var_58, var_50);
            int64_t var_38;
            arg1[5] = var_38;
            *(arg1 + 0x18) = var_48;
            int64_t* result_1;
            result = result_1;
            arg1[2] = result;
            *arg1 = var_80;
        }
        else
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&arg1[1], r14, var_60);
            *arg1 = -0x7fffffffffffffff;
        }
    }
    return result;
}
