
  fn uu_env::split_iterator::SplitIterator::state_double_quoted::h95d0342559df96c6(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut result: i64;
    
    loop
    {
        let rax_1: i32 =
            uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
        let mut var_40: i32;
        
        if rax_1 > 0x5b
        {
            if rax_1 != 0x5c
            {
                if rax_1 != 0x110000
                {
                    goto 'label_470f0c;
                }
                
                result = arg2[7];
                *arg1 = 0x2200000000;
                *arg1.byte_offset(8) = result;
                break;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if var_40 == 0xc
            {
                uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::hcc5a58f570556e77(&var_40, arg2);
                goto 'label_470ec0;
            }
        }
        else if rax_1 != 0x24
        {
            if rax_1 != 0x22
            {
                'label_470f0c:
                uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(&var_40, arg2);
                goto 'label_470ec0;
            }
            
            result =
                uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if var_40 == 0xc
            {
                *arg1 = 0xc;
                break;
            }
        }
        else
        {
            uu_env::split_iterator::SplitIterator::substitute_variable::hf281b653692e3534(&var_40, 
                arg2);
            'label_470ec0:
            
            if var_40 == 0xc
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
