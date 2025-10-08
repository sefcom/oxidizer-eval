
  uint64_t uu_env::split_iterator::SplitIterator::state_unquoted::hb014e515ee06de9c(int32_t* arg1, int128_t* arg2)

{
    uint64_t result;
    
    while (true)
    {
        int32_t rax_1 =
            uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
        int32_t var_2c = rax_1;
        int32_t result_1;
        int128_t var_48;
        uint64_t result_2;
        
        if (rax_1 <= 0x26)
        {
            if (rax_1 == 0x22)
            {
                uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&result_1, arg2);
                
                if (result_1 == 0xc)
                {
                    uu_env::split_iterator::SplitIterator::state_double_quoted::h95d0342559df96c6(
                        &result_1, arg2);
                    label_470a19:
                    
                    if (result_1 == 0xc)
                        continue;
                }
            }
            else
            {
                if (rax_1 == 0x24)
                {
                    uu_env::split_iterator::SplitIterator::substitute_variable::hf281b653692e3534(
                        &result_1, arg2);
                    goto label_470a19;
                }
                
                label_470ab9:
                
                if (_$LT$char$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2af8667b79ce998c(&var_2c))
                {
                    uu_env::split_iterator::SplitIterator::push_word_to_words::hde29bdf58d338eeb(
                        arg2);
                    result = uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(
                        &result_1, arg2);
                    
                    if (result_1 == 0xc)
                    {
                        *arg1 = 0xc;
                        break;
                    }
                }
                else
                {
                    uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(&result_1, 
                        arg2);
                    result = result_1;
                    
                    if (result == 0xc)
                        continue;
                    
                    arg1[9] = *result_2[4];
                    *(arg1 + 0x14) = var_48;
                    int128_t var_54;
                    *(arg1 + 4) = var_54;
                    *arg1 = result;
                    break;
                }
            }
        }
        else if (rax_1 == 0x27)
        {
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&result_1, arg2);
            
            if (result_1 == 0xc)
            {
                uu_env::split_iterator::SplitIterator::state_single_quoted::hc3a62f3f6b5c568c(
                    &result_1, arg2);
                goto label_470a19;
            }
        }
        else
        {
            if (rax_1 != 0x5c)
            {
                if (rax_1 != 0x110000)
                    goto label_470ab9;
                
                result =
                    uu_env::split_iterator::SplitIterator::push_word_to_words::hde29bdf58d338eeb(
                    arg2);
                *arg1 = 9;
                break;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&result_1, arg2);
            
            if (result_1 == 0xc)
            {
                uu_env::split_iterator::SplitIterator::state_unquoted_backslash::h36c7c5f0e0f90489(
                    &result_1, arg2);
                goto label_470a19;
            }
        }
        
        result = result_2;
        *(arg1 + 0x20) = result;
        int128_t zmm0_1 = result_1;
        *(arg1 + 0x10) = var_48;
        *arg1 = zmm0_1;
        break;
    }
    
    return result;
}
