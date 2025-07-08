
  int64_t uu_env::string_parser::StringParser::get_chunk_with_length_at::h8f36f3de6fe605ad(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rdx = arg2[1];
    
    if (rdx < arg3)
    {
        char const (** const var_78)[0xcd] = &data_548e80;
        int64_t var_70 = 1;
        int64_t var_68 = 8;
        int128_t var_60 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_78);
        /* no return */
    }
    
    void var_48;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&var_48, 
        *arg2, rdx, arg3);
    int64_t var_30;
    int64_t result;
    
    if (!var_30)
    {
        arg1[1] = arg2[4];
        arg1[2] = 0;
        result = 1;
    }
    else
    {
        char* var_38;
        int32_t rax;
        char rdx_1;
        rax = uu_env::native_int_str::get_char_from_native_int::hd9478fe3e880cfe1(*var_38);
        
        if (rax != 0x110000)
        {
            arg1[1] = 0;
            arg1[2] = rax;
            *(arg1 + 0x14) = rdx_1;
            arg1[3] = 1;
        }
        else
        {
            int64_t r12_1 = 1;
            
            if (var_30 != 1)
            {
                while (uu_env::native_int_str::get_char_from_native_int::hd9478fe3e880cfe1(var_38[
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
            
            int64_t rax_2;
            int64_t rdx_3;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hd44f9eb63a52136c(r12_1, var_38, var_30);
            arg1[1] = rax_2;
            arg1[2] = rdx_3;
            arg1[3] = rdx_3;
        }
        
        result = 0;
    }
    
    *arg1 = result;
    return result;
}
