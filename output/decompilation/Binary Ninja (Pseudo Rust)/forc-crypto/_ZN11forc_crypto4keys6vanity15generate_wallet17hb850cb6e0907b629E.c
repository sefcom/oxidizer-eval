
  fn forc_crypto::keys::vanity::generate_wallet::hb850cb6e0907b629(arg1: *mut u64, arg2: i32) -> *mut u64

{
    let rax: *mut i64 = rand::rngs::thread::thread_rng::h79c72c341fb4c7da();
    let mut var_150: *mut i64 = rax;
    let mut var_138: u64;
    let mut var_108: i128;
    let mut var_e8: i128;
    let mut var_88: i8;
    let var_87: i128;
    let mut var_28: i128;
    let mut rax_2: i8;
    let mut rcx_1: i64;
    
    if arg2 == 0
    {
        secp256k1::key::SecretKey::new::hb769504fb52cba82(&var_e8, &var_150);
        _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..convert..From$LT$secp256k1..key..SecretKey$GT$$GT$::from::h2fedde1aa26a106b(&var_88, &var_e8);
        rax_2 = var_88;
        var_108 = var_87;
        var_108 = var_87;
        rcx_1 = -0x8000000000000000;
        'label_7fc087:
        let mut var_48: i8 = rax_2;
        let mut var_47_1: i128 = var_108;
        var_47_1 = var_108;
        let mut var_148: i128;
        var_148 = rcx_1;
        _$LT$fuel_crypto..secp256..public..PublicKey$u20$as$u20$core..convert..From$LT$$RF$fuel_crypto..secp256..secret..SecretKey$GT$$GT$::from::h3f0f314c728f838f(&var_88, &var_48);
        fuel_crypto::secp256::public::PublicKey::hash::hf0f53641a7dd2019(&var_108, &var_88);
        let zmm0_2: i128 = var_108;
        let var_f8: i128;
        let var_d8_1: i128 = var_f8;
        var_e8 = zmm0_2;
        let var_a8_1: i128 = var_28;
        let var_98_1: u64 = var_138;
        let zmm3_1: i128 = var_48;
        let var_c8_1: i128 = zmm3_1;
        let var_b8_1: i128 = var_47_1;
        arg1[0xa] = var_138;
        *arg1.byte_offset(0x40) = var_28;
        *arg1.byte_offset(0x30) = var_47_1;
        *arg1.byte_offset(0x20) = zmm3_1;
        *arg1.byte_offset(0x10) = var_f8;
        *arg1 = zmm0_2;
    }
    else
    {
        fuels_accounts::signers::private_key::generate_mnemonic_phrase::h4b2ffbc0595500a6(&var_88, 
            rax);
        let rax_1: i64 = var_88;
        let var_70: u64;
        var_138 = var_70;
        let mut var_d8: i128;
        
        if rax_1 != 0xc
        {
            let var_58: i128;
            let var_b8_2: i128 = var_58;
            let var_68: i128;
            let var_c8_2: i128 = var_68;
            var_e8 = var_87;
            *var_d8[8] = var_138;
            var_e8 = rax_1;
            *arg1 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h38236e235eb7cc0a(&var_e8);
            arg1[8] = -0x7fffffffffffffff;
        }
        else
        {
            let mut var_128: i128 = var_87;
            let var_118_1: u64 = var_138;
            fuel_crypto::secp256::secret::SecretKey::new_from_mnemonic_phrase_with_path::hbc6e3f82111c66c3(&var_e8, *var_128[8], var_138, "m/44'/1179993420'/0'/0/0EXAMPLES…", 0x18);
            rax_2 = *var_e8[1];
            
            if var_e8 != 1
            {
                let zmm0_1: i128 = var_e8;
                var_108 = var_d8;
                var_108 = zmm0_1;
                rcx_1 = var_128;
                var_28 = var_128;
                goto 'label_7fc087;
            }
            
            *arg1 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h47e429fa349b8f4b(rax_2);
            arg1[8] = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_128);
        }
    }
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h57567a10081bac59(&var_150);
    arg1
}
