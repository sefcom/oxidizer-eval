
  int64_t uu_env::split_iterator::SplitIterator::state_double_quoted::h95d0342559df96c6(int32_t* arg1, int64_t* arg2)

{
    int64_t result;
    
    while (true)
    {
        int32_t rax_1 =
            uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
        int32_t var_40;
        
        if (rax_1 > 0x5b)
        {
            if (rax_1 != 0x5c)
            {
                if (rax_1 != 0x110000)
                    goto label_470f0c;
                
                result = arg2[7];
                *arg1 = 0x2200000000;
                *(arg1 + 8) = result;
                break;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if (var_40 == 0xc)
            {
                uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::hcc5a58f570556e77(&var_40, arg2);
                goto label_470ec0;
            }
        }
        else if (rax_1 != 0x24)
        {
            if (rax_1 != 0x22)
            {
                label_470f0c:
                uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(&var_40, arg2);
                goto label_470ec0;
            }
            
            result =
                uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if (var_40 == 0xc)
            {
                *arg1 = 0xc;
                break;
            }
        }
        else
        {
            uu_env::split_iterator::SplitIterator::substitute_variable::hf281b653692e3534(&var_40, 
                arg2);
            label_470ec0:
            
            if (var_40 == 0xc)
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
