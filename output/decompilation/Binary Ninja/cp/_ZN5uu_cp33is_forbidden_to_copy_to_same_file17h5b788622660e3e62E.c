
  uint64_t uu_cp::is_forbidden_to_copy_to_same_file::h5b788622660e3e62(char* arg1, uint64_t arg2, char* arg3, uint64_t arg4, void* arg5, char arg6)

{
    char rax = std::path::Path::is_symlink::h004cfac91d04dbc0(arg1, arg2);
    char rax_1 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4);
    char rbx = *(arg5 + 0x59);
    char rcx = 1;
    
    if (!rbx && (!arg6 || !*(arg5 + 0x58)))
        rcx = (rax & rax_1) ^ 1;
    
    if (uucore::features::fs::paths_refer_to_same_file::h63765c86a5a0b9e6(arg1, arg2, arg3, arg4, 
        rcx))
    {
        char rcx_2 = rax_1;
        
        if (!*(arg5 + 0x65))
        {
            label_4a2778:
            uint64_t result = *(arg5 + 0x67);
            
            if (result)
            {
                if (result != 1)
                {
                    if (!(rax & rcx_2))
                    {
                        result = 1;
                        return result;
                    }
                    
                    int64_t rax_7;
                    uint64_t rdx_3;
                    rax_7 = std::path::Path::file_name::h6d40d88bf3fb287a(arg1, arg2);
                    int64_t rdx_4;
                    result = std::path::Path::file_name::h6d40d88bf3fb287a(arg3, arg4);
                    
                    if (!rax_7)
                    {
                        result = !result;
                        result |= rbx;
                        
                        if (result)
                        {
                            result = 1;
                            return result;
                        }
                    }
                    else if (result)
                    {
                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rax_7, rdx_3, result, rdx_4) | rbx;
                        
                        if (result)
                        {
                            result = 1;
                            return result;
                        }
                    }
                    else if (rbx)
                    {
                        result = 1;
                        return result;
                    }
                }
                else if (!rcx_2)
                {
                    result = 1;
                    return result;
                }
            }
        }
        else if (*(arg5 + 0x55) | *(arg5 + 0x54))
        {
            if (!rax)
            {
                if (!rcx_2)
                {
                    void var_b0;
                    std::path::Path::components::hd0346d362206f2e9(&var_b0, arg3, arg4);
                    void var_70;
                    std::path::Path::components::hd0346d362206f2e9(&var_70, arg1, arg2);
                    rcx_2 = rax_1;
                    
                    if (_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&var_b0, &var_70))
                        goto label_4a2778;
                }
            }
            else if (!((rbx ^ 1) | rcx_2))
                goto label_4a2778;
        }
        else if (!(((rax & rbx) ^ 1) | rcx_2))
            goto label_4a2778;
    }
    
    return 0;
}
