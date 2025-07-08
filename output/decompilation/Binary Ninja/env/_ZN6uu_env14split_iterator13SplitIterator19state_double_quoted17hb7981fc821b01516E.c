
  int64_t uu_env::split_iterator::SplitIterator::state_double_quoted::hb7981fc821b01516(int32_t* arg1, int64_t* arg2)

{
    int64_t result;
    
    while (true)
    {
        int32_t rax_1 =
            uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
        int32_t var_40;
        
        if (rax_1 > 0x5b)
        {
            if (rax_1 != 0x5c)
            {
                if (rax_1 != 0x110000)
                    goto label_4da16c;
                
                result = arg2[7];
                *arg1 = 0x2200000000;
                *(arg1 + 8) = result;
                break;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if (var_40 == 8)
            {
                uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::h3f45bcdaf5eb467d(&var_40, arg2);
                goto label_4da120;
            }
        }
        else if (rax_1 != 0x24)
        {
            if (rax_1 != 0x22)
            {
                label_4da16c:
                uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, arg2);
                goto label_4da120;
            }
            
            result =
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if (var_40 == 8)
            {
                *arg1 = 8;
                break;
            }
        }
        else
        {
            uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(&var_40, 
                arg2);
            label_4da120:
            
            if (var_40 == 8)
                continue;
        }
        
        int64_t result_1;
        result = result_1;
        *(arg1 + 0x20) = result;
        int128_t zmm0_1 = var_40;
        int128_t var_30;
        *(arg1 + 0x10) = var_30;
        *arg1 = zmm0_1;
        break;
    }
    
    return result;
}
