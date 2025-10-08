
  fn ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement::h5db81c074307048e(arg1: *mut i32, arg2: *mut i32, arg3: i32, arg4: i8) -> u64

{
    let mut result: i64;
    
    if arg1 == 0
    {
        'label_715026:
        result = 4;
        
        if arg2 != 0
        {
            if arg3 > arg2[2] && arg4 != 0
            {
                result = 2;
            }
            
            if arg3 <= arg2[2] || arg4 == 0 || arg3 >= *arg2
            {
                result = 4;
                
                if arg3 > arg2[1]
                {
                    if arg3 < arg2[3]
                    {
                        return arg4 + 3;
                    }
                    
                    return 4;
                }
            }
        }
    }
    else
    {
        if arg3 > arg1[2] && arg4 != 0 && arg3 < *arg1
        {
            return 0;
        }
        
        if arg3 <= arg1[1] || arg4 != 0
        {
            goto 'label_715026;
        }
        
        result = 1;
        
        if arg3 >= arg1[3]
        {
            goto 'label_715026;
        }
    }
    
    result
}
