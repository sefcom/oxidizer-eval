
  uint32_t uu_cp::is_forbidden_to_copy_to_same_file::h3bc6a23799758404(char* arg1, uint64_t arg2, char* arg3, uint64_t arg4, void* arg5, char arg6)

{
    char rax = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg1, arg2);
    char r15 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4);
    char rcx = *(arg5 + 0x41);
    char rax_1 = 1;
    
    if (!rcx && (!arg6 || !*(arg5 + 0x40)))
        rax_1 = (rax & r15) ^ 1;
    
    if (uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(arg1, arg2, arg3, arg4, 
        rax_1))
    {
        char rdx_1 = rax;
        
        if (!*(arg5 + 0x4c))
        {
            label_505b3e:
            uint32_t result = *(arg5 + 0x4e);
            
            if (result)
            {
                if (result != 1)
                {
                    if (rcx || !(rdx_1 & r15))
                    {
                        result = 1;
                        return result;
                    }
                }
                else if (!r15)
                {
                    result = 1;
                    return result;
                }
            }
        }
        else if (*(arg5 + 0x3c) | *(arg5 + 0x3d))
        {
            if (!((!rcx & rdx_1) | r15))
            {
                label_505afe:
                
                if (rdx_1)
                    goto label_505b3e;
                
                void var_b0;
                std::path::Path::components::h4f3217acf0fc8653(&var_b0, arg3, arg4);
                void var_70;
                std::path::Path::components::h4f3217acf0fc8653(&var_70, arg1, arg2);
                rdx_1 = rax;
                
                if (_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_b0, &var_70))
                    goto label_505b3e;
            }
        }
        else if (!((rdx_1 ^ 1) | !rcx | r15))
            goto label_505afe;
    }
    
    return 0;
}
