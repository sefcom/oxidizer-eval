
  int64_t uu_sort::tokenize_with_separator::he3a58287ffd73c4e(int64_t arg1, int64_t arg2, int32_t arg3, int64_t* arg4)

{
    int32_t var_5c = arg3;
    int64_t var_50 = arg1;
    int64_t var_48 = arg1 + arg2;
    int64_t var_40 = 0;
    int32_t* var_38 = &var_5c;
    char result;
    int64_t rdx;
    result = core::iter::traits::iterator::Iterator::try_fold::h6349d0229f81716e(&var_50, &var_38);
    int64_t rdx_3;
    int64_t r12;
    
    if (!(result & 1))
    {
        r12 = 0;
        rdx_3 = arg2;
        
        if (0 >= rdx_3)
            return result;
    }
    else
    {
        int64_t rbp_1 = rdx;
        r12 = 0;
        
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5e09b1a2e814c1b4(arg4, r12, rbp_1);
            r12 = rbp_1 + 1;
            int64_t rdx_2;
            result = core::iter::traits::iterator::Iterator::try_fold::h6349d0229f81716e(&var_50, 
                &var_38);
            rbp_1 = rdx_2;
        } while (result & 1);
        
        rdx_3 = arg2;
        
        if (r12 >= rdx_3)
            return result;
    }
    
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h5e09b1a2e814c1b4(arg4, r12, rdx_3);
}
