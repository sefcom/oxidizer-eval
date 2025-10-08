
  int64_t uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::hc455b19cc4950464(int32_t* arg1, int64_t* arg2)

{
    int32_t rax = uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
    int32_t var_44 = rax;
    int64_t result;
    int32_t var_40;
    
    if (rax > 0x5b)
    {
        if (rax == 0x5c)
            goto label_470e2f;
        
        if (rax != 0x110000)
        {
            label_470df6:
            var_40 = "r";
            void* const var_38_1 = &data_41e808;
            
            if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfa16b6fb84ed72f1(&var_40, &var_44))
            {
                result = arg2[7];
                *arg1 = 3;
                arg1[1] = rax;
                *(arg1 + 8) = result;
            }
            else
            {
                uu_env::split_iterator::SplitIterator::push_char_to_word::hcc09ef0ffa883c76(arg2, 
                    0x5c);
                label_470e2f:
                result = uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(
                    &var_40, arg2);
                
                if (var_40 != 0xc)
                    goto label_470e57;
                
                *arg1 = 0xc;
            }
        }
        else
        {
            result = arg2[7];
            *arg1 = 0x2700000000;
            *(arg1 + 8) = result;
        }
    }
    else
    {
        if (rax != 0xa)
        {
            if (rax == 0x27)
                goto label_470e2f;
            
            goto label_470df6;
        }
        
        result = uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
        
        if (var_40 == 0xc)
            *arg1 = 0xc;
        else
        {
            label_470e57:
            int64_t result_1;
            result = result_1;
            *(arg1 + 0x20) = result;
            int128_t zmm0_1 = var_40;
            int128_t var_30;
            *(arg1 + 0x10) = var_30;
            *arg1 = zmm0_1;
        }
    }
    return result;
}
