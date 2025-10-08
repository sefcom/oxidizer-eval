
  char* forc_crypto::keys::get_public_key::handler::h2392f84c0c5629b2(char* arg1, int128_t* arg2)

{
    int64_t rax = arg2[1];
    int128_t var_168 = *arg2;
    char var_a0;
    forc_crypto::args::read_content_filepath_or_stdin::h735eec317a7ae007(&var_a0, &var_168);
    void var_40;
    fuel_crypto::hasher::Hasher::hash::h62d6e1936778a00b(&var_40, &var_a0);
    fuel_crypto::secp256::signature::Signature::recover::hf131ce4aa6674790(&var_168, arg2 + 0x18, 
        &var_40);
    char rax_1 = *var_168[1];
    
    if (var_168 == 1)
    {
        *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h47e429fa349b8f4b(rax_1);
        *arg1 = 6;
    }
    else
    {
        int128_t var_146;
        int128_t var_70_1 = var_146;
        int128_t var_7f_1 = var_146;
        int128_t var_8f_1 = *rax[2];
        int128_t var_9f_1 = var_168;
        var_a0 = rax_1;
        void var_60;
        fuel_crypto::secp256::public::PublicKey::hash::hf0f53641a7dd2019(&var_60, &var_a0);
        int64_t var_e0 = 0;
        int64_t var_d0_1 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_168, "PublicKeyAddressforc-plugins/for…", 9);
        int64_t var_108_1 = rax;
        int128_t var_118 = var_168;
        void var_f8;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hfbf6f732f3dc7fa6(
            &var_f8, &var_a0);
        serde_json::value::to_value::h85ee9959a652e90e(&var_168, &var_f8);
        int128_t var_c8;
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_c8, &var_168);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_168, &var_e0, &var_118, &var_c8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_168);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_f8);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_168, "Addressforc-plugins/forc-crypto/…", 7);
        int64_t var_108_2 = rax;
        var_118 = var_168;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb5d1621b153c42fd(
            &var_f8, &var_60);
        serde_json::value::to_value::h85ee9959a652e90e(&var_168, &var_f8);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_c8, &var_168);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_168, &var_e0, &var_118, &var_c8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_168);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_f8);
        int128_t zmm0_4 = var_e0;
        var_c8 = zmm0_4;
        var_168 = zmm0_4;
        *arg1 = 5;
        int64_t rax_5 = *var_168[0xf];
        *(arg1 + 1) = var_168;
        *(arg1 + 0x10) = rax_5;
        *(arg1 + 0x18) = var_d0_1;
    }
    
    return arg1;
}
