
  fn check_docs::filter_valid_anchors::h39bbb345caf4f14f(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64) -> *mut i128

{
    let mut var_140: *mut i64 = arg3;
    let mut var_b0: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9b6edf7ebf686b8c(&var_b0, arg2);
    let var_90: *mut i64 = &var_140;
    let mut var_138: i128;
    itertools::Itertools::partition_map::h4f90cde821cd7ae4(&var_138, &var_b0);
    let mut var_108: i128 = var_138;
    let var_128: i64;
    let var_f8: i64 = var_128;
    let var_120: i128;
    let mut var_e8: i128 = var_120;
    let var_110: i64;
    let var_d8: i64 = var_110;
    check_docs::filter_unused_ends::h49a7d1140d6f97f2(&var_b0, arg3[1], arg3[2]);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62ec4cff24ca745e(&var_138, &var_b0);
    let mut var_88: ();
    core::iter::traits::iterator::Iterator::collect::h5d93aa8de2da2383(&var_88, &var_138);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h419e594be0ef00e6(&var_138, &var_108);
    let mut var_c8: i128;
    core::iter::traits::iterator::Iterator::collect::h6a36610d4b6dfad3(&var_c8, &var_138);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62ec4cff24ca745e(&var_b0, &var_e8);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62ec4cff24ca745e(&var_138, &var_88);
    let mut var_70: ();
    core::iter::traits::iterator::Iterator::chain::hd23e1eb5f431e694(&var_70, &var_b0, &var_138);
    core::iter::traits::iterator::Iterator::collect::h26c983c3baf6385c(&var_138, &var_70);
    let var_b8: i64;
    arg1[1] = var_b8;
    *arg1 = var_c8;
    *arg1.byte_offset(0x18) = var_138;
    *arg1.byte_offset(0x28) = var_128;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::h01addc0fc9fc5f6e(
        arg3);
    arg1
}
