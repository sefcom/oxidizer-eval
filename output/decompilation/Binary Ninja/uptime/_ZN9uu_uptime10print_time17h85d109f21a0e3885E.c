
  int64_t uu_uptime::print_time::h85d109f21a0e3885()

{
    void var_20;
    uucore::features::uptime::get_formatted_time::hdb71870ea10de290(&var_20);
    void* var_60 = &var_20;
    int64_t (* var_58)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    char const (** const var_50)[0x66] = &data_5082f0;
    int64_t var_48 = 2;
    int64_t var_30 = 0;
    void** var_40 = &var_60;
    int64_t var_38 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h968af28e0e2a109d(&var_20);
}
