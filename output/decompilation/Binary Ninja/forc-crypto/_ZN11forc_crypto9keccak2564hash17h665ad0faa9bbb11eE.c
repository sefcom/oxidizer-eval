
  int64_t forc_crypto::keccak256::hash::h665ad0faa9bbb11e(int128_t* arg1, int128_t* arg2)

{
    void var_180;
    _$LT$digest..core_api..wrapper..CoreWrapper$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::ha61840d03e3dc2b2(&var_180);
    void var_2e0;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h6aa5f469e3a8dd5c(&var_2e0, arg2);
    _$LT$D$u20$as$u20$digest..digest..Digest$GT$::update::h17626cfa664d9508(&var_180, &var_2e0);
    memcpy(&var_2e0, &var_180, 0x160);
    int128_t var_300;
    digest::FixedOutput::finalize_fixed::hb894065a9b1be675(&var_300, &var_2e0);
    void var_318;
    hex::encode::h45bdfa9de18d30b7(&var_318, &var_300);
    serde_json::value::to_value::hbca4fdadd9c88b9d(&var_2e0, &var_318);
    core::result::Result$LT$T$C$E$GT$::unwrap::h0e8745fea5c699d4(&var_300, &var_2e0);
    int128_t zmm0 = var_300;
    int128_t var_2f0;
    arg1[1] = var_2f0;
    *arg1 = zmm0;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_318);
}
