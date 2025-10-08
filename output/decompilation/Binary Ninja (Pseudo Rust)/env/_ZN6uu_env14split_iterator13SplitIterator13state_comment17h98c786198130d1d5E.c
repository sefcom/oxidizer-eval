
  fn uu_env::split_iterator::SplitIterator::state_comment::h98c786198130d1d5(arg1: *mut i32, arg2: *mut c_void) -> u64

{
    let mut result: u64 =
        uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
    
    if result == 0xa
    {
        'label_4710d5:
        let mut var_48: i32;
        result = uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_48, arg2);
        
        if var_48 != 0xc
        {
            let result_1: u64;
            result = result_1;
            *arg1.byte_offset(0x20) = result;
            let zmm0_1: i128 = var_48;
            let var_38: i128;
            *arg1.byte_offset(0x10) = var_38;
            *arg1 = zmm0_1;
        }
        else
        {
            *arg1 = 0xc;
        }
    }
    else
    {
        while result != 0x110000
        {
            uu_env::string_parser::StringParser::skip_until_char_or_end::hf050962e819e98de(
                arg2.byte_offset(0x18), 0xa);
            result =
                uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
            
            if result == 0xa
            {
                goto 'label_4710d5;
            }
        }
        
        *arg1 = 9;
    }
    
    result
}
