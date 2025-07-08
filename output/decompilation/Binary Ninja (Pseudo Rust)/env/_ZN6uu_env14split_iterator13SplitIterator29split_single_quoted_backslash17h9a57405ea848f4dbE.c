
  fn uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::h9a57405ea848f4db(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let rax: i32 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
    let mut var_44: i32 = rax;
    let mut result: i64;
    let mut var_40: i32;
    
    if rax > 0x5b
    {
        if rax == 0x5c
        {
            goto 'label_4da07f;
        }
        
        if rax != 0x110000
        {
            'label_4da046:
            var_40 = &data_4252d0;
            let var_38_1: *mut c_void = &data_425318;
            
            if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h0082e106958e48e1(&var_40, &var_44) == 0
            {
                result = arg2[7];
                *arg1 = 3;
                arg1[1] = rax;
                *arg1.byte_offset(8) = result;
            }
            else
            {
                uu_env::split_iterator::SplitIterator::push_char_to_word::h02dd43edde3f93fe(arg2, 
                    0x5c);
                'label_4da07f:
                result = uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(
                    &var_40, arg2);
                
                if var_40 != 8
                {
                    goto 'label_4da0a7;
                }
                
                *arg1 = 8;
            }
        }
        else
        {
            result = arg2[7];
            *arg1 = 0x2700000000;
            *arg1.byte_offset(8) = result;
        }
    }
    else
    {
        if rax != 0xa
        {
            if rax == 0x27
            {
                goto 'label_4da07f;
            }
            
            goto 'label_4da046;
        }
        
        result = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
        
        if var_40 == 8
        {
            *arg1 = 8;
        }
        else
        {
            'label_4da0a7:
            let result_1: i64;
            result = result_1;
            *arg1.byte_offset(0x20) = result;
            let zmm0_1: i128 = var_40;
            let var_30: i128;
            *arg1.byte_offset(0x10) = var_30;
            *arg1 = zmm0_1;
        }
    }
    result
}
