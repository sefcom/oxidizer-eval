
  int64_t flealib::fileencrypter::FileEncrypter::decrypt::hff9e86b8c682ae6b(int64_t* arg1, int64_t arg2, int64_t* arg3)

{
    int64_t r12 = arg3[1];
    int64_t r15 = arg3[2];
    int64_t rax;
    int64_t rdx_1;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha9914e413251f43e(0xc, r12, r15);
    int64_t var_818 = rdx_1;
    int64_t var_418;
    
    if (rdx_1 != 0xc)
    {
        var_418 = 0;
        core::panicking::assert_failed::h7c645b2ace17315c(0, &var_818, &data_450af0, &var_418);
        /* no return */
    }
    
    if (r15 < 0xc)
    {
        core::slice::index::slice_start_index_len_fail::h534838c90eea25d8(0xc, r15);
        /* no return */
    }
    
    int128_t var_810;
    generic_array::functional::FunctionalSequence::map::hebd2a052cb2ed74b(&var_810, arg2);
    int64_t var_7d8;
    _$LT$aes..autodetect..Aes256$u20$as$u20$crypto_common..KeyInit$GT$::new::h5c101e493a76d3c2(
        &var_7d8, &var_810);
    _$LT$aes_gcm..AesGcm$LT$Aes$C$NonceSize$C$TagSize$GT$$u20$as$u20$core..convert..From$LT$Aes$GT$$GT$::from::h8e50088c9855bafe(&var_418, &var_7d8);
    _$LT$Alg$u20$as$u20$aead..Aead$GT$::decrypt::hdc20b5701a511df6(&var_7d8, &var_418, rax, 
        r12 + 0xc, r15 - 0xc);
    int64_t rax_1 = var_7d8;
    
    if (-(rax_1) != -0x8000000000000000)
    {
        int64_t var_7f0 = rax_1;
        int128_t var_7d0;
        int128_t var_7e8_1 = var_7d0;
        alloc::string::String::from_utf8::hd36b3fc0ff50dc14(&var_7d8, &var_7f0);
        core::result::Result$LT$T$C$E$GT$::unwrap::hdccd02afad51252c(&var_810, &var_7d8);
        int64_t var_800;
        arg1[2] = var_800;
        *arg1 = var_810;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hd3970169d5f535cb();
        int64_t rax_2;
        int64_t rdx_3;
        rax_2 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$anyhow..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$::from::h8f073e48b757dc4d();
        arg1[1] = rax_2;
        arg1[2] = rdx_3;
        *arg1 = -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$aes_gcm..AesGcm$LT$aes..autodetect..Aes256$C$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UInt$LT$typenum..uint..UTerm$C$typenum..bit..B1$GT$$C$typenum..bit..B1$GT$$C$typenum..bit..B0$GT$$C$typenum..bit..B0$GT$$GT$$GT$::heff0883ab5114f31();
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(arg3);
}
