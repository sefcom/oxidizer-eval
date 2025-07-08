
  int64_t* uu_sort::tokenize_with_separator::hde6e77d93de0c763(int64_t arg1, int64_t arg2, int32_t arg3, int64_t* arg4)

{
    int32_t var_54 = arg3;
    int64_t var_50 = arg1;
    int64_t var_48 = arg1 + arg2;
    int64_t var_40 = 0;
    int32_t* var_38 = &var_54;
    int64_t* i;
    int64_t rdx;
    i = core::iter::traits::iterator::Iterator::try_fold::hafeb71a2c09695d3(&var_50, &var_38);
    int64_t r12;
    
    if (!i)
    {
        r12 = 0;
        
        if (0 >= arg2)
            return i;
    }
    else
    {
        int64_t rbp_1 = rdx;
        r12 = 0;
        
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(arg4, r12, rbp_1);
            r12 = rbp_1 + 1;
            int64_t rdx_2;
            i = core::iter::traits::iterator::Iterator::try_fold::hafeb71a2c09695d3(&var_50, 
                &var_38);
            rbp_1 = rdx_2;
        } while (i);
        
        if (r12 >= arg2)
            return i;
    }
    
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(arg4, r12, arg2);
}
