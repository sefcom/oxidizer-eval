
  fn just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(arg1: *mut u64, arg2: *mut i128, arg3: *mut i128) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    *arg1 = alloc::boxed::Box$LT$T$GT$::new::hba64d97b4764ff5d(arg3);
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    let zmm3: i128 = arg2[3];
    *arg1.byte_offset(8) = *arg2;
    *arg1.byte_offset(0x18) = zmm1;
    *arg1.byte_offset(0x28) = zmm2;
    *arg1.byte_offset(0x38) = zmm3;
    let result: i64 = arg2[4];
    arg1[9] = result;
    result
}
