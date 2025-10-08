
  void** uu_mv::rename_symlink_fallback::ha200893b0eeac7ae(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_50;
    std::fs::read_link::h81077e8e2388a5a1(&var_50, arg1);
    int64_t rcx_1 = var_50;
    void** result_1;
    void** result = result_1;
    
    if (-(rcx_1) != -0x8000000000000000)
    {
        int64_t var_38 = rcx_1;
        void** result_2 = result;
        int64_t var_40;
        int64_t var_28_1 = var_40;
        result = std::os::unix::fs::symlink::h25187c442fd48e77(&var_38, arg3);
        
        if (!result)
            /* tailcall */
            return std::fs::remove_file::hcda18fb70e9be9e2(arg1);
    }
    
    return result;
}
