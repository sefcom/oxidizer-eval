
  fn uu_chmod::extract_negative_modes::h96e49cec7b4bfb40(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_d8: i128;
    core::iter::traits::iterator::Iterator::partition::h375c87b806a56361(&var_d8, arg2);
    let mut var_c8: i64;
    let var_78: i64 = var_c8;
    let mut var_88: i128 = var_d8;
    let var_c0: i128;
    let mut var_68: i128 = var_c0;
    let var_b0: i64;
    let var_58: i64 = var_b0;
    let mut var_f0: i64 = 0;
    let var_e8: i64 = 8;
    let var_e0: i64 = 0;
    let mut var_108: i128;
    let mut var_f8: i64;
    
    if var_c8 != 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc4e0d8744d3033c6(&var_d8, "w/home/34r7hm4n/dev/oxidizer/oxi…", 1);
        var_f8 = var_c8;
        var_108 = var_d8;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h91dc462b520c4013(&var_f0, &var_108);
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h44403ea278d1d6a4(&var_d8, &var_68);
    let var_110: *mut i64 = &var_f0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hb127179e1f7b3b89(&var_f0, &var_d8);
    let mut var_a8: i64;
    _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbaecf01881d9e232(&var_a8, arg2);
    let r13: i64 = var_a8;
    let var_a0: i64;
    
    if -(r13) != -0x8000000000000000
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc4e0d8744d3033c6(&var_d8, "--", 2);
        var_f8 = var_c8;
        var_108 = var_d8;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h91dc462b520c4013(&var_f0, &var_108);
        var_d8 = r13;
        *var_d8[8] = var_a0;
        let var_98: i64;
        var_c8 = var_98;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h91dc462b520c4013(&var_f0, &var_d8);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::hf746f591b611886e(-0x8000000000000000, var_a0);
    }
    let mut var_48: i128 = *arg2;
    let var_38: i64 = arg2[2];
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::he4b784737b34a442(&var_f0, &var_48);
    core::iter::traits::iterator::Iterator::collect::h2cee316d3b49d96a(&var_108, *var_88[8]);
    let r15_2: i64 = *var_108[8];
    alloc::str::join_generic_copy::hf273d2369f0d0e7f(&var_d8, r15_2, var_f8);
    let var_98_1: i64 = var_c8;
    var_a8 = var_d8;
    core::option::Option$LT$T$GT$::filter::h9f1c0bdf924e03fc(arg1, &var_a8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h4d321b17f0ebd1cf(var_108, 
        r15_2);
    arg1[5] = var_e0;
    *arg1.byte_offset(0x18) = var_f0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hc74256e3a7b99212(&var_88)
}
