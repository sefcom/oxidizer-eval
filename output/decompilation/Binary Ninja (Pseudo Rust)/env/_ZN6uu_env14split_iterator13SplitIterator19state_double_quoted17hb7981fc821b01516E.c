
  fn uu_env::split_iterator::SplitIterator::state_double_quoted::hb7981fc821b01516(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut result: i64;
    
    loop
    {
        let rax_1: i32 =
            uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
        let mut var_40: i32;
        
        if rax_1 > 0x5b
        {
            if rax_1 != 0x5c
            {
                if rax_1 != 0x110000
                {
                    goto 'label_4da16c;
                }
                
                result = arg2[7];
                *arg1 = 0x2200000000;
                *arg1.byte_offset(8) = result;
                break;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if var_40 == 8
            {
                uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::h3f45bcdaf5eb467d(&var_40, arg2);
                goto 'label_4da120;
            }
        }
        else if rax_1 != 0x24
        {
            if rax_1 != 0x22
            {
                'label_4da16c:
                uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, arg2);
                goto 'label_4da120;
            }
            
            result =
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if var_40 == 8
            {
                *arg1 = 8;
                break;
            }
        }
        else
        {
            uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(&var_40, 
                arg2);
            'label_4da120:
            
            if var_40 == 8
            {
                continue;
            }
        }
        
        let result_1: i64;
        result = result_1;
        *arg1.byte_offset(0x20) = result;
        let zmm0_1: i128 = var_40;
        let var_30: i128;
        *arg1.byte_offset(0x10) = var_30;
        *arg1 = zmm0_1;
        break;
    }
    
    result
}
