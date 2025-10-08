
  char* forc_crypto::keys::parse_secret::handler::hc911bd93ff9f1e31(char* arg1, int64_t* arg2)

{
    char var_258;
    _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hebc6d31f5bd07116(&var_258, arg2[1], arg2[2]);
    char var_257;
    
    if (var_258 != 1)
    {
        char var_188 = var_257;
        int128_t var_256;
        int128_t var_178_1 = var_256;
        int128_t var_187_1 = var_256;
        int128_t var_310_1;
        int64_t var_300_1;
        int64_t var_408;
        int128_t var_3e8;
        int128_t var_3c8;
        int128_t var_378;
        void var_98;
        
        if (arg2[3] != 1)
        {
            fuel_crypto::secp256::secret::SecretKey::public_key::h92c239beec8670a7(&var_258, 
                &var_188);
            fuel_tx::transaction::types::input::Input::owner::hebfe60385362c439(&var_98, &var_258);
            var_408 = 0;
            int64_t var_3f8_2 = 0;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_258, "addresspeer_idforc-plugins/forc-…", 7);
            int64_t var_3d8_1 = *var_256[0xe];
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
            int64_t var_3b8_1 = *var_256[0xe];
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
            int64_t var_3d8;
            var_3d8 = var_256;
            libp2p_identity::secp256k1::SecretKey::try_from_bytes::h2208239c8347d100(&var_258, 
                &var_3e8);
            int128_t var_2d0;
            core::result::Result$LT$T$C$E$GT$::expect::h276f33466d1d3b2b(&var_2d0, &var_258);
            int128_t var_2b0;
            int128_t var_f0_1 = var_2b0;
            int128_t var_2a0;
            int128_t var_e0_1 = var_2a0;
            int128_t var_290;
            int128_t var_d0_1 = var_290;
            int128_t var_280;
            int128_t var_c0_1 = var_280;
            int128_t var_270;
            int128_t var_b0_1 = var_270;
            int64_t var_260;
            int64_t var_a0_1 = var_260;
            int128_t var_168 = var_2d0;
            int128_t var_2c0;
            int128_t var_158_1 = var_2c0;
            int128_t var_148_1 = var_2b0;
            int128_t var_138_1 = var_2a0;
            int128_t var_128_1 = var_290;
            int128_t var_118_1 = var_280;
            int128_t var_108_1 = var_270;
            int64_t var_f8_1 = var_260;
            memcpy(&var_258, &var_168, 0xd0);
            int64_t var_328_1 = var_260;
            int128_t var_338_1 = var_270;
            int64_t zmm1_3 = var_2a0;
            int128_t var_348_1 = var_280;
            int128_t var_358_1 = var_290;
            var_378 = var_2b0;
            libp2p_identity::peer_id::PeerId::from_public_key::h629ca857ed4c9689(&var_98, &var_378);
            int64_t var_390 = 0;
            int64_t var_380_1 = 0;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_378, "peer_idforc-plugins/forc-crypto/…", 7);
            int64_t var_398_1 = zmm1_3;
            int128_t var_3a8 = var_378;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h1dc51f77ca8ee280(
                &var_408, &var_98);
            serde_json::value::to_value::h85ee9959a652e90e(&var_378, &var_408);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_3c8, &var_378);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
                &var_378, &var_390, &var_3a8, &var_3c8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_378);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_408);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_378, "type    q", 4);
            int64_t var_3f8_1 = zmm1_3;
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
        int128_t var_317;
        *(arg1 + 1) = var_317;
        *(arg1 + 0x10) = *var_310_1[8];
        *(arg1 + 0x18) = var_300_1;
    }
    else
    {
        *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h47e429fa349b8f4b(var_257);
        *arg1 = 6;
    }
    core::ptr::drop_in_place$LT$forc_crypto..keys..parse_secret..Arg$GT$::h3a22f27b3c415df1(arg2);
    return arg1;
}
