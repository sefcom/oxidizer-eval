
  int32_t* uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::hbf4d9b34cfe30d19(int128_t* arg1, int64_t* arg2, int32_t arg3)

{
    int32_t var_54 = arg3;
    char const* const var_50 = "r";
    void* const var_48 = &data_41e808;
    int32_t* result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8709cdb61b22f4c2(&var_50, &var_54);
    
    if (!result)
    {
        *(arg1 + 4) = 0;
        *arg1 = 0xc;
    }
    else
    {
        int32_t var_40;
        uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
        
        if (var_40 != 0xc)
        {
            int32_t* result_1;
            result = result_1;
            arg1[2] = result;
            int128_t zmm0_1 = var_40;
            int128_t var_30;
            arg1[1] = var_30;
            *arg1 = zmm0_1;
        }
        else
        {
            result = uu_env::split_iterator::SplitIterator::push_char_to_word::hcc09ef0ffa883c76(
                arg2, result[1]);
            *(arg1 + 4) = 1;
            *arg1 = 0xc;
        }
    }
    
    return result;
}
