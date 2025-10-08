
  fn bat::pager::Pager::new::h0869a180ded80220(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i64, arg5: i64, arg6: i8, arg7: i8) -> i64

{
    let mut var_50: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_50, arg2, arg3);
    let mut var_38: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5b13b0fd63bfa0b3(&var_38, arg4, arg5);
    let var_40: i64;
    arg1[1] = var_40;
    *arg1 = var_50;
    *arg1.byte_offset(0x18) = var_38;
    let var_28: i64;
    *arg1.byte_offset(0x28) = var_28;
    *arg1.byte_offset(0x31) = arg6;
    arg1[3] = arg7;
    arg7
}
