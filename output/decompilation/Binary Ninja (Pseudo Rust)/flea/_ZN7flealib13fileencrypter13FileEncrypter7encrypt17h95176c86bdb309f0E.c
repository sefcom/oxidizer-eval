
  fn flealib::fileencrypter::FileEncrypter::encrypt::h95176c86bdb309f0(arg1: *mut i128, arg2: i64, arg3: *mut i64) -> i64

{
    let mut var_7e5: ();
    let mut var_7e4: ();
    aead::AeadCore::generate_nonce::hdad2d53bff0ec8ae(&var_7e4, &var_7e5);
    let mut var_7d8: ();
    generic_array::functional::FunctionalSequence::map::hebd2a052cb2ed74b(&var_7d8, arg2);
    let mut var_7b8: i128;
    _$LT$aes..autodetect..Aes256$u20$as$u20$crypto_common..KeyInit$GT$::new::h5c101e493a76d3c2(
        &var_7b8, &var_7d8);
    let mut var_3f8: ();
    _$LT$aes_gcm..AesGcm$LT$Aes$C$NonceSize$C$TagSize$GT$$u20$as$u20$core..convert..From$LT$Aes$GT$$GT$::from::h8e50088c9855bafe(&var_3f8, &var_7b8);
    _$LT$Alg$u20$as$u20$aead..Aead$GT$::encrypt::h2d406e729795b772(&var_7b8, &var_3f8, &var_7e4, 
        arg3[1], arg3[2]);
    core::result::Result$LT$T$C$E$GT$::expect::h889227b1e93563f8(&var_7d8, &var_7b8);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_7b8, 
        &var_7e4, 0xc);
    let var_7d0: i64;
    let var_7c8: u64;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_7b8, var_7d0, var_7c8);
    let var_7a8: i64;
    arg1[1] = var_7a8;
    *arg1 = var_7b8;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_7d8);
    core::ptr::drop_in_place$LT$aes_gcm..AesGcm$LT$aes..autodetect..Aes256$C$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UTerm$C$typenum..bit..B1$GT$$C$typenum..bit..B1$GT$$C$typenum..bit..B0$GT$$C$typenum..bit..B0$GT$$GT$$GT$::heff0883ab5114f31();
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg3)
}
