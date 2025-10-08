
  uint64_t uu_env::split_iterator::SplitIterator::state_delimiter::h3f5e69fc26e62c64(int32_t* arg1, int128_t* arg2)

{
    uint64_t result;
    
    while (true)
    {
        result = uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
        int32_t var_2c = result;
        int32_t var_58;
        
        if (result == 0x23)
        {
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_58, arg2);
            
            if (var_58 == 0xc)
            {
                uu_env::split_iterator::SplitIterator::state_comment::h98c786198130d1d5(&var_58, 
                    arg2);
                label_4707d0:
                
                if (var_58 == 0xc)
                    continue;
            }
        }
        else
        {
            if (result != 0x5c)
            {
                if (result == 0x110000)
                {
                    *arg1 = 0xc;
                    break;
                }
                
                int32_t* rdi_2 = &var_58;
                
                if (!_$LT$char$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2af8667b79ce998c(&var_2c))
                    uu_env::split_iterator::SplitIterator::state_unquoted::hb014e515ee06de9c(rdi_2, 
                        arg2);
                else
                    uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(rdi_2, arg2);
                
                goto label_4707d0;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_58, arg2);
            
            if (var_58 == 0xc)
            {
                uu_env::split_iterator::SplitIterator::state_delimiter_backslash::h697f23c15afc6017(
                    &var_58, arg2);
                goto label_4707d0;
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
