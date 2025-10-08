
  char* forc_crypto::keys::new_key::handler::h9c4194e818a0987d(char* arg1, int32_t arg2)

{
    void var_198;
    rand_core::SeedableRng::from_entropy::h52b795ce180600f2(&var_198);
    int128_t var_460;
    secp256k1::key::SecretKey::new::h24bcd7daaece4c34(&var_460, &var_198);
    int128_t var_318;
    _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..convert..From$LT$secp256k1..key..SecretKey$GT$$GT$::from::h2fedde1aa26a106b(&var_318, &var_460);
    void var_1d8;
    fuel_crypto::secp256::secret::SecretKey::public_key::h92c239beec8670a7(&var_1d8, &var_318);
    void var_478;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h88293082a2027faa(&var_478, 
        &var_318);
    int128_t var_490;
    int64_t var_480;
    char const* const var_588;
    int128_t var_568;
    int128_t var_548;
    int64_t var_4e8;
    void var_228;
    
    if (!arg2)
    {
        fuel_tx::transaction::types::input::Input::owner::hebfe60385362c439(&var_228, &var_1d8);
        var_4e8 = 0;
        int64_t var_4d8_1 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_460, "secretaddresspeer_idforc-plugins…", 6);
        int64_t var_450;
        int64_t var_558_1 = var_450;
        var_568 = var_460;
        serde_json::value::to_value::h85ee9959a652e90e(&var_460, &var_478);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_548, &var_460);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_460, &var_4e8, &var_568, &var_548);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_460);
        uint64_t rdx_9 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_460, "addresspeer_idforc-plugins/forc-…", 7);
        int64_t var_558_2 = var_450;
        var_568 = var_460;
        serde_json::value::to_value::he048be58e96999eb(&var_460, &var_228, rdx_9);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_548, &var_460);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_460, &var_4e8, &var_568, &var_548);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_460);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_460, "type    q", 4);
        int64_t var_558_3 = var_450;
        var_568 = var_460;
        var_588 = "block-production@ABCDEFGHIJKLMNO…";
        int64_t var_580_1 = 0x10;
        serde_json::value::to_value::h9acc37e190130f50(&var_460, &var_588);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_548, &var_460);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_460, &var_4e8, &var_568, &var_548);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_460);
        var_490 = var_4e8;
        var_480 = var_4d8_1;
    }
    else
    {
        int64_t var_4d8;
        int128_t var_308;
        var_4d8 = var_308;
        var_4e8 = var_318;
        libp2p_identity::secp256k1::SecretKey::try_from_bytes::h2208239c8347d100(&var_460, 
            &var_4e8);
        int128_t var_390;
        core::result::Result$LT$T$C$E$GT$::expect::h276f33466d1d3b2b(&var_390, &var_460);
        int128_t var_370;
        int128_t var_280_1 = var_370;
        int128_t var_360;
        int128_t var_270_1 = var_360;
        int128_t var_350;
        int128_t var_260_1 = var_350;
        int128_t var_340;
        int128_t var_250_1 = var_340;
        int128_t var_330;
        int128_t var_240_1 = var_330;
        int64_t var_320;
        int64_t var_230_1 = var_320;
        int128_t var_2f8 = var_390;
        int128_t var_380;
        int128_t var_2e8_1 = var_380;
        int128_t var_2d8_1 = var_370;
        int128_t var_2c8_1 = var_360;
        int128_t var_2b8_1 = var_350;
        int128_t var_2a8_1 = var_340;
        int128_t var_298_1 = var_330;
        int64_t var_288_1 = var_320;
        memcpy(&var_460, &var_2f8, 0xd0);
        int64_t var_4f8_1 = var_320;
        int128_t var_508_1 = var_330;
        int64_t zmm1_3 = var_360;
        int128_t var_518_1 = var_340;
        int128_t var_528_1 = var_350;
        var_548 = var_370;
        libp2p_identity::peer_id::PeerId::from_public_key::h629ca857ed4c9689(&var_228, &var_548);
        int64_t var_4b0 = 0;
        int64_t var_4a0_1 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_548, "secretaddresspeer_idforc-plugins…", 6);
        int64_t var_578_1 = zmm1_3;
        var_588 = var_548;
        serde_json::value::to_value::h85ee9959a652e90e(&var_548, &var_478);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_568, &var_548);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_548, &var_4b0, &var_588, &var_568);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_548);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_548, "peer_idforc-plugins/forc-crypto/…", 7);
        int64_t var_4b8_1 = zmm1_3;
        int128_t var_4c8 = var_548;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h1dc51f77ca8ee280(
            &var_588, &var_228);
        serde_json::value::to_value::h85ee9959a652e90e(&var_548, &var_588);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_568, &var_548);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_548, &var_4b0, &var_4c8, &var_568);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_548);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_588);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_548, "type    q", 4);
        int64_t var_578_2 = zmm1_3;
        var_588 = var_548;
        var_4c8 = "p2pforc-plugins/forc-crypto/src/…";
        *var_4c8[8] = 3;
        serde_json::value::to_value::h9acc37e190130f50(&var_548, &var_4c8);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_568, &var_548);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_548, &var_4b0, &var_588, &var_568);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_548);
        var_490 = var_4b0;
        var_480 = var_4a0_1;
        core::ptr::drop_in_place$LT$libp2p_identity..keypair..Keypair$GT$::hcc350d790208f723(
            &var_460);
    }
    *arg1 = 5;
    int128_t var_497;
    *(arg1 + 1) = var_497;
    *(arg1 + 0x10) = *var_490[8];
    *(arg1 + 0x18) = var_480;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_478);
    return arg1;
}
