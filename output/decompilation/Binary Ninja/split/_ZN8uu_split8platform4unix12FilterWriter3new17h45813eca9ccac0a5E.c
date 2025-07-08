
  int64_t uu_split::platform::unix::FilterWriter::new::h45813eca9ccac0a5(int32_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    void var_130;
    uu_split::platform::unix::WithEnvVarSet::new::h0ec58cf89e23bdc9(&var_130, arg4);
    int64_t var_150;
    std::env::var::h9ad1bceb8fc4ff71(&var_150, "SHELL-c/bin/shShell process retu…");
    int128_t var_188;
    int128_t var_148;
    int64_t var_138;
    
    if (!var_150)
    {
        int64_t var_178_1 = var_138;
        var_188 = var_148;
    }
    else
    {
        int64_t var_158_1 = var_138;
        int128_t var_168 = var_148;
        uu_split::platform::unix::FilterWriter::new::_$u7b$$u7b$closure$u7d$$u7d$::he2bcca465f325ad8(&var_188, &var_168);
    }
    void var_f8;
    std::process::Command::new::h0377d9f8406faa73(&var_f8, &var_188);
    int64_t* rax_1;
    int32_t rdx_3;
    rax_1 = std::process::Command::arg::h5f291569404c895b(
        std::process::Command::arg::h5f291569404c895b(&var_f8, 
            "-c/bin/shShell process returned …"), 
        arg2);
    int32_t var_1a8;
    std::process::Command::spawn::h512586d0d6bfbf9c(&var_1a8, 
        std::process::Command::stdin::hd49f7a7c2d0c6c7f(rax_1, 2, rdx_3));
    int64_t var_1a0;
    
    if (!var_1a8)
    {
        int64_t var_1c0_1 = var_1a0;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdf90771df9651af5(&var_f8);
        int128_t var_198;
        *(arg1 + 0x10) = var_198;
        int32_t var_1a4;
        *(arg1 + 4) = var_1a4;
        *arg1 = 0;
    }
    else
    {
        *(arg1 + 8) = var_1a0;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdf90771df9651af5(&var_f8);
    }
    return 
        core::ptr::drop_in_place$LT$uu_split..platform..unix..WithEnvVarSet$GT$::he2b819455e73a701(
        &var_130);
}
