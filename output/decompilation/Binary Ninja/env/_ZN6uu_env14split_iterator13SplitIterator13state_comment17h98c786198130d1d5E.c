
  uint64_t uu_env::split_iterator::SplitIterator::state_comment::h98c786198130d1d5(int32_t* arg1, void* arg2)

{
    uint64_t result =
        uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
    
    if (result == 0xa)
    {
        label_4710d5:
        int32_t var_48;
        result = uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_48, arg2);
        
        if (var_48 != 0xc)
        {
            uint64_t result_1;
            result = result_1;
            *(arg1 + 0x20) = result;
            int128_t zmm0_1 = var_48;
            int128_t var_38;
            *(arg1 + 0x10) = var_38;
            *arg1 = zmm0_1;
        }
        else
            *arg1 = 0xc;
    }
    else
    {
        while (result != 0x110000)
        {
            uu_env::string_parser::StringParser::skip_until_char_or_end::hf050962e819e98de(
                arg2 + 0x18, 0xa);
            result =
                uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
            
            if (result == 0xa)
                goto label_4710d5;
        }
        
        *arg1 = 9;
    }
    
    return result;
}
