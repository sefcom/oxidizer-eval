
  int64_t* uu_dd::blocks::unblock::h97938cdacee81528(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    void** const var_48;
    
    if (!arg4)
    {
        var_48 = &data_53d1a0;
        int64_t var_40_1 = 1;
        int64_t var_38_1 = 8;
        int128_t var_30 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_48);
        /* no return */
    }
    
    int64_t var_18 = arg2;
    int64_t var_10 = arg3;
    int64_t var_8 = arg4;
    var_48 = nullptr;
    int64_t var_40 = 1;
    int64_t var_38 = 0;
    return core::iter::traits::iterator::Iterator::fold::h0d9629040f86e3f3(arg1, &var_18, &var_48);
}
