
  int128_t* uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hba4a109ff858d0ec(int128_t* arg1, int64_t* arg2)

{
    int64_t var_78 = 0;
    int64_t var_70 = 8;
    int64_t var_68 = 0;
    
    while (true)
    {
        int32_t var_58;
        uu_env::string_parser::StringParser::consume_chunk::h727b81068f6a78cb(&var_58, arg2);
        int64_t var_50;
        char var_48;
        
        if (var_58 == 1)
        {
            *(arg1 + 8) = var_50;
            arg1[1] = var_48;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hcb8c0c6e863a6af8(
                var_78, var_70);
            return arg1;
        }
        
        int32_t var_47;
        int32_t var_34_1 = var_47;
        int32_t var_37_1 = var_47;
        int64_t var_40 = var_50;
        
        if (!var_50)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h04893168b3880b2c(&var_78, &var_40);
            
            if (var_48 < 0x80)
                break;
        }
        else
            alloc::vec::Vec$LT$T$C$A$GT$::push::h04893168b3880b2c(&var_78, &var_40);
        
        uu_env::string_parser::StringParser::peek_chunk::hf5c7644aaf7843cb(&var_58, arg2);
        
        if (var_58 != 1)
            break;
        
        if (!var_50)
        {
            if (var_48 <= 0x7f)
                break;
        }
    }
    
    arg1[1] = var_68;
    *arg1 = var_78;
    return arg1;
}
