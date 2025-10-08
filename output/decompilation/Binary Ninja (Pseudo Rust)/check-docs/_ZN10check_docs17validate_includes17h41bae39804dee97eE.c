
  fn check_docs::validate_includes::h41bae39804dee97e(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64) -> *mut i128

{
    let mut var_58: i128;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3e37f3294573936e(&var_58, arg2);
    let var_38: *mut i64 = arg3;
    let mut var_88: i128;
    itertools::Itertools::partition_map::hc6a0bca4affa4f4d(&var_88, &var_58);
    let var_78: i64;
    let var_98: i64 = var_78;
    let mut var_a8: i128 = var_88;
    let var_70: i128;
    var_58 = var_70;
    let rax_2: i64 = arg3[1];
    var_88 = rax_2;
    *var_88[8] = arg3[2] * 0x38 + rax_2;
    let var_78_1: *mut i128 = &var_a8;
    let mut var_30: i128;
    core::iter::traits::iterator::Iterator::collect::h57163fbc07130889(&var_30, &var_88);
    let var_60: i64;
    arg1[1] = var_60;
    *arg1 = var_58;
    *arg1.byte_offset(0x18) = var_30;
    let var_20: i64;
    *arg1.byte_offset(0x28) = var_20;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::h01addc0fc9fc5f6e(
        &var_a8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::h01addc0fc9fc5f6e(
        arg3);
    arg1
}
