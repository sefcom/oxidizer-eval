
  int64_t uu_env::split_iterator::SplitIterator::state_single_quoted::hb66b7ab13358fbb8(int64_t* arg1, int64_t* arg2)

{
    int64_t result;
    
    while (true)
    {
        int32_t rax_1 =
            uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
        int32_t var_40;
        
        if (rax_1 == 0x5c)
        {
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if (var_40 == 8)
            {
                uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::h9a57405ea848f4db(&var_40, arg2);
                label_4d9f40:
                
                if (var_40 == 8)
                    continue;
            }
        }
        else
        {
            if (rax_1 != 0x27)
            {
                if (rax_1 != 0x110000)
                {
                    uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, 
                        arg2);
                    goto label_4d9f40;
                }
                
                result = arg2[7];
                *arg1 = 0x2700000000;
                arg1[1] = result;
                break;
            }
            
            result =
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if (var_40 == 8)
            {
                *arg1 = 8;
                break;
            }
        }
        
        int64_t result_1;
        result = result_1;
        arg1[4] = result;
        int128_t zmm0_1 = var_40;
        int128_t var_30;
        *(arg1 + 0x10) = var_30;
        *arg1 = zmm0_1;
        break;
    }
    
    return result;
}
