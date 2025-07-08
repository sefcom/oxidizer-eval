
  int64_t uu_env::string_parser::StringParser::substring::h93033379edd1d12f(int64_t* arg1, int64_t* arg2)

{
    int64_t rdx = arg1[1];
    int64_t r14 = *arg2;
    char const (** const var_80)[0xcd];
    
    if (r14 > rdx)
    {
        var_80 = &data_548e80;
        int64_t var_78 = 1;
        int64_t var_70 = 8;
        int128_t var_68 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_80);
        /* no return */
    }
    
    void var_50;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&var_50, 
        *arg1, rdx, r14);
    int64_t rcx_2 = arg2[1] - r14;
    int64_t var_38;
    
    if (rcx_2 <= var_38)
    {
        int64_t var_40;
        int64_t result;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&result, 
            var_40, var_38, rcx_2);
        return result;
    }
    
    var_80 = &data_548e80;
    int64_t var_78_1 = 1;
    int64_t var_70_1 = 8;
    int128_t var_68_1 = {0};
    core::panicking::panic_fmt::he12d0d7468628bb4(&var_80);
    /* no return */
}
