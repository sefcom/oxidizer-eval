
  int64_t uu_env::string_parser::StringParser::substring::h41e33e0b14cc6cb7(int64_t* arg1, int64_t* arg2)

{
    int64_t rdx = arg1[1];
    int64_t r14 = *arg2;
    char const (** const var_80)[0xef];
    
    if (r14 > rdx)
    {
        var_80 = &data_5104e8;
        int64_t var_78 = 1;
        int64_t var_70 = 8;
        int128_t var_68 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_80);
        /* no return */
    }
    
    void var_50;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&var_50, 
        *arg1, rdx, r14);
    int64_t rcx_2 = arg2[1] - r14;
    int64_t var_38;
    
    if (rcx_2 <= var_38)
    {
        int64_t var_40;
        int64_t result;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&result, 
            var_40, var_38, rcx_2);
        return result;
    }
    
    var_80 = &data_5104e8;
    int64_t var_78_1 = 1;
    int64_t var_70_1 = 8;
    int128_t var_68_1 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_80);
    /* no return */
}
