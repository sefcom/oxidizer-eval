
  int32_t* uu_env::string_parser::StringParser::peek_char_at_pointer::h13f3254ae1b02ce7(int32_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rdx = arg2[1];
    
    if (rdx < arg3)
    {
        char const (** const var_60)[0xcd] = &data_548e80;
        int64_t var_58 = 1;
        int64_t var_50 = 8;
        int128_t var_48 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_60);
        /* no return */
    }
    
    void var_30;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&var_30, 
        *arg2, rdx, arg3);
    int64_t var_18;
    int32_t rax_1;
    
    if (!var_18)
    {
        *arg1 = arg2[4];
        rax_1 = 0;
    }
    else
    {
        char* var_20;
        rax_1 = uu_env::native_int_str::get_char_from_native_int::hd9478fe3e880cfe1(*var_20);
        
        if (rax_1 != 0x110000)
            *arg1 = rax_1;
        else
            *arg1 = 0xfffd;
        
        rax_1 = 2;
    }
    
    arg1[2] = rax_1;
    return arg1;
}
