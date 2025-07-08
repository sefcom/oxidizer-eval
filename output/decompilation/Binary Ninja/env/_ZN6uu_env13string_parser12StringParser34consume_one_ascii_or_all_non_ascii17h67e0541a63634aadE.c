
  int128_t* uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h67e0541a63634aad(int128_t* arg1, int64_t* arg2)

{
    int64_t var_70 = 0;
    int64_t var_68 = 8;
    int64_t var_60 = 0;
    int128_t* result;
    
    while (true)
    {
        int64_t var_58;
        uu_env::string_parser::StringParser::consume_chunk::hb3f2998da0acbfa7(&var_58, arg2);
        int64_t var_50;
        char var_48;
        
        if (var_58)
        {
            result = arg1;
            *(result + 8) = var_50;
            result[1] = var_48;
            *result = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_env..string_parser..Chunk$GT$$GT$::hf332c5c32dd375fc(&var_70);
            break;
        }
        
        int32_t var_47;
        int32_t var_34_1 = var_47;
        int32_t var_37_1 = var_47;
        int64_t var_40 = var_50;
        
        if (!var_50)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd22c099f45ad1085(&var_70, &var_40);
            
            if (var_48 >= 0x80)
                goto label_4d6631;
        }
        else
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd22c099f45ad1085(&var_70, &var_40);
            label_4d6631:
            uu_env::string_parser::StringParser::peek_chunk::h29c563cfd7ddf009(&var_58, arg2);
            
            if (var_58)
            {
                if (var_50)
                    continue;
                else if (var_48 > 0x7f)
                    continue;
            }
        }
        
        result = arg1;
        result[1] = var_60;
        *result = var_70;
        break;
    }
    
    return result;
}
