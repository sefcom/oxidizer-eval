
  int64_t* fuel_core_keygen::parse_secret::h9a30821daaaf76fe(int64_t* arg1, char arg2, int64_t arg3, int64_t arg4)

{
    char var_368;
    _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h91d78238daec98ac(&var_368, arg3, arg4);
    void** const var_100;
    int64_t var_f8;
    
    if (var_368 == 1)
    {
        var_100 = &data_544da0;
        var_f8 = 1;
        int64_t var_f0_1 = 8;
        int128_t var_e8_1 = {0};
        arg1[1] = anyhow::__private::format_err::h09b344f6a077676a(&var_100);
        *arg1 = 2;
    }
    else
    {
        int32_t var_367;
        int32_t var_3a5_1 = var_367;
        int32_t var_3a8 = var_367;
        int64_t var_360;
        int64_t var_3a1_1 = var_360;
        char var_348;
        char var_389_1 = var_348;
        int128_t var_358;
        int128_t var_399_1 = var_358;
        int32_t var_3e8;
        int128_t var_3d9;
        int128_t var_340;
        int128_t var_330;
        char rax_5;
        char rcx_5;
        int64_t rdx_4;
        
        if (!arg2)
        {
            fuel_crypto::secp256::secret::SecretKey::public_key::h6444f835827a51e7(&var_100, 
                &var_3a8);
            fuel_tx::transaction::types::input::Input::owner::hd58b6d4924e52055(&var_3e8, &var_100);
            rcx_5 = 1;
            rax_5 = 0;
            rdx_4 = 0;
        }
        else
        {
            int32_t var_3e5_1 = var_367;
            var_3e8 = var_367;
            int64_t var_3e1_1 = var_360;
            var_3d9 = var_358;
            char var_3c9_1 = var_348;
            libp2p_identity::secp256k1::SecretKey::try_from_bytes::h5ccaf385d50131d1(&var_100, 
                &var_3e8);
            int128_t var_2a0;
            core::result::Result$LT$T$C$E$GT$::expect::he0609b2caa0718d7(&var_2a0, &var_100);
            int128_t var_280;
            int128_t var_160_1 = var_280;
            int128_t var_270;
            int128_t var_150_1 = var_270;
            int128_t var_260;
            int128_t var_140_1 = var_260;
            int128_t var_250;
            int128_t var_130_1 = var_250;
            int128_t var_240;
            int128_t var_120_1 = var_240;
            int64_t var_230;
            int64_t var_110_1 = var_230;
            int128_t var_1d8 = var_2a0;
            int128_t var_290;
            int128_t var_1c8_1 = var_290;
            int128_t var_1b8_1 = var_280;
            int128_t var_1a8_1 = var_270;
            int128_t var_198_1 = var_260;
            int128_t var_188_1 = var_250;
            int128_t var_178_1 = var_240;
            int64_t var_168_1 = var_230;
            var_100 = 1;
            memcpy(&var_f8, &var_1d8, 0xd0);
            int64_t var_310_1 = var_230;
            int128_t var_320_1 = var_240;
            var_330 = var_250;
            var_340 = var_260;
            var_358 = var_270;
            var_360 = var_280;
            var_368 = 1;
            int128_t var_228;
            libp2p_identity::peer_id::PeerId::from_public_key::h94fa6fde28b5349d(&var_228, 
                &var_368);
            var_368 = var_228;
            int128_t var_218;
            var_358 = var_218;
            int128_t var_208;
            var_348 = var_208;
            int128_t var_1f8;
            var_340 = var_1f8;
            int128_t var_1e8;
            var_330 = var_1e8;
            core::ptr::drop_in_place$LT$libp2p_identity..keypair..Keypair$GT$::h0012da1cbd2c047e(
                &var_100);
            rdx_4 = 1;
            rax_5 = 1;
            rcx_5 = 0;
        }
        
        *arg1 = rdx_4;
        *(arg1 + 8) = var_368;
        *(arg1 + 0x18) = var_358;
        *(arg1 + 0x28) = var_348;
        *(arg1 + 0x38) = var_340;
        *(arg1 + 0x48) = var_330;
        arg1[0xb] = rcx_5;
        *(arg1 + 0x59) = var_3e8;
        *(arg1 + 0x69) = var_3d9;
        *(arg1 + 0x79) = rax_5;
    }
    return arg1;
}
