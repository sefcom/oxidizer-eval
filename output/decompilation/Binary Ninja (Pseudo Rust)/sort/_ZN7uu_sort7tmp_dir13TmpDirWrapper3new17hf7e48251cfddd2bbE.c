
  fn uu_sort::tmp_dir::TmpDirWrapper::new::hf7e48251cfddd2bb(arg1: *mut i128, arg2: *mut i128) -> *mut i128

{
    let rax: *mut i128 = _$LT$alloc..sync..Arc$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h8dcd7b1047b7dc07();
    *arg1.byte_offset(0x28) = 2;
    let var_28: i128;
    *arg1.byte_offset(0x18) = var_28;
    *arg1 = *arg2;
    arg1[1] = arg2[1];
    *arg1.byte_offset(0x38) = 0;
    arg1[3] = rax;
    arg1
}
