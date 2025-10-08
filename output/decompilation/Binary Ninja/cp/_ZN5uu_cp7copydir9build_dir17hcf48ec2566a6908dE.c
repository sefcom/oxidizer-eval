
  int64_t uu_cp::copydir::build_dir::hcf48ec2566a6908d(int64_t* arg1, void* arg2, char arg3, char arg4, char arg5, int64_t arg6, int64_t arg7)

{
    char var_d4 = arg3;
    arg5 &= 1;
    int32_t rdx = 0x12;
    
    if (!arg5)
        rdx = 0;
    
    int32_t rbp = 0x3f;
    
    if (!(arg4 & 1))
        rbp = rdx;
    
    int64_t result;
    int32_t rax_1;
    
    if ((arg6 & arg5) != 1)
    {
        rax_1 = uucore::features::mode::get_umask::h22fe72fd4e3f2e99();
        label_49aef4:
        int32_t var_d8 = ((rax_1 & 0x1ff) | rbp) ^ 0x1ff;
        result = std::fs::DirBuilder::create::h220b70ad501ba6bc(&var_d8, arg2);
        
        if (!result)
            *arg1 = -0x7ffffffffffffff4;
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = result;
        }
    }
    else
    {
        int32_t var_d0;
        std::fs::symlink_metadata::h814bc3976f7d40c5(&var_d0, arg6);
        
        if (var_d0 != 2)
        {
            int32_t var_98;
            rax_1 = ~var_98;
            goto label_49aef4;
        }
        
        int64_t result_1;
        result = result_1;
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = result;
    }
    return result;
}
