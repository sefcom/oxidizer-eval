
  fn forc_crypto::keys::new_key::handler::h9c4194e818a0987d(arg1: *mut i8, arg2: i32) -> *mut i8

{
    let mut var_198: ();
    rand_core::SeedableRng::from_entropy::h52b795ce180600f2(&var_198);
    let mut var_460: i128;
    secp256k1::key::SecretKey::new::h24bcd7daaece4c34(&var_460, &var_198);
    let mut var_318: i128;
    _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..convert..From$LT$secp256k1..key..SecretKey$GT$$GT$::from::h2fedde1aa26a106b(&var_318, &var_460);
    let mut var_1d8: ();
    fuel_crypto::secp256::secret::SecretKey::public_key::h92c239beec8670a7(&var_1d8, &var_318);
    let mut var_478: ();
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h88293082a2027faa(&var_478, 
        &var_318);
    let mut var_490: i128;
    let mut var_480: i64;
    let mut var_588: *const i8;
    let mut var_568: i128;
    let mut var_548: i128;
    let mut var_4e8: i64;
    let mut var_228: ();
    
    if arg2 == 0
    {
        fuel_tx::transaction::types::input::Input::owner::hebfe60385362c439(&var_228, &var_1d8);
        var_4e8 = 0;
        let var_4d8_1: i64 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_460, "secretaddresspeer_idforc-plugins…", 6);
        let var_450: i64;
        let var_558_1: i64 = var_450;
        var_568 = var_460;
        serde_json::value::to_value::h85ee9959a652e90e(&var_460, &var_478);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_548, &var_460);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_460, &var_4e8, &var_568, &var_548);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_460);
        let rdx_9: u64 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_460, "addresspeer_idforc-plugins/forc-…", 7);
        let var_558_2: i64 = var_450;
        var_568 = var_460;
        serde_json::value::to_value::he048be58e96999eb(&var_460, &var_228, rdx_9);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_548, &var_460);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_460, &var_4e8, &var_568, &var_548);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_460);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_460, "type    q", 4);
        let var_558_3: i64 = var_450;
        var_568 = var_460;
        var_588 = "block-production@ABCDEFGHIJKLMNO…";
        let var_580_1: i64 = 0x10;
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
        let mut var_4d8: i64;
        let var_308: i128;
        var_4d8 = var_308;
        var_4e8 = var_318;
        libp2p_identity::secp256k1::SecretKey::try_from_bytes::h2208239c8347d100(&var_460, 
            &var_4e8);
        let mut var_390: i128;
        core::result::Result$LT$T$C$E$GT$::expect::h276f33466d1d3b2b(&var_390, &var_460);
        let var_370: i128;
        let var_280_1: i128 = var_370;
        let var_360: i128;
        let var_270_1: i128 = var_360;
        let var_350: i128;
        let var_260_1: i128 = var_350;
        let var_340: i128;
        let var_250_1: i128 = var_340;
        let var_330: i128;
        let var_240_1: i128 = var_330;
        let var_320: i64;
        let var_230_1: i64 = var_320;
        let mut var_2f8: i128 = var_390;
        let var_380: i128;
        let var_2e8_1: i128 = var_380;
        let var_2d8_1: i128 = var_370;
        let var_2c8_1: i128 = var_360;
        let var_2b8_1: i128 = var_350;
        let var_2a8_1: i128 = var_340;
        let var_298_1: i128 = var_330;
        let var_288_1: i64 = var_320;
        memcpy(&var_460, &var_2f8, 0xd0);
        let var_4f8_1: i64 = var_320;
        let var_508_1: i128 = var_330;
        let zmm1_3: i64 = var_360;
        let var_518_1: i128 = var_340;
        let var_528_1: i128 = var_350;
        var_548 = var_370;
        libp2p_identity::peer_id::PeerId::from_public_key::h629ca857ed4c9689(&var_228, &var_548);
        let mut var_4b0: i64 = 0;
        let var_4a0_1: i64 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_548, "secretaddresspeer_idforc-plugins…", 6);
        let var_578_1: i64 = zmm1_3;
        var_588 = var_548;
        serde_json::value::to_value::h85ee9959a652e90e(&var_548, &var_478);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_568, &var_548);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_548, &var_4b0, &var_588, &var_568);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_548);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_548, "peer_idforc-plugins/forc-crypto/…", 7);
        let var_4b8_1: i64 = zmm1_3;
        let mut var_4c8: i128 = var_548;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h1dc51f77ca8ee280(
            &var_588, &var_228);
        serde_json::value::to_value::h85ee9959a652e90e(&var_548, &var_588);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_568, &var_548);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_548, &var_4b0, &var_4c8, &var_568);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_548);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_588);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_548, "type    q", 4);
        let var_578_2: i64 = zmm1_3;
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
    let var_497: i128;
    *arg1.byte_offset(1) = var_497;
    *arg1.byte_offset(0x10) = *var_490[8];
    *arg1.byte_offset(0x18) = var_480;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_478);
    arg1
}
