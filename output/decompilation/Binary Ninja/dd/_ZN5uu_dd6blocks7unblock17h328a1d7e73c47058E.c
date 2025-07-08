
  int64_t uu_dd::blocks::unblock::h328a1d7e73c47058(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    void** const var_48;
    
    if (!arg4)
    {
        var_48 = &data_561910;
        int64_t var_40_1 = 1;
        int64_t var_38_1 = 8;
        int128_t var_30 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
        /* no return */
    }
    
    int64_t var_18 = arg2;
    int64_t var_10 = arg3;
    int64_t var_8 = arg4;
    var_48 = nullptr;
    int64_t var_40 = 1;
    int64_t var_38 = 0;
    return core::iter::traits::iterator::Iterator::fold::h2b84e305e1d72edf(arg1, &var_18, &var_48);
}
