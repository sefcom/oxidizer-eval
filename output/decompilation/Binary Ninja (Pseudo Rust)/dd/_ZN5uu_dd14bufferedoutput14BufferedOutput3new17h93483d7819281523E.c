
  fn uu_dd::bufferedoutput::BufferedOutput::new::h93483d7819281523(arg1: *mut i64, arg2: *mut i8) -> *mut i64

{
    let rbp: i8 = *arg2;
    let rbx: i32 = *arg2.byte_offset(4);
    let mut var_38: i64;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::he1ec86b2283b0e90(&var_38, 
        *(*arg2.byte_offset(0x10)).byte_offset(0x78), 0);
    let var_30: i64;
    
    if var_38 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_30);
        /* no return */
    }
    
    arg1[3] = rbp;
    *arg1.byte_offset(0x19) = *arg2.byte_offset(1);
    *arg1.byte_offset(0x1b) = arg2[3];
    *arg1.byte_offset(0x1c) = rbx;
    *arg1.byte_offset(0x20) = *arg2.byte_offset(8);
    *arg1 = var_30;
    let var_28: i64;
    arg1[1] = var_28;
    arg1[2] = 0;
    arg1
}
