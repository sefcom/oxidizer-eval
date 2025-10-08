
  fn fuel_core_keygen::new_key::h5166178937848b2b(arg1: *mut i64, arg2: i32) -> *mut i64

{
    let mut var_168: ();
    rand_core::SeedableRng::from_entropy::h0fa81f42230455b8(&var_168);
    let mut var_290: i64;
    secp256k1::key::SecretKey::new::hf68fa4ce3361de5c(&var_290, &var_168);
    let mut var_568: i128;
    _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..convert..From$LT$secp256k1..key..SecretKey$GT$$GT$::from::h3a8aa694ac185cf1(&var_568, &var_290);
    let mut var_1a8: ();
    fuel_crypto::secp256::secret::SecretKey::public_key::h6444f835827a51e7(&var_1a8, &var_568);
    let mut var_548: i128;
    let mut var_538: i128;
    let mut var_488: i64;
    let mut var_480: i128;
    let mut var_470: i128;
    let mut var_460: i128;
    let mut var_450: i128;
    let mut rax_2: i8;
    let mut rcx: i8;
    let mut rdx_1: i64;
    let var_558: i128;
    
    if arg2 == 0
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
        let var_498_1: i128 = var_558;
        let mut var_4a8: i128 = var_568;
        libp2p_identity::secp256k1::SecretKey::try_from_bytes::h5ccaf385d50131d1(&var_290, 
            &var_4a8);
        let mut var_520: i128;
        core::result::Result$LT$T$C$E$GT$::expect::he0609b2caa0718d7(&var_520, &var_290);
        let var_500: i128;
        let var_2f0_1: i128 = var_500;
        let var_4f0: i128;
        let var_2e0_1: i128 = var_4f0;
        let var_4e0: i128;
        let var_2d0_1: i128 = var_4e0;
        let var_4d0: i128;
        let var_2c0_1: i128 = var_4d0;
        let var_4c0: i128;
        let var_2b0_1: i128 = var_4c0;
        let var_4b0: i64;
        let var_2a0_1: i64 = var_4b0;
        let mut var_368: i128 = var_520;
        let var_510: i128;
        let var_358_1: i128 = var_510;
        let var_348_1: i128 = var_500;
        let var_338_1: i128 = var_4f0;
        let var_328_1: i128 = var_4e0;
        let var_318_1: i128 = var_4d0;
        let var_308_1: i128 = var_4c0;
        let var_2f8_1: i64 = var_4b0;
        var_290 = 1;
        let mut var_288: ();
        memcpy(&var_288, &var_368, 0xd0);
        let var_430_1: i64 = var_4b0;
        let var_440_1: i128 = var_4c0;
        var_450 = var_4d0;
        var_460 = var_4e0;
        var_470 = var_4f0;
        var_480 = var_500;
        var_488 = 1;
        let mut var_3b8: i128;
        libp2p_identity::peer_id::PeerId::from_public_key::h94fa6fde28b5349d(&var_3b8, &var_488);
        var_488 = var_3b8;
        let var_3a8: i128;
        var_480 = var_3a8;
        let var_398: i128;
        var_470 = var_398;
        let var_388: i128;
        var_460 = var_388;
        let var_378: i128;
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
    *arg1.byte_offset(8) = var_488;
    *arg1.byte_offset(0x18) = var_480;
    *arg1.byte_offset(0x28) = var_470;
    *arg1.byte_offset(0x38) = var_460;
    *arg1.byte_offset(0x48) = var_450;
    *arg1.byte_offset(0x58) = var_548;
    *arg1.byte_offset(0x68) = var_538;
    arg1[0xf] = rcx;
    *arg1.byte_offset(0x79) = var_290;
    let var_280: i128;
    *arg1.byte_offset(0x89) = var_280;
    *arg1.byte_offset(0x99) = rax_2;
    arg1
}
