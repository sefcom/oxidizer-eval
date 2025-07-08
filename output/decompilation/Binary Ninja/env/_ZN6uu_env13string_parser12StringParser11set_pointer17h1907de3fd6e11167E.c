
  int512_t uu_env::string_parser::StringParser::set_pointer::h1907de3fd6e11167(int64_t* arg1, int64_t arg2)

{
    arg1[4] = arg2;
    int64_t rdx = arg1[1];
    
    if (rdx >= arg2)
    {
        void var_28;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&var_28, 
            *arg1, rdx, arg2);
        int128_t result;
        *(arg1 + 0x10) = result;
        return result;
    }
    
    char const (** const var_58)[0xcd] = &data_548e80;
    int64_t var_50 = 1;
    int64_t var_48 = 8;
    int128_t var_40 = {0};
    core::panicking::panic_fmt::he12d0d7468628bb4(&var_58);
    /* no return */
}
