
  int64_t just::signal_handler::SignalHandler::instance::h68aa94a07828712f()

{
    int32_t var_d8;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hd68f6780826aed7a(&var_d8);
    int64_t result;
    
    if (var_d8 != 1)
        return result;
    
    int64_t result_1 = result;
    char var_c8;
    char var_110 = var_c8;
    int64_t* var_108 = &result_1;
    int64_t (* var_100)(int64_t arg1, int64_t arg2) = _$LT$std..sync..poison..PoisonError$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he493b30561bc5ee7;
    char const (** const var_98)[0xea] = &data_830ef0;
    int64_t var_90 = 1;
    int64_t var_78 = 0;
    int64_t** var_88 = &var_108;
    int64_t var_80 = 1;
    int128_t var_b0;
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_b0, 0, 
        &just::signal_handler::SignalHandler::instance::INSTANCE::h971c55eb62d403de, &var_98);
    var_90 = var_b0;
    int64_t var_a0;
    int64_t var_80_1 = var_a0;
    var_98 = 0x1d;
    var_100 = 0;
    var_108 = nullptr;
    var_100 = 0xa0000000a;
    char var_f7 = 1;
    void var_20;
    just::color::Color::stderr::h04afff4548ac818e(&var_20, &var_108);
    char const (** const* var_30)[0xea] = &var_98;
    void** const var_28 = &data_830f00;
    char const (** const** var_c0)[0xea] = &var_30;
    int64_t (* var_b8)(int64_t* arg1, int64_t arg2) =
        _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
    var_108 = &data_82dbd8;
    int64_t var_100_1 = 2;
    int64_t var_e8 = 0;
    char const (** const*** var_f8)[0xea] = &var_c0;
    int64_t var_f0 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
    core::ptr::drop_in_place$LT$just..error..Error$GT$::ha62e3e0ecfcf56b5(&var_98);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
