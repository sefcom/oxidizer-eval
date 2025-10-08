
  uint64_t ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement::h5db81c074307048e(int32_t* arg1, int32_t* arg2, int32_t arg3, char arg4)

{
    int64_t result;
    
    if (!arg1)
    {
        label_715026:
        result = 4;
        
        if (arg2)
        {
            if (arg3 > arg2[2] && arg4)
                result = 2;
            
            if (arg3 <= arg2[2] || !arg4 || arg3 >= *arg2)
            {
                result = 4;
                
                if (arg3 > arg2[1])
                {
                    if (arg3 < arg2[3])
                        return arg4 + 3;
                    
                    return 4;
                }
            }
        }
    }
    else
    {
        if (arg3 > arg1[2] && arg4 && arg3 < *arg1)
            return 0;
        
        if (arg3 <= arg1[1] || arg4)
            goto label_715026;
        
        result = 1;
        
        if (arg3 >= arg1[3])
            goto label_715026;
    }
    
    return result;
}
