
  int64_t uu_mv::rename_file_fallback::hf572c573f0edc49f(int64_t arg1, int64_t arg2, char* arg3, uint64_t arg4)

{
    int64_t var_60 = arg1;
    int64_t var_58 = arg2;
    char* var_50 = arg3;
    uint64_t var_48 = arg4;
    
    if (std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4))
    {
        int64_t rax_1 = std::fs::remove_file::hcda18fb70e9be9e2(arg3);
        char* var_40 = arg3;
        uint64_t var_38_1 = arg4;
        int64_t var_30_1 = arg1;
        int64_t var_28_1 = arg2;
        
        if (rax_1)
            return uu_mv::rename_file_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h6a325a2489558ace(
                &var_40, rax_1);
    }
    
    char rax_3;
    int64_t rdx_1;
    rax_3 = std::fs::copy::hde78b31b31968bf9(arg1, arg2, arg3);
    
    if (rax_3 & 1)
        return rdx_1;
    
    int64_t rax_2 = uucore::features::fsxattr::copy_xattrs::h8f8abeea335a41ae(&var_60, &var_50);
    
    if (rax_2)
        return rax_2;
    
    return std::fs::remove_file::hcda18fb70e9be9e2(arg1);
}
