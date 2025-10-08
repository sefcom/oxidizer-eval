
  int64_t uu_env::split_iterator::SplitIterator::state_single_quoted::hc3a62f3f6b5c568c(int64_t* arg1, int64_t* arg2)

{
    int64_t result;
    
    while (true)
    {
        int32_t rax_1 =
            uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
        int32_t var_40;
        
        if (rax_1 == 0x5c)
        {
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if (var_40 == 0xc)
            {
                uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::hc455b19cc4950464(&var_40, arg2);
                label_470cf0:
                
                if (var_40 == 0xc)
                    continue;
            }
        }
        else
        {
            if (rax_1 != 0x27)
            {
                if (rax_1 != 0x110000)
                {
                    uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(&var_40, 
                        arg2);
                    goto label_470cf0;
                }
                
                result = arg2[7];
                *arg1 = 0x2700000000;
                arg1[1] = result;
                break;
            }
            
            result =
                uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if (var_40 == 0xc)
            {
                *arg1 = 0xc;
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
