
  int64_t* fuel_core_keygen::new_key::h5166178937848b2b(int64_t* arg1, int32_t arg2)

{
    void var_168;
    rand_core::SeedableRng::from_entropy::h0fa81f42230455b8(&var_168);
    int64_t var_290;
    secp256k1::key::SecretKey::new::hf68fa4ce3361de5c(&var_290, &var_168);
    int128_t var_568;
    _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..convert..From$LT$secp256k1..key..SecretKey$GT$$GT$::from::h3a8aa694ac185cf1(&var_568, &var_290);
    void var_1a8;
    fuel_crypto::secp256::secret::SecretKey::public_key::h6444f835827a51e7(&var_1a8, &var_568);
    int128_t var_548;
    int128_t var_538;
    int64_t var_488;
    int128_t var_480;
    int128_t var_470;
    int128_t var_460;
    int128_t var_450;
    char rax_2;
    char rcx;
    int64_t rdx_1;
    int128_t var_558;
    
    if (!arg2)
    {
        fuel_tx::transaction::types::input::Input::owner::hd58b6d4924e52055(&var_290, &var_1a8);
        var_538 = var_558;
        var_548 = var_568;
        rcx = 1;
        rdx_1 = 0;
        rax_2 = 0;
    }
    else
    {
        int128_t var_498_1 = var_558;
        int128_t var_4a8 = var_568;
        libp2p_identity::secp256k1::SecretKey::try_from_bytes::h5ccaf385d50131d1(&var_290, 
            &var_4a8);
        int128_t var_520;
        core::result::Result$LT$T$C$E$GT$::expect::he0609b2caa0718d7(&var_520, &var_290);
        int128_t var_500;
        int128_t var_2f0_1 = var_500;
        int128_t var_4f0;
        int128_t var_2e0_1 = var_4f0;
        int128_t var_4e0;
        int128_t var_2d0_1 = var_4e0;
        int128_t var_4d0;
        int128_t var_2c0_1 = var_4d0;
        int128_t var_4c0;
        int128_t var_2b0_1 = var_4c0;
        int64_t var_4b0;
        int64_t var_2a0_1 = var_4b0;
        int128_t var_368 = var_520;
        int128_t var_510;
        int128_t var_358_1 = var_510;
        int128_t var_348_1 = var_500;
        int128_t var_338_1 = var_4f0;
        int128_t var_328_1 = var_4e0;
        int128_t var_318_1 = var_4d0;
        int128_t var_308_1 = var_4c0;
        int64_t var_2f8_1 = var_4b0;
        var_290 = 1;
        void var_288;
        memcpy(&var_288, &var_368, 0xd0);
        int64_t var_430_1 = var_4b0;
        int128_t var_440_1 = var_4c0;
        var_450 = var_4d0;
        var_460 = var_4e0;
        var_470 = var_4f0;
        var_480 = var_500;
        var_488 = 1;
        int128_t var_3b8;
        libp2p_identity::peer_id::PeerId::from_public_key::h94fa6fde28b5349d(&var_3b8, &var_488);
        var_488 = var_3b8;
        int128_t var_3a8;
        var_480 = var_3a8;
        int128_t var_398;
        var_470 = var_398;
        int128_t var_388;
        var_460 = var_388;
        int128_t var_378;
        var_450 = var_378;
        var_548 = var_568;
        var_538 = var_558;
        core::ptr::drop_in_place$LT$libp2p_identity..keypair..Keypair$GT$::h0012da1cbd2c047e(
            &var_290);
        rax_2 = 1;
        rdx_1 = 1;
        rcx = 0;
    }
    *arg1 = rdx_1;
    *(arg1 + 8) = var_488;
    *(arg1 + 0x18) = var_480;
    *(arg1 + 0x28) = var_470;
    *(arg1 + 0x38) = var_460;
    *(arg1 + 0x48) = var_450;
    *(arg1 + 0x58) = var_548;
    *(arg1 + 0x68) = var_538;
    arg1[0xf] = rcx;
    *(arg1 + 0x79) = var_290;
    int128_t var_280;
    *(arg1 + 0x89) = var_280;
    *(arg1 + 0x99) = rax_2;
    return arg1;
}
