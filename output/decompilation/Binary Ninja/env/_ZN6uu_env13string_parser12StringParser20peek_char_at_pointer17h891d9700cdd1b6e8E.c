
  int32_t* uu_env::string_parser::StringParser::peek_char_at_pointer::h891d9700cdd1b6e8(int32_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rdx = arg2[1];
    
    if (arg3 > rdx)
    {
        char const (** const var_60)[0xef] = &data_5104e8;
        int64_t var_58 = 1;
        int64_t var_50 = 8;
        int128_t var_48 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
        /* no return */
    }
    
    void var_30;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&var_30, 
        *arg2, rdx, arg3);
    int64_t var_18;
    
    if (!var_18)
    {
        *arg1 = arg2[4];
        arg1[2] = 0;
    }
    else
    {
        char* var_20;
        int32_t rax_1 =
            uu_env::native_int_str::get_char_from_native_int::h55c3dbad16c71881(*var_20);
        
        if (rax_1 != 0x110000)
            *arg1 = rax_1;
        else
            *arg1 = 0xfffd;
        
        arg1[2] = 2;
    }
    
    return arg1;
}
