
  fn uu_pwd::logical_path::ha7064184a6fb3e0e(arg1: *mut u64, arg2: i64 @ r15) -> *mut u64

{
    let var_8: i64 = arg2;
    let mut var_38: u64;
    std::env::var_os::h2cbff6dce8585d27(&var_38);
    let r14: u64 = var_38;
    let var_28: u64;
    let mut rax_2: i8;
    
    if -(r14) != -0x8000000000000000
    {
        let var_30: i64;
        arg2 = var_30;
        rax_2 = uu_pwd::logical_path::looks_reasonable::h9259bfbf6c23b9af(arg2, var_28);
    }
    
    if -(r14) == -0x8000000000000000 || rax_2 == 0
    {
        std::env::current_dir::h2d02f56ea8ff76eb(arg1);
        
        if -(r14) != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h51e967da23fdefa9(r14, arg2);
        }
    }
    else
    {
        *arg1 = r14;
        arg1[1] = arg2;
        arg1[2] = var_28;
    }
    
    arg1
}
