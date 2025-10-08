
  fn fuel_core_keygen::parse_secret::h9a30821daaaf76fe(arg1: *mut i64, arg2: i8, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_368: i8;
    _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h91d78238daec98ac(&var_368, arg3, arg4);
    let mut var_100: *mut *mut c_void;
    let mut var_f8: i64;
    
    if var_368 == 1
    {
        var_100 = &data_544da0;
        var_f8 = 1;
        let var_f0_1: i64 = 8;
        let var_e8_1: i128 = {0};
        arg1[1] = anyhow::__private::format_err::h09b344f6a077676a(&var_100);
        *arg1 = 2;
    }
    else
    {
        let var_367: i32;
        let var_3a5_1: i32 = var_367;
        let mut var_3a8: i32 = var_367;
        let mut var_360: i64;
        let var_3a1_1: i64 = var_360;
        let mut var_348: i8;
        let var_389_1: i8 = var_348;
        let mut var_358: i128;
        let var_399_1: i128 = var_358;
        let mut var_3e8: i32;
        let mut var_3d9: i128;
        let mut var_340: i128;
        let mut var_330: i128;
        let mut rax_5: i8;
        let mut rcx_5: i8;
        let mut rdx_4: i64;
        
        if arg2 == 0
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
            let var_3e5_1: i32 = var_367;
            var_3e8 = var_367;
            let var_3e1_1: i64 = var_360;
            var_3d9 = var_358;
            let var_3c9_1: i8 = var_348;
            libp2p_identity::secp256k1::SecretKey::try_from_bytes::h5ccaf385d50131d1(&var_100, 
                &var_3e8);
            let mut var_2a0: i128;
            core::result::Result$LT$T$C$E$GT$::expect::he0609b2caa0718d7(&var_2a0, &var_100);
            let var_280: i128;
            let var_160_1: i128 = var_280;
            let var_270: i128;
            let var_150_1: i128 = var_270;
            let var_260: i128;
            let var_140_1: i128 = var_260;
            let var_250: i128;
            let var_130_1: i128 = var_250;
            let var_240: i128;
            let var_120_1: i128 = var_240;
            let var_230: i64;
            let var_110_1: i64 = var_230;
            let mut var_1d8: i128 = var_2a0;
            let var_290: i128;
            let var_1c8_1: i128 = var_290;
            let var_1b8_1: i128 = var_280;
            let var_1a8_1: i128 = var_270;
            let var_198_1: i128 = var_260;
            let var_188_1: i128 = var_250;
            let var_178_1: i128 = var_240;
            let var_168_1: i64 = var_230;
            var_100 = 1;
            memcpy(&var_f8, &var_1d8, 0xd0);
            let var_310_1: i64 = var_230;
            let var_320_1: i128 = var_240;
            var_330 = var_250;
            var_340 = var_260;
            var_358 = var_270;
            var_360 = var_280;
            var_368 = 1;
            let mut var_228: i128;
            libp2p_identity::peer_id::PeerId::from_public_key::h94fa6fde28b5349d(&var_228, 
                &var_368);
            var_368 = var_228;
            let var_218: i128;
            var_358 = var_218;
            let var_208: i128;
            var_348 = var_208;
            let var_1f8: i128;
            var_340 = var_1f8;
            let var_1e8: i128;
            var_330 = var_1e8;
            core::ptr::drop_in_place$LT$libp2p_identity..keypair..Keypair$GT$::h0012da1cbd2c047e(
                &var_100);
            rdx_4 = 1;
            rax_5 = 1;
            rcx_5 = 0;
        }
        
        *arg1 = rdx_4;
        *arg1.byte_offset(8) = var_368;
        *arg1.byte_offset(0x18) = var_358;
        *arg1.byte_offset(0x28) = var_348;
        *arg1.byte_offset(0x38) = var_340;
        *arg1.byte_offset(0x48) = var_330;
        arg1[0xb] = rcx_5;
        *arg1.byte_offset(0x59) = var_3e8;
        *arg1.byte_offset(0x69) = var_3d9;
        *arg1.byte_offset(0x79) = rax_5;
    }
    arg1
}
