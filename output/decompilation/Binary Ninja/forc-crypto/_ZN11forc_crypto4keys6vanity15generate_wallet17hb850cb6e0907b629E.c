
  uint64_t* forc_crypto::keys::vanity::generate_wallet::hb850cb6e0907b629(uint64_t* arg1, int32_t arg2)

{
    int64_t* rax = rand::rngs::thread::thread_rng::h79c72c341fb4c7da();
    int64_t* var_150 = rax;
    uint64_t var_138;
    int128_t var_108;
    int128_t var_e8;
    char var_88;
    int128_t var_87;
    int128_t var_28;
    char rax_2;
    int64_t rcx_1;
    
    if (!arg2)
    {
        secp256k1::key::SecretKey::new::hb769504fb52cba82(&var_e8, &var_150);
        _$LT$fuel_crypto..secp256..secret..SecretKey$u20$as$u20$core..convert..From$LT$secp256k1..key..SecretKey$GT$$GT$::from::h2fedde1aa26a106b(&var_88, &var_e8);
        rax_2 = var_88;
        var_108 = var_87;
        var_108 = var_87;
        rcx_1 = -0x8000000000000000;
        label_7fc087:
        char var_48 = rax_2;
        int128_t var_47_1 = var_108;
        var_47_1 = var_108;
        int128_t var_148;
        var_148 = rcx_1;
        _$LT$fuel_crypto..secp256..public..PublicKey$u20$as$u20$core..convert..From$LT$$RF$fuel_crypto..secp256..secret..SecretKey$GT$$GT$::from::h3f0f314c728f838f(&var_88, &var_48);
        fuel_crypto::secp256::public::PublicKey::hash::hf0f53641a7dd2019(&var_108, &var_88);
        int128_t zmm0_2 = var_108;
        int128_t var_f8;
        int128_t var_d8_1 = var_f8;
        var_e8 = zmm0_2;
        int128_t var_a8_1 = var_28;
        uint64_t var_98_1 = var_138;
        int128_t zmm3_1 = var_48;
        int128_t var_c8_1 = zmm3_1;
        int128_t var_b8_1 = var_47_1;
        arg1[0xa] = var_138;
        *(arg1 + 0x40) = var_28;
        *(arg1 + 0x30) = var_47_1;
        *(arg1 + 0x20) = zmm3_1;
        *(arg1 + 0x10) = var_f8;
        *arg1 = zmm0_2;
    }
    else
    {
        fuels_accounts::signers::private_key::generate_mnemonic_phrase::h4b2ffbc0595500a6(&var_88, 
            rax);
        int64_t rax_1 = var_88;
        uint64_t var_70;
        var_138 = var_70;
        int128_t var_d8;
        
        if (rax_1 != 0xc)
        {
            int128_t var_58;
            int128_t var_b8_2 = var_58;
            int128_t var_68;
            int128_t var_c8_2 = var_68;
            var_e8 = var_87;
            *var_d8[8] = var_138;
            var_e8 = rax_1;
            *arg1 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h38236e235eb7cc0a(&var_e8);
            arg1[8] = -0x7fffffffffffffff;
        }
        else
        {
            int128_t var_128 = var_87;
            uint64_t var_118_1 = var_138;
            fuel_crypto::secp256::secret::SecretKey::new_from_mnemonic_phrase_with_path::hbc6e3f82111c66c3(&var_e8, *var_128[8], var_138, "m/44'/1179993420'/0'/0/0EXAMPLES…", 0x18);
            rax_2 = *var_e8[1];
            
            if (var_e8 != 1)
            {
                int128_t zmm0_1 = var_e8;
                var_108 = var_d8;
                var_108 = zmm0_1;
                rcx_1 = var_128;
                var_28 = var_128;
                goto label_7fc087;
            }
            
            *arg1 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h47e429fa349b8f4b(rax_2);
            arg1[8] = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_128);
        }
    }
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h57567a10081bac59(&var_150);
    return arg1;
}
