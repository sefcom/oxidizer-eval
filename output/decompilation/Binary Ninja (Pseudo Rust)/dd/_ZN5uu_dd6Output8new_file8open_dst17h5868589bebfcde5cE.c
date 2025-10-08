
  fn uu_dd::Output::new_file::open_dst::h5868589bebfcde5c(arg1: *mut i32, arg2: i64, arg3: i64, arg4: i8, arg5: i8, arg6: *mut i8) -> i64

{
    let mut var_28: i64 = 0x1b600000000;
    let mut var_20: i32 = 0;
    *var_20[1] = 1;
    let var_1c: i8 = arg5 ^ 1;
    let var_1b: i8 = arg4;
    *var_20[2] = *arg6;
    let mut rax_1: i8;
    let mut rdx: i32;
    rax_1 = uu_dd::make_linux_oflags::h8059fc6e2ea11e72(arg6);
    
    if (rax_1 & 1) != 0
    {
        var_28 = rdx;
    }
    
    std::fs::OpenOptions::open::h8d324e17fb255e3b(arg1, &var_28, arg2)
}
