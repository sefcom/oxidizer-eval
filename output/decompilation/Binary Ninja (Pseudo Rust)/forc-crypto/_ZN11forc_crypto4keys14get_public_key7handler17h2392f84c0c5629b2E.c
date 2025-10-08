
  fn forc_crypto::keys::get_public_key::handler::h2392f84c0c5629b2(arg1: *mut i8, arg2: *mut i128) -> *mut i8

{
    let rax: i64 = arg2[1];
    let mut var_168: i128 = *arg2;
    let mut var_a0: i8;
    forc_crypto::args::read_content_filepath_or_stdin::h735eec317a7ae007(&var_a0, &var_168);
    let mut var_40: ();
    fuel_crypto::hasher::Hasher::hash::h62d6e1936778a00b(&var_40, &var_a0);
    fuel_crypto::secp256::signature::Signature::recover::hf131ce4aa6674790(&var_168, 
        arg2.byte_offset(0x18), &var_40);
    let rax_1: i8 = *var_168[1];
    
    if var_168 == 1
    {
        *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h47e429fa349b8f4b(rax_1);
        *arg1 = 6;
    }
    else
    {
        let var_146: i128;
        let var_70_1: i128 = var_146;
        let var_7f_1: i128 = var_146;
        let var_8f_1: i128 = *rax[2];
        let var_9f_1: i128 = var_168;
        var_a0 = rax_1;
        let mut var_60: ();
        fuel_crypto::secp256::public::PublicKey::hash::hf0f53641a7dd2019(&var_60, &var_a0);
        let mut var_e0: i64 = 0;
        let var_d0_1: i64 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_168, "PublicKeyAddressforc-plugins/for…", 9);
        let var_108_1: i64 = rax;
        let mut var_118: i128 = var_168;
        let mut var_f8: ();
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hfbf6f732f3dc7fa6(
            &var_f8, &var_a0);
        serde_json::value::to_value::h85ee9959a652e90e(&var_168, &var_f8);
        let mut var_c8: i128;
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_c8, &var_168);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_168, &var_e0, &var_118, &var_c8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_168);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_f8);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&var_168, "Addressforc-plugins/forc-crypto/…", 7);
        let var_108_2: i64 = rax;
        var_118 = var_168;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb5d1621b153c42fd(
            &var_f8, &var_60);
        serde_json::value::to_value::h85ee9959a652e90e(&var_168, &var_f8);
        core::result::Result$LT$T$C$E$GT$::unwrap::hfb6a08304b238768(&var_c8, &var_168);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h6e915daebfbdef11(
            &var_168, &var_e0, &var_118, &var_c8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hb265dab470452c02(&var_168);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_f8);
        let zmm0_4: i128 = var_e0;
        var_c8 = zmm0_4;
        var_168 = zmm0_4;
        *arg1 = 5;
        let rax_5: i64 = *var_168[0xf];
        *arg1.byte_offset(1) = var_168;
        *arg1.byte_offset(0x10) = rax_5;
        *arg1.byte_offset(0x18) = var_d0_1;
    }
    
    arg1
}
