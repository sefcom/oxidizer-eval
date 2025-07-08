
  uint64_t uu_env::split_iterator::SplitIterator::state_delimiter::hcb2808b02d57ed1b(int32_t* arg1, int128_t* arg2)

{
    uint64_t result;
    
    while (true)
    {
        result = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
        int32_t var_2c = result;
        int32_t var_58;
        
        if (result == 0x23)
        {
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_58, arg2);
            
            if (var_58 == 8)
            {
                uu_env::split_iterator::SplitIterator::state_comment::ha611e5f8f3a5f309(&var_58, 
                    arg2);
                label_4d9a20:
                
                if (var_58 == 8)
                    continue;
            }
        }
        else
        {
            if (result != 0x5c)
            {
                if (result == 0x110000)
                {
                    *arg1 = 8;
                    break;
                }
                
                int32_t* rdi_2 = &var_58;
                
                if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h1ba5288d29bd1e28(&var_2c, &data_425318, 6))
                    uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(rdi_2, 
                        arg2);
                else
                    uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(rdi_2, arg2);
                
                goto label_4d9a20;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_58, arg2);
            
            if (var_58 == 8)
            {
                uu_env::split_iterator::SplitIterator::state_delimiter_backslash::hda2bc29fb6f38b14(
                    &var_58, arg2);
                goto label_4d9a20;
            }
        }
        
        uint64_t result_1;
        result = result_1;
        *(arg1 + 0x20) = result;
        int128_t zmm0_1 = var_58;
        int128_t var_48;
        *(arg1 + 0x10) = var_48;
        *arg1 = zmm0_1;
        break;
    }
    
    return result;
}
