
  uint64_t uu_env::split_iterator::SplitIterator::state_unquoted_backslash::h38190f9bed933da1(int32_t* arg1, int128_t* arg2)

{
    int32_t rax = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
    uint64_t result;
    int32_t var_40;
    
    if (rax <= 0x5b)
    {
        uint64_t rax_1 = rax - 0xa;
        int128_t var_3b;
        int128_t var_2b;
        
        if (rax_1 > 0x1d)
        {
            label_4d9ebc:
            uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h4d5fe0b4c9b39b36(&var_40, arg2, rax);
            int32_t rcx_1 = var_40;
            char result_1;
            result = result_1;
            
            if (rcx_1 != 8)
            {
                int32_t var_1c;
                arg1[9] = var_1c;
                *(arg1 + 0x15) = var_2b;
                *(arg1 + 5) = var_3b;
                *arg1 = rcx_1;
                arg1[1] = result;
            }
            else if (result)
                *arg1 = 8;
            else
            {
                result = *(arg2 + 0x38);
                *arg1 = 3;
                arg1[1] = rax;
                *(arg1 + 8) = result;
            }
        }
        else
            switch (rax_1)
            {
                case 0:
                {
                    result = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(
                        &var_40, arg2);
                    
                    if (var_40 == 8)
                        *arg1 = 8;
                    else
                    {
                        label_4d9e4e:
                        result = *var_2b[0xb];
                        *(arg1 + 0x20) = result;
                        int128_t zmm0_1 = var_40;
                        *(arg1 + 0x10) = var_3b;
                        *arg1 = zmm0_1;
                    }
                    break;
                }
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 0xa:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x19:
                case 0x1b:
                case 0x1c:
                {
                    goto label_4d9ebc;
                }
                case 0x18:
                case 0x1a:
                case 0x1d:
                {
                    goto label_4d9e37;
                }
            }
    }
    else if (rax > 0x62)
    {
        if (rax == 0x63)
        {
            result =
                uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(arg2);
            *arg1 = 6;
        }
        else
        {
            if (rax != 0x110000)
                goto label_4d9ebc;
            
            int64_t r14_1 = *(arg2 + 0x38);
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
                &arg1[4], &data_4179f8, 8);
            *arg1 = 1;
            *(arg1 + 8) = r14_1;
        }
    }
    else if (rax == 0x5c)
    {
        label_4d9e37:
        result = uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, arg2);
        
        if (var_40 != 8)
            goto label_4d9e4e;
        
        *arg1 = 8;
    }
    else
    {
        if (rax != 0x5f)
            goto label_4d9ebc;
        
        uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
        
        if (var_40 != 8)
            goto label_4d9e4e;
        
        result = uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(arg2);
        *arg1 = 7;
    }
    return result;
}
