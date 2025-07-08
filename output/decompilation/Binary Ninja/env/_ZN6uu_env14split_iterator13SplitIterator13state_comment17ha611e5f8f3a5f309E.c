
  uint64_t uu_env::split_iterator::SplitIterator::state_comment::ha611e5f8f3a5f309(int32_t* arg1, void* arg2)

{
    while (true)
    {
        uint64_t result =
            uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
        
        if (result == 0xa)
        {
            int32_t var_48;
            result =
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_48, arg2);
            
            if (var_48 != 8)
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
                *arg1 = 8;
            
            return result;
        }
        
        if (result == 0x110000)
        {
            *arg1 = 6;
            return result;
        }
        
        uu_env::string_parser::StringParser::skip_until_char_or_end::h68bc5015a87f77fa(arg2 + 0x18, 
            0xa);
    }
}
