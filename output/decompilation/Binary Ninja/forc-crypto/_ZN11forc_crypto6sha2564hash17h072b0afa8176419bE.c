
  int64_t forc_crypto::sha256::hash::h072b0afa8176419b(int128_t* arg1, int128_t* arg2)

{
    int128_t var_138;
    _$LT$digest..core_api..wrapper..CoreWrapper$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h8df0ff4710d81c21(&var_138);
    int128_t var_c8 = var_138;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h6aa5f469e3a8dd5c(&var_138, arg2);
    _$LT$D$u20$as$u20$digest..digest..Digest$GT$::update::h54e2397ad2bb0977(&var_c8, &var_138);
    int128_t var_d8;
    int128_t var_d8_1 = var_d8;
    int128_t var_e8;
    int128_t var_e8_1 = var_e8;
    int128_t var_f8;
    int128_t var_f8_1 = var_f8;
    int128_t var_108;
    int128_t var_108_1 = var_108;
    int128_t var_118;
    int128_t var_118_1 = var_118;
    int128_t var_128;
    int128_t var_128_1 = var_128;
    var_138 = var_c8;
    int128_t var_38;
    fuel_crypto::hasher::Hasher::finalize::h0ee816244d60ad9b(&var_38, &var_138);
    void var_50;
    hex::encode::h45bdfa9de18d30b7(&var_50, &var_38);
    serde_json::value::to_value::hbca4fdadd9c88b9d(&var_138, &var_50);
    core::result::Result$LT$T$C$E$GT$::unwrap::h0e8745fea5c699d4(&var_38, &var_138);
    int128_t zmm0_2 = var_38;
    int128_t var_28;
    arg1[1] = var_28;
    *arg1 = zmm0_2;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_50);
}
