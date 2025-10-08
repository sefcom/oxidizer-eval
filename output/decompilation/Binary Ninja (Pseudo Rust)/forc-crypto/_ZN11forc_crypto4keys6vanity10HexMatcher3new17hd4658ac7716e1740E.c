
  fn forc_crypto::keys::vanity::HexMatcher::new::hd4658ac7716e1740(arg1: *mut i128, arg2: *mut i8, arg3: u64, arg4: *mut i8, arg5: u64) -> *mut i128

{
    let mut var_50: i128;
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_50, arg2, arg3);
    let mut var_38: i128;
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_38, arg4, arg5);
    let zmm0: i128 = var_50;
    let var_88: i128 = zmm0;
    let zmm1: i128 = var_38;
    arg1[2] = *zmm1[8];
    let var_28: i64;
    *arg1.byte_offset(0x28) = var_28;
    let var_40: i64;
    arg1[1] = var_40;
    *arg1.byte_offset(0x18) = zmm1;
    *arg1 = zmm0;
    arg1
}
