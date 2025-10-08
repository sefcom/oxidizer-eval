
  fn firecracker::seccomp::SeccompConfig::from_args::he53bf44f0843d7e2(arg1: *mut i8, arg2: i32, arg3: *mut c_void)

{
    if arg2 != 0
    {
        *arg1.byte_offset(4) = 0;
        *arg1 = 0x15;
        return;
    }
    
    if arg3 == 0
    {
        *arg1.byte_offset(4) = 1;
        *arg1 = 0x15;
        return;
    }
    
    let mut var_18: i8;
    std::fs::File::open::h847db8d34bb9a3a1(&var_18, arg3);
    
    if (var_18 & 1) != 0
    {
        *arg1 = 0x14;
        let var_10: i64;
        *arg1.byte_offset(8) = var_10;
        return;
    }
    
    *arg1.byte_offset(4) = 2;
    let var_14: i32;
    *arg1.byte_offset(8) = var_14;
    *arg1 = 0x15;
}
