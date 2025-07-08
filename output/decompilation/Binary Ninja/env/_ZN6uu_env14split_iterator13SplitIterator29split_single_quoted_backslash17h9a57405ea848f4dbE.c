
  int64_t uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::h9a57405ea848f4db(int32_t* arg1, int64_t* arg2)

{
    int32_t rax = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
    int32_t var_44 = rax;
    int64_t result;
    int32_t var_40;
    
    if (rax > 0x5b)
    {
        if (rax == 0x5c)
            goto label_4da07f;
        
        if (rax != 0x110000)
        {
            label_4da046:
            var_40 = &data_4252d0;
            void* const var_38_1 = &data_425318;
            
            if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h0082e106958e48e1(&var_40, &var_44))
            {
                result = arg2[7];
                *arg1 = 3;
                arg1[1] = rax;
                *(arg1 + 8) = result;
            }
            else
            {
                uu_env::split_iterator::SplitIterator::push_char_to_word::h02dd43edde3f93fe(arg2, 
                    0x5c);
                label_4da07f:
                result = uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(
                    &var_40, arg2);
                
                if (var_40 != 8)
                    goto label_4da0a7;
                
                *arg1 = 8;
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
                goto label_4da07f;
            
            goto label_4da046;
        }
        
        result = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
        
        if (var_40 == 8)
            *arg1 = 8;
        else
        {
            label_4da0a7:
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
