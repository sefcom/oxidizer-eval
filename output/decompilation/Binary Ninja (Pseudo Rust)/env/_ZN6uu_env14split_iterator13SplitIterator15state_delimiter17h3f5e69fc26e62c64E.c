
  fn uu_env::split_iterator::SplitIterator::state_delimiter::h3f5e69fc26e62c64(arg1: *mut i32, arg2: *mut i128) -> u64

{
    let mut result: u64;
    
    loop
    {
        result = uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
        let mut var_2c: i32 = result;
        let mut var_58: i32;
        
        if result == 0x23
        {
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_58, arg2);
            
            if var_58 == 0xc
            {
                uu_env::split_iterator::SplitIterator::state_comment::h98c786198130d1d5(&var_58, 
                    arg2);
                'label_4707d0:
                
                if var_58 == 0xc
                {
                    continue;
                }
            }
        }
        else
        {
            if result != 0x5c
            {
                if result == 0x110000
                {
                    *arg1 = 0xc;
                    break;
                }
                
                let rdi_2: *mut i32 = &var_58;
                
                if _$LT$char$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2af8667b79ce998c(&var_2c) == 0
                {
                    uu_env::split_iterator::SplitIterator::state_unquoted::hb014e515ee06de9c(rdi_2, 
                        arg2);
                }
                else
                {
                    uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(rdi_2, arg2);
                }
                
                goto 'label_4707d0;
            }
            
            uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_58, arg2);
            
            if var_58 == 0xc
            {
                uu_env::split_iterator::SplitIterator::state_delimiter_backslash::h697f23c15afc6017(
                    &var_58, arg2);
                goto 'label_4707d0;
            }
        }
        
        let result_1: u64;
        result = result_1;
        *arg1.byte_offset(0x20) = result;
        let zmm0_1: i128 = var_58;
        let var_48: i128;
        *arg1.byte_offset(0x10) = var_48;
        *arg1 = zmm0_1;
        break;
    }
    
    result
}
