
  uint64_t* uu_pwd::logical_path::ha7064184a6fb3e0e(uint64_t* arg1, int64_t arg2 @ r15)

{
    int64_t var_8 = arg2;
    uint64_t var_38;
    std::env::var_os::h2cbff6dce8585d27(&var_38);
    uint64_t r14 = var_38;
    uint64_t var_28;
    char rax_2;
    
    if (-(r14) != -0x8000000000000000)
    {
        int64_t var_30;
        arg2 = var_30;
        rax_2 = uu_pwd::logical_path::looks_reasonable::h9259bfbf6c23b9af(arg2, var_28);
    }
    
    if (-(r14) == -0x8000000000000000 || !rax_2)
    {
        std::env::current_dir::h2d02f56ea8ff76eb(arg1);
        
        if (-(r14) != -0x8000000000000000)
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h51e967da23fdefa9(r14, arg2);
    }
    else
    {
        *arg1 = r14;
        arg1[1] = arg2;
        arg1[2] = var_28;
    }
    
    return arg1;
}
