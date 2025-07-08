
  fn uu_tail::follow::files::PathData::new::h9cc9fab20487d2f9(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: u64) -> *mut c_void

{
    let mut var_38: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&var_38, arg5, 
        arg6);
    let var_28: i64;
    *arg1.byte_offset(0xc0) = var_28;
    *arg1.byte_offset(0xb0) = var_38;
    *arg1.byte_offset(0xc8) = arg2;
    *arg1.byte_offset(0xd0) = arg3;
    memcpy(arg1, arg4, 0xb0);
    arg1
}
