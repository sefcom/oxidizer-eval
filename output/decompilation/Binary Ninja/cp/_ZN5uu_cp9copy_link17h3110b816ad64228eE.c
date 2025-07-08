
  int64_t* uu_cp::copy_link::h3110b816ad64228e(int64_t* arg1, int64_t arg2, int64_t arg3, char* arg4, uint64_t arg5, int64_t* arg6)

{
    int64_t var_38;
    std::fs::read_link::hdecc6681ebe33782(&var_38, arg2);
    int64_t rcx = var_38;
    int64_t var_30;
    
    if (rcx != -0x8000000000000000)
    {
        int64_t var_50 = rcx;
        char rax_1 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg4, arg5);
        char rax_2;
        
        if (!rax_1)
            rax_2 = std::path::Path::is_file::h82f08f46fb8d8099(arg4, arg5);
        
        int64_t rax_3;
        
        if (rax_1 || rax_2)
            rax_3 = std::fs::remove_file::h38159f05e7b4dc34(arg4);
        
        int64_t var_28;
        
        if ((!rax_1 && !rax_2) || !rax_3)
            uu_cp::symlink_file::h73880cbbf32f0256(arg1, var_30, var_28, arg4, arg5, arg6);
        else
        {
            *arg1 = 2;
            arg1[1] = rax_3;
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_50);
    }
    else
    {
        *arg1 = 2;
        arg1[1] = var_30;
    }
    return arg1;
}
