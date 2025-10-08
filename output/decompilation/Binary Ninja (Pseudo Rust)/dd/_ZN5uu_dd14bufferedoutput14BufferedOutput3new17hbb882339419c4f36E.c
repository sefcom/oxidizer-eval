
  fn uu_dd::bufferedoutput::BufferedOutput::new::hbb882339419c4f36(arg1: *mut i64, arg2: *mut i8) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let r15: i8 = *arg2;
    let rbp: i32 = *arg2.byte_offset(4);
    let mut result: i64;
    let mut rdx: i64;
    result = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hcd13cdacfb44ecb8(
        *(*arg2.byte_offset(0x10)).byte_offset(0x78), 1, 1);
    arg1[3] = r15;
    *arg1.byte_offset(0x19) = *arg2.byte_offset(1);
    *arg1.byte_offset(0x1b) = arg2[3];
    *arg1.byte_offset(0x1c) = rbp;
    *arg1.byte_offset(0x20) = *arg2.byte_offset(8);
    *arg1 = result;
    arg1[1] = rdx;
    arg1[2] = 0;
    result
}
