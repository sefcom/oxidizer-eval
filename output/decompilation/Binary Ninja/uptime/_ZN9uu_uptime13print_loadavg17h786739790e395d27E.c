
  int64_t uu_uptime::print_loadavg::h786739790e395d27()

{
    int64_t var_60;
    uucore::features::uptime::get_formatted_loadavg::hf18302e0e984d16a(&var_60);
    
    if (0 + -(var_60))
        return core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h5a97466869852de6(&var_60);
    
    int64_t var_50;
    int64_t var_68 = var_50;
    int128_t var_78 = var_60;
    int128_t* var_48 = &var_78;
    int64_t (* var_40)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* const var_38 = &data_508278;
    int64_t var_30 = 2;
    int64_t var_18 = 0;
    int128_t** var_28 = &var_48;
    int64_t var_20 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_38);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h968af28e0e2a109d(&var_78);
}
