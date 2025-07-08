
  int32_t* uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h4d5fe0b4c9b39b36(int32_t* arg1, int64_t* arg2, int32_t arg3)

{
    int32_t var_54 = arg3;
    wchar32 const* const var_50 = &data_4252d0;
    void* const var_48 = &data_425318;
    int32_t* result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hfeef1e69f7fc6ffe(&var_50, &var_54);
    
    if (!result)
    {
        arg1[1] = 0;
        *arg1 = 8;
    }
    else
    {
        int32_t var_40;
        uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
        
        if (var_40 != 8)
        {
            int32_t* result_1;
            result = result_1;
            *(arg1 + 0x20) = result;
            int128_t zmm0_1 = var_40;
            int128_t var_30;
            *(arg1 + 0x10) = var_30;
            *arg1 = zmm0_1;
        }
        else
        {
            result = uu_env::split_iterator::SplitIterator::push_char_to_word::h02dd43edde3f93fe(
                arg2, result[1]);
            arg1[1] = 1;
            *arg1 = 8;
        }
    }
    
    return result;
}
