
  uint64_t uu_env::string_parser::StringParser::get_chunk_with_length_at::h90aefca5fb8ee726(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rdx = arg2[1];
    
    if (arg3 > rdx)
    {
        char const (** const var_78)[0xef] = &data_5104e8;
        int64_t var_70 = 1;
        int64_t var_68 = 8;
        int128_t var_60 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_78);
        /* no return */
    }
    
    void var_48;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&var_48, 
        *arg2, rdx, arg3);
    int64_t var_30;
    uint64_t result;
    int64_t r13;
    
    if (!var_30)
    {
        result = arg2[4];
        arg1[1] = result;
        arg1[2] = 0;
        r13 = 1;
    }
    else
    {
        char* var_38;
        char rdx_1;
        result = uu_env::native_int_str::get_char_from_native_int::h55c3dbad16c71881(*var_38);
        
        if (result != 0x110000)
        {
            arg1[1] = 0;
            arg1[2] = result;
            *(arg1 + 0x14) = rdx_1;
            arg1[3] = 1;
            r13 = 0;
        }
        else
        {
            int64_t r12_1 = 1;
            
            if (var_30 != 1)
            {
                while (uu_env::native_int_str::get_char_from_native_int::h55c3dbad16c71881(var_38[
                    r12_1]) == 0x110000)
                {
                    r12_1 += 1;
                    
                    if (var_30 == r12_1)
                    {
                        r12_1 = var_30;
                        break;
                    }
                }
            }
            
            r13 = 0;
            int64_t rdx_3;
            result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h8f98cd73861384d7(0, r12_1, var_38, var_30);
            arg1[1] = result;
            arg1[2] = rdx_3;
            arg1[3] = rdx_3;
        }
    }
    
    *arg1 = r13;
    return result;
}
