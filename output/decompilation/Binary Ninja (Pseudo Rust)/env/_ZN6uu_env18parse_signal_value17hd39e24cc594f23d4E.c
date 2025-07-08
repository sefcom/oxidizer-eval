
  fn uu_env::parse_signal_value::hd39e24cc594f23d4(arg1: *mut *mut i128, arg2: *mut i64, arg3: size_t) -> i64

{
    let mut var_88: ();
    alloc::str::_$LT$impl$u20$str$GT$::to_uppercase::h63d26fcff35cb62e(&var_88, arg2, arg3);
    let var_80: *mut i64;
    let var_78: size_t;
    let mut rax: i64;
    let mut rdx: i64;
    rax = uucore::features::signals::signal_by_name_or_value::hc8db721c3f0fdbdd(var_80, var_78);
    let mut var_60: i64 = 0;
    let var_58: *mut i64 = arg2;
    let var_50: size_t = arg3;
    let var_48: i8 = 1;
    let mut var_70: *mut i64 = &var_60;
    let var_68: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    let mut var_b8: *mut c_void = &data_5488b0;
    let var_b0: i64 = 2;
    let var_98: i64 = 0;
    let var_a8: *mut *mut i64 = &var_70;
    let mut var_a0: i64 = 1;
    let mut var_40: i128;
    core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_40, &var_b8);
    var_a0 = 0x7d;
    var_b8 = var_40;
    let var_30: i64;
    let var_a8_1: i64 = var_30;
    let rax_2: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&var_b8);
    
    if rax == 0 || rdx == 0
    {
        *arg1 = rax_2;
        arg1[1] = &data_548908;
    }
    else
    {
        arg1[1] = rdx;
        *arg1 = nullptr;
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h327fc43f13d631eb(rax_2);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&var_88)
}
