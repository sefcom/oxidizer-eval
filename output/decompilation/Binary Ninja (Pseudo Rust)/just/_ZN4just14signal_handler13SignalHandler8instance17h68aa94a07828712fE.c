
  fn just::signal_handler::SignalHandler::instance::h68aa94a07828712f() -> i64

{
    let mut var_d8: i32;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hd68f6780826aed7a(&var_d8);
    let result: i64;
    
    if var_d8 != 1
    {
        return result;
    }
    
    let mut result_1: i64 = result;
    let var_c8: i8;
    let var_110: i8 = var_c8;
    let mut var_108: *mut i64 = &result_1;
    let mut var_100: fn(arg1: i64, arg2: i64) -> i64 = _$LT$std..sync..poison..PoisonError$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he493b30561bc5ee7;
    let mut var_98: *mut *mut [i8; 0xea] = &data_830ef0;
    let mut var_90: i64 = 1;
    let var_78: i64 = 0;
    let var_88: *mut *mut i64 = &var_108;
    let var_80: i64 = 1;
    let mut var_b0: i128;
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_b0, 0, 
        &just::signal_handler::SignalHandler::instance::INSTANCE::h971c55eb62d403de, &var_98);
    var_90 = var_b0;
    let var_a0: i64;
    let var_80_1: i64 = var_a0;
    var_98 = 0x1d;
    var_100 = 0;
    var_108 = nullptr;
    var_100 = 0xa0000000a;
    let var_f7: i8 = 1;
    let mut var_20: ();
    just::color::Color::stderr::h04afff4548ac818e(&var_20, &var_108);
    let mut var_30: *const *mut *mut [i8; 0xea] = &var_98;
    let var_28: *mut *mut c_void = &data_830f00;
    let mut var_c0: *mut *const *mut *mut [i8; 0xea] = &var_30;
    let var_b8: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
    var_108 = &data_82dbd8;
    let var_100_1: i64 = 2;
    let var_e8: i64 = 0;
    let var_f8: *mut *mut *const *mut *mut [i8; 0xea] = &var_c0;
    let var_f0: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
    core::ptr::drop_in_place$LT$just..error..Error$GT$::ha62e3e0ecfcf56b5(&var_98);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
