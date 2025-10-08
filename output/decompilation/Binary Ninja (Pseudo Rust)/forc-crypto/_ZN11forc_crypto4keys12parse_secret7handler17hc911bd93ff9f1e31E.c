
  fn forc_crypto::keys::parse_secret::handler::hc911bd93ff9f1e31(arg1: *mut i8, arg2: *mut i64) -> *mut i8

{
    let mut var_258: i8;
    _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hebc6d31f5bd07116(&var_258, arg2[1], arg2[2]);
    let var_257: i8;
    
    if var_258 != 1
    {
        let mut var_188: i8 = var_257;
        let var_256: i128;
        let var_178_1: i128 = var_256;
        let var_187_1: i128 = var_256;
        let mut var_310_1: i128;
        let mut var_300_1: i64;
        let mut var_408: i64;
        let mut var_3e8: i128;
        let mut var_3c8: i128;
        let mut var_378: i128;
        let mut var_98: ();
        
        if arg2[3] != 1
        {
            fuel_crypto::secp256::secret::SecretKey::public_key::h92c239beec8670a7(&var_258, 
                &var_188);
            fuel_tx::transaction::types::input::Input::owner::hebfe60385362c439(&var_98, &var_258);
            var_408 = 0;
            let var_3f8_2: i64 = 0;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_258, "addresspeer_idforc-plugins/forc-…", 7);
            let var_3d8_1: i64 = *var_256[0xe];
            var_3e8 = var_258;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb5d1621b153c42fd(
                &var_3c8, &var_98);
            serde_json::value::to_value::h85ee9959a652e90e(&var_258, &var_3c8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_378, &var_258);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_258, &var_408, &var_3e8, &var_378);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_258);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_3c8);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_258, "type    q", 4);
            let var_3b8_1: i64 = *var_256[0xe];
            var_3c8 = var_258;
            var_3e8 = "block-production@ABCDEFGHIJKLMNO…";
            *var_3e8[8] = 0x10;
            serde_json::value::to_value::h9acc37e190130f50(&var_258, &var_3e8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_378, &var_258);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_258, &var_408, &var_3c8, &var_378);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_258);
            var_310_1 = var_408;
            var_300_1 = var_3f8_2;
        }
        else
        {
            var_3e8 = var_257;
            var_3e8 = var_256;
            let mut var_3d8: i64;
            var_3d8 = var_256;
            libp2p_identity::secp256k1::SecretKey::try_from_bytes::h2208239c8347d100(&var_258, 
                &var_3e8);
            let mut var_2d0: i128;
            core::result::Result$LT$T$C$E$GT$::expect::h276f33466d1d3b2b(&var_2d0, &var_258);
            let var_2b0: i128;
            let var_f0_1: i128 = var_2b0;
            let var_2a0: i128;
            let var_e0_1: i128 = var_2a0;
            let var_290: i128;
            let var_d0_1: i128 = var_290;
            let var_280: i128;
            let var_c0_1: i128 = var_280;
            let var_270: i128;
            let var_b0_1: i128 = var_270;
            let var_260: i64;
            let var_a0_1: i64 = var_260;
            let mut var_168: i128 = var_2d0;
            let var_2c0: i128;
            let var_158_1: i128 = var_2c0;
            let var_148_1: i128 = var_2b0;
            let var_138_1: i128 = var_2a0;
            let var_128_1: i128 = var_290;
            let var_118_1: i128 = var_280;
            let var_108_1: i128 = var_270;
            let var_f8_1: i64 = var_260;
            memcpy(&var_258, &var_168, 0xd0);
            let var_328_1: i64 = var_260;
            let var_338_1: i128 = var_270;
            let zmm1_3: i64 = var_2a0;
            let var_348_1: i128 = var_280;
            let var_358_1: i128 = var_290;
            var_378 = var_2b0;
            libp2p_identity::peer_id::PeerId::from_public_key::h629ca857ed4c9689(&var_98, &var_378);
            let mut var_390: i64 = 0;
            let var_380_1: i64 = 0;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_378, "peer_idforc-plugins/forc-crypto/…", 7);
            let var_398_1: i64 = zmm1_3;
            let mut var_3a8: i128 = var_378;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h1dc51f77ca8ee280(
                &var_408, &var_98);
            serde_json::value::to_value::h85ee9959a652e90e(&var_378, &var_408);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_3c8, &var_378);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_378, &var_390, &var_3a8, &var_3c8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_378);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_408);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_378, "type    q", 4);
            let var_3f8_1: i64 = zmm1_3;
            var_408 = var_378;
            var_3a8 = "p2pforc-plugins/forc-crypto/src/…";
            *var_3a8[8] = 3;
            serde_json::value::to_value::h9acc37e190130f50(&var_378, &var_3a8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_3c8, &var_378);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_378, &var_390, &var_408, &var_3c8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_378);
            var_310_1 = var_390;
            var_300_1 = var_380_1;
            core::ptr::drop_in_place$LT$libp2p_identity..keypair..Keypair$GT$::hcc350d790208f723(
                &var_258);
        }
        *arg1 = 5;
        let var_317: i128;
        *arg1.byte_offset(1) = var_317;
        *arg1.byte_offset(0x10) = *var_310_1[8];
        *arg1.byte_offset(0x18) = var_300_1;
    }
    else
    {
        *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h47e429fa349b8f4b(var_257);
        *arg1 = 6;
    }
    core::ptr::drop_in_place$LT$forc_crypto..keys..parse_secret..Arg$GT$::h3a22f27b3c415df1(arg2);
    arg1
}
