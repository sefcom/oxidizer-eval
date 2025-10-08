
  fn just::function::sha256::h31ab0b00f8d0281f(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut var_b0: i128;
    _$LT$digest..core_api..wrapper..CoreWrapper$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h9a28c815d5f91f76(&var_b0);
    _$LT$D$u20$as$u20$digest..digest..Digest$GT$::update::he6f5cd09ccc42569(&var_b0, arg3);
    let var_50: i128;
    let var_c8: i128 = var_50;
    let var_60: i128;
    let var_d8: i128 = var_60;
    let var_70: i128;
    let var_e8: i128 = var_70;
    let var_80: i128;
    let var_f8: i128 = var_80;
    let var_90: i128;
    let mut var_108: i128 = var_90;
    let var_a0: i128;
    let mut var_118: i128 = var_a0;
    let mut var_128: i128 = var_b0;
    let mut var_40: ();
    let rdx_1: u64 = digest::FixedOutput::finalize_fixed::hb4d87fe511f17e43(&var_40, &var_128);
    let mut var_138: *mut c_void = &var_40;
    let var_130: fn(arg1: i64, arg2: *mut i64) -> i64 = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::hce58fbd6baa0c32b;
    var_128 = &data_465db0;
    *var_128[8] = 1;
    var_108 = 0;
    var_118 = &var_138;
    *var_118[8] = 1;
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx_1, &var_128);
    *arg1 = 0;
    arg1
}
