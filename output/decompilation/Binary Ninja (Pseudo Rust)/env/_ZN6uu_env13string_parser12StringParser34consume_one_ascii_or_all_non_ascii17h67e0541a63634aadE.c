
  fn uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h67e0541a63634aad(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let mut var_70: i64 = 0;
    let var_68: i64 = 8;
    let var_60: i64 = 0;
    let mut result: *mut i128;
    
    loop
    {
        let mut var_58: i64;
        uu_env::string_parser::StringParser::consume_chunk::hb3f2998da0acbfa7(&var_58, arg2);
        let var_50: i64;
        let var_48: i8;
        
        if var_58 != 0
        {
            result = arg1;
            *result.byte_offset(8) = var_50;
            result[1] = var_48;
            *result = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_env..string_parser..Chunk$GT$$GT$::hf332c5c32dd375fc(&var_70);
            break;
        }
        
        let var_47: i32;
        let var_34_1: i32 = var_47;
        let var_37_1: i32 = var_47;
        let mut var_40: i64 = var_50;
        
        if var_50 == 0
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd22c099f45ad1085(&var_70, &var_40);
            
            if var_48 >= 0x80
            {
                goto 'label_4d6631;
            }
        }
        else
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd22c099f45ad1085(&var_70, &var_40);
            'label_4d6631:
            uu_env::string_parser::StringParser::peek_chunk::h29c563cfd7ddf009(&var_58, arg2);
            
            if var_58 != 0
            {
                if var_50 != 0
                {
                    continue;
                }
                else if var_48 > 0x7f
                {
                    continue;
                }
            }
        }
        
        result = arg1;
        result[1] = var_60;
        *result = var_70;
        break;
    }
    
    result
}
