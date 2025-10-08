
  uint64_t uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::hcc5a58f570556e77(int32_t* arg1, int64_t* arg2)

{
    int32_t rax = uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
    uint64_t result;
    int32_t var_40;
    
    if (rax > 0x5b)
    {
        if (rax == 0x5c)
        {
            label_470fcc:
            result =
                uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(&var_40, arg2);
            
            if (var_40 != 0xc)
                goto label_470fee;
            
            *arg1 = 0xc;
        }
        else if (rax == 0x63)
        {
            result = arg2[7];
            *arg1 = 2;
            *(arg1 + 8) = result;
        }
        else
        {
            if (rax != 0x110000)
                goto label_471016;
            
            result = arg2[7];
            *arg1 = 0x2200000000;
            *(arg1 + 8) = result;
        }
    }
    else
    {
        int128_t var_30;
        uint64_t result_2;
        
        if (rax == 0xa)
        {
            result =
                uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if (var_40 == 0xc)
                *arg1 = 0xc;
            else
            {
                label_470fee:
                result = result_2;
                *(arg1 + 0x20) = result;
                int128_t zmm0_1 = var_40;
                *(arg1 + 0x10) = var_30;
                *arg1 = zmm0_1;
            }
        }
        else
        {
            if (rax == 0x22 || rax == 0x24)
                goto label_470fcc;
            
            label_471016:
            uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::hbf4d9b34cfe30d19(&var_40, arg2, rax);
            int32_t rcx_1 = var_40;
            char result_1;
            result = result_1;
            
            if (rcx_1 != 0xc)
            {
                arg1[9] = *result_2[4];
                *(arg1 + 0x15) = var_30;
                int128_t var_3b;
                *(arg1 + 5) = var_3b;
                *arg1 = rcx_1;
                arg1[1] = result;
            }
            else if (!(result & 1))
            {
                result = arg2[7];
                *arg1 = 3;
                arg1[1] = rax;
                *(arg1 + 8) = result;
            }
            else
                *arg1 = 0xc;
        }
    }
    return result;
}
