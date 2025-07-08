
  int64_t uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(int64_t arg1, uint64_t arg2, int64_t arg3, uint64_t arg4, char arg5, int32_t arg6, char arg7)

{
    char var_72 = arg5;
    char var_71 = arg6;
    int32_t rax_3;
    
    if (arg6 || arg7 || arg5)
    {
        int64_t var_70 = arg1;
        int64_t var_68_1 = arg2 + arg1;
        char* var_60 = &var_72;
        char* var_58_1 = &var_71;
        int64_t var_50 = arg3;
        int64_t var_48_1 = arg4 + arg3;
        char* var_40 = &var_72;
        char* var_38_1 = &var_71;
        
        do
        {
            int32_t rax_4 = core::iter::traits::iterator::Iterator::try_fold::hd22c190233dc3738(
                &var_70, &var_60);
            rax_3 = core::iter::traits::iterator::Iterator::try_fold::hba92221d128020d6(&var_50, 
                &var_40);
            
            if (rax_4 == 0x110000)
            {
                rax_3 = rax_3 != 0x110000;
                rax_3 = -(rax_3);
                break;
            }
            
            if (rax_3 == 0x110000)
            {
                rax_3 = 1;
                break;
            }
            
            rax_3 = uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(rax_4, rax_3, arg7);
        } while (!rax_3);
    }
    else
    {
        int64_t rbx_2 = arg2 - arg4;
        
        if (arg2 < arg4)
            arg4 = arg2;
        
        int64_t rax_2 = memcmp(arg1, arg3, arg4);
        
        if (rax_2)
            rbx_2 = rax_2;
        
        int32_t rcx;
        rcx = rbx_2;
        rax_3 = 0xff;
        
        if (rbx_2 >= 0)
            return rcx;
    }
    
    return rax_3;
}
