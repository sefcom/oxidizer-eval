
  fn uu_split::platform::unix::FilterWriter::new::h45813eca9ccac0a5(arg1: *mut i32, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_130: ();
    uu_split::platform::unix::WithEnvVarSet::new::h0ec58cf89e23bdc9(&var_130, arg4);
    let mut var_150: i64;
    std::env::var::h9ad1bceb8fc4ff71(&var_150, "SHELL-c/bin/shShell process retu…");
    let mut var_188: i128;
    let var_148: i128;
    let var_138: i64;
    
    if var_150 == 0
    {
        let var_178_1: i64 = var_138;
        var_188 = var_148;
    }
    else
    {
        let var_158_1: i64 = var_138;
        let mut var_168: i128 = var_148;
        uu_split::platform::unix::FilterWriter::new::_$u7b$$u7b$closure$u7d$$u7d$::he2bcca465f325ad8(&var_188, &var_168);
    }
    let mut var_f8: ();
    std::process::Command::new::h0377d9f8406faa73(&var_f8, &var_188);
    let mut rax_1: *mut i64;
    let mut rdx_3: i32;
    rax_1 = std::process::Command::arg::h5f291569404c895b(
        std::process::Command::arg::h5f291569404c895b(&var_f8, 
            "-c/bin/shShell process returned …"), 
        arg2);
    let mut var_1a8: i32;
    std::process::Command::spawn::h512586d0d6bfbf9c(&var_1a8, 
        std::process::Command::stdin::hd49f7a7c2d0c6c7f(rax_1, 2, rdx_3));
    let var_1a0: i64;
    
    if var_1a8 == 0
    {
        let var_1c0_1: i64 = var_1a0;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdf90771df9651af5(&var_f8);
        let var_198: i128;
        *arg1.byte_offset(0x10) = var_198;
        let var_1a4: i32;
        *arg1.byte_offset(4) = var_1a4;
        *arg1 = 0;
    }
    else
    {
        *arg1.byte_offset(8) = var_1a0;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdf90771df9651af5(&var_f8);
    }
    core::ptr::drop_in_place$LT$uu_split..platform..unix..WithEnvVarSet$GT$::he2b819455e73a701(
        &var_130)
}
