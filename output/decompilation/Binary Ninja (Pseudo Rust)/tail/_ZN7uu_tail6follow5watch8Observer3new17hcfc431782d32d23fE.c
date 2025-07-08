
  fn uu_tail::follow::watch::Observer::new::hcfc431782d32d23f(arg1: *mut i64, arg2: i8, arg3: i8, arg4: i8, arg5: *mut i128, arg6: i32) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let result: i8 = uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(arg6);
    let mut rcx: i32 = 0;
    
    if result != 0
    {
        rcx = arg6;
    }
    
    *arg1.byte_offset(0x78) = arg5[4];
    let zmm0: i128 = *arg5;
    let zmm1: i128 = arg5[1];
    let zmm2: i128 = arg5[2];
    *arg1.byte_offset(0x68) = arg5[3];
    *arg1.byte_offset(0x58) = zmm2;
    *arg1.byte_offset(0x48) = zmm1;
    *arg1.byte_offset(0x38) = zmm0;
    *arg1.byte_offset(0x8c) = arg2;
    *arg1.byte_offset(0x8e) = arg3;
    *arg1.byte_offset(0x8d) = arg4;
    *arg1 = 3;
    arg1[4] = 0;
    arg1[5] = 8;
    arg1[6] = 0;
    arg1[0x11] = rcx;
    result
}
