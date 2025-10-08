
  fn uu_tail::follow::files::PathData::new::h86625b3b593f4467(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: u64) -> i64

{
    let mut var_38: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_38, arg5, arg6);
    let var_28: i64;
    *arg1.byte_offset(0xc0) = var_28;
    *arg1.byte_offset(0xb0) = var_38;
    *arg1.byte_offset(0xc8) = arg2;
    *arg1.byte_offset(0xd0) = arg3;
    /* tailcall */
    memcpy(arg1, arg4, 0xb0)
}
