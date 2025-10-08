
  int64_t uu_sort::custom_str_cmp::custom_str_cmp::hb6ac3eaeb381e23b(int64_t arg1, uint64_t arg2, int64_t arg3, uint64_t arg4, char arg5, char arg6, char arg7)

{
    char var_72 = arg5;
    char var_71 = arg6;
    int64_t result;
    
    if ((arg5 | arg6 | arg7) != 1)
    {
        int64_t result_1 = arg2 - arg4;
        
        if (arg2 < arg4)
            arg4 = arg2;
        
        result = memcmp(arg1, arg3, arg4);
        
        if (result)
            result_1 = result;
        
        result = result_1 > 0;
        result -= result_1 < 0;
    }
    else
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
            int32_t rax_1 = core::iter::traits::iterator::Iterator::try_fold::h14f3f1dbf790deba(
                &var_70, &var_60);
            result = core::iter::traits::iterator::Iterator::try_fold::h14f3f1dbf790deba(&var_50, 
                &var_40);
            
            if (rax_1 == 0x110000)
            {
                result = result != 0x110000;
                result = -(result);
                break;
            }
            
            if (result == 0x110000)
            {
                result = 1;
                break;
            }
            
            result = uu_sort::custom_str_cmp::cmp_chars::h4df5683859bee02f(rax_1, result, arg7);
        } while (!result);
    }
    
    return result;
}
