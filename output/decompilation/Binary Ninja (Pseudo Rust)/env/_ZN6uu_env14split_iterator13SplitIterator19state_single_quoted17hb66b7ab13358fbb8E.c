
  fn uu_env::split_iterator::SplitIterator::state_single_quoted::hb66b7ab13358fbb8(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut result: i64;
    
    loop
    {
        let rax_1: i32 =
            uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
        let mut var_40: i32;
        
        if rax_1 == 0x5c
        {
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if var_40 == 8
            {
                uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::h9a57405ea848f4db(&var_40, arg2);
                'label_4d9f40:
                
                if var_40 == 8
                {
                    continue;
                }
            }
        }
        else
        {
            if rax_1 != 0x27
            {
                if rax_1 != 0x110000
                {
                    uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, 
                        arg2);
                    goto 'label_4d9f40;
                }
                
                result = arg2[7];
                *arg1 = 0x2700000000;
                arg1[1] = result;
                break;
            }
            
            result =
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if var_40 == 8
            {
                *arg1 = 8;
                break;
            }
        }
        
        let result_1: i64;
        result = result_1;
        arg1[4] = result;
        let zmm0_1: i128 = var_40;
        let var_30: i128;
        *arg1.byte_offset(0x10) = var_30;
        *arg1 = zmm0_1;
        break;
    }
    
    result
}
