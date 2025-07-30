
  fn flealib::fileencrypter::FileEncrypter::decrypt::hff9e86b8c682ae6b(arg1: *mut i64, arg2: i64, arg3: *mut i64) -> i64

{
    let r12: i64 = arg3[1];
    let r15: i64 = arg3[2];
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha9914e413251f43e(0xc, r12, r15);
    let mut var_818: i64 = rdx_1;
    let mut var_418: i64;
    
    if rdx_1 != 0xc
    {
        var_418 = 0;
        core::panicking::assert_failed::h7c645b2ace17315c(0, &var_818, &data_450af0, &var_418);
        /* no return */
    }
    
    if r15 < 0xc
    {
        core::slice::index::slice_start_index_len_fail::h534838c90eea25d8(0xc, r15);
        /* no return */
    }
    
    let mut var_810: i128;
    generic_array::functional::FunctionalSequence::map::hebd2a052cb2ed74b(&var_810, arg2);
    let mut var_7d8: i64;
    _$LT$aes..autodetect..Aes256$u20$as$u20$crypto_common..KeyInit$GT$::new::h5c101e493a76d3c2(
        &var_7d8, &var_810);
    _$LT$aes_gcm..AesGcm$LT$Aes$C$NonceSize$C$TagSize$GT$$u20$as$u20$core..convert..From$LT$Aes$GT$$GT$::from::h8e50088c9855bafe(&var_418, &var_7d8);
    _$LT$Alg$u20$as$u20$aead..Aead$GT$::decrypt::hdc20b5701a511df6(&var_7d8, &var_418, rax, 
        r12 + 0xc, r15 - 0xc);
    let rax_1: i64 = var_7d8;
    
    if -(rax_1) != -0x8000000000000000
    {
        let mut var_7f0: i64 = rax_1;
        let var_7d0: i128;
        let var_7e8_1: i128 = var_7d0;
        alloc::string::String::from_utf8::hd36b3fc0ff50dc14(&var_7d8, &var_7f0);
        core::result::Result$LT$T$C$E$GT$::unwrap::hdccd02afad51252c(&var_810, &var_7d8);
        let var_800: i64;
        arg1[2] = var_800;
        *arg1 = var_810;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hd3970169d5f535cb();
        let mut rax_2: i64;
        let mut rdx_3: i64;
        rax_2 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$anyhow..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$::from::h8f073e48b757dc4d();
        arg1[1] = rax_2;
        arg1[2] = rdx_3;
        *arg1 = -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$aes_gcm..AesGcm$LT$aes..autodetect..Aes256$C$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UTerm$C$typenum..bit..B1$GT$$C$typenum..bit..B1$GT$$C$typenum..bit..B0$GT$$C$typenum..bit..B0$GT$$GT$$GT$::heff0883ab5114f31();
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(arg3)
}
