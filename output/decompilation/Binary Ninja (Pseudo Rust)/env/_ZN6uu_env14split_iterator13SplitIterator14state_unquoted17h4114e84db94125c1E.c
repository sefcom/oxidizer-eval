
  fn uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(arg1: *mut i32, arg2: *mut i128) -> u64

{
    let mut result: u64;
    
    loop
    {
        let rax_1: i32 =
            uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
        let mut var_2c: i32 = rax_1;
        let mut result_1: i32;
        let var_48: i128;
        let result_2: u64;
        
        if rax_1 <= 0x26
        {
            if rax_1 == 0x22
            {
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&result_1, arg2);
                
                if result_1 == 8
                {
                    uu_env::split_iterator::SplitIterator::state_double_quoted::hb7981fc821b01516(
                        &result_1, arg2);
                    'label_4d9c69:
                    
                    if result_1 == 8
                    {
                        continue;
                    }
                }
            }
            else
            {
                if rax_1 == 0x24
                {
                    uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(
                        &result_1, arg2);
                    goto 'label_4d9c69;
                }
                
                'label_4d9d09:
                
                if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h1ba5288d29bd1e28(&var_2c, &data_425318, 6) != 0
                {
                    uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(
                        arg2);
                    result = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(
                        &result_1, arg2);
                    
                    if result_1 == 8
                    {
                        *arg1 = 8;
                        break;
                    }
                }
                else
                {
                    uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&result_1, 
                        arg2);
                    result = result_1;
                    
                    if result == 8
                    {
                        continue;
                    }
                    
                    arg1[9] = *result_2[4];
                    *arg1.byte_offset(0x14) = var_48;
                    let var_54: i128;
                    *arg1.byte_offset(4) = var_54;
                    *arg1 = result;
                    break;
                }
            }
        }
        else if rax_1 == 0x27
        {
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&result_1, arg2);
            
            if result_1 == 8
            {
                uu_env::split_iterator::SplitIterator::state_single_quoted::hb66b7ab13358fbb8(
                    &result_1, arg2);
                goto 'label_4d9c69;
            }
        }
        else
        {
            if rax_1 != 0x5c
            {
                if rax_1 != 0x110000
                {
                    goto 'label_4d9d09;
                }
                
                result =
                    uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(
                    arg2);
                *arg1 = 6;
                break;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&result_1, arg2);
            
            if result_1 == 8
            {
                uu_env::split_iterator::SplitIterator::state_unquoted_backslash::h38190f9bed933da1(
                    &result_1, arg2);
                goto 'label_4d9c69;
            }
        }
        
        result = result_2;
        *arg1.byte_offset(0x20) = result;
        let zmm0_1: i128 = result_1;
        *arg1.byte_offset(0x10) = var_48;
        *arg1 = zmm0_1;
        break;
    }
    
    result
}
