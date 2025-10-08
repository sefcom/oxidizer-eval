
  fn uu_env::split_iterator::SplitIterator::state_single_quoted::hc3a62f3f6b5c568c(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut result: i64;
    
    loop
    {
        let rax_1: i32 =
            uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
        let mut var_40: i32;
        
        if rax_1 == 0x5c
        {
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if var_40 == 0xc
            {
                uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::hc455b19cc4950464(&var_40, arg2);
                'label_470cf0:
                
                if var_40 == 0xc
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
                    uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(&var_40, 
                        arg2);
                    goto 'label_470cf0;
                }
                
                result = arg2[7];
                *arg1 = 0x2700000000;
                arg1[1] = result;
                break;
            }
            
            result =
                uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
            
            if var_40 == 0xc
            {
                *arg1 = 0xc;
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
