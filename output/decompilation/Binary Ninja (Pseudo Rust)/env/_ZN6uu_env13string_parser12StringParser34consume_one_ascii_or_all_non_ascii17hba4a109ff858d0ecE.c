
  fn uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hba4a109ff858d0ec(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let mut var_78: i64 = 0;
    let var_70: i64 = 8;
    let var_68: i64 = 0;
    
    loop
    {
        let mut var_58: i32;
        uu_env::string_parser::StringParser::consume_chunk::h727b81068f6a78cb(&var_58, arg2);
        let var_50: i64;
        let var_48: i8;
        
        if var_58 == 1
        {
            *arg1.byte_offset(8) = var_50;
            arg1[1] = var_48;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hcb8c0c6e863a6af8(
                var_78, var_70);
            return arg1;
        }
        
        let var_47: i32;
        let var_34_1: i32 = var_47;
        let var_37_1: i32 = var_47;
        let mut var_40: i64 = var_50;
        
        if var_50 == 0
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h04893168b3880b2c(&var_78, &var_40);
            
            if var_48 < 0x80
            {
                break;
            }
        }
        else
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h04893168b3880b2c(&var_78, &var_40);
        }
        
        uu_env::string_parser::StringParser::peek_chunk::hf5c7644aaf7843cb(&var_58, arg2);
        
        if var_58 != 1
        {
            break;
        }
        
        if var_50 == 0
        {
            if var_48 <= 0x7f
            {
                break;
            }
        }
    }
    
    arg1[1] = var_68;
    *arg1 = var_78;
    arg1
}
