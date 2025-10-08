
  int64_t firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..RunWithoutApiError$GT$::fmt::h57a765e44097ba92(char* arg1, int64_t arg2, int64_t arg3)

{
    void** var_40;
    void** const rax;
    void* var_48;
    
    if (*arg1 != 0x1c)
    {
        var_48 = arg1;
        var_40 = &var_48;
        int64_t (* var_38_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e3a3e8366703feb;
        rax = &data_7a4398;
    }
    else
    {
        var_48 = &arg1[1];
        var_40 = &var_48;
        int64_t (* var_38)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h0d8937d31288cb39;
        rax = &data_7a4668;
    }
    void** const var_30 = rax;
    int64_t var_28 = 1;
    int64_t var_10 = 0;
    void*** var_20 = &var_40;
    int64_t var_18 = 1;
    return core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(arg2, arg3, &var_30);
}
