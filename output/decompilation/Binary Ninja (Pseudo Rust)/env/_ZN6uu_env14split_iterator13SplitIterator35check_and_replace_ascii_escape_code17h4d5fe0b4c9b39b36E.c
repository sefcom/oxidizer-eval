
  fn uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h4d5fe0b4c9b39b36(arg1: *mut i32, arg2: *mut i64, arg3: i32) -> *mut i32

{
    let mut var_54: i32 = arg3;
    let mut var_50: *const char = &data_4252d0;
    let var_48: *mut c_void = &data_425318;
    let mut result: *mut i32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hfeef1e69f7fc6ffe(&var_50, &var_54);
    
    if result == 0
    {
        arg1[1] = 0;
        *arg1 = 8;
    }
    else
    {
        let mut var_40: i32;
        uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
        
        if var_40 != 8
        {
            let result_1: *mut i32;
            result = result_1;
            *arg1.byte_offset(0x20) = result;
            let zmm0_1: i128 = var_40;
            let var_30: i128;
            *arg1.byte_offset(0x10) = var_30;
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
    
    result
}
