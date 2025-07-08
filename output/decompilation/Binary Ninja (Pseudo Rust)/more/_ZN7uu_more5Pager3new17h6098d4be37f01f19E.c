
  fn uu_more::Pager::new::h6098d4be37f01f19(arg1: *mut i128, arg2: i16, arg3: *mut i128, arg4: i64, arg5: i64, arg6: *mut c_void) -> i64

{
    let result: i64 = arg3[1];
    let temp0: i16 = arg2;
    arg2 -= 1;
    
    if temp0 < 1
    {
        arg2 = 0;
    }
    
    let r9: i16 = *arg6.byte_offset(0x26);
    *arg1.byte_offset(0x18) = *arg6.byte_offset(0x18);
    arg1[4] = arg2;
    *arg1 = *arg3;
    arg1[1] = arg3[1];
    arg1[2] = arg4;
    *arg1.byte_offset(0x28) = arg5;
    arg1[3] = result;
    *arg1.byte_offset(0x42) = r9;
    *arg1.byte_offset(0x38) = 0;
    result
}
