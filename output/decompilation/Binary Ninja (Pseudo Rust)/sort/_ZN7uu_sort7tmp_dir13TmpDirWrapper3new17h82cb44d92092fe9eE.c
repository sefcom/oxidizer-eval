
  fn uu_sort::tmp_dir::TmpDirWrapper::new::h82cb44d92092fe9e(arg1: *mut i128, arg2: *mut i128) -> *mut i128

{
    let rax: i64 = arg2[1];
    let zmm0: i128 = *arg2;
    let rax_1: *mut i128 = _$LT$alloc..sync..Arc$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h86a82de66e4be7bb();
    *arg1.byte_offset(0x28) = 2;
    let var_20: i128;
    *arg1.byte_offset(0x18) = var_20;
    *arg1 = zmm0;
    arg1[1] = rax;
    *arg1.byte_offset(0x38) = 0;
    arg1[3] = rax_1;
    arg1
}
