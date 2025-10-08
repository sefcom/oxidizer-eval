
  int64_t* just::function::sha256::h31ab0b00f8d0281f(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int128_t var_b0;
    _$LT$digest..core_api..wrapper..CoreWrapper$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h9a28c815d5f91f76(&var_b0);
    _$LT$D$u20$as$u20$digest..digest..Digest$GT$::update::he6f5cd09ccc42569(&var_b0, arg3);
    int128_t var_50;
    int128_t var_c8 = var_50;
    int128_t var_60;
    int128_t var_d8 = var_60;
    int128_t var_70;
    int128_t var_e8 = var_70;
    int128_t var_80;
    int128_t var_f8 = var_80;
    int128_t var_90;
    int128_t var_108 = var_90;
    int128_t var_a0;
    int128_t var_118 = var_a0;
    int128_t var_128 = var_b0;
    void var_40;
    uint64_t rdx_1 = digest::FixedOutput::finalize_fixed::hb4d87fe511f17e43(&var_40, &var_128);
    void* var_138 = &var_40;
    int64_t (* var_130)(int64_t arg1, int64_t* arg2) = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::hce58fbd6baa0c32b;
    var_128 = &data_465db0;
    *var_128[8] = 1;
    var_108 = 0;
    var_118 = &var_138;
    *var_118[8] = 1;
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx_1, &var_128);
    *arg1 = 0;
    return arg1;
}
