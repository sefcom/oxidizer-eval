
  fn uu_env::split_iterator::SplitIterator::state_comment::ha611e5f8f3a5f309(arg1: *mut i32, arg2: *mut c_void) -> u64

{
    loop
    {
        let mut result: u64 =
            uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
        
        if result == 0xa
        {
            let mut var_48: i32;
            result =
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_48, arg2);
            
            if var_48 != 8
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
                *arg1 = 8;
            }
            
            return result;
        }
        
        if result == 0x110000
        {
            *arg1 = 6;
            return result;
        }
        
        uu_env::string_parser::StringParser::skip_until_char_or_end::h68bc5015a87f77fa(
            arg2.byte_offset(0x18), 0xa);
    }
}
