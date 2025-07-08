
  fn uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::h3f45bcdaf5eb467d(arg1: *mut i32, arg2: *mut i64) -> u64

{
    let rax: i32 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
    let mut result: u64;
    let mut var_40: i32;
    
    if rax > 0x5b
    {
        if rax == 0x5c
        {
            'label_4da22c:
            result =
                uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, arg2);
            
            if var_40 != 8
            {
                goto 'label_4da24e;
            }
            
            *arg1 = 8;
        }
        else if rax == 0x63
        {
            result = arg2[7];
            *arg1 = 2;
            *arg1.byte_offset(8) = result;
        }
        else
        {
            if rax != 0x110000
            {
                goto 'label_4da276;
            }
            
            result = arg2[7];
            *arg1 = 0x2200000000;
            *arg1.byte_offset(8) = result;
        }
    }
    else
    {
        let var_30: i128;
        let result_2: u64;
        
        if rax == 0xa
        {
            result =
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
            
            if var_40 == 8
            {
                *arg1 = 8;
            }
            else
            {
                'label_4da24e:
                result = result_2;
                *arg1.byte_offset(0x20) = result;
                let zmm0_1: i128 = var_40;
                *arg1.byte_offset(0x10) = var_30;
                *arg1 = zmm0_1;
            }
        }
        else
        {
            if rax == 0x22 || rax == 0x24
            {
                goto 'label_4da22c;
            }
            
            'label_4da276:
            uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h4d5fe0b4c9b39b36(&var_40, arg2, rax);
            let rcx_1: i32 = var_40;
            let result_1: i8;
            result = result_1;
            
            if rcx_1 != 8
            {
                arg1[9] = *result_2[4];
                *arg1.byte_offset(0x15) = var_30;
                let var_3b: i128;
                *arg1.byte_offset(5) = var_3b;
                *arg1 = rcx_1;
                arg1[1] = result;
            }
            else if result == 0
            {
                result = arg2[7];
                *arg1 = 3;
                arg1[1] = rax;
                *arg1.byte_offset(8) = result;
            }
            else
            {
                *arg1 = 8;
            }
        }
    }
    result
}
