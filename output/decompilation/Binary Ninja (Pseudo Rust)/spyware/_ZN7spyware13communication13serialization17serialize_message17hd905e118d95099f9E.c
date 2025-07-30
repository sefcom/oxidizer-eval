
  fn spyware::communication::serialization::serialize_message::hd905e118d95099f9(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let mut var_a8: i32;
    ron::ser::to_string::h9734e6b78e2f568f(&var_a8, arg2);
    let mut var_98: i128;
    let mut var_58: i128;
    
    if var_a8 != 0x21
    {
        let var_88: i128;
        let var_38: i128 = var_88;
        let var_48: i128 = var_98;
        var_58 = var_a8;
        spyware::communication::serialization::serialize_message::_$u7b$$u7b$closure$u7d$$u7d$::h5049c5cf23312933(&var_58);
        /* no return */
    }
    
    let r15: i64 = *var_98[8];
    let var_68: i64 = r15;
    let mut var_a0: i128;
    let mut var_78: i128 = var_a0;
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h590fc4c98277c4ad(r15 + 4);
    var_a8 = rax;
    var_a0 = rdx;
    var_98 = 0;
    let mut var_ac: i32 = 0;
    let rax_1: i64 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h7e5c0b070607da95(&var_ac);
    var_58 = _bswap(r15);
    let mut rbp: i64;
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
    arg1
}
