
  fn uu_dd::Output::new_file::open_dst::h968e64089c53b51a(arg1: *mut i32, arg2: i64, arg3: i64, arg4: i8, arg5: i8, arg6: *mut i8) -> *mut i32

{
    let mut var_28: i64 = 0x1b600000000;
    let mut var_20: i32 = 0x100;
    let var_1c: i8 = arg5 ^ 1;
    let var_1b: i8 = arg4;
    *var_20[2] = *arg6;
    let mut rax_1: i32;
    let mut rdx: i32;
    rax_1 = uu_dd::make_linux_oflags::hc5c67f9cb15d8524(arg6);
    
    if rax_1 == 1
    {
        var_28 = rdx;
    }
    
    std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(arg1, &var_28, arg2)
}
