
  int512_t uu_env::string_parser::StringParser::set_pointer::h0708f02e2329cb25(int64_t* arg1, int64_t arg2)

{
    arg1[4] = arg2;
    int64_t rdx = arg1[1];
    
    if (arg2 <= rdx)
    {
        void var_28;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&var_28, 
            *arg1, rdx, arg2);
        int128_t result;
        *(arg1 + 0x10) = result;
        return result;
    }
    
    char const (** const var_58)[0xef] = &data_5104e8;
    int64_t var_50 = 1;
    int64_t var_48 = 8;
    int128_t var_40 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_58);
    /* no return */
}
