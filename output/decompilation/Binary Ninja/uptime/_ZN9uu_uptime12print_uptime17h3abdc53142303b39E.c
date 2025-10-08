
  int64_t uu_uptime::print_uptime::h3abdc53142303b39(int64_t arg1)

{
    int64_t var_60;
    uucore::features::uptime::get_formatted_uptime::hb339f4077851a9d5(&var_60, arg1);
    int64_t rcx = var_60;
    int64_t result;
    
    if (-(rcx) == -0x8000000000000000)
        return result;
    
    var_60 = rcx;
    int64_t result_1 = result;
    int64_t var_50;
    int64_t var_50_1 = var_50;
    int64_t* var_48 = &var_60;
    int64_t (* var_40_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    char const (** const var_38)[0x4] = &data_508310;
    int64_t var_30_1 = 2;
    int64_t var_18_1 = 0;
    int64_t** var_28_1 = &var_48;
    int64_t var_20_1 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_38);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h968af28e0e2a109d(&var_60);
    return 0;
}
