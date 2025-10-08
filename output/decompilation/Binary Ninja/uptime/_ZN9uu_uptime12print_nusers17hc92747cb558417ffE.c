
  int64_t uu_uptime::print_nusers::hc92747cb558417ff(char arg1)

{
    int64_t rsi;
    
    if (!(arg1 & 1))
        rsi = uucore::features::uptime::get_nusers::h1db0d77211e135b8();
    
    void var_20;
    uucore::features::uptime::format_nusers::h076f2c9c059b6e41(&var_20, rsi);
    void* var_60 = &var_20;
    int64_t (* var_58)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* const var_50 = &data_5082d0;
    int64_t var_48 = 2;
    int64_t var_30 = 0;
    void** var_40 = &var_60;
    int64_t var_38 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h968af28e0e2a109d(&var_20);
}
